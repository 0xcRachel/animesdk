#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/RegistryHive.h"
#include "unitysdk/System/MarshalByRefObject.h"

namespace Microsoft::Win32 { class IRegistryApi; }
namespace Microsoft::Win32::SafeHandles { class SafeRegistryHandle; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class IOException; }

#define MICROSOFT_WIN32_REGISTRYKEY_ASSERTKEYNAMELENGTH_OFFSET UNITYSDK_OFFSET(0x166AFB00)
#define MICROSOFT_WIN32_REGISTRYKEY_ASSERTKEYSTILLVALID_OFFSET UNITYSDK_OFFSET(0x166AF8A0)
#define MICROSOFT_WIN32_REGISTRYKEY_CLOSE_OFFSET UNITYSDK_OFFSET(0x166AF510)
#define MICROSOFT_WIN32_REGISTRYKEY_CREATEMARKEDFORDELETIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x166B0010)
#define MICROSOFT_WIN32_REGISTRYKEY_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x166AFF00)
#define MICROSOFT_WIN32_REGISTRYKEY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166AF490)
#define MICROSOFT_WIN32_REGISTRYKEY_FLUSH_OFFSET UNITYSDK_OFFSET(0x166AF630)
#define MICROSOFT_WIN32_REGISTRYKEY_GETHIVENAME_OFFSET UNITYSDK_OFFSET(0x166AF350)
#define MICROSOFT_WIN32_REGISTRYKEY_GETSUBKEYNAMES_OFFSET UNITYSDK_OFFSET(0x166AFCB0)
#define MICROSOFT_WIN32_REGISTRYKEY_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x166AFB60)
#define MICROSOFT_WIN32_REGISTRYKEY_GETVALUE_OFFSET UNITYSDK_OFFSET(0x166AFB50)
#define MICROSOFT_WIN32_REGISTRYKEY_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x166AF720)
#define MICROSOFT_WIN32_REGISTRYKEY_GET_HIVE_OFFSET UNITYSDK_OFFSET(0x166ACE00)
#define MICROSOFT_WIN32_REGISTRYKEY_GET_INTERNALHANDLE_OFFSET UNITYSDK_OFFSET(0x166AFEF0)
#define MICROSOFT_WIN32_REGISTRYKEY_GET_ISROOT_OFFSET UNITYSDK_OFFSET(0x166ACDF0)
#define MICROSOFT_WIN32_REGISTRYKEY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x166AF620)
#define MICROSOFT_WIN32_REGISTRYKEY_ISEQUALS_OFFSET UNITYSDK_OFFSET(0x166AF400)
#define MICROSOFT_WIN32_REGISTRYKEY_OPENSUBKEY_1_OFFSET UNITYSDK_OFFSET(0x166AF960)
#define MICROSOFT_WIN32_REGISTRYKEY_OPENSUBKEY_OFFSET UNITYSDK_OFFSET(0x166AF950)
#define MICROSOFT_WIN32_REGISTRYKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x166AFDD0)
#define MICROSOFT_WIN32_REGISTRYKEY__CCTOR_OFFSET UNITYSDK_OFFSET(0x166AF260)
#define MICROSOFT_WIN32_REGISTRYKEY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x166AF2D0)
#define MICROSOFT_WIN32_REGISTRYKEY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x166AB3F0)
#define MICROSOFT_WIN32_REGISTRYKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x166AF1E0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int RegistryKey_TypeDefinitionIndex = 104;

	class RegistryKey : public ::System::MarshalByRefObject
	{
	public:
		static ::Microsoft::Win32::IRegistryApi** StaticGet_RegistryApi()
		{
			return (::Microsoft::Win32::IRegistryApi**)Il2CppClass::FromTypeDefinitionIndex(RegistryKey_TypeDefinitionIndex)->GetStaticField(0x1740);
		}
		::System::Object* handle; // 0x18
		::System::Object* hive; // 0x20
		::System::String* qname; // 0x28
		::Microsoft::Win32::SafeHandles::SafeRegistryHandle* safe_handle; // 0x30
		::System::Boolean isRemoteRoot; // 0x38
		::System::Boolean isWritable; // 0x39

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Microsoft::Win32::RegistryHive hiveId)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryHive))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY__CTOR_OFFSET))(this, hiveId);
		}

		::System::Void _ctor_1(::Microsoft::Win32::RegistryHive hiveId, ::System::IntPtr keyHandle, ::System::Boolean remoteRoot)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryHive, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY__CTOR_1_OFFSET))(this, hiveId, keyHandle, remoteRoot);
		}

		::System::Void _ctor_2(::System::Object* data, ::System::String* keyName, ::System::Boolean writable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY__CTOR_2_OFFSET))(this, data, keyName, writable);
		}

		static ::System::Boolean IsEquals(::Microsoft::Win32::RegistryKey* a, ::Microsoft::Win32::RegistryKey* b)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::RegistryKey*, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_ISEQUALS_OFFSET))(a, b);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_DISPOSE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GET_NAME_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_FLUSH_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_CLOSE_OFFSET))(this);
		}

		::Microsoft::Win32::SafeHandles::SafeRegistryHandle* get_Handle()
		{
			return ((::Microsoft::Win32::SafeHandles::SafeRegistryHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GET_HANDLE_OFFSET))(this);
		}

		::Microsoft::Win32::RegistryKey* OpenSubKey(::System::String* name)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_OPENSUBKEY_OFFSET))(this, name);
		}

		::Microsoft::Win32::RegistryKey* OpenSubKey_1(::System::String* name, ::System::Boolean writable)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_OPENSUBKEY_1_OFFSET))(this, name, writable);
		}

		::System::Object* GetValue(::System::String* name)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETVALUE_OFFSET))(this, name);
		}

		::System::Object* GetValue_1(::System::String* name, ::System::Object* defaultValue)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETVALUE_1_OFFSET))(this, name, defaultValue);
		}

		::Il2CppArray<::System::String*>* GetSubKeyNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETSUBKEYNAMES_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean get_IsRoot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GET_ISROOT_OFFSET))(this);
		}

		::Microsoft::Win32::RegistryHive get_Hive()
		{
			return ((::Microsoft::Win32::RegistryHive(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GET_HIVE_OFFSET))(this);
		}

		::System::Object* get_InternalHandle()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GET_INTERNALHANDLE_OFFSET))(this);
		}

		::System::Void AssertKeyStillValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_ASSERTKEYSTILLVALID_OFFSET))(this);
		}

		::System::Void AssertKeyNameLength(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_ASSERTKEYNAMELENGTH_OFFSET))(this, name);
		}

		static ::System::String* DecodeString(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_DECODESTRING_OFFSET))(data);
		}

		static ::System::IO::IOException* CreateMarkedForDeletionException()
		{
			return ((::System::IO::IOException*(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_CREATEMARKEDFORDELETIONEXCEPTION_OFFSET))();
		}

		static ::System::String* GetHiveName(::Microsoft::Win32::RegistryHive hive)
		{
			return ((::System::String*(*)(::Microsoft::Win32::RegistryHive))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETHIVENAME_OFFSET))(hive);
		}
	};
}
