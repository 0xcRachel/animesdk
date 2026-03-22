#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LevelUpEvolveBuildGear; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELUPEVOLVEBUILDGEARTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA4B5280)
#define RPG_GAMECORE_LEVELUPEVOLVEBUILDGEARTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B5250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelUpEvolveBuildGearTask_TypeDefinitionIndex = 43074;

	class LevelUpEvolveBuildGearTask : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LevelUpEvolveBuildGear*>
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* pContext, ::RPG::GameCore::LevelUpEvolveBuildGear* pConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelUpEvolveBuildGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUPEVOLVEBUILDGEARTASK__CTOR_OFFSET))(this, pContext, pConfig);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUPEVOLVEBUILDGEARTASK_ONTASKBEGIN_OFFSET))(this);
		}
	};
}
