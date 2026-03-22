#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_30467842FAA5266B.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_0E117AC86D8E5BCA;
class Class_2_D5AD64F6FB3109AB;
class Class_4_D581BED103406713;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6C1B95FB4BCBEF14_METHOD_2_B44C4174ABC0F9C7_OFFSET UNITYSDK_OFFSET(0x15F8F650)
#define CLASS_2_6C1B95FB4BCBEF14__CTOR_OFFSET UNITYSDK_OFFSET(0x15F8F5A0)

inline static constexpr unsigned int Class_2_6C1B95FB4BCBEF14_TypeDefinitionIndex = 27618;

class Class_2_6C1B95FB4BCBEF14 : public ::Class_1_30467842FAA5266B
{
public:
	::Class_4_D581BED103406713* Field_2_0; // 0x30
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_2_2; // 0x38
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_2_1; // 0x40

	::System::Void _ctor(::Class_4_D581BED103406713* a1, ::Class_2_D5AD64F6FB3109AB* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_D581BED103406713*, ::Class_2_D5AD64F6FB3109AB*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_6C1B95FB4BCBEF14__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_D5AD64F6FB3109AB* Method_2_B44C4174ABC0F9C7(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::Class_2_D5AD64F6FB3109AB*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_6C1B95FB4BCBEF14_METHOD_2_B44C4174ABC0F9C7_OFFSET))(this, a1);
	}
};
