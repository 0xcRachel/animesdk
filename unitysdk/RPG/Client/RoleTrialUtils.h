#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROLETRIALUTILS_CANSTARTROLETRIAL_OFFSET UNITYSDK_OFFSET(0x15BAD620)
#define RPG_CLIENT_ROLETRIALUTILS_GETACTIVITYAVATARDEMOSTAGES_OFFSET UNITYSDK_OFFSET(0x15BAD5A0)
#define RPG_CLIENT_ROLETRIALUTILS_GETSORTEDAVATARDEMOLIST_OFFSET UNITYSDK_OFFSET(0x15BACF80)
#define RPG_CLIENT_ROLETRIALUTILS_ISAVATARDISPLAYONLY_OFFSET UNITYSDK_OFFSET(0x15BAD7F0)
#define RPG_CLIENT_ROLETRIALUTILS_ISAVATARNEEDSHOWENTRANCE_OFFSET UNITYSDK_OFFSET(0x15BAD890)
#define RPG_CLIENT_ROLETRIALUTILS_TRYGETCOLLABORATIONAVATARDEMOACTIVITYID_OFFSET UNITYSDK_OFFSET(0x15BAD310)

namespace RPG::Client
{
	inline static constexpr unsigned int RoleTrialUtils_TypeDefinitionIndex = 62578;

	class RoleTrialUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>* GetSortedAvatarDemoList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS_GETSORTEDAVATARDEMOLIST_OFFSET))();
		}

		static ::System::UInt32 TryGetCollaborationAvatarDemoActivityID(::System::UInt32 gachaID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS_TRYGETCOLLABORATIONAVATARDEMOACTIVITYID_OFFSET))(gachaID);
		}

		static ::Il2CppArray<::System::UInt32>* GetActivityAvatarDemoStages(::System::UInt32 activityID)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS_GETACTIVITYAVATARDEMOSTAGES_OFFSET))(activityID);
		}

		static ::System::Boolean CanStartRoleTrial()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS_CANSTARTROLETRIAL_OFFSET))();
		}

		static ::System::Boolean IsAvatarDisplayOnly(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS_ISAVATARDISPLAYONLY_OFFSET))(avatarID);
		}

		static ::System::Boolean IsAvatarNeedShowEntrance(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS_ISAVATARNEEDSHOWENTRANCE_OFFSET))(avatarID);
		}
	};
}
