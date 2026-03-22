#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/TimeSamplingType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/TransformType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x17F8BFD0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x17F8C050)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SWAPFACES_OFFSET UNITYSDK_OFFSET(0x17F8C030)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SWAPHANDEDNESS_OFFSET UNITYSDK_OFFSET(0x17F8C010)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_TIMESAMPLINGTYPE_OFFSET UNITYSDK_OFFSET(0x17F8BFB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_TRANFORMTYPE_OFFSET UNITYSDK_OFFSET(0x17F8BFF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x17F8BFE0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x17F8C060)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SWAPFACES_OFFSET UNITYSDK_OFFSET(0x17F8C040)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SWAPHANDEDNESS_OFFSET UNITYSDK_OFFSET(0x17F8C020)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_TIMESAMPLINGTYPE_OFFSET UNITYSDK_OFFSET(0x17F8BFC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_TRANFORMTYPE_OFFSET UNITYSDK_OFFSET(0x17F8C000)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8C070)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int AlembicExportOptions_TypeDefinitionIndex = 34014;

	class AlembicExportOptions : public ::System::Object
	{
	public:
		::UnityEngine::Formats::Alembic::Sdk::TimeSamplingType timeSamplingType; // 0x10
		::System::Single frameRate; // 0x14
		::UnityEngine::Formats::Alembic::Sdk::TransformType xformType; // 0x18
		::UnityEngine::Formats::Alembic::Sdk::Bool swapHandedness; // 0x1C
		::UnityEngine::Formats::Alembic::Sdk::Bool swapFaces; // 0x1D
		::System::Single scaleFactor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS__CTOR_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::TimeSamplingType get_TimeSamplingType()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::TimeSamplingType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_TIMESAMPLINGTYPE_OFFSET))(this);
		}

		::System::Void set_TimeSamplingType(::UnityEngine::Formats::Alembic::Sdk::TimeSamplingType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::TimeSamplingType))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_TIMESAMPLINGTYPE_OFFSET))(this, value);
		}

		::System::Single get_FrameRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_FRAMERATE_OFFSET))(this);
		}

		::System::Void set_FrameRate(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_FRAMERATE_OFFSET))(this, value);
		}

		::UnityEngine::Formats::Alembic::Sdk::TransformType get_TranformType()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::TransformType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_TRANFORMTYPE_OFFSET))(this);
		}

		::System::Void set_TranformType(::UnityEngine::Formats::Alembic::Sdk::TransformType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::TransformType))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_TRANFORMTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_SwapHandedness()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SWAPHANDEDNESS_OFFSET))(this);
		}

		::System::Void set_SwapHandedness(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SWAPHANDEDNESS_OFFSET))(this, value);
		}

		::System::Boolean get_SwapFaces()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SWAPFACES_OFFSET))(this);
		}

		::System::Void set_SwapFaces(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SWAPFACES_OFFSET))(this, value);
		}

		::System::Single get_ScaleFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SCALEFACTOR_OFFSET))(this);
		}

		::System::Void set_ScaleFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SCALEFACTOR_OFFSET))(this, value);
		}
	};
}
