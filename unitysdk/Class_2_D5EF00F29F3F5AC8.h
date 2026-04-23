#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_D5EF00F29F3F5AC8_Struct_2_99A4D6E1A7C62876.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/Struct_2_3A335394524C9E44.h"
#include "unitysdk/System/Decimal.h"

class Class_0_16E4307DCC419505_382;
class Class_1_1EDFFB645AFD9A3E;
class Class_1_801E2EA5758B8308;
class Class_1_86B4CACC0974BF85;
class Class_1_8EE3C62E3E585A89;
class Class_1_A58651510BF6ACD7;
class Class_2_1E4ED478CC18793B;
class Class_2_32ECE6AF815EB6B7;
class Class_2_73E06C253DAFCC33;
class Class_2_98C553BBF0666C0F;
class Class_2_D5EF00F29F3F5AC8_Class_1_29E9FA788D30624A_1;
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtDamageTextConfigGroup; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define CLASS_2_D5EF00F29F3F5AC8_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1249F7A0)
#define CLASS_2_D5EF00F29F3F5AC8_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1249FB80)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_00A55C75739DC93F_OFFSET UNITYSDK_OFFSET(0x1249D510)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1249CBE0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_222D925D0FE12F18_OFFSET UNITYSDK_OFFSET(0x1249E7C0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_33C15B846C629D11_OFFSET UNITYSDK_OFFSET(0x1249C220)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1249EE60)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_3B5C6D652C514B37_OFFSET UNITYSDK_OFFSET(0x1249BEE0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x1249B030)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_3E9101720905D9AB_OFFSET UNITYSDK_OFFSET(0x1249ACA0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_40AF574CD5336697_OFFSET UNITYSDK_OFFSET(0x1249D6F0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_426202FF040835DA_OFFSET UNITYSDK_OFFSET(0x1249C710)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1249B3E0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_463AC79CFFAA4A36_OFFSET UNITYSDK_OFFSET(0x1249D1D0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_4D606E0EBD8E195C_OFFSET UNITYSDK_OFFSET(0x1249C9A0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_4DC444B19B73FEF1_OFFSET UNITYSDK_OFFSET(0x1249D790)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x124A0630)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x124A0570)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_6240D6A70F158712_OFFSET UNITYSDK_OFFSET(0x1249F100)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_6371A0A5D32EAFA5_OFFSET UNITYSDK_OFFSET(0x1249AC40)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x1249F050)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_73DD48D58191807C_OFFSET UNITYSDK_OFFSET(0x1249AE70)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_795EDD42A08DC35D_OFFSET UNITYSDK_OFFSET(0x1249E550)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x1249DA30)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_81DD6758B395F556_OFFSET UNITYSDK_OFFSET(0x1249EF10)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1249EEB0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_89AE3FDE25BEC3FA_OFFSET UNITYSDK_OFFSET(0x1249AED0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_A0374C870A27A45B_OFFSET UNITYSDK_OFFSET(0x1249C2E0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x1249F520)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x1249F5C0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x1249F680)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_A27D06F9481FAFDB_4_OFFSET UNITYSDK_OFFSET(0x1249F740)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x1249F4C0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_A8082DFFC6DD735D_OFFSET UNITYSDK_OFFSET(0x1249BFB0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_B8FF06DE21142C2B_OFFSET UNITYSDK_OFFSET(0x1249AF20)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_BC0FA8C838B766A1_OFFSET UNITYSDK_OFFSET(0x1249BA10)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_C187F11607643D3C_OFFSET UNITYSDK_OFFSET(0x1249B820)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_C4D30852B80184B3_OFFSET UNITYSDK_OFFSET(0x1249CCC0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_C67AC7450471056B_OFFSET UNITYSDK_OFFSET(0x1249D380)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1249B540)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_CB147E319ADED195_OFFSET UNITYSDK_OFFSET(0x1249EAD0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_D0FDCCE1A8C0E964_OFFSET UNITYSDK_OFFSET(0x1249E740)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_DACB8AFC6C8B2A13_OFFSET UNITYSDK_OFFSET(0x1249DAB0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_DF408D262C86611D_OFFSET UNITYSDK_OFFSET(0x1249EC60)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x1249B490)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_E525EF1CE76FD599_OFFSET UNITYSDK_OFFSET(0x1249ECC0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_EF00FDB1983C777E_OFFSET UNITYSDK_OFFSET(0x1249E190)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x1249F2C0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x1249F3B0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1249F1D0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_F69C03B98D564348_OFFSET UNITYSDK_OFFSET(0x1249D040)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_FC1A7D63B49E1C58_OFFSET UNITYSDK_OFFSET(0x1249BBB0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_FE7490124188D80D_OFFSET UNITYSDK_OFFSET(0x1249D120)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_FF203A86B5866E4A_OFFSET UNITYSDK_OFFSET(0x1249C4C0)
#define CLASS_2_D5EF00F29F3F5AC8_METHOD_2_FF60829979F9A350_OFFSET UNITYSDK_OFFSET(0x1249EF80)
#define CLASS_2_D5EF00F29F3F5AC8__CCTOR_OFFSET UNITYSDK_OFFSET(0x124A0530)
#define CLASS_2_D5EF00F29F3F5AC8__CTOR_OFFSET UNITYSDK_OFFSET(0x1249FF20)
#define CLASS_2_D5EF00F29F3F5AC8__ONBIND_OFFSET UNITYSDK_OFFSET(0x1249B310)
#define CLASS_2_D5EF00F29F3F5AC8__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1249B5C0)
#define CLASS_2_D5EF00F29F3F5AC8__ONTICK_OFFSET UNITYSDK_OFFSET(0x1249B790)
#define CLASS_2_D5EF00F29F3F5AC8___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x124A0760)
#define CLASS_2_D5EF00F29F3F5AC8___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x124A07C0)
#define CLASS_2_D5EF00F29F3F5AC8___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x124A05D0)
#define CLASS_2_D5EF00F29F3F5AC8___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x124A0690)
#define CLASS_2_D5EF00F29F3F5AC8___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x124A06F0)

