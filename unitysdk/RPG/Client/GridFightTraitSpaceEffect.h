#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"

class Class_1_4A27993D27FC5C67;
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitBonusConfig; }
namespace RPG::GameCore { class GridFightTraitBonusAddRuleConfigRow; }
namespace RPG::GameCore { class GridFightTraitBonusThresholdConfigRow; }
namespace RPG::GameCore { class GridFightTraitEffectLayerParamConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_CALCULATECURADDVALUE_OFFSET UNITYSDK_OFFSET(0x94286B0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_CALCULATEPERFECTPASSADDVALUE_OFFSET UNITYSDK_OFFSET(0x942A020)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_DISTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9428640)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GETBONUSLEVEL_OFFSET UNITYSDK_OFFSET(0x942A8B0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GETCURRENTBONUSCONFIG_OFFSET UNITYSDK_OFFSET(0x942ABC0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GETCURRENTBONUSLEVEL_OFFSET UNITYSDK_OFFSET(0x942A840)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GETCURRENTEFFECTLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x942ACA0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GETNEXTBONUSTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x942AA30)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_BONUSTYPECONFIGS_OFFSET UNITYSDK_OFFSET(0x942B010)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CANGETBONUS_OFFSET UNITYSDK_OFFSET(0x942AFB0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CURBONUSCONFIG_OFFSET UNITYSDK_OFFSET(0x942B290)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CURBONUSINDEX_OFFSET UNITYSDK_OFFSET(0x942B550)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CURBONUSLEVEL_OFFSET UNITYSDK_OFFSET(0x942AE00)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CURENHANCECONFIG_OFFSET UNITYSDK_OFFSET(0x942B4A0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CURENHANCEINDEX_OFFSET UNITYSDK_OFFSET(0x942B640)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_CURENHANCELEVEL_OFFSET UNITYSDK_OFFSET(0x942AF20)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_ENHANCETHRESCONFIG_OFFSET UNITYSDK_OFFSET(0x942B000)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_ENHANCETYPECONFIGS_OFFSET UNITYSDK_OFFSET(0x942B150)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_ISMAXBONUS_OFFSET UNITYSDK_OFFSET(0x942B730)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_ISMAXENHANCE_OFFSET UNITYSDK_OFFSET(0x942B7D0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x942AF70)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_NEXTBONUSCONFIG_OFFSET UNITYSDK_OFFSET(0x942B340)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_NEXTENHANCECONFIG_OFFSET UNITYSDK_OFFSET(0x942B3F0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_PREVIOUSLAYER_OFFSET UNITYSDK_OFFSET(0x942AF90)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_RESULTDATA_OFFSET UNITYSDK_OFFSET(0x942AFD0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET_THRESHOLDCONFIG_OFFSET UNITYSDK_OFFSET(0x942AFF0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET__PARAMCONFIG_OFFSET UNITYSDK_OFFSET(0x942A140)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_GET__RULECONFIG_OFFSET UNITYSDK_OFFSET(0x9428740)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_INITCONFIG_OFFSET UNITYSDK_OFFSET(0x942A2C0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x942A4A0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_SET_CANGETBONUS_OFFSET UNITYSDK_OFFSET(0x942AFC0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x942AF80)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_SET_PREVIOUSLAYER_OFFSET UNITYSDK_OFFSET(0x942AFA0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_SET_RESULTDATA_OFFSET UNITYSDK_OFFSET(0x942AFE0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__CALCULATECAKE_OFFSET UNITYSDK_OFFSET(0x94287C0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__CALCULATECHEST_OFFSET UNITYSDK_OFFSET(0x9429F40)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__CALCULATEEQUIP_OFFSET UNITYSDK_OFFSET(0x9429020)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__CALCULATEPERFECTPASSADDVALUE_OFFSET UNITYSDK_OFFSET(0x942A090)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__CHECKCANGETBONUS_OFFSET UNITYSDK_OFFSET(0x942A6C0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x942A1D0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GETCURRENTENHANCETHRESHOLDCONFIG_OFFSET UNITYSDK_OFFSET(0x942AE50)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GETCURRENTTHRESHOLDCONFIG_OFFSET UNITYSDK_OFFSET(0x942AD30)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GET_CURBONUSCONFIG_B__48_0_OFFSET UNITYSDK_OFFSET(0x942B870)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GET_CURENHANCECONFIG_B__54_0_OFFSET UNITYSDK_OFFSET(0x942B900)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GET_NEXTBONUSCONFIG_B__50_0_OFFSET UNITYSDK_OFFSET(0x942B8A0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GET_NEXTENHANCECONFIG_B__52_0_OFFSET UNITYSDK_OFFSET(0x942B8D0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x942B930)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitSpaceEffect_TypeDefinitionIndex = 51186;

	class GridFightTraitSpaceEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitBonusConfig*>* BonusConfigs; // 0x30
		::RPG::Client::GridFightBonusResultData* _ResultData_k__BackingField; // 0x38
		::System::Boolean _CanGetBonus_k__BackingField; // 0x40
		::System::UInt32 _Layer_k__BackingField; // 0x44
		::System::UInt32 _PreviousLayer_k__BackingField; // 0x48

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

		::System::Void OnUpdate(::Class_1_4A27993D27FC5C67* effect)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4A27993D27FC5C67*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT_ONUPDATE_OFFSET))(this, effect);
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

		::System::Boolean _get_CurBonusConfig_b__48_0(::RPG::Client::GridFightTraitBonusConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GET_CURBONUSCONFIG_B__48_0_OFFSET))(this, config);
		}

		::System::Boolean _get_NextBonusConfig_b__50_0(::RPG::Client::GridFightTraitBonusConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GET_NEXTBONUSCONFIG_B__50_0_OFFSET))(this, config);
		}

		::System::Boolean _get_NextEnhanceConfig_b__52_0(::RPG::Client::GridFightTraitBonusConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GET_NEXTENHANCECONFIG_B__52_0_OFFSET))(this, config);
		}

		::System::Boolean _get_CurEnhanceConfig_b__54_0(::RPG::Client::GridFightTraitBonusConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT__GET_CURENHANCECONFIG_B__54_0_OFFSET))(this, config);
		}

		::System::Void __iFixBaseProxy_OnUpdate(::Class_1_4A27993D27FC5C67* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4A27993D27FC5C67*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET))(this, P0);
		}
	};
}
