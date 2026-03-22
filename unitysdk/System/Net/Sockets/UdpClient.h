#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IPAddress; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::Sockets { class Socket; }

#define SYSTEM_NET_SOCKETS_UDPCLIENT_CHECKFORBROADCAST_OFFSET UNITYSDK_OFFSET(0x17F04500)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_CLOSE_OFFSET UNITYSDK_OFFSET(0x17F041B0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_CONNECT_OFFSET UNITYSDK_OFFSET(0x17F04370)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_CREATECLIENTSOCKET_OFFSET UNITYSDK_OFFSET(0x17F04110)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x17F042E0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F042C0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_FREERESOURCES_OFFSET UNITYSDK_OFFSET(0x17F041D0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_GET_CLIENT_OFFSET UNITYSDK_OFFSET(0x17F04170)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SEND_OFFSET UNITYSDK_OFFSET(0x17F045B0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SET_CLIENT_OFFSET UNITYSDK_OFFSET(0x17F04180)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SET_ENABLEBROADCAST_OFFSET UNITYSDK_OFFSET(0x17F04190)
#define SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F03FF0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17F03F50)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int UdpClient_TypeDefinitionIndex = 2895;

	class UdpClient : public ::System::Object
	{
	public:
		::System::Net::Sockets::Socket* m_ClientSocket; // 0x10
		::Il2CppArray<::System::Byte>* m_Buffer; // 0x18
		::System::Boolean m_IsBroadcast; // 0x20
		::System::Boolean m_CleanedUp; // 0x21
		::System::Boolean m_Active; // 0x22
		::System::Net::Sockets::AddressFamily m_Family; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::Sockets::AddressFamily family)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::AddressFamily))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_1_OFFSET))(this, family);
		}

		::System::Net::Sockets::Socket* get_Client()
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_GET_CLIENT_OFFSET))(this);
		}

		::System::Void set_Client(::System::Net::Sockets::Socket* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SET_CLIENT_OFFSET))(this, value);
		}

		::System::Void set_EnableBroadcast(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SET_ENABLEBROADCAST_OFFSET))(this, value);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_CLOSE_OFFSET))(this);
		}

		::System::Void FreeResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_FREERESOURCES_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Connect(::System::Net::IPEndPoint* endPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_CONNECT_OFFSET))(this, endPoint);
		}

		::System::Void CheckForBroadcast(::System::Net::IPAddress* ipAddress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_CHECKFORBROADCAST_OFFSET))(this, ipAddress);
		}

		::System::Int32 Send(::Il2CppArray<::System::Byte>* dgram, ::System::Int32 bytes)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SEND_OFFSET))(this, dgram, bytes);
		}

		::System::Void createClientSocket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_CREATECLIENTSOCKET_OFFSET))(this);
		}
	};
}
