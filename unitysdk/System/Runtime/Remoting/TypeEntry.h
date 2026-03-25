#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_REMOTING_TYPEENTRY_GET_ASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x163DC400)
#define SYSTEM_RUNTIME_REMOTING_TYPEENTRY_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x163DC420)
#define SYSTEM_RUNTIME_REMOTING_TYPEENTRY_SET_ASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x163DC410)
#define SYSTEM_RUNTIME_REMOTING_TYPEENTRY_SET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x163DC430)
#define SYSTEM_RUNTIME_REMOTING_TYPEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x163DC3F0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int TypeEntry_TypeDefinitionIndex = 1217;

	class TypeEntry : public ::System::Object
	{
	public:
		::System::String* type_name; // 0x10
		::System::String* assembly_name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEENTRY__CTOR_OFFSET))(this);
		}

		::System::String* get_AssemblyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEENTRY_GET_ASSEMBLYNAME_OFFSET))(this);
		}

		::System::Void set_AssemblyName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEENTRY_SET_ASSEMBLYNAME_OFFSET))(this, value);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEENTRY_GET_TYPENAME_OFFSET))(this);
		}

		::System::Void set_TypeName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEENTRY_SET_TYPENAME_OFFSET))(this, value);
		}
	};
}
