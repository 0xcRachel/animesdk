#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2AE89B9E4BF18AD3.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_30467842FAA5266B;
class Class_2_D5AD64F6FB3109AB;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Color; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_49C77A01638CFE79_METHOD_2_5EB616FCBE7ED41D_OFFSET UNITYSDK_OFFSET(0x15F78960)
#define CLASS_2_49C77A01638CFE79__CTOR_OFFSET UNITYSDK_OFFSET(0x15F78950)

inline static constexpr unsigned int Class_2_49C77A01638CFE79_TypeDefinitionIndex = 27740;

class Class_2_49C77A01638CFE79 : public ::Class_1_2AE89B9E4BF18AD3
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_Color* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Color* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Color*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_2_49C77A01638CFE79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_5EB616FCBE7ED41D(::Class_2_D5AD64F6FB3109AB* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_49C77A01638CFE79_METHOD_2_5EB616FCBE7ED41D_OFFSET))(this, a1, a2);
	}
};
