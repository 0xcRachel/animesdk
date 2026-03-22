#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_1_10B699A7F42E042B;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixBasePredicate; }
namespace System { class Object; }

#define CLASS_3_0A374111E3D818FB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8943CD0)
#define CLASS_3_0A374111E3D818FB__CTOR_OFFSET UNITYSDK_OFFSET(0x8943C50)

inline static constexpr unsigned int Class_3_0A374111E3D818FB_TypeDefinitionIndex = 43635;

class Class_3_0A374111E3D818FB : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::UniversalHotFixBasePredicate*>
{
public:
	::RPG::GameCore::UniversalHotFixBasePredicate* Field_3_0; // 0x28
	::RPG::GameCore::TaskContext* Field_3_1; // 0x30
	::System::Object* Field_3_3; // 0x38
	::System::Object* Field_3_4; // 0x40
	::System::Object* Field_3_5; // 0x48
	::Class_1_10B699A7F42E042B* Field_3_2; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixBasePredicate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixBasePredicate*))((::PBYTE)hIl2Cpp + CLASS_3_0A374111E3D818FB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A374111E3D818FB_EVALUATE_OFFSET))(this);
	}
};
