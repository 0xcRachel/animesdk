#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2DEC9C8F439E3FDC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TeamDataComponent; }
namespace RPG::GameCore { class TeamFormationComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_48FB41EE27FB816A_GET_CACHEBEYONDSELECTTARGETS_OFFSET UNITYSDK_OFFSET(0x85BFE10)
#define CLASS_1_48FB41EE27FB816A_GET_CACHECURRENTMERGEDTARGETS_OFFSET UNITYSDK_OFFSET(0x85BFE30)
#define CLASS_1_48FB41EE27FB816A_GET_CACHECURRENTSUBTARGETS_OFFSET UNITYSDK_OFFSET(0x85BFE00)
#define CLASS_1_48FB41EE27FB816A_GET_CACHECURRENTTARGETS_OFFSET UNITYSDK_OFFSET(0x85BFDF0)
#define CLASS_1_48FB41EE27FB816A_GET_CACHEFADETARGETS_OFFSET UNITYSDK_OFFSET(0x85BFE20)
#define CLASS_1_48FB41EE27FB816A_GET_DRAGPOINTDELTA_OFFSET UNITYSDK_OFFSET(0x85BFDD0)
#define CLASS_1_48FB41EE27FB816A_GET_ISSCREENPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x85BFDB0)
#define CLASS_1_48FB41EE27FB816A_GET__BACKROWBEYONDDARKTOLIGHTCACHELIST_OFFSET UNITYSDK_OFFSET(0x85BFE50)
#define CLASS_1_48FB41EE27FB816A_GET__BACKROWBEYONDLIGHTTODARKCACHELIST_OFFSET UNITYSDK_OFFSET(0x85BFE40)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_0280A99378C9A474_OFFSET UNITYSDK_OFFSET(0x85BB2D0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x85BC250)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_103732BACA813F2D_OFFSET UNITYSDK_OFFSET(0x85BD360)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_1228577BEED51E8E_OFFSET UNITYSDK_OFFSET(0x85BD280)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x85BF1D0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0x85BAE30)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0x85BB500)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_1C9A2E55F37625ED_OFFSET UNITYSDK_OFFSET(0x85BF150)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x85BF2D0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x85BE8E0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_457D576C0B25AE19_OFFSET UNITYSDK_OFFSET(0x85BD0F0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_4B694F4B9E7A931A_OFFSET UNITYSDK_OFFSET(0x85BBDB0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x85BCB20)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_52DA4589948A713E_OFFSET UNITYSDK_OFFSET(0x85BBFC0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_53609955CC0A3C53_OFFSET UNITYSDK_OFFSET(0x85BACD0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_56B2E27E517339A0_OFFSET UNITYSDK_OFFSET(0x85BB150)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x85BAD50)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_65C5D7F9BC8FA09D_1_OFFSET UNITYSDK_OFFSET(0x85BCCE0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_65C5D7F9BC8FA09D_OFFSET UNITYSDK_OFFSET(0x85BCC90)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_710A71A778A31FB8_OFFSET UNITYSDK_OFFSET(0x85BEB80)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_73281C4326FBC42D_OFFSET UNITYSDK_OFFSET(0x85BC1B0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_860D65C1404EBCB0_OFFSET UNITYSDK_OFFSET(0x85BC040)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x85BE190)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_8DEED24AAE482C0C_OFFSET UNITYSDK_OFFSET(0x85BCD30)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x85BAE90)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_9053F5697E2BEB5D_OFFSET UNITYSDK_OFFSET(0x85BC970)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_90C72C647D834AD6_OFFSET UNITYSDK_OFFSET(0x85BD940)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x85BD5C0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x85BC690)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_A6B0F2C779192279_OFFSET UNITYSDK_OFFSET(0x85BC8D0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_A7DA7E520D3F52A3_OFFSET UNITYSDK_OFFSET(0x85BB770)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x85BD550)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_B3BC933000085B6A_OFFSET UNITYSDK_OFFSET(0x85BB050)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x85BAF50)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x85BC4D0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_BB881F05E41D3A04_1_OFFSET UNITYSDK_OFFSET(0x85BBB40)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x85BC5A0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_C0F3C9D5BE2B07E6_OFFSET UNITYSDK_OFFSET(0x85BDCC0)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x85BCB70)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x85BBF70)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_D6EF48CA5D92AFCB_OFFSET UNITYSDK_OFFSET(0x85BEF00)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_E5AF195750C09845_OFFSET UNITYSDK_OFFSET(0x85BE740)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x85BF980)
#define CLASS_1_48FB41EE27FB816A_METHOD_1_F832F1B40E0A9A1D_OFFSET UNITYSDK_OFFSET(0x85BEDB0)
#define CLASS_1_48FB41EE27FB816A_SET_DRAGPOINTDELTA_OFFSET UNITYSDK_OFFSET(0x85BFDE0)
#define CLASS_1_48FB41EE27FB816A_SET_ISSCREENPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x85BFDC0)
#define CLASS_1_48FB41EE27FB816A__CTOR_OFFSET UNITYSDK_OFFSET(0x85BFE60)

inline static constexpr unsigned int Class_1_48FB41EE27FB816A_TypeDefinitionIndex = 57647;

class Class_1_48FB41EE27FB816A : public ::System::Object
{
public:
	// static const ::System::Single Field_1_28; // 0x0
	::System::Collections::Generic::List_1<::Struct_2_2DEC9C8F439E3FDC>* Field_1_21; // 0x10
	::RPG::GameCore::TeamDataComponent* Field_1_13; // 0x18
	::RPG::GameCore::TransformComponent* Field_1_14; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_20; // 0x28
	::RPG::GameCore::TurnBasedGameMode* Field_1_16; // 0x30
	::RPG::GameCore::SkillCharacterComponent* Field_1_15; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheCurrentSubTargets_k__BackingField; // 0x40
	::RPG::GameCore::LevelUIComponent* Field_1_9; // 0x48
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* __BackRowBeyondLightToDarkCacheList_k__BackingField; // 0x50
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_22; // 0x58
	::RPG::GameCore::SkillData* Field_1_17; // 0x60
	::RPG::GameCore::GameEntity* Field_1_19; // 0x68
	::RPG::GameCore::EntityManager* Field_1_11; // 0x70
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheBeyondSelectTargets_k__BackingField; // 0x78
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheFadeTargets_k__BackingField; // 0x80
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* __BackRowBeyondDarkToLightCacheList_k__BackingField; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* Field_1_24; // 0x90
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheCurrentMergedTargets_k__BackingField; // 0x98
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_23; // 0xA0
	::RPG::GameCore::SkillConfig* Field_1_18; // 0xA8
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheCurrentTargets_k__BackingField; // 0xB0
	::RPG::GameCore::TeamFormationComponent* Field_1_12; // 0xB8
	::RPG::GameCore::BattleInstance* Field_1_10; // 0xC0
	::System::Boolean _IsScreenPointerDown_k__BackingField; // 0xC8
	::System::Boolean Field_1_29; // 0xC9
	::System::Boolean Field_1_25; // 0xCA
	::System::Boolean Field_1_26; // 0xCB
	::System::Single _DragPointDelta_k__BackingField; // 0xCC
	::System::Single Field_1_27; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_53609955CC0A3C53(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_53609955CC0A3C53_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_18D9238B9C310BFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_18D9238B9C310BFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_B3BC933000085B6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_B3BC933000085B6A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_56B2E27E517339A0(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_56B2E27E517339A0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_860D65C1404EBCB0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_860D65C1404EBCB0_OFFSET))(this, a1);
	}

