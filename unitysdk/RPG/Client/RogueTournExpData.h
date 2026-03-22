#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_290D9E9A5FA9F40F_2;
class Class_1_735612C94F558EAE_78;
class Class_1_FA4F4A67B1C04320_793;
namespace RPG::Client { class RogueTournExpRewardDataItem; }
namespace RPG::GameCore { class ItemRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNEXPDATA_CLEARSEENREWARDS_OFFSET UNITYSDK_OFFSET(0x9E6F850)
#define RPG_CLIENT_ROGUETOURNEXPDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E6E950)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x9E6F6C0)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GETTOURNEXPREWARDDATA_OFFSET UNITYSDK_OFFSET(0x9E6F1E0)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET_CUREXP_OFFSET UNITYSDK_OFFSET(0x9E6FCD0)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET_CURLEVEL_OFFSET UNITYSDK_OFFSET(0x9E6FCF0)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET_EXPICONPATH_OFFSET UNITYSDK_OFFSET(0x9E6FDB0)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0x9E6FD10)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET_REWARDDATAITEMS_OFFSET UNITYSDK_OFFSET(0x9E6FD90)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET__EXPITEMID_OFFSET UNITYSDK_OFFSET(0x9E6FEC0)
#define RPG_CLIENT_ROGUETOURNEXPDATA_GET__EXPITEMROW_OFFSET UNITYSDK_OFFSET(0x9E6FE60)
#define RPG_CLIENT_ROGUETOURNEXPDATA_ISSHOWANYREWARDNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9E6FBA0)
#define RPG_CLIENT_ROGUETOURNEXPDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x9E6FA30)
#define RPG_CLIENT_ROGUETOURNEXPDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9E6F930)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SETALLREWARDSSEEN_OFFSET UNITYSDK_OFFSET(0x9E6F710)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SET_CUREXP_OFFSET UNITYSDK_OFFSET(0x9E6FCE0)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SET_CURLEVEL_OFFSET UNITYSDK_OFFSET(0x9E6FD00)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SET_REWARDDATAITEMS_OFFSET UNITYSDK_OFFSET(0x9E6FDA0)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SYNCALL_OFFSET UNITYSDK_OFFSET(0x9E6E9C0)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SYNCUPDATE_1_OFFSET UNITYSDK_OFFSET(0x9E6F640)
#define RPG_CLIENT_ROGUETOURNEXPDATA_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x9E6F2B0)
#define RPG_CLIENT_ROGUETOURNEXPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E6E910)
#define RPG_CLIENT_ROGUETOURNEXPDATA__GETCURLEVEL_OFFSET UNITYSDK_OFFSET(0x9E6F090)
#define RPG_CLIENT_ROGUETOURNEXPDATA__TRYINITREWARDROWS_OFFSET UNITYSDK_OFFSET(0x9E6ED50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournExpData_TypeDefinitionIndex = 53823;

	class RogueTournExpData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournExpRewardDataItem*>* _RewardDataItems_k__BackingField; // 0x10
		::System::UInt32 _RewardDataMainTournID; // 0x18
		::System::UInt32 _CurExp_k__BackingField; // 0x1C
		::System::UInt32 _CurLevel_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAll(::System::UInt32 mainTournID, ::Class_1_735612C94F558EAE_78* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_735612C94F558EAE_78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SYNCALL_OFFSET))(this, mainTournID, proto);
		}

		::System::Void SyncUpdate(::Class_1_290D9E9A5FA9F40F_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_290D9E9A5FA9F40F_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SYNCUPDATE_OFFSET))(this, proto);
		}

		::System::Void SyncUpdate_1(::Class_1_FA4F4A67B1C04320_793* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_793*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SYNCUPDATE_1_OFFSET))(this, proto);
		}

		::RPG::Client::RogueTournExpRewardDataItem* GetTournExpRewardData(::System::UInt32 level)
		{
			return ((::RPG::Client::RogueTournExpRewardDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GETTOURNEXPREWARDDATA_OFFSET))(this, level);
		}

		::System::UInt32 GetMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GETMAXLEVEL_OFFSET))(this);
		}

		::System::Void SetAllRewardsSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SETALLREWARDSSEEN_OFFSET))(this);
		}

		::System::Void ClearSeenRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_CLEARSEENREWARDS_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot(::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_ISSHOWNORMALREDDOT_OFFSET))(this, level);
		}

		::System::Boolean IsShowNewRedDot(::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_ISSHOWNEWREDDOT_OFFSET))(this, level);
		}

		::System::Boolean IsShowAnyRewardNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_ISSHOWANYREWARDNORMALREDDOT_OFFSET))(this);
		}

		::System::Void _TryInitRewardRows(::System::UInt32 mainTournID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA__TRYINITREWARDROWS_OFFSET))(this, mainTournID);
		}

		::System::UInt32 _GetCurLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA__GETCURLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_CurExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET_CUREXP_OFFSET))(this);
		}

		::System::Void set_CurExp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SET_CUREXP_OFFSET))(this, value);
		}

		::System::UInt32 get_CurLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET_CURLEVEL_OFFSET))(this);
		}

		::System::Void set_CurLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SET_CURLEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_IsLevelMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET_ISLEVELMAX_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournExpRewardDataItem*>* get_RewardDataItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournExpRewardDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET_REWARDDATAITEMS_OFFSET))(this);
		}

		::System::Void set_RewardDataItems(::System::Collections::Generic::List_1<::RPG::Client::RogueTournExpRewardDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueTournExpRewardDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_SET_REWARDDATAITEMS_OFFSET))(this, value);
		}

		static ::System::String* get_ExpIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET_EXPICONPATH_OFFSET))();
		}

		static ::System::UInt32 get__ExpItemID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET__EXPITEMID_OFFSET))();
		}

		static ::RPG::GameCore::ItemRow* get__ExpItemRow()
		{
			return ((::RPG::GameCore::ItemRow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA_GET__EXPITEMROW_OFFSET))();
		}
	};
}
