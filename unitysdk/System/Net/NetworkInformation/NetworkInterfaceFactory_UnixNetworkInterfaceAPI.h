#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceFactory.h"

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_UNIXNETWORKINTERFACEAPI_FREEIFADDRS_OFFSET UNITYSDK_OFFSET(0x17EE6400)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_UNIXNETWORKINTERFACEAPI_GETIFADDRS_OFFSET UNITYSDK_OFFSET(0x17EE6500)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_UNIXNETWORKINTERFACEAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE7400)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInterfaceFactory_UnixNetworkInterfaceAPI_TypeDefinitionIndex = 2934;

	class NetworkInterfaceFactory_UnixNetworkInterfaceAPI : public ::System::Net::NetworkInformation::NetworkInterfaceFactory
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_UNIXNETWORKINTERFACEAPI__CTOR_OFFSET))(this);
		}

		static ::System::Int32 getifaddrs(::System::IntPtr& ifap)
		{
			return ((::System::Int32(*)(::System::IntPtr&))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_UNIXNETWORKINTERFACEAPI_GETIFADDRS_OFFSET))(ifap);
		}

		static ::System::Void freeifaddrs(::System::IntPtr ifap)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_UNIXNETWORKINTERFACEAPI_FREEIFADDRS_OFFSET))(ifap);
		}
	};
}
