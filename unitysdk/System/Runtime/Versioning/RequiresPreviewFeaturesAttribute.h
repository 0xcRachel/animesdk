#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_VERSIONING_REQUIRESPREVIEWFEATURESATTRIBUTE_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x156AD3F0)
#define SYSTEM_RUNTIME_VERSIONING_REQUIRESPREVIEWFEATURESATTRIBUTE_GET_URL_OFFSET UNITYSDK_OFFSET(0x156AD400)
#define SYSTEM_RUNTIME_VERSIONING_REQUIRESPREVIEWFEATURESATTRIBUTE_SET_URL_OFFSET UNITYSDK_OFFSET(0x156AD410)
#define SYSTEM_RUNTIME_VERSIONING_REQUIRESPREVIEWFEATURESATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x156AD3E0)
#define SYSTEM_RUNTIME_VERSIONING_REQUIRESPREVIEWFEATURESATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156AD3D0)

namespace System::Runtime::Versioning
{
	inline static constexpr unsigned int RequiresPreviewFeaturesAttribute_TypeDefinitionIndex = 9858;

	class RequiresPreviewFeaturesAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Url_k__BackingField; // 0x10
		::System::String* _Message_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_REQUIRESPREVIEWFEATURESATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_REQUIRESPREVIEWFEATURESATTRIBUTE__CTOR_1_OFFSET))(this, message);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_REQUIRESPREVIEWFEATURESATTRIBUTE_GET_MESSAGE_OFFSET))(this);
		}

		::System::String* get_Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_REQUIRESPREVIEWFEATURESATTRIBUTE_GET_URL_OFFSET))(this);
		}

		::System::Void set_Url(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_REQUIRESPREVIEWFEATURESATTRIBUTE_SET_URL_OFFSET))(this, value);
		}
	};
}
