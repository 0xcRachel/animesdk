#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_3E28D6CB7A8C3FEF_AddScoreStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/RPG/GameCore/ScoringShowType.h"

class Class_1_B4848704CE0ACF67;
class Class_2_DEB067F815EC1625;
class Class_2_E5E41715B766E89C;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleScoringChangeParams; }
namespace RPG::GameCore { class BattleTargetChangeParams; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_3E28D6CB7A8C3FEF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x876A6B0)
#define CLASS_2_3E28D6CB7A8C3FEF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x876A9C0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x8768BD0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x87698B0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_1C1BE26908999AAB_OFFSET UNITYSDK_OFFSET(0x8769190)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_2461C65E55CF590F_OFFSET UNITYSDK_OFFSET(0x876ADE0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x8768E50)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_29FD77BB738B9AAC_OFFSET UNITYSDK_OFFSET(0x8769AD0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x8769990)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_3C98CA656474384D_OFFSET UNITYSDK_OFFSET(0x8767650)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x87678A0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x8767D30)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x8769520)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_760FD1B4F7D8B904_OFFSET UNITYSDK_OFFSET(0x8769200)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_78E5D10876D30BCC_OFFSET UNITYSDK_OFFSET(0x8768B20)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_7DFC4B17ACBC8649_OFFSET UNITYSDK_OFFSET(0x8769650)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_8B2D6636BADD098E_OFFSET UNITYSDK_OFFSET(0x87696A0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_9DEB8DAD24825226_OFFSET UNITYSDK_OFFSET(0x8769CF0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x876A2B0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x876A600)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x876A1F0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x8767A40)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x8768CA0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_B9826750958CBF99_OFFSET UNITYSDK_OFFSET(0x8769260)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0x876A500)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C832A689ED924B93_OFFSET UNITYSDK_OFFSET(0x8769080)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C88366FE4C360154_OFFSET UNITYSDK_OFFSET(0x876A370)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x876AD60)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x876ADA0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8769A70)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_CB7604B59F367726_OFFSET UNITYSDK_OFFSET(0x8767CC0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x8767B80)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_E1749789441DFDE9_OFFSET UNITYSDK_OFFSET(0x8769D40)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x8768980)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x876A410)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F4F5C92AD8354C0C_OFFSET UNITYSDK_OFFSET(0x8769920)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F5710FBB9C77699E_OFFSET UNITYSDK_OFFSET(0x8768EF0)
#define CLASS_2_3E28D6CB7A8C3FEF__CCTOR_OFFSET UNITYSDK_OFFSET(0x876ACE0)
#define CLASS_2_3E28D6CB7A8C3FEF__CTOR_OFFSET UNITYSDK_OFFSET(0x876AC90)
#define CLASS_2_3E28D6CB7A8C3FEF__ONBIND_OFFSET UNITYSDK_OFFSET(0x8767320)
#define CLASS_2_3E28D6CB7A8C3FEF__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x8768E10)
#define CLASS_2_3E28D6CB7A8C3FEF__ONTICK_OFFSET UNITYSDK_OFFSET(0x8768C40)
#define CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x876AED0)
#define CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x876AF10)
#define CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x876AD20)
#define CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x876AE90)
#define CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x876AE30)

inline static constexpr unsigned int Class_2_3E28D6CB7A8C3FEF_TypeDefinitionIndex = 57236;

