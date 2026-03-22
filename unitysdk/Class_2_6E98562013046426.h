#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2AE89B9E4BF18AD3.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_30467842FAA5266B;
class Class_2_D5AD64F6FB3109AB;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_SpecialEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6E98562013046426_METHOD_2_2078102F14BF5A34_OFFSET UNITYSDK_OFFSET(0x15F5A2D0)
#define CLASS_2_6E98562013046426__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5A2C0)

inline static constexpr unsigned int Class_2_6E98562013046426_TypeDefinitionIndex = 27739;

class Class_2_6E98562013046426 : public ::Class_1_2AE89B9E4BF18AD3
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_SpecialEffect* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_SpecialEffect* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SpecialEffect*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_2_6E98562013046426__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_2078102F14BF5A34(::Class_2_D5AD64F6FB3109AB* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_6E98562013046426_METHOD_2_2078102F14BF5A34_OFFSET))(this, a1, a2);
	}
};
