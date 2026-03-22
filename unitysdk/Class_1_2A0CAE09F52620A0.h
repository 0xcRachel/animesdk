#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_347;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_2A0CAE09F52620A0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFE01D00)
#define CLASS_1_2A0CAE09F52620A0_METHOD_1_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0xFE01D50)
#define CLASS_1_2A0CAE09F52620A0_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xFE02000)
#define CLASS_1_2A0CAE09F52620A0_METHOD_1_B38322BD4F004DDB_OFFSET UNITYSDK_OFFSET(0xFE01E70)
#define CLASS_1_2A0CAE09F52620A0__CTOR_OFFSET UNITYSDK_OFFSET(0xFE01CF0)

inline static constexpr unsigned int Class_1_2A0CAE09F52620A0_TypeDefinitionIndex = 48206;

class Class_1_2A0CAE09F52620A0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_2; // 0x18
	::Class_3_BCCE950C2E8DF1F0* Field_1_3; // 0x20
	::System::Boolean Field_1_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2A0CAE09F52620A0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A0CAE09F52620A0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B38322BD4F004DDB(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_2A0CAE09F52620A0_METHOD_1_B38322BD4F004DDB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A0CAE09F52620A0_METHOD_1_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_1_2A0CAE09F52620A0_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}
};
