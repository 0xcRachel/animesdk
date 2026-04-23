#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x22CC350)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_FOCALLENGTH_OFFSET UNITYSDK_OFFSET(0x608BD0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_LENSSHIFT_OFFSET UNITYSDK_OFFSET(0x58FAA0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x878E90)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_SENSORSIZE_OFFSET UNITYSDK_OFFSET(0x608BA0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x608B40)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x22E4650)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_FOCALLENGTH_OFFSET UNITYSDK_OFFSET(0x22571B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_LENSSHIFT_OFFSET UNITYSDK_OFFSET(0x878E80)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x878EA0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_SENSORSIZE_OFFSET UNITYSDK_OFFSET(0x6163C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x65A180)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int CameraData_TypeDefinitionIndex = 40834;

	struct alignas(4) CameraData
	{
		::UnityEngine::Formats::Alembic::Sdk::Bool _visibility_k__BackingField; // 0x10
		::System::Single _focalLength_k__BackingField; // 0x14
		::UnityEngine::Vector2 _sensorSize_k__BackingField; // 0x18
		::UnityEngine::Vector2 _lensShift_k__BackingField; // 0x20
		::System::Single _nearClipPlane_k__BackingField; // 0x28
		::System::Single _farClipPlane_k__BackingField; // 0x2C

		::UnityEngine::Formats::Alembic::Sdk::Bool get_visibility()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_VISIBILITY_OFFSET))(this);
		}

		::System::Void set_visibility(::UnityEngine::Formats::Alembic::Sdk::Bool value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_VISIBILITY_OFFSET))(this, value);
		}

		::System::Single get_focalLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_FOCALLENGTH_OFFSET))(this);
		}

		::System::Void set_focalLength(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_FOCALLENGTH_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_sensorSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_SENSORSIZE_OFFSET))(this);
		}

		::System::Void set_sensorSize(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_SENSORSIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_lensShift()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_LENSSHIFT_OFFSET))(this);
		}

		::System::Void set_lensShift(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_LENSSHIFT_OFFSET))(this, value);
		}

		::System::Single get_nearClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_NEARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_nearClipPlane(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_NEARCLIPPLANE_OFFSET))(this, value);
		}

		::System::Single get_farClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_FARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_farClipPlane(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_FARCLIPPLANE_OFFSET))(this, value);
		}
	};
}
