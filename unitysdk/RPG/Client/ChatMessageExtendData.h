#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503.h"
#include "unitysdk/System/Object.h"

class Class_1_8F6A0A429C70D49A;
namespace RPG::GameCore { class ChatInviteConfigRow; }

#define RPG_CLIENT_CHATMESSAGEEXTENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x8EBB5B0)
#define RPG_CLIENT_CHATMESSAGEEXTENDDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x8EBBAB0)
#define RPG_CLIENT_CHATMESSAGEEXTENDDATA_GET_INVITECONFIGROW_OFFSET UNITYSDK_OFFSET(0x8EBBA50)
#define RPG_CLIENT_CHATMESSAGEEXTENDDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x8EBB8D0)
#define RPG_CLIENT_CHATMESSAGEEXTENDDATA_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x8EBBAC0)
#define RPG_CLIENT_CHATMESSAGEEXTENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8EBB5A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatMessageExtendData_TypeDefinitionIndex = 50174;

	class ChatMessageExtendData : public ::System::Object
	{
	public:
		::System::UInt32 _CreateTimeStamp; // 0x10
		::System::UInt32 _ConfigID_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 timeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEEXTENDDATA__CTOR_OFFSET))(this, timeStamp);
		}

		static ::RPG::Client::ChatMessageExtendData* Create(::Enum_3_F80BFD5B986D5503 type, ::System::UInt32 timeStamp, ::Class_1_8F6A0A429C70D49A* extData)
		{
			return ((::RPG::Client::ChatMessageExtendData*(*)(::Enum_3_F80BFD5B986D5503, ::System::UInt32, ::Class_1_8F6A0A429C70D49A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEEXTENDDATA_CREATE_OFFSET))(type, timeStamp, extData);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEEXTENDDATA_GET_ISVALID_OFFSET))(this);
		}

		::RPG::GameCore::ChatInviteConfigRow* get_InviteConfigRow()
		{
			return ((::RPG::GameCore::ChatInviteConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEEXTENDDATA_GET_INVITECONFIGROW_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEEXTENDDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEEXTENDDATA_SET_CONFIGID_OFFSET))(this, value);
		}
	};
}
