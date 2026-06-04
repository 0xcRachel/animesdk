#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/IKCPChannel.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_AuthInfo.h"

namespace System::IO { class MemoryStream; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::Sockets { class Socket; }

#define MIHOYO_SDK_KCPCHANNEL_CONNECT_OFFSET UNITYSDK_OFFSET(0x193A4EE0)
#define MIHOYO_SDK_KCPCHANNEL_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x193A4A90)
#define MIHOYO_SDK_KCPCHANNEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x193A49D0)
#define MIHOYO_SDK_KCPCHANNEL_GET_M_NREMOTECONV_OFFSET UNITYSDK_OFFSET(0x193A45B0)
#define MIHOYO_SDK_KCPCHANNEL_GET_M_NUSERDATA_OFFSET UNITYSDK_OFFSET(0x193A4590)
#define MIHOYO_SDK_KCPCHANNEL_HANDLECONNNECT_OFFSET UNITYSDK_OFFSET(0x193A4700)
#define MIHOYO_SDK_KCPCHANNEL_HANDLERECV_OFFSET UNITYSDK_OFFSET(0x193A5810)
#define MIHOYO_SDK_KCPCHANNEL_HANDLETIMEOUT_OFFSET UNITYSDK_OFFSET(0x193A5400)
#define MIHOYO_SDK_KCPCHANNEL_KCPOUTPUT_OFFSET UNITYSDK_OFFSET(0x193A44A0)
#define MIHOYO_SDK_KCPCHANNEL_KCPSEND_OFFSET UNITYSDK_OFFSET(0x193A63F0)
#define MIHOYO_SDK_KCPCHANNEL_OUTPUT_OFFSET UNITYSDK_OFFSET(0x193A6010)
#define MIHOYO_SDK_KCPCHANNEL_SEND_OFFSET UNITYSDK_OFFSET(0x193A5360)
#define MIHOYO_SDK_KCPCHANNEL_SETOUTPUT_OFFSET UNITYSDK_OFFSET(0x193A4BB0)
#define MIHOYO_SDK_KCPCHANNEL_SET_M_NREMOTECONV_OFFSET UNITYSDK_OFFSET(0x193A45C0)
#define MIHOYO_SDK_KCPCHANNEL_SET_M_NUSERDATA_OFFSET UNITYSDK_OFFSET(0x193A45A0)
#define MIHOYO_SDK_KCPCHANNEL_START_OFFSET UNITYSDK_OFFSET(0x193A6000)
#define MIHOYO_SDK_KCPCHANNEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x193A54E0)
#define MIHOYO_SDK_KCPCHANNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x193A45D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KCPChannel_TypeDefinitionIndex = 43533;

	class KCPChannel : public ::MiHoYo::SDK::IKCPChannel
	{
	public:
		::System::Net::IPEndPoint* m_remoteEndPoint; // 0x58
		::System::IO::MemoryStream* m_kcpStream; // 0x60
		::System::Net::Sockets::Socket* m_socketUdp; // 0x68
		::System::Int32 m_nMtu; // 0x70
		::System::Int32 m_nTimeoutMillisec; // 0x74
		::System::UInt32 _m_nRemoteConv_k__BackingField; // 0x78
		::System::Boolean m_bIsConnected; // 0x7C
		::System::UInt32 _m_nUserData_k__BackingField; // 0x80
		::System::IntPtr m_kcpNative; // 0x88
		::System::UInt32 m_nLastRecvTime; // 0x90
		::System::Int32 m_nWndSize; // 0x94

		::System::Void _ctor(::System::UInt32 a1, ::System::Net::Sockets::Socket* a2, ::System::Net::IPEndPoint* a3, ::MiHoYo::SDK::SecurityTunnel_AuthInfo a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Net::Sockets::Socket*, ::System::Net::IPEndPoint*, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_m_nUserData()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_GET_M_NUSERDATA_OFFSET))(this);
		}

		::System::Void set_m_nUserData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_SET_M_NUSERDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_m_nRemoteConv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_GET_M_NREMOTECONV_OFFSET))(this);
		}

		::System::Void set_m_nRemoteConv(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_SET_M_NREMOTECONV_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_DISPOSE_OFFSET))(this);
		}

		::System::Void HandleConnnect(::System::UInt32 a1, ::MiHoYo::SDK::SecurityTunnel_AuthInfo a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_HANDLECONNNECT_OFFSET))(this, a1, a2);
		}

		::System::Void Connect(::MiHoYo::SDK::SecurityTunnel_AuthInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_CONNECT_OFFSET))(this, a1);
		}

		::System::Void Disconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_DISCONNECT_OFFSET))(this);
		}

		::System::Boolean HandleTimeout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_HANDLETIMEOUT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_UPDATE_OFFSET))(this);
		}

		::System::Void HandleRecv(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_HANDLERECV_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_START_OFFSET))(this);
		}

		::System::Void Output(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_OUTPUT_OFFSET))(this, a1, a2);
		}

		::System::Void SetOutput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_SETOUTPUT_OFFSET))(this);
		}

		static ::System::Int32 KcpOutput(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3, ::System::IntPtr a4)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_KCPOUTPUT_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void KcpSend(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_KCPSEND_OFFSET))(this, a1, a2);
		}

		::System::Void Send(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_SEND_OFFSET))(this, a1, a2, a3);
		}
	};
}
