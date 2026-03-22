#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_347;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayCollectionMorse; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_FEB317759D5617F4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x109895C0)
#define CLASS_2_FEB317759D5617F4_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1098A330)
#define CLASS_2_FEB317759D5617F4_METHOD_2_761453C1386E7BBC_OFFSET UNITYSDK_OFFSET(0x1098A030)
#define CLASS_2_FEB317759D5617F4_METHOD_2_A1596F65A2679075_OFFSET UNITYSDK_OFFSET(0x1098A230)
#define CLASS_2_FEB317759D5617F4_METHOD_2_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x10989CA0)
#define CLASS_2_FEB317759D5617F4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10989710)
#define CLASS_2_FEB317759D5617F4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10989960)
#define CLASS_2_FEB317759D5617F4_TICK_OFFSET UNITYSDK_OFFSET(0x109899B0)
#define CLASS_2_FEB317759D5617F4__CTOR_OFFSET UNITYSDK_OFFSET(0x109894D0)

inline static constexpr unsigned int Class_2_FEB317759D5617F4_TypeDefinitionIndex = 45936;

class Class_2_FEB317759D5617F4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::System::String* Field_2_11; // 0x18
	::Class_3_BCCE950C2E8DF1F0* Field_2_16; // 0x20
	::RPG::GameCore::TaskContext* Field_2_3; // 0x28
	::RPG::GameCore::PlayCollectionMorse* Field_2_2; // 0x30
	::RPG::GameCore::GameEntity* Field_2_6; // 0x38
	::System::String* Field_2_10; // 0x40
	::Class_3_BCCE950C2E8DF1F0* Field_2_15; // 0x48
	::RPG::GameCore::PlayNPCBubbleTalk* Field_2_4; // 0x50
	::System::UInt32 Field_2_14; // 0x58
	::System::Single Field_2_8; // 0x5C
	::System::UInt32 Field_2_5; // 0x60
	::System::Single Field_2_9; // 0x64
	::System::Boolean Field_2_12; // 0x68
	::System::Boolean Field_2_13; // 0x69
	::System::Single Field_2_7; // 0x6C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayCollectionMorse* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayCollectionMorse*))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_761453C1386E7BBC(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_METHOD_2_761453C1386E7BBC_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1596F65A2679075(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_METHOD_2_A1596F65A2679075_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_METHOD_2_A1C7122184516C18_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB317759D5617F4_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
