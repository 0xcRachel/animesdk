#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_69458B3547BA5011;
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace System { class String; }

#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x143F8480)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_GET_ENTERROOMTIME_OFFSET UNITYSDK_OFFSET(0x143FA760)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_GET_OPERATIONRECORDTEXT_OFFSET UNITYSDK_OFFSET(0x143FA780)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_GET_PLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x143FA740)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_SET_ENTERROOMTIME_OFFSET UNITYSDK_OFFSET(0x143FA770)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_SET_OPERATIONRECORDTEXT_OFFSET UNITYSDK_OFFSET(0x143FA790)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_SET_PLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x143FA750)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x143FA7A0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomRecentVisitorInfo_TypeDefinitionIndex = 61169;

	class OnlinePlayRoomRecentVisitorInfo : public ::System::Object
	{
	public:
		::RPG::Client::PlayerBriefDisplayData* _PlayerBriefDisplayData_k__BackingField; // 0x10
		::System::String* _OperationRecordText_k__BackingField; // 0x18
		::System::Int64 _EnterRoomTime_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO__CTOR_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* get_PlayerBriefDisplayData()
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_GET_PLAYERBRIEFDISPLAYDATA_OFFSET))(this);
		}

		::System::Void set_PlayerBriefDisplayData(::RPG::Client::PlayerBriefDisplayData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_SET_PLAYERBRIEFDISPLAYDATA_OFFSET))(this, value);
		}

		::System::Int64 get_EnterRoomTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_GET_ENTERROOMTIME_OFFSET))(this);
		}

		::System::Void set_EnterRoomTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_SET_ENTERROOMTIME_OFFSET))(this, value);
		}

		::System::String* get_OperationRecordText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_GET_OPERATIONRECORDTEXT_OFFSET))(this);
		}

		::System::Void set_OperationRecordText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_SET_OPERATIONRECORDTEXT_OFFSET))(this, value);
		}

		static ::RPG::Client::OnlinePlayRoomRecentVisitorInfo* Create(::Class_1_69458B3547BA5011* visitorInfo)
		{
			return ((::RPG::Client::OnlinePlayRoomRecentVisitorInfo*(*)(::Class_1_69458B3547BA5011*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_CREATE_OFFSET))(visitorInfo);
		}
	};
}
