#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MissionUtils_SubMissionSortType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SubMissionInfoConfig; }

#define RPG_CLIENT_MISSIONUTILS_SUBMISSIONSORTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x152A5FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionUtils_SubMissionSortItem_TypeDefinitionIndex = 60948;

	class MissionUtils_SubMissionSortItem : public ::System::Object
	{
	public:
		::RPG::GameCore::SubMissionInfoConfig* subMissionConfig; // 0x10
		::RPG::Client::MissionUtils_SubMissionSortType subMissionType; // 0x18
		::System::Boolean canReachFinish; // 0x1C
		::System::Boolean isBranchEnd; // 0x1D
		::System::Boolean isBranchStart; // 0x1E
		::System::Int32 indent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_SUBMISSIONSORTITEM__CTOR_OFFSET))(this);
		}
	};
}
