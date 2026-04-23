#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13.h"
#include "unitysdk/System/Object.h"

class Class_1_87FFBB414BD751E4;
namespace RPG::GameCore { class ChatInviteConfigRow; }

#define RPG_CLIENT_CHATMESSAGEEXTENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x15DF0D60)
#define RPG_CLIENT_CHATMESSAGEEXTENDDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x15DF1260)
#define RPG_CLIENT_CHATMESSAGEEXTENDDATA_GET_INVITECONFIGROW_OFFSET UNITYSDK_OFFSET(0x15DF1200)
#define RPG_CLIENT_CHATMESSAGEEXTENDDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x15DF1080)
#define RPG_CLIENT_CHATMESSAGEEXTENDDATA_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x15DF1270)
#define RPG_CLIENT_CHATMESSAGEEXTENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF0D50)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatMessageExtendData_TypeDefinitionIndex = 58233;

	class ChatMessageExtendData : public ::System::Object
	{
	public:
		::System::UInt32 _ConfigID_k__BackingField; // 0x10
		::System::UInt32 _CreateTimeStamp; // 0x14

		::System::Void _ctor(::System::UInt32 timeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEEXTENDDATA__CTOR_OFFSET))(this, timeStamp);
		}

		static ::RPG::Client::ChatMessageExtendData* Create(::Enum_3_0F1B992870941C13 type, ::System::UInt32 timeStamp, ::Class_1_87FFBB414BD751E4* extData)
		{
			return ((::RPG::Client::ChatMessageExtendData*(*)(::Enum_3_0F1B992870941C13, ::System::UInt32, ::Class_1_87FFBB414BD751E4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEEXTENDDATA_CREATE_OFFSET))(type, timeStamp, extData);
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
