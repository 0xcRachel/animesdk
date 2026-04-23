#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_9.h"

class Class_3_7E62691AFFAF8E9F;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceDiffCount; }

#define CLASS_2_508F8D6524E0112D_METHOD_2_CC11D045CAA14F48_OFFSET UNITYSDK_OFFSET(0x14CF3D20)
#define CLASS_2_508F8D6524E0112D__CTOR_OFFSET UNITYSDK_OFFSET(0x14CF3D10)

inline static constexpr unsigned int Class_2_508F8D6524E0112D_TypeDefinitionIndex = 34004;

class Class_2_508F8D6524E0112D : public ::Class_1_43BD383C98B4C0C5_9
{
public:
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount* Field_2_0; // 0x10
	::Class_3_7E62691AFFAF8E9F* Field_2_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount* a1, ::Class_3_7E62691AFFAF8E9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount*, ::Class_3_7E62691AFFAF8E9F*))((::PBYTE)hIl2Cpp + CLASS_2_508F8D6524E0112D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_CC11D045CAA14F48()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508F8D6524E0112D_METHOD_2_CC11D045CAA14F48_OFFSET))(this);
	}
};
