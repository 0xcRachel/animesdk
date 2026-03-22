#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByProperty; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7221C79477BB5C49_COMPARE_OFFSET UNITYSDK_OFFSET(0xA13C4E0)
#define CLASS_2_7221C79477BB5C49_METHOD_2_DE322FF31F6C1854_OFFSET UNITYSDK_OFFSET(0xA13C6F0)
#define CLASS_2_7221C79477BB5C49_METHOD_2_E32BDF5C9351F70A_OFFSET UNITYSDK_OFFSET(0xA13C8A0)
#define CLASS_2_7221C79477BB5C49_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA13C8F0)
#define CLASS_2_7221C79477BB5C49__CTOR_OFFSET UNITYSDK_OFFSET(0xA13C4C0)

inline static constexpr unsigned int Class_2_7221C79477BB5C49_TypeDefinitionIndex = 46745;

class Class_2_7221C79477BB5C49 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByProperty*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetSortByProperty* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByProperty*))((::PBYTE)hIl2Cpp + CLASS_2_7221C79477BB5C49__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7221C79477BB5C49_COMPARE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE322FF31F6C1854(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*&))((::PBYTE)hIl2Cpp + CLASS_2_7221C79477BB5C49_METHOD_2_DE322FF31F6C1854_OFFSET))(this, a1);
	}

	::System::Void Method_2_E32BDF5C9351F70A(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_7221C79477BB5C49_METHOD_2_E32BDF5C9351F70A_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_7221C79477BB5C49_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
