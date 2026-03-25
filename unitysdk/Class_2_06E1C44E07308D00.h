#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_06E1C44E07308D00_Struct_2_99A4D6E1A7C62876.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/Struct_2_3A335394524C9E44.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/System/Decimal.h"

class Class_1_1EDFFB645AFD9A3E;
class Class_1_801E2EA5758B8308;
class Class_1_86B4CACC0974BF85;
class Class_1_F3B75234FA5E566C;
class Class_2_06E1C44E07308D00_Class_1_29E9FA788D30624A;
class Class_2_98C553BBF0666C0F;
class Class_2_FDE932543F78327B;
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBeforeAddModifier; }
namespace RPG::GameCore { class LevelRemoveModifier; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define CLASS_2_06E1C44E07308D00_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x117CD140)
#define CLASS_2_06E1C44E07308D00_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x117CD700)
#define CLASS_2_06E1C44E07308D00_METHOD_2_00A55C75739DC93F_OFFSET UNITYSDK_OFFSET(0x117CA0B0)
#define CLASS_2_06E1C44E07308D00_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x117C7850)
#define CLASS_2_06E1C44E07308D00_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x117C7D30)
#define CLASS_2_06E1C44E07308D00_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x117CC3F0)
#define CLASS_2_06E1C44E07308D00_METHOD_2_2B66EDCEB1E8731D_OFFSET UNITYSDK_OFFSET(0x117C8BC0)
#define CLASS_2_06E1C44E07308D00_METHOD_2_2D8D297A9EEF51AC_OFFSET UNITYSDK_OFFSET(0x117C7F50)
#define CLASS_2_06E1C44E07308D00_METHOD_2_40AF574CD5336697_OFFSET UNITYSDK_OFFSET(0x117CA290)
#define CLASS_2_06E1C44E07308D00_METHOD_2_463AC79CFFAA4A36_OFFSET UNITYSDK_OFFSET(0x117C9DB0)
#define CLASS_2_06E1C44E07308D00_METHOD_2_4D606E0EBD8E195C_OFFSET UNITYSDK_OFFSET(0x117C9710)
#define CLASS_2_06E1C44E07308D00_METHOD_2_4E019631CAEE226E_OFFSET UNITYSDK_OFFSET(0x117C9F60)
#define CLASS_2_06E1C44E07308D00_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x117CC850)
#define CLASS_2_06E1C44E07308D00_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x117CE2F0)
#define CLASS_2_06E1C44E07308D00_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x117CE230)
#define CLASS_2_06E1C44E07308D00_METHOD_2_60572033EEFF5FAF_OFFSET UNITYSDK_OFFSET(0x117C8B00)
#define CLASS_2_06E1C44E07308D00_METHOD_2_6371A0A5D32EAFA5_OFFSET UNITYSDK_OFFSET(0x117C8740)
#define CLASS_2_06E1C44E07308D00_METHOD_2_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x117CC620)
#define CLASS_2_06E1C44E07308D00_METHOD_2_7117EE7AE8C84DE2_OFFSET UNITYSDK_OFFSET(0x117CBF80)
#define CLASS_2_06E1C44E07308D00_METHOD_2_77109E5FB0A804AD_OFFSET UNITYSDK_OFFSET(0x117C8130)
#define CLASS_2_06E1C44E07308D00_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x117CA590)
#define CLASS_2_06E1C44E07308D00_METHOD_2_81DD6758B395F556_OFFSET UNITYSDK_OFFSET(0x117CC4E0)
#define CLASS_2_06E1C44E07308D00_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x117CC450)
#define CLASS_2_06E1C44E07308D00_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x117C7C30)
#define CLASS_2_06E1C44E07308D00_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x117CC9F0)
#define CLASS_2_06E1C44E07308D00_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x117CCAB0)
#define CLASS_2_06E1C44E07308D00_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x117CCB10)
#define CLASS_2_06E1C44E07308D00_METHOD_2_A27D06F9481FAFDB_4_OFFSET UNITYSDK_OFFSET(0x117CCB70)
#define CLASS_2_06E1C44E07308D00_METHOD_2_A27D06F9481FAFDB_5_OFFSET UNITYSDK_OFFSET(0x117CCC70)
#define CLASS_2_06E1C44E07308D00_METHOD_2_A27D06F9481FAFDB_6_OFFSET UNITYSDK_OFFSET(0x117CCF60)
#define CLASS_2_06E1C44E07308D00_METHOD_2_A27D06F9481FAFDB_7_OFFSET UNITYSDK_OFFSET(0x117CD020)
#define CLASS_2_06E1C44E07308D00_METHOD_2_A27D06F9481FAFDB_8_OFFSET UNITYSDK_OFFSET(0x117CD0E0)
#define CLASS_2_06E1C44E07308D00_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x117CC930)
#define CLASS_2_06E1C44E07308D00_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x117C9660)
#define CLASS_2_06E1C44E07308D00_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x117C9550)
#define CLASS_2_06E1C44E07308D00_METHOD_2_B1F851579F018C59_OFFSET UNITYSDK_OFFSET(0x117C8FC0)
#define CLASS_2_06E1C44E07308D00_METHOD_2_B474972070FF0A50_OFFSET UNITYSDK_OFFSET(0x117C92D0)
#define CLASS_2_06E1C44E07308D00_METHOD_2_BD2DAE0E0D3C36DD_OFFSET UNITYSDK_OFFSET(0x117C87A0)
#define CLASS_2_06E1C44E07308D00_METHOD_2_C4D30852B80184B3_OFFSET UNITYSDK_OFFSET(0x117C98A0)
#define CLASS_2_06E1C44E07308D00_METHOD_2_C651615F7082CD33_OFFSET UNITYSDK_OFFSET(0x117CBCB0)
#define CLASS_2_06E1C44E07308D00_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x117C7D90)
#define CLASS_2_06E1C44E07308D00_METHOD_2_CC8D7EAC04528FA1_OFFSET UNITYSDK_OFFSET(0x117CA610)
#define CLASS_2_06E1C44E07308D00_METHOD_2_CE3A68B87710EC47_OFFSET UNITYSDK_OFFSET(0x117CB9F0)
#define CLASS_2_06E1C44E07308D00_METHOD_2_D0F44F67777F606F_OFFSET UNITYSDK_OFFSET(0x117C8290)
#define CLASS_2_06E1C44E07308D00_METHOD_2_D45A5838FA5962D6_OFFSET UNITYSDK_OFFSET(0x117C8540)
#define CLASS_2_06E1C44E07308D00_METHOD_2_DF408D262C86611D_OFFSET UNITYSDK_OFFSET(0x117C9600)
#define CLASS_2_06E1C44E07308D00_METHOD_2_E8198DA52F4317CD_OFFSET UNITYSDK_OFFSET(0x117CA390)
#define CLASS_2_06E1C44E07308D00_METHOD_2_EF00FDB1983C777E_OFFSET UNITYSDK_OFFSET(0x117CB2F0)
#define CLASS_2_06E1C44E07308D00_METHOD_2_EF136117B229B9B6_OFFSET UNITYSDK_OFFSET(0x117CC730)
#define CLASS_2_06E1C44E07308D00_METHOD_2_F00FC502F7150C33_OFFSET UNITYSDK_OFFSET(0x117C9170)
#define CLASS_2_06E1C44E07308D00_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x117CCEA0)
#define CLASS_2_06E1C44E07308D00_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x117CCD90)
#define CLASS_2_06E1C44E07308D00_METHOD_2_F69C03B98D564348_OFFSET UNITYSDK_OFFSET(0x117C9C20)
#define CLASS_2_06E1C44E07308D00_METHOD_2_FDD86D7210EB3908_OFFSET UNITYSDK_OFFSET(0x117C8CE0)
#define CLASS_2_06E1C44E07308D00_METHOD_2_FE7490124188D80D_OFFSET UNITYSDK_OFFSET(0x117C9D00)
#define CLASS_2_06E1C44E07308D00_METHOD_2_FF60829979F9A350_OFFSET UNITYSDK_OFFSET(0x117CC550)
#define CLASS_2_06E1C44E07308D00__CTOR_OFFSET UNITYSDK_OFFSET(0x117CDC80)
#define CLASS_2_06E1C44E07308D00__ONBIND_OFFSET UNITYSDK_OFFSET(0x117C7A60)
#define CLASS_2_06E1C44E07308D00__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x117C7E10)
#define CLASS_2_06E1C44E07308D00__ONTICK_OFFSET UNITYSDK_OFFSET(0x117C7EC0)
#define CLASS_2_06E1C44E07308D00___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x117CE420)
#define CLASS_2_06E1C44E07308D00___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x117CE480)
#define CLASS_2_06E1C44E07308D00___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x117CE290)
#define CLASS_2_06E1C44E07308D00___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x117CE350)
#define CLASS_2_06E1C44E07308D00___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x117CE3B0)

