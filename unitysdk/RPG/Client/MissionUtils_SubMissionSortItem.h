#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MissionUtils_SubMissionSortType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SubMissionInfoConfig; }

#define RPG_CLIENT_MISSIONUTILS_SUBMISSIONSORTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9C0AA80)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionUtils_SubMissionSortItem_TypeDefinitionIndex = 53804;

	class MissionUtils_SubMissionSortItem : public ::System::Object
	{
	public:
		::RPG::GameCore::SubMissionInfoConfig* subMissionConfig; // 0x10
		::System::Int32 indent; // 0x18
		::System::Boolean isBranchStart; // 0x1C
		::System::Boolean canReachFinish; // 0x1D
		::System::Boolean isBranchEnd; // 0x1E
		::RPG::Client::MissionUtils_SubMissionSortType subMissionType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_SUBMISSIONSORTITEM__CTOR_OFFSET))(this);
		}
	};
}
