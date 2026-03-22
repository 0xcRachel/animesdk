#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityHotRow; }
namespace RPG::GameCore { class ItemRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x8B55650)
#define RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_ISAVATARREWARD_OFFSET UNITYSDK_OFFSET(0x8B55690)
#define RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_ITEMDESC_OFFSET UNITYSDK_OFFSET(0x8B55510)
#define RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0x8B55670)
#define RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x8B554F0)
#define RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x8B55660)
#define RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8B55480)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHotCoreRewardData_TypeDefinitionIndex = 48793;

	class ActivityHotCoreRewardData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityHotRow* _ActivityHotRow; // 0x10
		::RPG::GameCore::ItemRow* _ItemRow; // 0x18
		::System::UInt32 _Count_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 itemId, ::System::UInt32 count, ::System::UInt32 activityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA__CTOR_OFFSET))(this, itemId, count, activityId);
		}

		::System::UInt32 get_ItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::String* get_ItemDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_ITEMDESC_OFFSET))(this);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_SET_COUNT_OFFSET))(this, value);
		}

		::System::String* get_ItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_ITEMICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsAvatarReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_ISAVATARREWARD_OFFSET))(this);
		}
	};
}
