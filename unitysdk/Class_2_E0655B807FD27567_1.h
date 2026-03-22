#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByDeathOrder; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E0655B807FD27567_1_COMPARE_OFFSET UNITYSDK_OFFSET(0x9EF1E50)
#define CLASS_2_E0655B807FD27567_1_METHOD_2_E32BDF5C9351F70A_OFFSET UNITYSDK_OFFSET(0x9EF1F20)
#define CLASS_2_E0655B807FD27567_1_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x9EF1F70)
#define CLASS_2_E0655B807FD27567_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9EF1E30)

inline static constexpr unsigned int Class_2_E0655B807FD27567_1_TypeDefinitionIndex = 46749;

class Class_2_E0655B807FD27567_1 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByDeathOrder*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetSortByDeathOrder* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByDeathOrder*))((::PBYTE)hIl2Cpp + CLASS_2_E0655B807FD27567_1__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E0655B807FD27567_1_COMPARE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E32BDF5C9351F70A(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_E0655B807FD27567_1_METHOD_2_E32BDF5C9351F70A_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_E0655B807FD27567_1_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
