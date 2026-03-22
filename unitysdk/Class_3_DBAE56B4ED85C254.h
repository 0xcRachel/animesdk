#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvMonsterEx; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DBAE56B4ED85C254_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11166A60)
#define CLASS_3_DBAE56B4ED85C254_METHOD_3_43081F11CCD649A4_OFFSET UNITYSDK_OFFSET(0x11166800)
#define CLASS_3_DBAE56B4ED85C254_METHOD_3_B7113EADBE88EFFF_OFFSET UNITYSDK_OFFSET(0x11166960)
#define CLASS_3_DBAE56B4ED85C254__CTOR_OFFSET UNITYSDK_OFFSET(0x11166760)

inline static constexpr unsigned int Class_3_DBAE56B4ED85C254_TypeDefinitionIndex = 46686;

class Class_3_DBAE56B4ED85C254 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvMonsterEx*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvMonsterEx* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvMonsterEx*))((::PBYTE)hIl2Cpp + CLASS_3_DBAE56B4ED85C254__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_43081F11CCD649A4(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_DBAE56B4ED85C254_METHOD_3_43081F11CCD649A4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_3_B7113EADBE88EFFF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_DBAE56B4ED85C254_METHOD_3_B7113EADBE88EFFF_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_DBAE56B4ED85C254_EVALUATE_OFFSET))(this, a1, a2);
	}
};
