#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_3.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/CharacterCollisionType.h"
#include "unitysdk/RPG/GameCore/CharacterEnhancedStateType.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoWidthType.h"
#include "unitysdk/RPG/GameCore/EffectScaleAdaptType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_2738E5A52E213F1A.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_B8FB38F0526A59B0;
namespace RPG::GameCore { class AttachPointEffectAdaptionConfig; }
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class EffectAdaptionConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterRowData; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class LocationConfig; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_GAMECORE_CHARACTERDATACOMPONENT_DESTROYDUMMYENTITY_OFFSET UNITYSDK_OFFSET(0xA3696F0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA369AB0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETATTACHPOINTEFFECTADAPTIONCONFIG_1_OFFSET UNITYSDK_OFFSET(0xA368380)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETATTACHPOINTEFFECTADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xA368040)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETCHARACTERHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA369FE0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETCHARACTERNAMEID_OFFSET UNITYSDK_OFFSET(0xA369F70)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETCHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xA369D60)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETCHARACTERUICUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0xA36A460)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETDUMMYENTITY_OFFSET UNITYSDK_OFFSET(0xA369260)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETEFFECTADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xA3683F0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETEFFECTATTACHPOINTREDIRECT_OFFSET UNITYSDK_OFFSET(0xA368760)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETNATUREID_OFFSET UNITYSDK_OFFSET(0xA36A110)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETSOMATOWIDTHTYPE_OFFSET UNITYSDK_OFFSET(0xA366E90)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0xA36A640)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ANIMEVENTCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xA368890)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_BUFFPANELOFFSET_OFFSET UNITYSDK_OFFSET(0xA368A50)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CHARACTERHUDOFFSETBLENDTIME_OFFSET UNITYSDK_OFFSET(0xA369210)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CHARACTERHUDOFFSET_OFFSET UNITYSDK_OFFSET(0xA369020)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xA36A530)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xA369E50)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xA36A550)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_DISABLEHEADLOOKATACTIONENTITY_OFFSET UNITYSDK_OFFSET(0xA36A9A0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_DISABLEROOTYAWMAPPING_OFFSET UNITYSDK_OFFSET(0xA36A9F0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_EFFECTADAPTIONLIST_OFFSET UNITYSDK_OFFSET(0xA367760)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_GRAPHEMOTIONASSET_OFFSET UNITYSDK_OFFSET(0xA368FB0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_GRIDFIGHTTAG_OFFSET UNITYSDK_OFFSET(0xA36AAE0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HASLIFE_OFFSET UNITYSDK_OFFSET(0xA36A630)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA36A030)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xA368EE0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXHEIGHT_OFFSET UNITYSDK_OFFSET(0xA368DE0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXLENGTH_OFFSET UNITYSDK_OFFSET(0xA368D70)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXOFFSET_OFFSET UNITYSDK_OFFSET(0xA368E50)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXTYPE_OFFSET UNITYSDK_OFFSET(0xA368C90)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXWIDTH_OFFSET UNITYSDK_OFFSET(0xA368D00)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ISHITBOXVALID_OFFSET UNITYSDK_OFFSET(0xA368C30)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ISPUPPETCHARACTER_OFFSET UNITYSDK_OFFSET(0xA3689F0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ISVISIBLEINVIEWMODE_OFFSET UNITYSDK_OFFSET(0xA36A940)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_JSONCONFIG_OFFSET UNITYSDK_OFFSET(0xA368900)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_LASTACTTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xA36A720)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_LOCALOFFSETASMOVETARGET_OFFSET UNITYSDK_OFFSET(0xA36A900)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0xA367020)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xA36A740)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0xA36A160)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_RESILIENCE_OFFSET UNITYSDK_OFFSET(0xA368830)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xA36A820)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ROWDATA_OFFSET UNITYSDK_OFFSET(0xA36AA10)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SAVEMODELWHENDEAD_OFFSET UNITYSDK_OFFSET(0xA368920)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SHOWSUMMONEDUI_OFFSET UNITYSDK_OFFSET(0xA36A980)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SHOWSUMMONERUI_OFFSET UNITYSDK_OFFSET(0xA36A960)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0xA36AA30)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SKILLTARGETAGENT_OFFSET UNITYSDK_OFFSET(0xA369A40)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SOMATOTYPE_OFFSET UNITYSDK_OFFSET(0xA368F50)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_TRIGGEREDFORMATIONASSETAUTOCENTERMASK_OFFSET UNITYSDK_OFFSET(0xA36AB00)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_VIEWMODEEXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0xA3691A0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_VISUALRADIUS_OFFSET UNITYSDK_OFFSET(0xA368BD0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_INITBATTLECHARACTERDATA_OFFSET UNITYSDK_OFFSET(0xA36A290)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_INITCOMPONENTBYCHARACTERROWDATA_OFFSET UNITYSDK_OFFSET(0xA369B90)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA369B00)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_ONABILITYCHARACTERINITIALIZED_OFFSET UNITYSDK_OFFSET(0xA36A240)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_ONCUSTOMDATAINITIALIZE_OFFSET UNITYSDK_OFFSET(0xA36AB20)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_OVERRIDECHARACTERCONFIG_OFFSET UNITYSDK_OFFSET(0xA367C40)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_RESETOVERRIDECHARACTERCONFIG_OFFSET UNITYSDK_OFFSET(0xA367BF0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_RESETOVERRIDECLIENTONLYCHARACTERCONFIG_OFFSET UNITYSDK_OFFSET(0xA367090)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_RESETOVERRIDERESILIENCE_OFFSET UNITYSDK_OFFSET(0xA367F70)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SETCHARACTERUICUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0xA36A2E0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SETDYNAMICATTACHPOINTEFFECTADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xA367FD0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xA36A540)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_DISABLEROOTYAWMAPPING_OFFSET UNITYSDK_OFFSET(0xA36AA00)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_GRIDFIGHTTAG_OFFSET UNITYSDK_OFFSET(0xA36AAF0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_ISVISIBLEINVIEWMODE_OFFSET UNITYSDK_OFFSET(0xA36A950)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_JSONCONFIG_OFFSET UNITYSDK_OFFSET(0xA368910)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_LASTACTTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xA36A730)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_LOCALOFFSETASMOVETARGET_OFFSET UNITYSDK_OFFSET(0xA36A920)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_ROWDATA_OFFSET UNITYSDK_OFFSET(0xA36AA20)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_SAVEMODELWHENDEAD_OFFSET UNITYSDK_OFFSET(0xA368990)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_SHOWSUMMONEDUI_OFFSET UNITYSDK_OFFSET(0xA36A990)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_SHOWSUMMONERUI_OFFSET UNITYSDK_OFFSET(0xA36A970)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_TRIGGEREDFORMATIONASSETAUTOCENTERMASK_OFFSET UNITYSDK_OFFSET(0xA36AB10)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__CREATEDUMMYENTITY_OFFSET UNITYSDK_OFFSET(0xA3693E0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA36AB60)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__DESTROYALLDUMMYENTITIES_OFFSET UNITYSDK_OFFSET(0xA3698C0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__ONANIMEVENTCONFIGLISTCHANGED_OFFSET UNITYSDK_OFFSET(0xA367640)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__ONEFFECTADAPTIONLISTCHANGED_OFFSET UNITYSDK_OFFSET(0xA3677D0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__ONHITBOXCHANGED_OFFSET UNITYSDK_OFFSET(0xA3675D0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__ONHUDOFFSETCHANGED_OFFSET UNITYSDK_OFFSET(0xA367B90)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__ONLOCATIONCONFIGCHANGED_OFFSET UNITYSDK_OFFSET(0xA3674D0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__ONRESILIENCECHANGED_OFFSET UNITYSDK_OFFSET(0xA367420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterDataComponent_TypeDefinitionIndex = 44734;

	class CharacterDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		// static const ::System::String* DefaultDummyEntityName; // 0x0
		// static const ::System::String* SkillTargetAgentDummyName; // 0x0
		::RPG::GameCore::GameEntity* Summoner; // 0x18
		::RPG::GameCore::ICharacterRowData* _RowData; // 0x20
		::RPG::GameCore::GameEntity* Creator; // 0x28
		::System::Text::RegularExpressions::Regex* _DynamicScaleAdaptEffectPathRule; // 0x30
		::System::Collections::Generic::HashSet_1<::System::String*>* HideDisplayInfoSkillNames; // 0x38
		::Struct_2_2738E5A52E213F1A _OverrideCharacterConfigParam; // 0x40
		::Il2CppArray<::RPG::GameCore::EffectScaleAdaptType>* _DynamicScaleAdaptTypes; // 0xA0
		::System::String* OrbitAgentDummyName; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _CharacterUICustomValueDict; // 0xB0
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::RPG::GameCore::GameEntity*>>* _DummpyEntityList; // 0xB8
		::RPG::GameCore::CharacterConfig* _JsonConfig_k__BackingField; // 0xC0
		::RPG::GameCore::DamageDisplayData* DefaultDamageDisplayData; // 0xC8
		::Il2CppArray<::RPG::GameCore::AttachPointEffectAdaptionConfig*>* _DynamicScaleAdaptConfigs; // 0xD0
		::System::Int32 LineupIndex; // 0xD8
		::System::Boolean _IsVisibleInViewMode_k__BackingField; // 0xDC
		::System::Boolean _DisableRootYawMapping_k__BackingField; // 0xDD
		::System::Int32 _GridFightTag_k__BackingField; // 0xE0
		::System::UInt32 SpawnTurnCount; // 0xE4
		::RPG::MVector3 _LocalOffsetAsMoveTarget_k__BackingField; // 0xE8
		::Enum_3_ED790DAC948A65A9_3 CreateReason; // 0xF4
		::RPG::GameCore::CharacterEnhancedStateType EnhancedState; // 0xF8
		::System::Nullable_1<::System::Boolean> DisableHeadLookAtActionEntityOverride; // 0xFC
		::System::Boolean IsBodyPart; // 0xFE
		::RPG::GameCore::TeamTypeMask _TriggeredFormationAssetAutoCenterMask_k__BackingField; // 0x100
		::System::Boolean _ShowSummonedUI_k__BackingField; // 0x102
		::System::Boolean _ShowSummonerUI_k__BackingField; // 0x103
		::System::Nullable_1<::System::Boolean> _SaveModelWhenDeadOverride; // 0x104
		::System::Boolean TriggerLimbo; // 0x106
		::System::UInt32 _LastActTurnCount_k__BackingField; // 0x108
		::System::UInt32 _CharacterID_k__BackingField; // 0x10C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CharacterSomatoWidthType GetSomatoWidthType()
		{
			return ((::RPG::GameCore::CharacterSomatoWidthType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETSOMATOWIDTHTYPE_OFFSET))(this);
		}

		::System::Void ResetOverrideClientOnlyCharacterConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_RESETOVERRIDECLIENTONLYCHARACTERCONFIG_OFFSET))(this);
		}

		::System::Void ResetOverrideCharacterConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_RESETOVERRIDECHARACTERCONFIG_OFFSET))(this);
		}

		::System::Void OverrideCharacterConfig(::Struct_2_2738E5A52E213F1A overrideCharacterConfigParam)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_2738E5A52E213F1A))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_OVERRIDECHARACTERCONFIG_OFFSET))(this, overrideCharacterConfigParam);
		}

		::System::Void ResetOverrideResilience()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_RESETOVERRIDERESILIENCE_OFFSET))(this);
		}

		::System::Void SetDynamicAttachPointEffectAdaptionConfig(::Il2CppArray<::RPG::GameCore::AttachPointEffectAdaptionConfig*>* configs, ::Il2CppArray<::RPG::GameCore::EffectScaleAdaptType>* adaptTypes, ::System::Text::RegularExpressions::Regex* pathRule)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AttachPointEffectAdaptionConfig*>*, ::Il2CppArray<::RPG::GameCore::EffectScaleAdaptType>*, ::System::Text::RegularExpressions::Regex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SETDYNAMICATTACHPOINTEFFECTADAPTIONCONFIG_OFFSET))(this, configs, adaptTypes, pathRule);
		}

		::RPG::GameCore::AttachPointEffectAdaptionConfig* GetAttachPointEffectAdaptionConfig(::System::String* effectPath, ::System::String* attachPointName, ::RPG::GameCore::EffectScaleAdaptType adaptType)
		{
			return ((::RPG::GameCore::AttachPointEffectAdaptionConfig*(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::GameCore::EffectScaleAdaptType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETATTACHPOINTEFFECTADAPTIONCONFIG_OFFSET))(this, effectPath, attachPointName, adaptType);
		}

		::RPG::GameCore::EffectAdaptionConfig* GetEffectAdaptionConfig(::System::String* effectPath)
		{
			return ((::RPG::GameCore::EffectAdaptionConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETEFFECTADAPTIONCONFIG_OFFSET))(this, effectPath);
		}

		::RPG::GameCore::AttachPointEffectAdaptionConfig* GetAttachPointEffectAdaptionConfig_1(::System::String* effectPath, ::System::String* attachPointName)
		{
			return ((::RPG::GameCore::AttachPointEffectAdaptionConfig*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETATTACHPOINTEFFECTADAPTIONCONFIG_1_OFFSET))(this, effectPath, attachPointName);
		}

		::System::String* GetEffectAttachPointRedirect(::System::String* attachPointName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETEFFECTATTACHPOINTREDIRECT_OFFSET))(this, attachPointName);
		}

		::System::Void _OnResilienceChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__ONRESILIENCECHANGED_OFFSET))(this);
		}

		::System::Void _OnHudOffsetChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__ONHUDOFFSETCHANGED_OFFSET))(this);
		}

		::System::Void _OnLocationConfigChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__ONLOCATIONCONFIGCHANGED_OFFSET))(this);
		}

		::System::Void _OnAnimEventConfigListChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__ONANIMEVENTCONFIGLISTCHANGED_OFFSET))(this);
		}

		::System::Void _OnHitBoxChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__ONHITBOXCHANGED_OFFSET))(this);
		}

		::System::Void _OnEffectAdaptionListChanged(::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>* effectAdaptionConfigBefore, ::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>* effectAdaptionConfigAfter)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>*, ::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__ONEFFECTADAPTIONLISTCHANGED_OFFSET))(this, effectAdaptionConfigBefore, effectAdaptionConfigAfter);
		}

		::RPG::GameCore::CharacterConfig* get_JsonConfig()
		{
			return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_JSONCONFIG_OFFSET))(this);
		}

		::System::Void set_JsonConfig(::RPG::GameCore::CharacterConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_JSONCONFIG_OFFSET))(this, value);
		}

		::System::Boolean get_SaveModelWhenDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SAVEMODELWHENDEAD_OFFSET))(this);
		}

		::System::Void set_SaveModelWhenDead(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_SAVEMODELWHENDEAD_OFFSET))(this, value);
		}

		::System::Boolean get_IsPuppetCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ISPUPPETCHARACTER_OFFSET))(this);
		}

		::RPG::GameCore::ResilienceEnum get_Resilience()
		{
			return ((::RPG::GameCore::ResilienceEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_RESILIENCE_OFFSET))(this);
		}

		::RPG::MVector3 get_BuffPanelOffset()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_BUFFPANELOFFSET_OFFSET))(this);
		}

		::RPG::GameCore::LocationConfig* get_Location()
		{
			return ((::RPG::GameCore::LocationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_LOCATION_OFFSET))(this);
		}

		::System::Single get_VisualRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_VISUALRADIUS_OFFSET))(this);
		}

		::System::Boolean get_IsHitBoxValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ISHITBOXVALID_OFFSET))(this);
		}

		::RPG::GameCore::CharacterCollisionType get_HitBoxType()
		{
			return ((::RPG::GameCore::CharacterCollisionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXTYPE_OFFSET))(this);
		}

		::System::Single get_HitBoxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXWIDTH_OFFSET))(this);
		}

		::System::Single get_HitBoxLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXLENGTH_OFFSET))(this);
		}

		::System::Single get_HitBoxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXHEIGHT_OFFSET))(this);
		}

		::RPG::MVector3 get_HitBoxOffset()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXOFFSET_OFFSET))(this);
		}

		::System::String* get_HitBoxAttachPoint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXATTACHPOINT_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_AnimEventConfigList()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ANIMEVENTCONFIGLIST_OFFSET))(this);
		}

		::RPG::GameCore::CharacterSomatoType get_SomatoType()
		{
			return ((::RPG::GameCore::CharacterSomatoType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SOMATOTYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>* get_EffectAdaptionList()
		{
			return ((::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_EFFECTADAPTIONLIST_OFFSET))(this);
		}

		::System::String* get_GraphEmotionAsset()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_GRAPHEMOTIONASSET_OFFSET))(this);
		}

		::RPG::MVector3 get_CharacterHUDOffset()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CHARACTERHUDOFFSET_OFFSET))(this);
		}

		::System::UInt32 get_ViewModeExtraEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_VIEWMODEEXTRAEFFECTID_OFFSET))(this);
		}

		::System::Single get_CharacterHUDOffsetBlendTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CHARACTERHUDOFFSETBLENDTIME_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetDummyEntity(::System::String* name, ::System::Boolean autoCreate)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETDUMMYENTITY_OFFSET))(this, name, autoCreate);
		}

		::System::Void DestroyDummyEntity(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_DESTROYDUMMYENTITY_OFFSET))(this, name);
		}

		::RPG::GameCore::GameEntity* _CreateDummyEntity(::System::String* name)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__CREATEDUMMYENTITY_OFFSET))(this, name);
		}

		::System::Void _DestroyAllDummyEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__DESTROYALLDUMMYENTITIES_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_SkillTargetAgent()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SKILLTARGETAGENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent(::System::UInt32 nCharacterId, ::RPG::GameCore::CharacterConfig* JsonConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::CharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_INITCOMPONENT_OFFSET))(this, nCharacterId, JsonConfig);
		}

		::System::Void InitComponentByCharacterRowData(::RPG::GameCore::ICharacterRowData* rowData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_INITCOMPONENTBYCHARACTERROWDATA_OFFSET))(this, rowData);
		}

		::System::String* GetCharacterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETCHARACTERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID GetCharacterNameID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETCHARACTERNAMEID_OFFSET))(this);
		}

		::System::String* GetCharacterHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETCHARACTERHEADICONPATH_OFFSET))(this);
		}

		::System::UInt32 GetNatureID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETNATUREID_OFFSET))(this);
		}

		::System::Void OnAbilityCharacterInitialized(::RPG::GameCore::TurnBasedAbilityComponent* pTurnBasedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_ONABILITYCHARACTERINITIALIZED_OFFSET))(this, pTurnBasedAbility);
		}

		::System::Void InitBattleCharacterData(::Class_1_B8FB38F0526A59B0* createParam)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8FB38F0526A59B0*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_INITBATTLECHARACTERDATA_OFFSET))(this, createParam);
		}

		::System::Void SetCharacterUICustomValue(::System::String* key, ::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SETCHARACTERUICUSTOMVALUE_OFFSET))(this, key, val);
		}

		::System::String* GetCharacterUICustomValue(::System::String* key, ::System::String* defaultVal)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETCHARACTERUICUSTOMVALUE_OFFSET))(this, key, defaultVal);
		}

		::System::UInt32 get_CharacterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CHARACTERID_OFFSET))(this);
		}

		::System::Void set_CharacterID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_CHARACTERID_OFFSET))(this, value);
		}

		::System::UInt32 get_NatureID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_NATUREID_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_DAMAGETYPE_OFFSET))(this);
		}

		::System::Boolean get_HasLife()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HASLIFE_OFFSET))(this);
		}

		::System::String* get_AIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_AIPATH_OFFSET))(this);
		}

		::System::UInt32 get_LastActTurnCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_LASTACTTURNCOUNT_OFFSET))(this);
		}

		::System::Void set_LastActTurnCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_LASTACTTURNCOUNT_OFFSET))(this, value);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_MODELPATH_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::RPG::MVector3 get_LocalOffsetAsMoveTarget()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_LOCALOFFSETASMOVETARGET_OFFSET))(this);
		}

		::System::Void set_LocalOffsetAsMoveTarget(::RPG::MVector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_LOCALOFFSETASMOVETARGET_OFFSET))(this, value);
		}

		::System::Boolean get_IsVisibleInViewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ISVISIBLEINVIEWMODE_OFFSET))(this);
		}

		::System::Void set_IsVisibleInViewMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_ISVISIBLEINVIEWMODE_OFFSET))(this, value);
		}

		::System::Boolean get_ShowSummonerUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SHOWSUMMONERUI_OFFSET))(this);
		}

		::System::Void set_ShowSummonerUI(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_SHOWSUMMONERUI_OFFSET))(this, value);
		}

		::System::Boolean get_ShowSummonedUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SHOWSUMMONEDUI_OFFSET))(this);
		}

		::System::Void set_ShowSummonedUI(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_SHOWSUMMONEDUI_OFFSET))(this, value);
		}

		::System::Boolean get_DisableHeadLookAtActionEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_DISABLEHEADLOOKATACTIONENTITY_OFFSET))(this);
		}

		::System::Boolean get_DisableRootYawMapping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_DISABLEROOTYAWMAPPING_OFFSET))(this);
		}

		::System::Void set_DisableRootYawMapping(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_DISABLEROOTYAWMAPPING_OFFSET))(this, value);
		}

		::RPG::GameCore::ICharacterRowData* get_RowData()
		{
			return ((::RPG::GameCore::ICharacterRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ROWDATA_OFFSET))(this);
		}

		::System::Void set_RowData(::RPG::GameCore::ICharacterRowData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_ROWDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SKILLROWDATAS_OFFSET))(this);
		}

		::System::Int32 get_GridFightTag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_GRIDFIGHTTAG_OFFSET))(this);
		}

		::System::Void set_GridFightTag(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_GRIDFIGHTTAG_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CHARACTERNAME_OFFSET))(this);
		}

		::RPG::GameCore::TeamTypeMask get_TriggeredFormationAssetAutoCenterMask()
		{
			return ((::RPG::GameCore::TeamTypeMask(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_TRIGGEREDFORMATIONASSETAUTOCENTERMASK_OFFSET))(this);
		}

		::System::Void set_TriggeredFormationAssetAutoCenterMask(::RPG::GameCore::TeamTypeMask value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_TRIGGEREDFORMATIONASSETAUTOCENTERMASK_OFFSET))(this, value);
		}

		::System::Void OnCustomDataInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_ONCUSTOMDATAINITIALIZE_OFFSET))(this);
		}
	};
}
