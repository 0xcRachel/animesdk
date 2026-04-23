#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_NET_CFOBJECT_CFRELEASE_OFFSET UNITYSDK_OFFSET(0x1845D6C0)
#define MONO_NET_CFOBJECT_CFRETAIN_OFFSET UNITYSDK_OFFSET(0x1845D640)
#define MONO_NET_CFOBJECT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18459FA0)
#define MONO_NET_CFOBJECT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1845D7C0)
#define MONO_NET_CFOBJECT_DLCLOSE_OFFSET UNITYSDK_OFFSET(0x184584B0)
#define MONO_NET_CFOBJECT_DLOPEN_OFFSET UNITYSDK_OFFSET(0x18458370)
#define MONO_NET_CFOBJECT_DLSYM_OFFSET UNITYSDK_OFFSET(0x1845D3E0)
#define MONO_NET_CFOBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1845D5B0)
#define MONO_NET_CFOBJECT_GETCFOBJECTHANDLE_OFFSET UNITYSDK_OFFSET(0x1845D480)
#define MONO_NET_CFOBJECT_GETINDIRECT_OFFSET UNITYSDK_OFFSET(0x18458410)
#define MONO_NET_CFOBJECT_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1845D620)
#define MONO_NET_CFOBJECT_RELEASE_OFFSET UNITYSDK_OFFSET(0x1845D740)
#define MONO_NET_CFOBJECT_RETAIN_OFFSET UNITYSDK_OFFSET(0x1845D530)
#define MONO_NET_CFOBJECT_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1845D630)
#define MONO_NET_CFOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x184580B0)

namespace Mono::Net
{
	inline static constexpr unsigned int CFObject_TypeDefinitionIndex = 2394;

	class CFObject : public ::System::Object
	{
	public:
		::System::IntPtr _Handle_k__BackingField; // 0x10

		::System::Void _ctor(::System::IntPtr handle, ::System::Boolean own)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT__CTOR_OFFSET))(this, handle, own);
		}

		static ::System::IntPtr dlopen(::System::String* path, ::System::Int32 mode)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_DLOPEN_OFFSET))(path, mode);
		}

		static ::System::IntPtr dlsym(::System::IntPtr handle, ::System::String* symbol)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_DLSYM_OFFSET))(handle, symbol);
		}

		static ::System::Void dlclose(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_DLCLOSE_OFFSET))(handle);
		}

		static ::System::IntPtr GetIndirect(::System::IntPtr handle, ::System::String* symbol)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_GETINDIRECT_OFFSET))(handle, symbol);
		}

		static ::System::IntPtr GetCFObjectHandle(::System::IntPtr handle, ::System::String* symbol)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_GETCFOBJECTHANDLE_OFFSET))(handle, symbol);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_FINALIZE_OFFSET))(this);
		}

		::System::IntPtr get_Handle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_GET_HANDLE_OFFSET))(this);
		}

		::System::Void set_Handle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_SET_HANDLE_OFFSET))(this, value);
		}

		static ::System::IntPtr CFRetain(::System::IntPtr handle)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_CFRETAIN_OFFSET))(handle);
		}

		::System::Void Retain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_RETAIN_OFFSET))(this);
		}

		static ::System::Void CFRelease(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_CFRELEASE_OFFSET))(handle);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_RELEASE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_DISPOSE_1_OFFSET))(this);
		}
	};
}