inline static constexpr unsigned int Class_2_D5EF00F29F3F5AC8_TypeDefinitionIndex = 66091;

class Class_2_D5EF00F29F3F5AC8 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Int32* StaticGet_Field_2_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D5EF00F29F3F5AC8_TypeDefinitionIndex)->GetStaticField(0xF630);
	}
	// static const ::System::Int32 Field_2_7 = 0x14; // 0x0
	// static const ::System::Int32 Field_2_8 = 0x2; // 0x0
	// static const ::System::Single Field_2_9; // 0x0
	// static const ::System::String* Field_2_22; // 0x0
	// static const ::System::String* Field_2_23; // 0x0
	// static const ::System::String* Field_2_24; // 0x0
	// static const ::System::String* Field_2_25; // 0x0
	// static const ::System::String* Field_2_26; // 0x0
	::UnityEngine::Material* Field_2_13; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_D5EF00F29F3F5AC8_Class_1_29E9FA788D30624A_1*>* Field_2_2; // 0x68
	::Class_1_8EE3C62E3E585A89* Field_2_1; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_2_11; // 0x78
	::RPG::GameCore::EntityManager* Field_2_16; // 0x80
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::String*>* Field_2_20; // 0x88
	::Class_1_1EDFFB645AFD9A3E* Field_2_17; // 0x90
	::Class_2_98C553BBF0666C0F* Field_2_6; // 0x98
	::System::Collections::Generic::List_1<::Class_2_D5EF00F29F3F5AC8_Struct_2_99A4D6E1A7C62876>* Field_2_4; // 0xA0
	::System::Collections::Generic::List_1<::Class_2_D5EF00F29F3F5AC8_Struct_2_99A4D6E1A7C62876>* Field_2_3; // 0xA8
	::System::Func_3<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtDamageTextConfigGroup*>* Field_2_0; // 0xB0
	::RPG::GameCore::GameWorld* Field_2_15; // 0xB8
	::UnityEngine::Material* Field_2_14; // 0xC0
	::System::Collections::Generic::List_1<::Class_2_D5EF00F29F3F5AC8_Struct_2_99A4D6E1A7C62876>* Field_2_5; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_2_12; // 0xD0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_18; // 0xD8
	::System::Single Field_2_10; // 0xE0
	::System::Boolean Field_2_21; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8__CCTOR_OFFSET))();
	}

	::RPG::GameCore::GameEntity* Method_2_6371A0A5D32EAFA5(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_6371A0A5D32EAFA5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_3E9101720905D9AB(::Class_1_A58651510BF6ACD7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A58651510BF6ACD7*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_3E9101720905D9AB_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_73DD48D58191807C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_73DD48D58191807C_OFFSET))(a1);
	}

	::System::Boolean Method_2_89AE3FDE25BEC3FA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_89AE3FDE25BEC3FA_OFFSET))(this, a1);
	}

	::RPG::Client::UIFloatingTextType Method_2_B8FF06DE21142C2B(::Class_1_A58651510BF6ACD7* a1, ::RPG::GameCore::AttackType a2)
	{
		return ((::RPG::Client::UIFloatingTextType(*)(::PVOID, ::Class_1_A58651510BF6ACD7*, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_B8FF06DE21142C2B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8__ONDISPOSE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B5C6D652C514B37(::Class_1_A58651510BF6ACD7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A58651510BF6ACD7*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_3B5C6D652C514B37_OFFSET))(this, a1);
	}

	::Class_2_D5EF00F29F3F5AC8_Struct_2_99A4D6E1A7C62876 Method_2_A8082DFFC6DD735D(::Class_1_A58651510BF6ACD7* a1)
	{
		return ((::Class_2_D5EF00F29F3F5AC8_Struct_2_99A4D6E1A7C62876(*)(::PVOID, ::Class_1_A58651510BF6ACD7*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_A8082DFFC6DD735D_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0374C870A27A45B(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_A0374C870A27A45B_OFFSET))(this, a1);
	}

	::System::Void Method_2_FF203A86B5866E4A(::Class_2_1E4ED478CC18793B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1E4ED478CC18793B*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_FF203A86B5866E4A_OFFSET))(this, a1);
	}

	::System::Void Method_2_426202FF040835DA(::Class_2_32ECE6AF815EB6B7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_32ECE6AF815EB6B7*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_426202FF040835DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D606E0EBD8E195C(::Class_1_801E2EA5758B8308* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_801E2EA5758B8308*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_4D606E0EBD8E195C_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_C4D30852B80184B3(::Class_1_86B4CACC0974BF85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86B4CACC0974BF85*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_C4D30852B80184B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F69C03B98D564348(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_F69C03B98D564348_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE7490124188D80D(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_FE7490124188D80D_OFFSET))(this, a1);
	}

	::System::Void Method_2_33C15B846C629D11(::Class_2_D5EF00F29F3F5AC8_Struct_2_99A4D6E1A7C62876& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5EF00F29F3F5AC8_Struct_2_99A4D6E1A7C62876&))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_33C15B846C629D11_OFFSET))(this, a1);
	}

	::System::Void Method_2_C187F11607643D3C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_C187F11607643D3C_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC0FA8C838B766A1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_BC0FA8C838B766A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC1A7D63B49E1C58(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_FC1A7D63B49E1C58_OFFSET))(this, a1);
	}

	::System::Void Method_2_00A55C75739DC93F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_00A55C75739DC93F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_40AF574CD5336697(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_40AF574CD5336697_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_2_C67AC7450471056B(::Class_2_73E06C253DAFCC33* a1, ::Class_2_D5EF00F29F3F5AC8_Struct_2_99A4D6E1A7C62876& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_73E06C253DAFCC33*, ::Class_2_D5EF00F29F3F5AC8_Struct_2_99A4D6E1A7C62876&))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_C67AC7450471056B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DACB8AFC6C8B2A13(::Class_2_73E06C253DAFCC33* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::Decimal a4, ::RPG::Client::UIFloatingTextType a5, ::Struct_2_3A335394524C9E44 a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_73E06C253DAFCC33*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Decimal, ::RPG::Client::UIFloatingTextType, ::Struct_2_3A335394524C9E44))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_DACB8AFC6C8B2A13_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_EF00FDB1983C777E(::Class_2_73E06C253DAFCC33* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::UIFloatingTextType a3, ::RPG::Client::TextID a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_73E06C253DAFCC33*, ::RPG::GameCore::GameEntity*, ::RPG::Client::UIFloatingTextType, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_EF00FDB1983C777E_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::GameObject* Method_2_CB147E319ADED195(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_CB147E319ADED195_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DF408D262C86611D(::RPG::GameCore::TeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_DF408D262C86611D_OFFSET))(this, a1);
	}

	::System::Void Method_2_795EDD42A08DC35D(::Class_2_73E06C253DAFCC33* a1, ::RPG::GameCore::GameEntity* a2, ::Struct_2_3A335394524C9E44 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_73E06C253DAFCC33*, ::RPG::GameCore::GameEntity*, ::Struct_2_3A335394524C9E44))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_795EDD42A08DC35D_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_73E06C253DAFCC33* Method_2_463AC79CFFAA4A36(::Class_2_D5EF00F29F3F5AC8_Struct_2_99A4D6E1A7C62876& a1, ::System::Boolean a2)
	{
		return ((::Class_2_73E06C253DAFCC33*(*)(::PVOID, ::Class_2_D5EF00F29F3F5AC8_Struct_2_99A4D6E1A7C62876&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_463AC79CFFAA4A36_OFFSET))(this, a1, a2);
	}

	::Class_2_73E06C253DAFCC33* Method_2_4DC444B19B73FEF1(::System::Boolean a1)
	{
		return ((::Class_2_73E06C253DAFCC33*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_4DC444B19B73FEF1_OFFSET))(this, a1);
	}

	::System::Void Method_2_222D925D0FE12F18(::Class_2_73E06C253DAFCC33* a1, ::RPG::GameCore::AttackType a2, ::RPG::GameCore::AttackDamageType a3, ::Struct_2_3A335394524C9E44 a4, ::RPG::Client::UIFloatingTextType a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_73E06C253DAFCC33*, ::RPG::GameCore::AttackType, ::RPG::GameCore::AttackDamageType, ::Struct_2_3A335394524C9E44, ::RPG::Client::UIFloatingTextType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_222D925D0FE12F18_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* Method_2_81DD6758B395F556(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_81DD6758B395F556_OFFSET))(this, a1);
	}

	::System::String* Method_2_FF60829979F9A350(::Struct_2_3A335394524C9E44 a1)
	{
		return ((::System::String*(*)(::PVOID, ::Struct_2_3A335394524C9E44))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_FF60829979F9A350_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::Class_2_D5EF00F29F3F5AC8_Class_1_29E9FA788D30624A_1* Method_2_E525EF1CE76FD599(::System::UInt32 a1)
	{
		return ((::Class_2_D5EF00F29F3F5AC8_Class_1_29E9FA788D30624A_1*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_E525EF1CE76FD599_OFFSET))(this, a1);
	}

	::System::Void Method_2_6240D6A70F158712(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_6240D6A70F158712_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::RPG::GameCore::RtDamageTextConfigGroup* Method_2_D0FDCCE1A8C0E964(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::RPG::GameCore::RtDamageTextConfigGroup*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_D0FDCCE1A8C0E964_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_A27D06F9481FAFDB_4_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
