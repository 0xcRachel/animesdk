#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace RPG::Client { class RelicGrowthGuide; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x96F9270)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x96F9310)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x96F9320)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_RELICGUIDE_OFFSET UNITYSDK_OFFSET(0x96F9340)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96F90D0)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_REQUESTRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x96F9160)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_SET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x96F9330)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_SET_RELICGUIDE_OFFSET UNITYSDK_OFFSET(0x96F9350)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x96F90E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentRelicRecommendBlock_TypeDefinitionIndex = 50208;

	class MessageContentRelicRecommendBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::Client::RelicGrowthGuide* _RelicGuide_k__BackingField; // 0x18
		::System::Boolean _IsDataReady_k__BackingField; // 0x20
		::System::UInt32 _AvatarID_k__BackingField; // 0x24

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

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_AVATARID_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Void set_IsDataReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_SET_ISDATAREADY_OFFSET))(this, value);
		}

		::RPG::Client::RelicGrowthGuide* get_RelicGuide()
		{
			return ((::RPG::Client::RelicGrowthGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_GET_RELICGUIDE_OFFSET))(this);
		}

		::System::Void set_RelicGuide(::RPG::Client::RelicGrowthGuide* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicGrowthGuide*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK_SET_RELICGUIDE_OFFSET))(this, value);
		}
	};
}
