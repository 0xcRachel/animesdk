#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2AE89B9E4BF18AD3.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_30467842FAA5266B;
class Class_2_D5AD64F6FB3109AB;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Union; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F53469104F0BC597_METHOD_2_BB86323CC540EC0B_OFFSET UNITYSDK_OFFSET(0x15F29F80)
#define CLASS_2_F53469104F0BC597__CTOR_OFFSET UNITYSDK_OFFSET(0x15F29F70)

inline static constexpr unsigned int Class_2_F53469104F0BC597_TypeDefinitionIndex = 27743;

class Class_2_F53469104F0BC597 : public ::Class_1_2AE89B9E4BF18AD3
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_Union* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Union* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Union*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_2_F53469104F0BC597__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_BB86323CC540EC0B(::Class_2_D5AD64F6FB3109AB* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_F53469104F0BC597_METHOD_2_BB86323CC540EC0B_OFFSET))(this, a1, a2);
	}
};