class Class_2_3E28D6CB7A8C3FEF : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::RPG::Client::TextID* StaticGet_Field_2_32()
	{
		return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E28D6CB7A8C3FEF_TypeDefinitionIndex)->GetStaticField(0xF2A0);
	}
	static ::RPG::GameCore::BattleScoringDisplayType* StaticGet_Field_2_33()
	{
		return (::RPG::GameCore::BattleScoringDisplayType*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E28D6CB7A8C3FEF_TypeDefinitionIndex)->GetStaticField(0xF2B0);
	}
	// static const ::System::String* Field_2_11; // 0x0
	// static const ::System::String* Field_2_26; // 0x0
	// static const ::System::String* Field_2_27; // 0x0
	// static const ::System::String* Field_2_28; // 0x0
	// static const ::System::String* Field_2_29; // 0x0
	// static const ::System::String* Field_2_30; // 0x0
	// static const ::System::Int32 Field_2_31 = 0x9; // 0x0
	::Il2CppArray<::Class_2_DEB067F815EC1625*>* Field_2_18; // 0x60
	::RPG::GameCore::LevelDataComponent* Field_2_13; // 0x68
	::UnityEngine::ParticleSystem* Field_2_9; // 0x70
	::UnityEngine::Transform* Field_2_6; // 0x78
	::UnityEngine::AnimationState* Field_2_15; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_E5E41715B766E89C*>*>* Field_2_25; // 0x88
	::UnityEngine::UI::Text* Field_2_0; // 0x90
	::UnityEngine::UI::Text* Field_2_1; // 0x98
	::UnityEngine::Transform* Field_2_8; // 0xA0
	::UnityEngine::Transform* Field_2_5; // 0xA8
	::UnityEngine::Transform* Field_2_4; // 0xB0
	::RPG::GameCore::BattleInstance* Field_2_12; // 0xB8
	::UnityEngine::Transform* Field_2_7; // 0xC0
	::RPG::GameCore::LevelUIComponent* Field_2_14; // 0xC8
	::UnityEngine::ParticleSystem* Field_2_10; // 0xD0
	::UnityEngine::Animation* Field_2_3; // 0xD8
	::UnityEngine::Animation* Field_2_2; // 0xE0
	::Class_2_3E28D6CB7A8C3FEF_AddScoreStatus Field_2_17; // 0xE8
	::RPG::GameCore::ScoringShowType Field_2_22; // 0xEC
	::System::Int32 Field_2_20; // 0xF0
	::System::Single Field_2_24; // 0xF4
	::System::Int32 Field_2_21; // 0xF8
	::System::Boolean Field_2_23; // 0xFC
	::System::Boolean Field_2_16; // 0xFD
	::System::Int32 Field_2_19; // 0x100

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_3C98CA656474384D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_3C98CA656474384D_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_2_78E5D10876D30BCC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_78E5D10876D30BCC_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5710FBB9C77699E(::RPG::GameCore::BattleScoringChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleScoringChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F5710FBB9C77699E_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C1BE26908999AAB(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_1C1BE26908999AAB_OFFSET))(this, a1);
	}

	::System::Void Method_2_760FD1B4F7D8B904()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_760FD1B4F7D8B904_OFFSET))(this);
	}

	::System::Void Method_2_70603E2AE56EBD6B(::Class_1_B4848704CE0ACF67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4848704CE0ACF67*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DFC4B17ACBC8649(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_7DFC4B17ACBC8649_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B2D6636BADD098E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_8B2D6636BADD098E_OFFSET))(this, a1);
	}

	::System::Void Method_2_C832A689ED924B93(::RPG::GameCore::BattleScoringChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleScoringChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C832A689ED924B93_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4F5C92AD8354C0C(::RPG::GameCore::ScoringShowType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScoringShowType))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F4F5C92AD8354C0C_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9826750958CBF99(::Class_2_3E28D6CB7A8C3FEF_AddScoreStatus a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3E28D6CB7A8C3FEF_AddScoreStatus, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_B9826750958CBF99_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_A5ADA4706DA592FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A5ADA4706DA592FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_CB7604B59F367726()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_CB7604B59F367726_OFFSET))(this);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_9DEB8DAD24825226(::RPG::GameCore::BattleTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_9DEB8DAD24825226_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1749789441DFDE9(::RPG::GameCore::BattleTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_E1749789441DFDE9_OFFSET))(this, a1);
	}

	::RPG::Client::TextID Method_2_29FD77BB738B9AAC()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_29FD77BB738B9AAC_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C88366FE4C360154(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C88366FE4C360154_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_2461C65E55CF590F(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_2461C65E55CF590F_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
