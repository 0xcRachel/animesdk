#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomProfileCounter.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_RUNTIMEPROFILER_ENABLEPROFILEQUERY_OFFSET UNITYSDK_OFFSET(0x163DD520)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_ENABLETRANSPARENTQUERY_OFFSET UNITYSDK_OFFSET(0x163DD760)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_ENABLEUIEFFECT_OFFSET UNITYSDK_OFFSET(0x163DD780)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GETCUSTOMPROFILEAVGTIME_1_OFFSET UNITYSDK_OFFSET(0x163DD510)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GETCUSTOMPROFILEAVGTIME_OFFSET UNITYSDK_OFFSET(0x163DD500)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GETTOTALMAINLIGHTOVERDRAW_OFFSET UNITYSDK_OFFSET(0x163DDA10)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GETTOTALPROBEOVERDRAW_OFFSET UNITYSDK_OFFSET(0x163DD9A0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GETVISIBLERATIOGAME_OFFSET UNITYSDK_OFFSET(0x163DD830)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GETVISIBLERATIOSCENE_OFFSET UNITYSDK_OFFSET(0x163DD870)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GETWEIGHTEDLIGHTOVERDRAW_OFFSET UNITYSDK_OFFSET(0x163DD880)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GET_CLUSTEREDLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x163DDA80)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GET_DEBUGINFOWIDGETENABLEPROFILER_OFFSET UNITYSDK_OFFSET(0x163DDBE0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GET_DEBUGUIENABLEPROFILER_OFFSET UNITYSDK_OFFSET(0x163DDAE0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GET_ENABLELIGHTRATIO_OFFSET UNITYSDK_OFFSET(0x163DDAC0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GET_LIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x163DDA60)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GET_STENCILLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x163DDAA0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_INIT_OFFSET UNITYSDK_OFFSET(0x163DD4E0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_SET_CLUSTEREDLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x163DDA90)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_SET_DEBUGINFOWIDGETENABLEPROFILER_OFFSET UNITYSDK_OFFSET(0x163DDBF0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_SET_DEBUGUIENABLEPROFILER_OFFSET UNITYSDK_OFFSET(0x163DDAF0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_SET_ENABLELIGHTRATIO_OFFSET UNITYSDK_OFFSET(0x163DDAD0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_SET_LIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x163DDA70)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_SET_STENCILLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x163DDAB0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_UPDATE_OFFSET UNITYSDK_OFFSET(0x163DD4F0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER__UPDATEPROFILERSTATE_OFFSET UNITYSDK_OFFSET(0x163DDB70)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RuntimeProfiler_TypeDefinitionIndex = 28650;

	class RuntimeProfiler : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__StencilLightCount_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimeProfiler_TypeDefinitionIndex)->GetStaticField(0xDF10);
		}
		static ::System::Int32* StaticGet__ClusteredLightCount_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimeProfiler_TypeDefinitionIndex)->GetStaticField(0xDF14);
		}
		static ::System::Boolean* StaticGet__EnableLightRatio_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RuntimeProfiler_TypeDefinitionIndex)->GetStaticField(0xDF18);
		}
		static ::System::Boolean* StaticGet__DebugUIEnableProfiler()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RuntimeProfiler_TypeDefinitionIndex)->GetStaticField(0xDF19);
		}
		static ::System::Boolean* StaticGet__DebugInfoWidgetEnableProfiler()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RuntimeProfiler_TypeDefinitionIndex)->GetStaticField(0xDF1A);
		}
		static ::System::Boolean* StaticGet__FinalEnableProfiler()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RuntimeProfiler_TypeDefinitionIndex)->GetStaticField(0xDF1B);
		}
		static ::System::Int32* StaticGet__LightCount_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimeProfiler_TypeDefinitionIndex)->GetStaticField(0xDF1C);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_INIT_OFFSET))();
		}

		static ::System::Void Update()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_UPDATE_OFFSET))();
		}

		static ::System::Single GetCustomProfileAvgTime(::RPG::CustomRP::CustomProfileCounter counterType)
		{
			return ((::System::Single(*)(::RPG::CustomRP::CustomProfileCounter))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GETCUSTOMPROFILEAVGTIME_OFFSET))(counterType);
		}

		static ::System::Single GetCustomProfileAvgTime_1(::System::Int32 index)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GETCUSTOMPROFILEAVGTIME_1_OFFSET))(index);
		}

		static ::System::Boolean EnableProfileQuery(::System::Boolean enable)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_ENABLEPROFILEQUERY_OFFSET))(enable);
		}

		static ::System::Void EnableTransparentQuery(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_ENABLETRANSPARENTQUERY_OFFSET))(enable);
		}

		static ::System::Void EnableUIEffect(::System::Boolean enableUI, ::System::Boolean enableScene)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_ENABLEUIEFFECT_OFFSET))(enableUI, enableScene);
		}

		static ::System::Single GetVisibleRatioGame(::System::UInt32 queryType)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GETVISIBLERATIOGAME_OFFSET))(queryType);
		}

		static ::System::Single GetVisibleRatioScene(::System::UInt32 queryType)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GETVISIBLERATIOSCENE_OFFSET))(queryType);
		}

		static ::System::Single GetWeightedLightOverdraw()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GETWEIGHTEDLIGHTOVERDRAW_OFFSET))();
		}

		static ::System::Single GetTotalProbeOverdraw()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GETTOTALPROBEOVERDRAW_OFFSET))();
		}

		static ::System::Single GetTotalMainLightOverdraw()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GETTOTALMAINLIGHTOVERDRAW_OFFSET))();
		}

		static ::System::Int32 get_LightCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GET_LIGHTCOUNT_OFFSET))();
		}

		static ::System::Void set_LightCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_SET_LIGHTCOUNT_OFFSET))(value);
		}

		static ::System::Int32 get_ClusteredLightCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GET_CLUSTEREDLIGHTCOUNT_OFFSET))();
		}

		static ::System::Void set_ClusteredLightCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_SET_CLUSTEREDLIGHTCOUNT_OFFSET))(value);
		}

		static ::System::Int32 get_StencilLightCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GET_STENCILLIGHTCOUNT_OFFSET))();
		}

		static ::System::Void set_StencilLightCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_SET_STENCILLIGHTCOUNT_OFFSET))(value);
		}

		static ::System::Boolean get_EnableLightRatio()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GET_ENABLELIGHTRATIO_OFFSET))();
		}

		static ::System::Void set_EnableLightRatio(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_SET_ENABLELIGHTRATIO_OFFSET))(value);
		}

		static ::System::Boolean get_DebugUIEnableProfiler()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GET_DEBUGUIENABLEPROFILER_OFFSET))();
		}

		static ::System::Void set_DebugUIEnableProfiler(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_SET_DEBUGUIENABLEPROFILER_OFFSET))(value);
		}

		static ::System::Boolean get_DebugInfoWidgetEnableProfiler()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GET_DEBUGINFOWIDGETENABLEPROFILER_OFFSET))();
		}

		static ::System::Void set_DebugInfoWidgetEnableProfiler(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_SET_DEBUGINFOWIDGETENABLEPROFILER_OFFSET))(value);
		}

		static ::System::Void _UpdateProfilerState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER__UPDATEPROFILERSTATE_OFFSET))();
		}
	};
}
