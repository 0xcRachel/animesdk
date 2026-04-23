#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"

class Class_1_8271AFF79E02658D;
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitBonusConfig; }
namespace RPG::GameCore { class GridFightTraitBonusAddRuleConfigRow; }
namespace RPG::GameCore { class GridFightTraitBonusThresholdConfigRow; }
namespace RPG::GameCore { class GridFightTraitEffectLayerParamConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_CALCULATECURADDVALUE_OFFSET UNITYSDK_OFFSET(0x17439AC0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_CALCULATEPERFECTPASSADDVALUE_OFFSET UNITYSDK_OFFSET(0x1743B8C0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_DISTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17439A50)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GETBONUSLEVEL_OFFSET UNITYSDK_OFFSET(0x1743C260)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GETCURRENTBONUSCONFIG_OFFSET UNITYSDK_OFFSET(0x1743C570)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GETCURRENTBONUSLEVEL_OFFSET UNITYSDK_OFFSET(0x1743C1F0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GETCURRENTEFFECTLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x1743C650)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GETNEXTBONUSTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1743C3E0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_BONUSTYPECONFIGS_OFFSET UNITYSDK_OFFSET(0x1743C9C0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CANGETBONUS_OFFSET UNITYSDK_OFFSET(0x1743C960)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CURBONUSCONFIG_OFFSET UNITYSDK_OFFSET(0x1743CC40)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CURBONUSINDEX_OFFSET UNITYSDK_OFFSET(0x1743CF00)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CURBONUSLEVEL_OFFSET UNITYSDK_OFFSET(0x1743C7B0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CURENHANCECONFIG_OFFSET UNITYSDK_OFFSET(0x1743CE50)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CURENHANCEINDEX_OFFSET UNITYSDK_OFFSET(0x1743CFF0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CURENHANCELEVEL_OFFSET UNITYSDK_OFFSET(0x1743C8D0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_ENHANCETHRESCONFIG_OFFSET UNITYSDK_OFFSET(0x1743C9B0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_ENHANCETYPECONFIGS_OFFSET UNITYSDK_OFFSET(0x1743CB00)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_ISMAXBONUS_OFFSET UNITYSDK_OFFSET(0x1743D0E0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_ISMAXENHANCE_OFFSET UNITYSDK_OFFSET(0x1743D180)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1743C920)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_NEXTBONUSCONFIG_OFFSET UNITYSDK_OFFSET(0x1743CCF0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_NEXTENHANCECONFIG_OFFSET UNITYSDK_OFFSET(0x1743CDA0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_PREVIOUSLAYER_OFFSET UNITYSDK_OFFSET(0x1743C940)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_RESULTDATA_OFFSET UNITYSDK_OFFSET(0x1743C980)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_THRESHOLDCONFIG_OFFSET UNITYSDK_OFFSET(0x1743C9A0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET__PARAMCONFIG_OFFSET UNITYSDK_OFFSET(0x1743B9E0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET__RULECONFIG_OFFSET UNITYSDK_OFFSET(0x17439B50)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_INITCONFIG_OFFSET UNITYSDK_OFFSET(0x1743BC70)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1743BE50)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_SET_CANGETBONUS_OFFSET UNITYSDK_OFFSET(0x1743C970)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x1743C930)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_SET_PREVIOUSLAYER_OFFSET UNITYSDK_OFFSET(0x1743C950)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_SET_RESULTDATA_OFFSET UNITYSDK_OFFSET(0x1743C990)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__CALCULATECAKE_OFFSET UNITYSDK_OFFSET(0x17439BD0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__CALCULATECHEST_OFFSET UNITYSDK_OFFSET(0x1743B7A0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__CALCULATEEQUIP_OFFSET UNITYSDK_OFFSET(0x1743A3F0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__CALCULATEPERFECTPASSADDVALUE_OFFSET UNITYSDK_OFFSET(0x1743B930)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__CHECKCANGETBONUS_OFFSET UNITYSDK_OFFSET(0x1743C070)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1743BB30)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GETCURRENTENHANCETHRESHOLDCONFIG_OFFSET UNITYSDK_OFFSET(0x1743C800)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GETCURRENTTHRESHOLDCONFIG_OFFSET UNITYSDK_OFFSET(0x1743C6E0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GETEQUIPSCORE_OFFSET UNITYSDK_OFFSET(0x1743BA70)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GET_CURBONUSCONFIG_B__50_0_OFFSET UNITYSDK_OFFSET(0x1743D220)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GET_CURENHANCECONFIG_B__56_0_OFFSET UNITYSDK_OFFSET(0x1743D2B0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GET_NEXTBONUSCONFIG_B__52_0_OFFSET UNITYSDK_OFFSET(0x1743D250)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GET_NEXTENHANCECONFIG_B__54_0_OFFSET UNITYSDK_OFFSET(0x1743D280)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1743D2E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitSpaceEffect_TypeDefinitionIndex = 59272;

	class GridFightTraitSpaceEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::RPG::Client::GridFightBonusResultData* _ResultData_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitBonusConfig*>* BonusConfigs; // 0x38
		::System::UInt32 _Layer_k__BackingField; // 0x40
		::System::UInt32 _ElationTraitEffectID; // 0x44
		::System::Boolean _CanGetBonus_k__BackingField; // 0x48
		::System::UInt32 _PreviousLayer_k__BackingField; // 0x4C

		::System::Void _ctor(::System::UInt32 id, ::RPG::Client::GridFightTrait* trait)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__CTOR_OFFSET))(this, id, trait);
		}

		::System::Void Distribute(::RPG::Client::GridFightBonusResultData* result)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_DISTRIBUTE_OFFSET))(this, result);
		}

		::System::Int32 CalculateCurAddValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_CALCULATECURADDVALUE_OFFSET))(this);
		}

		::System::Int32 CalculatePerfectPassAddValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_CALCULATEPERFECTPASSADDVALUE_OFFSET))(this);
		}

