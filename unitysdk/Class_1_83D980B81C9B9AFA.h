#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ElationConfig; }
namespace RPG::GameCore { class ElationSkillRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }

#define CLASS_1_83D980B81C9B9AFA_GET_ELATIONCONFIG_OFFSET UNITYSDK_OFFSET(0x10639950)
#define CLASS_1_83D980B81C9B9AFA_GET_ELATIONSKILLROW_OFFSET UNITYSDK_OFFSET(0x10639970)
#define CLASS_1_83D980B81C9B9AFA_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x10639990)
#define CLASS_1_83D980B81C9B9AFA_GET_SKILLDATA_OFFSET UNITYSDK_OFFSET(0x10639880)
#define CLASS_1_83D980B81C9B9AFA_METHOD_1_BCDB47CE840CA6EB_OFFSET UNITYSDK_OFFSET(0x106398A0)
#define CLASS_1_83D980B81C9B9AFA_METHOD_1_FEDE09C198114DBE_OFFSET UNITYSDK_OFFSET(0x106399B0)
#define CLASS_1_83D980B81C9B9AFA_SET_ELATIONCONFIG_OFFSET UNITYSDK_OFFSET(0x10639960)
#define CLASS_1_83D980B81C9B9AFA_SET_ELATIONSKILLROW_OFFSET UNITYSDK_OFFSET(0x10639980)
#define CLASS_1_83D980B81C9B9AFA_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x106399A0)
#define CLASS_1_83D980B81C9B9AFA_SET_SKILLDATA_OFFSET UNITYSDK_OFFSET(0x10639890)
#define CLASS_1_83D980B81C9B9AFA__CTOR_OFFSET UNITYSDK_OFFSET(0x106397D0)

inline static constexpr unsigned int Class_1_83D980B81C9B9AFA_TypeDefinitionIndex = 53162;

class Class_1_83D980B81C9B9AFA : public ::System::Object
{
public:
	::RPG::GameCore::SkillData* _SkillData_k__BackingField; // 0x10
	::RPG::GameCore::ElationSkillRow* _ElationSkillRow_k__BackingField; // 0x18
	::RPG::GameCore::ElationConfig* _ElationConfig_k__BackingField; // 0x20
	::RPG::GameCore::SkillCharacterComponent* _Owner_k__BackingField; // 0x28

	::System::Void _ctor(::RPG::GameCore::SkillCharacterComponent* a1, ::RPG::GameCore::ElationConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillCharacterComponent*, ::RPG::GameCore::ElationConfig*))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::SkillData* get_SkillData()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_GET_SKILLDATA_OFFSET))(this);
	}

	::System::Void set_SkillData(::RPG::GameCore::SkillData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_SET_SKILLDATA_OFFSET))(this, value);
	}

	::System::Int32 Method_1_BCDB47CE840CA6EB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_METHOD_1_BCDB47CE840CA6EB_OFFSET))(this);
	}

	::RPG::GameCore::ElationConfig* get_ElationConfig()
	{
		return ((::RPG::GameCore::ElationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_GET_ELATIONCONFIG_OFFSET))(this);
	}

	::System::Void set_ElationConfig(::RPG::GameCore::ElationConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationConfig*))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_SET_ELATIONCONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::ElationSkillRow* get_ElationSkillRow()
	{
		return ((::RPG::GameCore::ElationSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_GET_ELATIONSKILLROW_OFFSET))(this);
	}

	::System::Void set_ElationSkillRow(::RPG::GameCore::ElationSkillRow* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationSkillRow*))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_SET_ELATIONSKILLROW_OFFSET))(this, value);
	}

	::RPG::GameCore::SkillCharacterComponent* get_Owner()
	{
		return ((::RPG::GameCore::SkillCharacterComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::RPG::GameCore::SkillCharacterComponent* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillCharacterComponent*))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_SET_OWNER_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* Method_1_FEDE09C198114DBE()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_METHOD_1_FEDE09C198114DBE_OFFSET))(this);
	}
};
