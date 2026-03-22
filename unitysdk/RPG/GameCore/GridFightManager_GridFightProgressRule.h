#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightPenaltyRuleConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE_GETHPPROGRESS_OFFSET UNITYSDK_OFFSET(0xA442FF0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE_GETKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xA442E40)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA4426C0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE__GETMONSTERTIE_OFFSET UNITYSDK_OFFSET(0xA442F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightManager_GridFightProgressRule_TypeDefinitionIndex = 43958;

	class GridFightManager_GridFightProgressRule : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightPenaltyRuleConfigRow* _PenaltyRuleConfigRow; // 0x10

		::System::Void _ctor(::RPG::GameCore::GridFightPenaltyRuleConfigRow* penaltyRuleConfigRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE__CTOR_OFFSET))(this, penaltyRuleConfigRow);
		}

		::System::UInt32 GetKillProgress(::System::UInt32 monsterID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE_GETKILLPROGRESS_OFFSET))(this, monsterID);
		}

		::System::UInt32 GetHPProgress(::System::UInt32 monsterID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE_GETHPPROGRESS_OFFSET))(this, monsterID);
		}

		::System::Int32 _GetMonsterTie(::System::UInt32 monsterID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE__GETMONSTERTIE_OFFSET))(this, monsterID);
		}
	};
}