inline static constexpr unsigned int Class_2_06E1C44E07308D00_TypeDefinitionIndex = 58659;

class Class_2_06E1C44E07308D00 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_6 = 0x14; // 0x0
	// static const ::System::Int32 Field_2_7 = 0x2; // 0x0
	// static const ::System::Single Field_2_8; // 0x0
	// static const ::System::String* Field_2_21; // 0x0
	// static const ::System::String* Field_2_22; // 0x0
	// static const ::System::String* Field_2_23; // 0x0
	// static const ::System::String* Field_2_24; // 0x0
	// static const ::System::String* Field_2_25; // 0x0
	::System::Collections::Generic::List_1<::Class_2_06E1C44E07308D00_Struct_2_99A4D6E1A7C62876>* Field_2_3; // 0x60
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_17; // 0x68
	::Class_1_F3B75234FA5E566C* Field_2_0; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_2_10; // 0x78
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::String*>* Field_2_18; // 0x80
	::System::Collections::Generic::List_1<::Class_2_06E1C44E07308D00_Struct_2_99A4D6E1A7C62876>* Field_2_4; // 0x88
	::Class_1_1EDFFB645AFD9A3E* Field_2_16; // 0x90
	::Class_2_98C553BBF0666C0F* Field_2_5; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_2_11; // 0xA0
	::UnityEngine::Material* Field_2_12; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_06E1C44E07308D00_Class_1_29E9FA788D30624A*>* Field_2_1; // 0xB0
	::RPG::GameCore::BattleInstance* Field_2_15; // 0xB8
	::RPG::GameCore::EntityManager* Field_2_14; // 0xC0
	::UnityEngine::Material* Field_2_13; // 0xC8
	::System::Collections::Generic::List_1<::Class_2_06E1C44E07308D00_Struct_2_99A4D6E1A7C62876>* Field_2_2; // 0xD0
	::System::Boolean Field_2_19; // 0xD8
	::System::Single Field_2_9; // 0xDC
	::RPG::Client::TextID Field_2_20; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00__ONDISPOSE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D45A5838FA5962D6(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_D45A5838FA5962D6_OFFSET))(this, a1);
	}

	::Class_2_06E1C44E07308D00_Struct_2_99A4D6E1A7C62876 Method_2_BD2DAE0E0D3C36DD(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::Class_2_06E1C44E07308D00_Struct_2_99A4D6E1A7C62876(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_BD2DAE0E0D3C36DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDD86D7210EB3908(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_FDD86D7210EB3908_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1F851579F018C59(::RPG::GameCore::LevelBeforeAddModifier* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBeforeAddModifier*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_B1F851579F018C59_OFFSET))(this, a1);
	}

	::System::Void Method_2_B474972070FF0A50(::RPG::GameCore::LevelRemoveModifier* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRemoveModifier*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_B474972070FF0A50_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_2_4D606E0EBD8E195C(::Class_1_801E2EA5758B8308* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_801E2EA5758B8308*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_4D606E0EBD8E195C_OFFSET))(this, a1);
	}

	::System::Void Method_2_C4D30852B80184B3(::Class_1_86B4CACC0974BF85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86B4CACC0974BF85*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_C4D30852B80184B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F69C03B98D564348(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_F69C03B98D564348_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE7490124188D80D(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_FE7490124188D80D_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_6371A0A5D32EAFA5(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_6371A0A5D32EAFA5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F00FC502F7150C33(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_F00FC502F7150C33_OFFSET))(this, a1);
	}

	::RPG::Client::UIFloatingTextType Method_2_2B66EDCEB1E8731D(::Struct_2_5909FD7779934CCA a1, ::RPG::GameCore::AttackType a2)
	{
		return ((::RPG::Client::UIFloatingTextType(*)(::PVOID, ::Struct_2_5909FD7779934CCA, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_2B66EDCEB1E8731D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_60572033EEFF5FAF(::Class_2_06E1C44E07308D00_Struct_2_99A4D6E1A7C62876& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_06E1C44E07308D00_Struct_2_99A4D6E1A7C62876&))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_60572033EEFF5FAF_OFFSET))(this, a1);
	}

	::System::Void Method_2_2D8D297A9EEF51AC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_2D8D297A9EEF51AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_77109E5FB0A804AD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_77109E5FB0A804AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0F44F67777F606F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_D0F44F67777F606F_OFFSET))(this, a1);
	}

	::System::Void Method_2_00A55C75739DC93F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_00A55C75739DC93F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_40AF574CD5336697(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_40AF574CD5336697_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_2_4E019631CAEE226E(::Class_2_FDE932543F78327B* a1, ::Class_2_06E1C44E07308D00_Struct_2_99A4D6E1A7C62876& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FDE932543F78327B*, ::Class_2_06E1C44E07308D00_Struct_2_99A4D6E1A7C62876&))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_4E019631CAEE226E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CC8D7EAC04528FA1(::Class_2_FDE932543F78327B* a1, ::RPG::GameCore::GameEntity* a2, ::System::Decimal a3, ::RPG::Client::UIFloatingTextType a4, ::Struct_2_5909FD7779934CCA a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FDE932543F78327B*, ::RPG::GameCore::GameEntity*, ::System::Decimal, ::RPG::Client::UIFloatingTextType, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_CC8D7EAC04528FA1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_EF00FDB1983C777E(::Class_2_FDE932543F78327B* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::UIFloatingTextType a3, ::RPG::Client::TextID a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FDE932543F78327B*, ::RPG::GameCore::GameEntity*, ::RPG::Client::UIFloatingTextType, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_EF00FDB1983C777E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_DF408D262C86611D(::RPG::GameCore::TeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_DF408D262C86611D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE3A68B87710EC47(::Class_2_FDE932543F78327B* a1, ::RPG::GameCore::GameEntity* a2, ::Struct_2_3A335394524C9E44 a3, ::Struct_2_5909FD7779934CCA a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FDE932543F78327B*, ::RPG::GameCore::GameEntity*, ::Struct_2_3A335394524C9E44, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_CE3A68B87710EC47_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_FDE932543F78327B* Method_2_463AC79CFFAA4A36(::Class_2_06E1C44E07308D00_Struct_2_99A4D6E1A7C62876& a1, ::System::Boolean a2)
	{
		return ((::Class_2_FDE932543F78327B*(*)(::PVOID, ::Class_2_06E1C44E07308D00_Struct_2_99A4D6E1A7C62876&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_463AC79CFFAA4A36_OFFSET))(this, a1, a2);
	}

	::Class_2_FDE932543F78327B* Method_2_E8198DA52F4317CD(::System::Boolean a1)
	{
		return ((::Class_2_FDE932543F78327B*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_E8198DA52F4317CD_OFFSET))(this, a1);
	}

	::System::Void Method_2_C651615F7082CD33(::Class_2_FDE932543F78327B* a1, ::RPG::GameCore::AttackType a2, ::RPG::GameCore::AttackDamageType a3, ::Struct_2_3A335394524C9E44 a4, ::RPG::Client::UIFloatingTextType a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FDE932543F78327B*, ::RPG::GameCore::AttackType, ::RPG::GameCore::AttackDamageType, ::Struct_2_3A335394524C9E44, ::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_C651615F7082CD33_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::String* Method_2_81DD6758B395F556(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_81DD6758B395F556_OFFSET))(this, a1);
	}

	::System::String* Method_2_FF60829979F9A350(::Struct_2_3A335394524C9E44 a1)
	{
		return ((::System::String*(*)(::PVOID, ::Struct_2_3A335394524C9E44))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_FF60829979F9A350_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::Class_2_06E1C44E07308D00_Class_1_29E9FA788D30624A* Method_2_7117EE7AE8C84DE2(::System::UInt32 a1)
	{
		return ((::Class_2_06E1C44E07308D00_Class_1_29E9FA788D30624A*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_7117EE7AE8C84DE2_OFFSET))(this, a1);
	}

	::System::Void Method_2_EF136117B229B9B6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_EF136117B229B9B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_A27D06F9481FAFDB_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_A27D06F9481FAFDB_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_A27D06F9481FAFDB_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_A27D06F9481FAFDB_7_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_A27D06F9481FAFDB_8_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
