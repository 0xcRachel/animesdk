#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_4.h"
#include "unitysdk/RPG/Client/ChatMessageExtendData.h"

class Class_1_8AC8221DC4178532;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATMESSAGEINVITEDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8EBBBC0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x8EBBB30)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8EBBDE0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_GAMEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x8EBBB10)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x8EBBAD0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_PLAYTYPE_OFFSET UNITYSDK_OFFSET(0x8EBBAF0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x8EBBCC0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x8EBBD80)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_GAMEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x8EBBB20)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x8EBBAE0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_PLAYTYPE_OFFSET UNITYSDK_OFFSET(0x8EBBB00)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8EBB7E0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x8EBBE20)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8EBBE30)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatMessageInviteData_TypeDefinitionIndex = 50175;

	class ChatMessageInviteData : public ::RPG::Client::ChatMessageExtendData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _GameParamList_k__BackingField; // 0x18
		::Enum_3_F80BFD5B986D5503_4 _PlayType_k__BackingField; // 0x20
		::System::UInt64 _LobbyID_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_8AC8221DC4178532* inviteMsg, ::System::UInt32 timeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8AC8221DC4178532*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA__CTOR_OFFSET))(this, inviteMsg, timeStamp);
		}

		::System::UInt64 get_LobbyID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyID(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_LOBBYID_OFFSET))(this, value);
		}

		::Enum_3_F80BFD5B986D5503_4 get_PlayType()
		{
			return ((::Enum_3_F80BFD5B986D5503_4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_PLAYTYPE_OFFSET))(this);
		}

		::System::Void set_PlayType(::Enum_3_F80BFD5B986D5503_4 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_4))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_PLAYTYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_GameParamList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_GAMEPARAMLIST_OFFSET))(this);
		}

		::System::Void set_GameParamList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_GAMEPARAMLIST_OFFSET))(this, value);
		}

		::System::Boolean Equals(::RPG::Client::ChatMessageInviteData* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::RPG::Client::ChatMessageInviteData* inviteData1, ::RPG::Client::ChatMessageInviteData* inviteData2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ChatMessageInviteData*, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_OP_EQUALITY_OFFSET))(inviteData1, inviteData2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::ChatMessageInviteData* inviteData1, ::RPG::Client::ChatMessageInviteData* inviteData2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ChatMessageInviteData*, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_OP_INEQUALITY_OFFSET))(inviteData1, inviteData2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
