#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_945ACFB1FEBC7A2C_19;
class Class_1_D7050783C65BD221;
namespace RPG::GameCore { class ActionBarEffectConfig; }
namespace RPG::GameCore { class ActionBarEffectTextConfig; }
namespace RPG::GameCore { class ShowActionBarEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AC40BF112363AD76_DISPOSE_OFFSET UNITYSDK_OFFSET(0x110C4CB0)
#define CLASS_2_AC40BF112363AD76_METHOD_2_0E8B04F679F54AFC_OFFSET UNITYSDK_OFFSET(0x110C5080)
#define CLASS_2_AC40BF112363AD76_METHOD_2_462FC009F7AECA95_OFFSET UNITYSDK_OFFSET(0x110C4F10)
#define CLASS_2_AC40BF112363AD76_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x110C4CF0)
#define CLASS_2_AC40BF112363AD76_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x110C4FD0)
#define CLASS_2_AC40BF112363AD76_TICK_OFFSET UNITYSDK_OFFSET(0x110C5020)
#define CLASS_2_AC40BF112363AD76__CTOR_OFFSET UNITYSDK_OFFSET(0x110C4CA0)
#define CLASS_2_AC40BF112363AD76___GETACTIONBAREFFECTTEXTPARAMS_B__6_0_OFFSET UNITYSDK_OFFSET(0x110C51A0)
#define CLASS_2_AC40BF112363AD76___GETACTIONBARSINGLEACTIONEFFECTPARAMS_B__5_0_OFFSET UNITYSDK_OFFSET(0x110C5130)

inline static constexpr unsigned int Class_2_AC40BF112363AD76_TypeDefinitionIndex = 44312;

class Class_2_AC40BF112363AD76 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowActionBarEffect* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowActionBarEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowActionBarEffect*))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76_TICK_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_1_D7050783C65BD221*>* Method_2_462FC009F7AECA95()
	{
		return ((::Il2CppArray<::Class_1_D7050783C65BD221*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76_METHOD_2_462FC009F7AECA95_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_945ACFB1FEBC7A2C_19*>* Method_2_0E8B04F679F54AFC(::Il2CppArray<::RPG::GameCore::ActionBarEffectTextConfig*>* a1)
	{
		return ((::Il2CppArray<::Class_1_945ACFB1FEBC7A2C_19*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ActionBarEffectTextConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76_METHOD_2_0E8B04F679F54AFC_OFFSET))(this, a1);
	}

	::Class_1_D7050783C65BD221* __GetActionBarSingleActionEffectParams_b__5_0(::RPG::GameCore::ActionBarEffectConfig* effectConfig)
	{
		return ((::Class_1_D7050783C65BD221*(*)(::PVOID, ::RPG::GameCore::ActionBarEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76___GETACTIONBARSINGLEACTIONEFFECTPARAMS_B__5_0_OFFSET))(this, effectConfig);
	}

	::Class_1_945ACFB1FEBC7A2C_19* __GetActionBarEffectTextParams_b__6_0(::RPG::GameCore::ActionBarEffectTextConfig* textConfig)
	{
		return ((::Class_1_945ACFB1FEBC7A2C_19*(*)(::PVOID, ::RPG::GameCore::ActionBarEffectTextConfig*))((::PBYTE)hIl2Cpp + CLASS_2_AC40BF112363AD76___GETACTIONBAREFFECTTEXTPARAMS_B__6_0_OFFSET))(this, textConfig);
	}
};
