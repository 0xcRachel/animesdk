#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_0CEEFF4559200500_CLEAR_OFFSET UNITYSDK_OFFSET(0xF09DF20)
#define CLASS_1_0CEEFF4559200500_METHOD_1_094042834C886778_OFFSET UNITYSDK_OFFSET(0xF09DD40)
#define CLASS_1_0CEEFF4559200500_METHOD_1_6C435ADAAFBF6CA9_1_OFFSET UNITYSDK_OFFSET(0xF09E200)
#define CLASS_1_0CEEFF4559200500_METHOD_1_6C435ADAAFBF6CA9_2_OFFSET UNITYSDK_OFFSET(0xF09E410)
#define CLASS_1_0CEEFF4559200500_METHOD_1_6C435ADAAFBF6CA9_OFFSET UNITYSDK_OFFSET(0xF09DFF0)
#define CLASS_1_0CEEFF4559200500__CTOR_OFFSET UNITYSDK_OFFSET(0xF09E620)

inline static constexpr unsigned int Class_1_0CEEFF4559200500_TypeDefinitionIndex = 49763;

class Class_1_0CEEFF4559200500 : public ::System::Object
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_1_1; // 0x10
	::Class_3_E21F6DE9B7FA4D05* Field_1_3; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_1_2; // 0x20
	::RPG::GameCore::TaskContext* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CEEFF4559200500__CTOR_OFFSET))(this);
	}

	static ::Class_1_0CEEFF4559200500* Method_1_094042834C886778(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a3, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a4)
	{
		return ((::Class_1_0CEEFF4559200500*(*)(::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_0CEEFF4559200500_METHOD_1_094042834C886778_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CEEFF4559200500_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_6C435ADAAFBF6CA9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0CEEFF4559200500_METHOD_1_6C435ADAAFBF6CA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C435ADAAFBF6CA9_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0CEEFF4559200500_METHOD_1_6C435ADAAFBF6CA9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C435ADAAFBF6CA9_2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0CEEFF4559200500_METHOD_1_6C435ADAAFBF6CA9_2_OFFSET))(this, a1);
	}
};
