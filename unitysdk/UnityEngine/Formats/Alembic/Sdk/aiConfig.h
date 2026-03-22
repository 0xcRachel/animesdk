#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/NormalsMode.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/TangentsMode.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xCCB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_FLIPFACES_OFFSET UNITYSDK_OFFSET(0x2036C90)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_IMPORTLINEPOLYGON_OFFSET UNITYSDK_OFFSET(0x2036CF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_IMPORTPOINTPOLYGON_OFFSET UNITYSDK_OFFSET(0x2036CD0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_IMPORTTRIANGLEPOLYGON_OFFSET UNITYSDK_OFFSET(0x2036D10)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_INTERPOLATESAMPLES_OFFSET UNITYSDK_OFFSET(0x2036CB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_NORMALSMODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xCC90)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_SPLITUNIT_OFFSET UNITYSDK_OFFSET(0x6900)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_SWAPHANDEDNESS_OFFSET UNITYSDK_OFFSET(0x2036C70)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_TANGENTSMODE_OFFSET UNITYSDK_OFFSET(0x1DAE0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_VERTEXMOTIONSCALE_OFFSET UNITYSDK_OFFSET(0x1462BE0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SETDEFAULTS_OFFSET UNITYSDK_OFFSET(0x2036D30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xCCC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_FLIPFACES_OFFSET UNITYSDK_OFFSET(0x2036CA0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_IMPORTLINEPOLYGON_OFFSET UNITYSDK_OFFSET(0x2036D00)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_IMPORTPOINTPOLYGON_OFFSET UNITYSDK_OFFSET(0x2036CE0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_IMPORTTRIANGLEPOLYGON_OFFSET UNITYSDK_OFFSET(0x2036D20)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_INTERPOLATESAMPLES_OFFSET UNITYSDK_OFFSET(0x2036CC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_NORMALSMODE_OFFSET UNITYSDK_OFFSET(0x29250)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xCCA0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_SPLITUNIT_OFFSET UNITYSDK_OFFSET(0x6910)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_SWAPHANDEDNESS_OFFSET UNITYSDK_OFFSET(0x2036C80)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_TANGENTSMODE_OFFSET UNITYSDK_OFFSET(0x1D50)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_VERTEXMOTIONSCALE_OFFSET UNITYSDK_OFFSET(0x1462BF0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiConfig_TypeDefinitionIndex = 34037;

	struct alignas(4) aiConfig
	{
		::UnityEngine::Formats::Alembic::Sdk::NormalsMode _normalsMode_k__BackingField; // 0x10
		::UnityEngine::Formats::Alembic::Sdk::TangentsMode _tangentsMode_k__BackingField; // 0x14
		::System::Single _scaleFactor_k__BackingField; // 0x18
		::System::Single _aspectRatio_k__BackingField; // 0x1C
		::System::Single _vertexMotionScale_k__BackingField; // 0x20
		::System::Int32 _splitUnit_k__BackingField; // 0x24
		::UnityEngine::Formats::Alembic::Sdk::Bool _swapHandedness_k__BackingField; // 0x28
		::UnityEngine::Formats::Alembic::Sdk::Bool _flipFaces_k__BackingField; // 0x29
		::UnityEngine::Formats::Alembic::Sdk::Bool _interpolateSamples_k__BackingField; // 0x2A
		::UnityEngine::Formats::Alembic::Sdk::Bool _importPointPolygon_k__BackingField; // 0x2B
		::UnityEngine::Formats::Alembic::Sdk::Bool _importLinePolygon_k__BackingField; // 0x2C
		::UnityEngine::Formats::Alembic::Sdk::Bool _importTrianglePolygon_k__BackingField; // 0x2D

		::UnityEngine::Formats::Alembic::Sdk::NormalsMode get_normalsMode()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::NormalsMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_NORMALSMODE_OFFSET))(this);
		}

		::System::Void set_normalsMode(::UnityEngine::Formats::Alembic::Sdk::NormalsMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::NormalsMode))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_NORMALSMODE_OFFSET))(this, value);
		}

		::UnityEngine::Formats::Alembic::Sdk::TangentsMode get_tangentsMode()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::TangentsMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_TANGENTSMODE_OFFSET))(this);
		}

		::System::Void set_tangentsMode(::UnityEngine::Formats::Alembic::Sdk::TangentsMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::TangentsMode))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_TANGENTSMODE_OFFSET))(this, value);
		}

		::System::Single get_scaleFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_SCALEFACTOR_OFFSET))(this);
		}

		::System::Void set_scaleFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_SCALEFACTOR_OFFSET))(this, value);
		}

		::System::Single get_aspectRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_ASPECTRATIO_OFFSET))(this);
		}

		::System::Void set_aspectRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_ASPECTRATIO_OFFSET))(this, value);
		}

		::System::Single get_vertexMotionScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_VERTEXMOTIONSCALE_OFFSET))(this);
		}

		::System::Void set_vertexMotionScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_VERTEXMOTIONSCALE_OFFSET))(this, value);
		}

		::System::Int32 get_splitUnit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_SPLITUNIT_OFFSET))(this);
		}

		::System::Void set_splitUnit(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_SPLITUNIT_OFFSET))(this, value);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_swapHandedness()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_SWAPHANDEDNESS_OFFSET))(this);
		}

		::System::Void set_swapHandedness(::UnityEngine::Formats::Alembic::Sdk::Bool value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_SWAPHANDEDNESS_OFFSET))(this, value);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_flipFaces()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_FLIPFACES_OFFSET))(this);
		}

		::System::Void set_flipFaces(::UnityEngine::Formats::Alembic::Sdk::Bool value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_FLIPFACES_OFFSET))(this, value);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_interpolateSamples()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_INTERPOLATESAMPLES_OFFSET))(this);
		}

		::System::Void set_interpolateSamples(::UnityEngine::Formats::Alembic::Sdk::Bool value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_INTERPOLATESAMPLES_OFFSET))(this, value);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_importPointPolygon()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_IMPORTPOINTPOLYGON_OFFSET))(this);
		}

		::System::Void set_importPointPolygon(::UnityEngine::Formats::Alembic::Sdk::Bool value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_IMPORTPOINTPOLYGON_OFFSET))(this, value);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_importLinePolygon()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_IMPORTLINEPOLYGON_OFFSET))(this);
		}

		::System::Void set_importLinePolygon(::UnityEngine::Formats::Alembic::Sdk::Bool value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_IMPORTLINEPOLYGON_OFFSET))(this, value);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_importTrianglePolygon()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_IMPORTTRIANGLEPOLYGON_OFFSET))(this);
		}

		::System::Void set_importTrianglePolygon(::UnityEngine::Formats::Alembic::Sdk::Bool value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_IMPORTTRIANGLEPOLYGON_OFFSET))(this, value);
		}

		::System::Void SetDefaults()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SETDEFAULTS_OFFSET))(this);
		}
	};
}
