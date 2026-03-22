#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_9.h"

class Class_3_0B8D1566449A1677;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceDiffCount; }

#define CLASS_2_508F8D6524E0112D_METHOD_2_CC11D045CAA14F48_OFFSET UNITYSDK_OFFSET(0x15F3ADB0)
#define CLASS_2_508F8D6524E0112D__CTOR_OFFSET UNITYSDK_OFFSET(0x15F3ADA0)

inline static constexpr unsigned int Class_2_508F8D6524E0112D_TypeDefinitionIndex = 27610;

class Class_2_508F8D6524E0112D : public ::Class_1_43BD383C98B4C0C5_9
{
public:
	::Class_3_0B8D1566449A1677* Field_2_1; // 0x10
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount* a1, ::Class_3_0B8D1566449A1677* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount*, ::Class_3_0B8D1566449A1677*))((::PBYTE)hIl2Cpp + CLASS_2_508F8D6524E0112D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_CC11D045CAA14F48()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508F8D6524E0112D_METHOD_2_CC11D045CAA14F48_OFFSET))(this);
	}
};
