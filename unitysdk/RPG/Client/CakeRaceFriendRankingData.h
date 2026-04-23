#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_19;
namespace RPG::Client { class PlayerBriefDisplayData; }

#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_ADDLIKE_OFFSET UNITYSDK_OFFSET(0x15E03A40)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x15E02DD0)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_ACCUMULATECOIN_OFFSET UNITYSDK_OFFSET(0x15E042F0)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_DISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x15E044C0)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_ISLIKED_OFFSET UNITYSDK_OFFSET(0x15E04350)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0x15E02EF0)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_LIKENUM_OFFSET UNITYSDK_OFFSET(0x15E04310)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x15E04330)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x15E042E0)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SETACCUMULATECOIN_OFFSET UNITYSDK_OFFSET(0x15E03810)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SETRANK_OFFSET UNITYSDK_OFFSET(0x15E03860)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SET_ACCUMULATECOIN_OFFSET UNITYSDK_OFFSET(0x15E04300)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SET_LIKENUM_OFFSET UNITYSDK_OFFSET(0x15E04320)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0x15E04340)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15E04260)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceFriendRankingData_TypeDefinitionIndex = 58061;

	class CakeRaceFriendRankingData : public ::System::Object
	{
	public:
		::RPG::Client::PlayerBriefDisplayData* _DisplayData_k__BackingField; // 0x10
		::System::UInt32 _Uid_k__BackingField; // 0x18
		::System::UInt32 _LikeNum_k__BackingField; // 0x1C
		::System::UInt32 _Rank_k__BackingField; // 0x20
		::System::UInt32 _AccumulateCoin_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA__CTOR_OFFSET))(this, uid);
		}

		static ::RPG::Client::CakeRaceFriendRankingData* Create(::Class_1_D1E0AD3915BCCF29_19* info)
		{
			return ((::RPG::Client::CakeRaceFriendRankingData*(*)(::Class_1_D1E0AD3915BCCF29_19*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_CREATE_OFFSET))(info);
		}

		::System::Void AddLike(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_ADDLIKE_OFFSET))(this, value);
		}

		::System::Void SetRank(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SETRANK_OFFSET))(this, index);
		}

		::System::Void SetAccumulateCoin(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SETACCUMULATECOIN_OFFSET))(this, value);
		}

		::System::UInt32 get_Uid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_UID_OFFSET))(this);
		}

		::System::UInt32 get_AccumulateCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_ACCUMULATECOIN_OFFSET))(this);
		}

		::System::Void set_AccumulateCoin(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SET_ACCUMULATECOIN_OFFSET))(this, value);
		}

		::System::UInt32 get_LikeNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_LIKENUM_OFFSET))(this);
		}

		::System::Void set_LikeNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SET_LIKENUM_OFFSET))(this, value);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SET_RANK_OFFSET))(this, value);
		}

		::System::Boolean get_IsLiked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_ISLIKED_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* get_DisplayData()
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_DISPLAYDATA_OFFSET))(this);
		}

		::System::Boolean get_IsSelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_ISSELF_OFFSET))(this);
		}
	};
}
