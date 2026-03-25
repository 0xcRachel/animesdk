#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B9F290)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9B9F4A0)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x9B9F4B0)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x9B9F4C0)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_SHOWEXPLAIN_OFFSET UNITYSDK_OFFSET(0x9B9F4D0)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9B9F080)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_REQUESTRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x9B9F110)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x9B9F090)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x9B9F330)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__REQUESTRECOMMENDDATA_B__3_0_OFFSET UNITYSDK_OFFSET(0x9B9F580)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentRelicRecommendBlock_TypeDefinitionIndex = 51342;

	class MessageContentRelicRecommendBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::Action_1<::System::UInt32>* _Callback; // 0x18
		::RPG::Client::IAvatarInfoProvider* _Avatar_k__BackingField; // 0x20
		::System::UInt32 _AvatarID_k__BackingField; // 0x28
		::System::Boolean _WaitingData; // 0x2C

		::System::Void _ctor(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__CTOR_OFFSET))(this, avatarID);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Void RequestRecommendData(::System::Action_1<::System::UInt32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_REQUESTRECOMMENDDATA_OFFSET))(this, callback);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean _IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__ISDATAREADY_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_AVATARID_OFFSET))(this);
		}

		::RPG::Client::IAvatarInfoProvider* get_Avatar()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_AVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Boolean get_ShowExplain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_SHOWEXPLAIN_OFFSET))(this);
		}

		::System::Void _RequestRecommendData_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__REQUESTRECOMMENDDATA_B__3_0_OFFSET))(this);
		}
	};
}
