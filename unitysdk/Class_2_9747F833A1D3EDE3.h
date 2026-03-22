#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2AE89B9E4BF18AD3.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_30467842FAA5266B;
class Class_2_D5AD64F6FB3109AB;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Min; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9747F833A1D3EDE3_METHOD_2_57BEBCA3798068CD_OFFSET UNITYSDK_OFFSET(0x15F7C850)
#define CLASS_2_9747F833A1D3EDE3__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7C840)

inline static constexpr unsigned int Class_2_9747F833A1D3EDE3_TypeDefinitionIndex = 27742;

class Class_2_9747F833A1D3EDE3 : public ::Class_1_2AE89B9E4BF18AD3
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_Min* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Min* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Min*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_2_9747F833A1D3EDE3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_57BEBCA3798068CD(::Class_2_D5AD64F6FB3109AB* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_9747F833A1D3EDE3_METHOD_2_57BEBCA3798068CD_OFFSET))(this, a1, a2);
	}
};
