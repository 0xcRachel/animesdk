#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_BINDINGS_NATIVEHEADERATTRIBUTE_SET_HEADER_OFFSET UNITYSDK_OFFSET(0x182A2E10)
#define UNITYENGINE_BINDINGS_NATIVEHEADERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x182A2E20)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeHeaderAttribute_TypeDefinitionIndex = 3690;

	class NativeHeaderAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Header_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* header)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEHEADERATTRIBUTE__CTOR_OFFSET))(this, header);
		}

		::System::Void set_Header(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEHEADERATTRIBUTE_SET_HEADER_OFFSET))(this, value);
		}
	};
}
