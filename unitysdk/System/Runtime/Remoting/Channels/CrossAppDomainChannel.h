#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_CREATEMESSAGESINK_OFFSET UNITYSDK_OFFSET(0x18F61C30)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_GET_CHANNELDATA_OFFSET UNITYSDK_OFFSET(0x18F64340)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_GET_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0x18F622E0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_GET_CHANNELPRIORITY_OFFSET UNITYSDK_OFFSET(0x18F62320)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_REGISTERCROSSAPPDOMAINCHANNEL_OFFSET UNITYSDK_OFFSET(0x18F64570)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_STARTLISTENING_OFFSET UNITYSDK_OFFSET(0x18F62330)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F64A60)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18F64700)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int CrossAppDomainChannel_TypeDefinitionIndex = 1256;

	class CrossAppDomainChannel : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CrossAppDomainChannel_TypeDefinitionIndex)->GetStaticField(0x86A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterCrossAppDomainChannel()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_REGISTERCROSSAPPDOMAINCHANNEL_OFFSET))();
		}

		::System::String* get_ChannelName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_GET_CHANNELNAME_OFFSET))(this);
		}

		::System::Int32 get_ChannelPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_GET_CHANNELPRIORITY_OFFSET))(this);
		}

		::System::Object* get_ChannelData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_GET_CHANNELDATA_OFFSET))(this);
		}

		::System::Void StartListening(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_STARTLISTENING_OFFSET))(this, data);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* CreateMessageSink(::System::String* url, ::System::Object* data, ::System::String*& uri)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID, ::System::String*, ::System::Object*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_CREATEMESSAGESINK_OFFSET))(this, url, data, uri);
		}
	};
}
