#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_302;
namespace RPG::GameCore { class SetModifierValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2CE7F837B849437F_METHOD_3_15E89CCC333DD3F3_OFFSET UNITYSDK_OFFSET(0x10C3A450)
#define CLASS_3_2CE7F837B849437F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C3A150)
#define CLASS_3_2CE7F837B849437F__CTOR_OFFSET UNITYSDK_OFFSET(0x10C3A120)

inline static constexpr unsigned int Class_3_2CE7F837B849437F_TypeDefinitionIndex = 43423;

class Class_3_2CE7F837B849437F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetModifierValue*>
{
public:
	::RPG::GameCore::ArrayPoolWrapper_1<::Class_0_16E4307DCC419505_302*> Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetModifierValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetModifierValue*))((::PBYTE)hIl2Cpp + CLASS_3_2CE7F837B849437F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CE7F837B849437F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_15E89CCC333DD3F3(::Il2CppArray<::Class_0_16E4307DCC419505_302*>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_302*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2CE7F837B849437F_METHOD_3_15E89CCC333DD3F3_OFFSET))(this, a1, a2, a3);
	}
};
