#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_RESOLUTION_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x608600)
#define UNITYENGINE_RESOLUTION_GET_REFRESHRATE_OFFSET UNITYSDK_OFFSET(0x608310)
#define UNITYENGINE_RESOLUTION_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x608A20)
#define UNITYENGINE_RESOLUTION_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x878E70)
#define UNITYENGINE_RESOLUTION_SET_REFRESHRATE_OFFSET UNITYSDK_OFFSET(0x1C9FE90)
#define UNITYENGINE_RESOLUTION_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x6326D0)
#define UNITYENGINE_RESOLUTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22F5CE0)

namespace UnityEngine
{
	inline static constexpr unsigned int Resolution_TypeDefinitionIndex = 3941;

	struct alignas(4) Resolution
	{
		::System::Int32 m_Width; // 0x10
		::System::Int32 m_Height; // 0x14
		::System::Int32 m_RefreshRate; // 0x18

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_SET_HEIGHT_OFFSET))(this, value);
		}

		::System::Int32 get_refreshRate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_GET_REFRESHRATE_OFFSET))(this);
		}

		::System::Void set_refreshRate(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_SET_REFRESHRATE_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOLUTION_TOSTRING_OFFSET))(this);
		}
	};
}
