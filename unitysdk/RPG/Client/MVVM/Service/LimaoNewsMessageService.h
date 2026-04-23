#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::MVVM::Model { class LimaoNewsMessageSequence; }
namespace RPG::Client::MVVM::Service { class LimaoNewsNetworkService; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE_ADDPENDINGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1696B820)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169646E0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE_GETMESSAGESEQUENCE_OFFSET UNITYSDK_OFFSET(0x1696B0E0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE_GETSHOWMAINENTRANCEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1696B080)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE_HASMAINENTRANCEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1696AF00)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE_REFRESHPENDINGMESSAGES_OFFSET UNITYSDK_OFFSET(0x1696B520)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE_REMOVEPENDINGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1696B8A0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE_SENDFINISHMESSAGE_OFFSET UNITYSDK_OFFSET(0x1696B900)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE__BUILDMESSAGESEQUENCE_OFFSET UNITYSDK_OFFSET(0x1696B1A0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x16963F30)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE__GETSHOWMAINENTRANCEMESSAGEID_OFFSET UNITYSDK_OFFSET(0x1696AF50)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsMessageService_TypeDefinitionIndex = 68492;

	class LimaoNewsMessageService : public ::System::Object
	{
	public:
		::RPG::Client::MVVM::Service::LimaoNewsNetworkService* _NetworkService; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _CurPendingMessageIDs; // 0x18

		::System::Void _ctor(::RPG::Client::MVVM::Service::LimaoNewsNetworkService* networkService)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Service::LimaoNewsNetworkService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE__CTOR_OFFSET))(this, networkService);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean HasMainEntranceMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE_HASMAINENTRANCEMESSAGE_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::LimaoNewsMessageSequence* GetShowMainEntranceMessage()
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsMessageSequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE_GETSHOWMAINENTRANCEMESSAGE_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::LimaoNewsMessageSequence* GetMessageSequence(::System::UInt32 messageID)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsMessageSequence*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE_GETMESSAGESEQUENCE_OFFSET))(this, messageID);
		}

		::System::Void RefreshPendingMessages(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* pendingMessageIDs)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE_REFRESHPENDINGMESSAGES_OFFSET))(this, pendingMessageIDs);
		}

		::System::Void AddPendingMessage(::System::UInt32 messageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE_ADDPENDINGMESSAGE_OFFSET))(this, messageID);
		}

		::System::Void RemovePendingMessage(::System::UInt32 messageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE_REMOVEPENDINGMESSAGE_OFFSET))(this, messageID);
		}

		::System::Void SendFinishMessage(::System::UInt32 messageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE_SENDFINISHMESSAGE_OFFSET))(this, messageID);
		}

		::System::UInt32 _GetShowMainEntranceMessageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE__GETSHOWMAINENTRANCEMESSAGEID_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::LimaoNewsMessageSequence* _BuildMessageSequence(::System::UInt32 beginMessageItemID)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsMessageSequence*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSMESSAGESERVICE__BUILDMESSAGESEQUENCE_OFFSET))(this, beginMessageItemID);
		}
	};
}
