#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_DISPATCHURL_OFFSET UNITYSDK_OFFSET(0x9307980)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9307890)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_LATENCY_OFFSET UNITYSDK_OFFSET(0x9307990)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_SDKENV_OFFSET UNITYSDK_OFFSET(0x9307900)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_URL_OFFSET UNITYSDK_OFFSET(0x93079B0)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SETDISPATCHURL_OFFSET UNITYSDK_OFFSET(0x9306DD0)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SETLATENCY_OFFSET UNITYSDK_OFFSET(0x9307840)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x93078F0)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SET_LATENCY_OFFSET UNITYSDK_OFFSET(0x93079A0)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SET_SDKENV_OFFSET UNITYSDK_OFFSET(0x9307910)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x93079C0)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA__GETCLOUDIPADDRESS_OFFSET UNITYSDK_OFFSET(0x9307760)

namespace RPG::Client
{
	inline static constexpr unsigned int GlobalDispatchData_ServerData_TypeDefinitionIndex = 55145;

	class GlobalDispatchData_ServerData : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::String* _DispatchUrl; // 0x18
		::System::String* _SdkEnv; // 0x20
		::System::String* Title; // 0x28
		::System::String* _Url; // 0x30
		::System::String* _DisplayName; // 0x38
		::System::Int64 _Latency; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA__CTOR_OFFSET))(this);
		}

		::System::Void SetDispatchUrl(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SETDISPATCHURL_OFFSET))(this, url);
		}

		::System::UInt32 _GetCloudIpAddress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA__GETCLOUDIPADDRESS_OFFSET))(this);
		}

		::System::Void SetLatency(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SETLATENCY_OFFSET))(this, value);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_SdkEnv()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_SDKENV_OFFSET))(this);
		}

		::System::Void set_SdkEnv(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SET_SDKENV_OFFSET))(this, value);
		}

		::System::String* get_DispatchUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_DISPATCHURL_OFFSET))(this);
		}

		::System::Int64 get_Latency()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_LATENCY_OFFSET))(this);
		}

		::System::Void set_Latency(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SET_LATENCY_OFFSET))(this, value);
		}

		::System::String* get_Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_URL_OFFSET))(this);
		}
	};
}
