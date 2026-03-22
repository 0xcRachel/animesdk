#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarDemoConfigRow; }

#define RPG_CLIENT_ROLETRIALINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F34480)
#define RPG_CLIENT_ROLETRIALINSTANCE_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9F34560)
#define RPG_CLIENT_ROLETRIALINSTANCE_GET_CANCHANGELINEUPLEADER_OFFSET UNITYSDK_OFFSET(0x9F34610)
#define RPG_CLIENT_ROLETRIALINSTANCE_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9F34410)
#define RPG_CLIENT_ROLETRIALINSTANCE_LEAVEROLETRIAL_OFFSET UNITYSDK_OFFSET(0x9F34520)
#define RPG_CLIENT_ROLETRIALINSTANCE_SET_CANCHANGELINEUPLEADER_OFFSET UNITYSDK_OFFSET(0x9F34620)
#define RPG_CLIENT_ROLETRIALINSTANCE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F343D0)
#define RPG_CLIENT_ROLETRIALINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F34310)
#define RPG_CLIENT_ROLETRIALINSTANCE__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F344E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoleTrialInstance_TypeDefinitionIndex = 53832;

	class RoleTrialInstance : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarDemoConfigRow* _Row; // 0x10
		::System::Boolean IsFirstEnterTrial; // 0x18
		::System::Boolean _CanChangeLineupLeader; // 0x19
		::System::UInt32 StageID; // 0x1C

		::System::Void _ctor(::System::UInt32 stageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE__CTOR_OFFSET))(this, stageID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void LeaveRoleTrial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_LEAVEROLETRIAL_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE__REMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::RPG::GameCore::AvatarDemoConfigRow* get_Row()
		{
			return ((::RPG::GameCore::AvatarDemoConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_GET_AVATARID_OFFSET))(this);
		}

		::System::Boolean get_CanChangeLineupLeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_GET_CANCHANGELINEUPLEADER_OFFSET))(this);
		}

		::System::Void set_CanChangeLineupLeader(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_SET_CANCHANGELINEUPLEADER_OFFSET))(this, value);
		}
	};
}
