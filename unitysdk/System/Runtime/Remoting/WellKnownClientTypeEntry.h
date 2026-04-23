#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/TypeEntry.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_GET_APPLICATIONURL_OFFSET UNITYSDK_OFFSET(0x17AE14E0)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x17AE14F0)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_GET_OBJECTURL_OFFSET UNITYSDK_OFFSET(0x17AE1500)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AE1510)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE13C0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int WellKnownClientTypeEntry_TypeDefinitionIndex = 1221;

	class WellKnownClientTypeEntry : public ::System::Runtime::Remoting::TypeEntry
	{
	public:
		::System::String* obj_url; // 0x20
		::System::Type* obj_type; // 0x28
		::System::String* app_url; // 0x30

		::System::Void _ctor(::System::String* typeName, ::System::String* assemblyName, ::System::String* objectUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY__CTOR_OFFSET))(this, typeName, assemblyName, objectUrl);
		}

		::System::String* get_ApplicationUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_GET_APPLICATIONURL_OFFSET))(this);
		}

		::System::Type* get_ObjectType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_GET_OBJECTTYPE_OFFSET))(this);
		}

		::System::String* get_ObjectUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_GET_OBJECTURL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_TOSTRING_OFFSET))(this);
		}
	};
}
