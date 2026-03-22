#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_777E68C60B3CC11F;
class Class_1_DED4BA2FC834659B;
namespace RPG::GameCore { class HipplenIncidentRandomStepConfig; }
namespace RPG::GameCore { class HipplenIncidentStepConfig; }

#define CLASS_1_2681315B36C7B780_METHOD_1_826F5DDF1C46C7AB_OFFSET UNITYSDK_OFFSET(0x10F4D280)
#define CLASS_1_2681315B36C7B780_METHOD_1_E376DAAFB605A729_OFFSET UNITYSDK_OFFSET(0x10F4D480)

inline static constexpr unsigned int Class_1_2681315B36C7B780_TypeDefinitionIndex = 59948;

class Class_1_2681315B36C7B780 : public ::System::Object
{
public:
	static ::Class_1_777E68C60B3CC11F* Method_1_826F5DDF1C46C7AB(::RPG::GameCore::HipplenIncidentStepConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::Class_1_777E68C60B3CC11F*(*)(::RPG::GameCore::HipplenIncidentStepConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_1_2681315B36C7B780_METHOD_1_826F5DDF1C46C7AB_OFFSET))(a1, a2);
	}

	static ::Class_1_777E68C60B3CC11F* Method_1_E376DAAFB605A729(::RPG::GameCore::HipplenIncidentRandomStepConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::Class_1_777E68C60B3CC11F*(*)(::RPG::GameCore::HipplenIncidentRandomStepConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_1_2681315B36C7B780_METHOD_1_E376DAAFB605A729_OFFSET))(a1, a2);
	}
};
