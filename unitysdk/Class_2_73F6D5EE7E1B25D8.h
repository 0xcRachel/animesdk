#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class PropWaterWheelStopRotate; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_73F6D5EE7E1B25D8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD89F200)
#define CLASS_2_73F6D5EE7E1B25D8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD89F260)
#define CLASS_2_73F6D5EE7E1B25D8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD89ED40)
#define CLASS_2_73F6D5EE7E1B25D8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD89F1B0)
#define CLASS_2_73F6D5EE7E1B25D8_TICK_OFFSET UNITYSDK_OFFSET(0xD89F2B0)
#define CLASS_2_73F6D5EE7E1B25D8__CTOR_OFFSET UNITYSDK_OFFSET(0xD89ED30)

inline static constexpr unsigned int Class_2_73F6D5EE7E1B25D8_TypeDefinitionIndex = 46035;

class Class_2_73F6D5EE7E1B25D8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x18
	::RPG::GameCore::PropWaterWheelStopRotate* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropWaterWheelStopRotate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropWaterWheelStopRotate*))((::PBYTE)hIl2Cpp + CLASS_2_73F6D5EE7E1B25D8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73F6D5EE7E1B25D8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73F6D5EE7E1B25D8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73F6D5EE7E1B25D8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73F6D5EE7E1B25D8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73F6D5EE7E1B25D8_TICK_OFFSET))(this, a1);
	}
};
