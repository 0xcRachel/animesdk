#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class IMsgFactory; }
namespace RPG::CustomRP { class IRPMessage; }
namespace RPG::CustomRP { class IRPMsgCreator; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CUSTOMRP_MSGCALLBACK_ADDMSGCREATOR_OFFSET UNITYSDK_OFFSET(0x15A6AE00)
#define RPG_CUSTOMRP_MSGCALLBACK_CLEAR_OFFSET UNITYSDK_OFFSET(0x15A6B270)
#define RPG_CUSTOMRP_MSGCALLBACK_FINDMSGCREATOR_OFFSET UNITYSDK_OFFSET(0x15A59E00)
#define RPG_CUSTOMRP_MSGCALLBACK_GET_MSGCB_OFFSET UNITYSDK_OFFSET(0x15A5B150)
#define RPG_CUSTOMRP_MSGCALLBACK_PROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x15A6ADF0)
#define RPG_CUSTOMRP_MSGCALLBACK_PROCESS_OFFSET UNITYSDK_OFFSET(0x15A5B4C0)
#define RPG_CUSTOMRP_MSGCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x15A59B90)
#define RPG_CUSTOMRP_MSGCALLBACK__ONREADMESSAGE_OFFSET UNITYSDK_OFFSET(0x15A6B030)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MsgCallback_TypeDefinitionIndex = 35286;

	class MsgCallback : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::IRPMsgCreator*>* _messageCreators; // 0x10
		::System::Collections::Generic::List_1<::RPG::CustomRP::IRPMessage*>* _messagesToProcess; // 0x18
		::RPG::CustomRP::IMsgFactory* _msgFactory; // 0x20
		::System::Action_1<::RPG::CustomRP::IRPMessage*>* _msgCb; // 0x28
		::System::Boolean _DelayProcess; // 0x30

		::System::Void _ctor(::System::Boolean delayProcess, ::RPG::CustomRP::IMsgFactory* msgFactory)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::CustomRP::IMsgFactory*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MSGCALLBACK__CTOR_OFFSET))(this, delayProcess, msgFactory);
		}

		::System::Void ProcessMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MSGCALLBACK_PROCESSMESSAGE_OFFSET))(this);
		}

		::System::Void AddMsgCreator(::RPG::CustomRP::IRPMsgCreator* creator)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMsgCreator*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MSGCALLBACK_ADDMSGCREATOR_OFFSET))(this, creator);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MSGCALLBACK_PROCESS_OFFSET))(this);
		}

		::RPG::CustomRP::IRPMsgCreator* FindMsgCreator(::System::String* t)
		{
			return ((::RPG::CustomRP::IRPMsgCreator*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MSGCALLBACK_FINDMSGCREATOR_OFFSET))(this, t);
		}

		::System::Action_1<::RPG::CustomRP::IRPMessage*>* get_MsgCb()
		{
			return ((::System::Action_1<::RPG::CustomRP::IRPMessage*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MSGCALLBACK_GET_MSGCB_OFFSET))(this);
		}

		::System::Void _OnReadMessage(::RPG::CustomRP::IRPMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMessage*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MSGCALLBACK__ONREADMESSAGE_OFFSET))(this, message);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MSGCALLBACK_CLEAR_OFFSET))(this);
		}
	};
}