		::System::Int32 _CalculateCake()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__CALCULATECAKE_OFFSET))(this);
		}

		::System::Int32 _CalculateChest()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__CALCULATECHEST_OFFSET))(this);
		}

		::System::Int32 _GetEquipScore(::RPG::Client::GridFightEquipItemData* equip)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GETEQUIPSCORE_OFFSET))(this, equip);
		}

		::System::Int32 _CalculateEquip()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__CALCULATEEQUIP_OFFSET))(this);
		}

		::System::Int32 _CalculatePerfectPassAddValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__CALCULATEPERFECTPASSADDVALUE_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow* get__RuleConfig()
		{
			return ((::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET__RULECONFIG_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow* get__ParamConfig()
		{
			return ((::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET__PARAMCONFIG_OFFSET))(this);
		}

		::System::Void InitConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_INITCONFIG_OFFSET))(this);
		}

		::System::Void OnUpdate(::Class_1_8271AFF79E02658D* effect)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_ONUPDATE_OFFSET))(this, effect);
		}

		::System::UInt32 GetCurrentBonusLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GETCURRENTBONUSLEVEL_OFFSET))(this);
		}

		static ::System::UInt32 GetBonusLevel(::System::UInt32 ID, ::System::UInt32 layer)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GETBONUSLEVEL_OFFSET))(ID, layer);
		}

		::System::UInt32 GetNextBonusThreshold()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GETNEXTBONUSTHRESHOLD_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitBonusConfig* GetCurrentBonusConfig(::RPG::GameCore::GridFightTraitBonusType bonusType)
		{
			return ((::RPG::Client::GridFightTraitBonusConfig*(*)(::PVOID, ::RPG::GameCore::GridFightTraitBonusType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GETCURRENTBONUSCONFIG_OFFSET))(this, bonusType);
		}

		::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow* GetCurrentEffectLayerConfig()
		{
			return ((::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GETCURRENTEFFECTLAYERCONFIG_OFFSET))(this);
		}

		::System::Boolean _CheckCanGetBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__CHECKCANGETBONUS_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitBonusThresholdConfigRow* _GetCurrentThresholdConfig()
		{
			return ((::RPG::GameCore::GridFightTraitBonusThresholdConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GETCURRENTTHRESHOLDCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitBonusThresholdConfigRow* _GetCurrentEnhanceThresholdConfig()
		{
			return ((::RPG::GameCore::GridFightTraitBonusThresholdConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GETCURRENTENHANCETHRESHOLDCONFIG_OFFSET))(this);
		}

		::System::UInt32 get_Layer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_LAYER_OFFSET))(this);
		}

		::System::Void set_Layer(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_SET_LAYER_OFFSET))(this, value);
		}

		::System::UInt32 get_PreviousLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_PREVIOUSLAYER_OFFSET))(this);
		}

		::System::Void set_PreviousLayer(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_SET_PREVIOUSLAYER_OFFSET))(this, value);
		}

		::System::Boolean get_CanGetBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CANGETBONUS_OFFSET))(this);
		}

		::System::Void set_CanGetBonus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_SET_CANGETBONUS_OFFSET))(this, value);
		}

		::RPG::Client::GridFightBonusResultData* get_ResultData()
		{
			return ((::RPG::Client::GridFightBonusResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_RESULTDATA_OFFSET))(this);
		}

		::System::Void set_ResultData(::RPG::Client::GridFightBonusResultData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_SET_RESULTDATA_OFFSET))(this, value);
		}

		::RPG::GameCore::GridFightTraitBonusThresholdConfigRow* get_ThresholdConfig()
		{
			return ((::RPG::GameCore::GridFightTraitBonusThresholdConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_THRESHOLDCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitBonusThresholdConfigRow* get_EnhanceThresConfig()
		{
			return ((::RPG::GameCore::GridFightTraitBonusThresholdConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_ENHANCETHRESCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitBonusConfig*>* get_BonusTypeConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitBonusConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_BONUSTYPECONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitBonusConfig*>* get_EnhanceTypeConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitBonusConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_ENHANCETYPECONFIGS_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitBonusConfig* get_CurBonusConfig()
		{
			return ((::RPG::Client::GridFightTraitBonusConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CURBONUSCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitBonusConfig* get_NextBonusConfig()
		{
			return ((::RPG::Client::GridFightTraitBonusConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_NEXTBONUSCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitBonusConfig* get_NextEnhanceConfig()
		{
			return ((::RPG::Client::GridFightTraitBonusConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_NEXTENHANCECONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitBonusConfig* get_CurEnhanceConfig()
		{
			return ((::RPG::Client::GridFightTraitBonusConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CURENHANCECONFIG_OFFSET))(this);
		}

		::System::Int32 get_CurBonusIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CURBONUSINDEX_OFFSET))(this);
		}

		::System::Int32 get_CurEnhanceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CURENHANCEINDEX_OFFSET))(this);
		}

		::System::Int32 get_CurEnhanceLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CURENHANCELEVEL_OFFSET))(this);
		}

		::System::Int32 get_CurBonusLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CURBONUSLEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsMaxBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_ISMAXBONUS_OFFSET))(this);
		}

		::System::Boolean get_IsMaxEnhance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_ISMAXENHANCE_OFFSET))(this);
		}

		::System::Boolean _get_CurBonusConfig_b__50_0(::RPG::Client::GridFightTraitBonusConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GET_CURBONUSCONFIG_B__50_0_OFFSET))(this, config);
		}

		::System::Boolean _get_NextBonusConfig_b__52_0(::RPG::Client::GridFightTraitBonusConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GET_NEXTBONUSCONFIG_B__52_0_OFFSET))(this, config);
		}

		::System::Boolean _get_NextEnhanceConfig_b__54_0(::RPG::Client::GridFightTraitBonusConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GET_NEXTENHANCECONFIG_B__54_0_OFFSET))(this, config);
		}

		::System::Boolean _get_CurEnhanceConfig_b__56_0(::RPG::Client::GridFightTraitBonusConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GET_CURENHANCECONFIG_B__56_0_OFFSET))(this, config);
		}

		::System::Void __iFixBaseProxy_OnUpdate(::Class_1_8271AFF79E02658D* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET))(this, P0);
		}
	};
}
