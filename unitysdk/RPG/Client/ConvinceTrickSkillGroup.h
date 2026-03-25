#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConvinceTrickSkillType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConvinceTrickSkill; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_AFTERSKILLTAKEEFFECT_OFFSET UNITYSDK_OFFSET(0x9432E50)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_CANTRIGGERSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x9432B30)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_CANTRIGGERSKILL_OFFSET UNITYSDK_OFFSET(0x9432AE0)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x94327C0)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_GETSKILL_OFFSET UNITYSDK_OFFSET(0x9432BC0)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_INIT_OFFSET UNITYSDK_OFFSET(0x9432830)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_ISANYSKILLTAKINGEFFECT_OFFSET UNITYSDK_OFFSET(0x9432F10)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_ISSKILLCANUSE_OFFSET UNITYSDK_OFFSET(0x9433020)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_ISSKILLTAKINGEFFECT_OFFSET UNITYSDK_OFFSET(0x9432EB0)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_SETCURRTURNINDEX_OFFSET UNITYSDK_OFFSET(0x9432FD0)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP_TRIGGERSKILL_OFFSET UNITYSDK_OFFSET(0x9432C70)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP__ADDSKILL_OFFSET UNITYSDK_OFFSET(0x9432960)
#define RPG_CLIENT_CONVINCETRICKSKILLGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x9433090)

namespace RPG::Client
{
	inline static constexpr unsigned int ConvinceTrickSkillGroup_TypeDefinitionIndex = 49163;

	class ConvinceTrickSkillGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ConvinceTrickSkill*>* Skills; // 0x10
		::System::Int32 MaxUseNum; // 0x18
		::System::Boolean SkillEnable; // 0x1C
		::System::Int32 _CurTurnIndex; // 0x20
		::System::Int32 CurUseNum; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_DISPOSE_OFFSET))(this);
		}

		::System::Void Init(::Il2CppArray<::RPG::GameCore::ConvinceTrickSkillType>* skillTypes, ::System::Int32 maxUseNum)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ConvinceTrickSkillType>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_INIT_OFFSET))(this, skillTypes, maxUseNum);
		}

		::System::Void _AddSkill(::RPG::GameCore::ConvinceTrickSkillType skillType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConvinceTrickSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP__ADDSKILL_OFFSET))(this, skillType);
		}

		::System::Boolean CanTriggerSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_CANTRIGGERSKILL_OFFSET))(this);
		}

		::System::Boolean CanTriggerSkillType(::RPG::GameCore::ConvinceTrickSkillType skillType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConvinceTrickSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_CANTRIGGERSKILLTYPE_OFFSET))(this, skillType);
		}

		::RPG::Client::ConvinceTrickSkill* GetSkill(::RPG::GameCore::ConvinceTrickSkillType skillType)
		{
			return ((::RPG::Client::ConvinceTrickSkill*(*)(::PVOID, ::RPG::GameCore::ConvinceTrickSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_GETSKILL_OFFSET))(this, skillType);
		}

		::System::Void TriggerSkill(::RPG::GameCore::ConvinceTrickSkillType skillType, ::RPG::GameCore::TaskContext* taskContext, ::System::Int32 turnIndex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConvinceTrickSkillType, ::RPG::GameCore::TaskContext*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_TRIGGERSKILL_OFFSET))(this, skillType, taskContext, turnIndex);
		}

		::System::Void AfterSkillTakeEffect(::RPG::GameCore::ConvinceTrickSkillType skillType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConvinceTrickSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_AFTERSKILLTAKEEFFECT_OFFSET))(this, skillType);
		}

		::System::Boolean IsSkillTakingEffect(::RPG::GameCore::ConvinceTrickSkillType skillType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConvinceTrickSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_ISSKILLTAKINGEFFECT_OFFSET))(this, skillType);
		}

		::System::Boolean IsAnySkillTakingEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_ISANYSKILLTAKINGEFFECT_OFFSET))(this);
		}

		::System::Void SetCurrTurnIndex(::System::Int32 currTurnIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_SETCURRTURNINDEX_OFFSET))(this, currTurnIndex);
		}

		::System::Boolean IsSkillCanUse(::RPG::GameCore::ConvinceTrickSkillType skillType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConvinceTrickSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILLGROUP_ISSKILLCANUSE_OFFSET))(this, skillType);
		}
	};
}