	::System::Void Method_1_52DA4589948A713E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_52DA4589948A713E_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_1_A6B0F2C779192279(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_A6B0F2C779192279_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_1_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_1_65C5D7F9BC8FA09D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_65C5D7F9BC8FA09D_OFFSET))(this, a1);
	}

	::System::Void Method_1_65C5D7F9BC8FA09D_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_65C5D7F9BC8FA09D_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_1_9053F5697E2BEB5D(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_9053F5697E2BEB5D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_1AD3CAF2B0982C3F_OFFSET))(this);
	}

	::System::Boolean Method_1_A7DA7E520D3F52A3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_A7DA7E520D3F52A3_OFFSET))(this);
	}

	::System::Void Method_1_BB881F05E41D3A04_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_BB881F05E41D3A04_1_OFFSET))(this);
	}

	::System::Boolean Method_1_8DEED24AAE482C0C(::RPG::GameCore::GameEntity* a1, ::System::Int32& a2, ::System::Int32& a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32&, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_8DEED24AAE482C0C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_457D576C0B25AE19(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_457D576C0B25AE19_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1228577BEED51E8E(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32& a5, ::System::Int32& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_1228577BEED51E8E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_103732BACA813F2D(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_103732BACA813F2D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_4B694F4B9E7A931A(::UnityEngine::Vector2 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_4B694F4B9E7A931A_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TeamFormationComponent* Method_1_0280A99378C9A474()
	{
		return ((::RPG::GameCore::TeamFormationComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_0280A99378C9A474_OFFSET))(this);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_73281C4326FBC42D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_73281C4326FBC42D_OFFSET))(this, a1);
	}

	::System::Void Method_1_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_1_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_4389275F4099DE36_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_90C72C647D834AD6(::System::Boolean a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_90C72C647D834AD6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_710A71A778A31FB8(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_710A71A778A31FB8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F832F1B40E0A9A1D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_F832F1B40E0A9A1D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C0F3C9D5BE2B07E6(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_C0F3C9D5BE2B07E6_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_1_1C9A2E55F37625ED()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_1C9A2E55F37625ED_OFFSET))(this);
	}

	::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_1_E5AF195750C09845(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_E5AF195750C09845_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void Method_1_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_1_D6EF48CA5D92AFCB(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_METHOD_1_D6EF48CA5D92AFCB_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsScreenPointerDown()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_GET_ISSCREENPOINTERDOWN_OFFSET))(this);
	}

	::System::Void set_IsScreenPointerDown(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_SET_ISSCREENPOINTERDOWN_OFFSET))(this, value);
	}

	::System::Single get_DragPointDelta()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_GET_DRAGPOINTDELTA_OFFSET))(this);
	}

	::System::Void set_DragPointDelta(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_SET_DRAGPOINTDELTA_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheCurrentTargets()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_GET_CACHECURRENTTARGETS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheCurrentSubTargets()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_GET_CACHECURRENTSUBTARGETS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheBeyondSelectTargets()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_GET_CACHEBEYONDSELECTTARGETS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheFadeTargets()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_GET_CACHEFADETARGETS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheCurrentMergedTargets()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_GET_CACHECURRENTMERGEDTARGETS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get__BackRowBeyondLightToDarkCacheList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_GET__BACKROWBEYONDLIGHTTODARKCACHELIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get__BackRowBeyondDarkToLightCacheList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FB41EE27FB816A_GET__BACKROWBEYONDDARKTOLIGHTCACHELIST_OFFSET))(this);
	}
};
