#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ACTIVITYINVITEUTILS_ISACTIVITYINVITING_OFFSET UNITYSDK_OFFSET(0x8B5A150)
#define RPG_CLIENT_ACTIVITYINVITEUTILS_ISDISABLEINVITE_OFFSET UNITYSDK_OFFSET(0x8B59FF0)
#define RPG_CLIENT_ACTIVITYINVITEUTILS_SETDISABLEINVITE_OFFSET UNITYSDK_OFFSET(0x8B5A080)
#define RPG_CLIENT_ACTIVITYINVITEUTILS_SETISACTIVITYINVITING_OFFSET UNITYSDK_OFFSET(0x8B5A1E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityInviteUtils_TypeDefinitionIndex = 48798;

	class ActivityInviteUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsDisableInvite()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINVITEUTILS_ISDISABLEINVITE_OFFSET))();
		}

		static ::System::Void SetDisableInvite(::System::Boolean isDisable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINVITEUTILS_SETDISABLEINVITE_OFFSET))(isDisable);
		}

		static ::System::Boolean IsActivityInviting()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINVITEUTILS_ISACTIVITYINVITING_OFFSET))();
		}

		static ::System::Void SetIsActivityInviting(::System::Boolean isInviting)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYINVITEUTILS_SETISACTIVITYINVITING_OFFSET))(isInviting);
		}
	};
}
