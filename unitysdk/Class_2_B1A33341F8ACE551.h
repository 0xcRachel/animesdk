#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

class Class_0_16E4307DCC419505_442;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortSequence; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B1A33341F8ACE551_COMPARE_OFFSET UNITYSDK_OFFSET(0x8A413D0)
#define CLASS_2_B1A33341F8ACE551_METHOD_2_194D81FDDD0BED7A_OFFSET UNITYSDK_OFFSET(0x8A41010)
#define CLASS_2_B1A33341F8ACE551_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x8A41200)
#define CLASS_2_B1A33341F8ACE551__CTOR_OFFSET UNITYSDK_OFFSET(0x8A40EF0)

inline static constexpr unsigned int Class_2_B1A33341F8ACE551_TypeDefinitionIndex = 46743;

class Class_2_B1A33341F8ACE551 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortSequence*>
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_442*>* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TargetSortSequence* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortSequence*))((::PBYTE)hIl2Cpp + CLASS_2_B1A33341F8ACE551__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_194D81FDDD0BED7A(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_B1A33341F8ACE551_METHOD_2_194D81FDDD0BED7A_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_B1A33341F8ACE551_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B1A33341F8ACE551_COMPARE_OFFSET))(this, a1, a2);
	}
};
