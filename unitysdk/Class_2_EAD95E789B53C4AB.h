#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2AE89B9E4BF18AD3.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_30467842FAA5266B;
class Class_2_D5AD64F6FB3109AB;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_SamePointCount; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EAD95E789B53C4AB_METHOD_2_76455B7845AA933D_OFFSET UNITYSDK_OFFSET(0x160453E0)
#define CLASS_2_EAD95E789B53C4AB__CTOR_OFFSET UNITYSDK_OFFSET(0x160453D0)

inline static constexpr unsigned int Class_2_EAD95E789B53C4AB_TypeDefinitionIndex = 27734;

class Class_2_EAD95E789B53C4AB : public ::Class_1_2AE89B9E4BF18AD3
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_SamePointCount* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_SamePointCount* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SamePointCount*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_2_EAD95E789B53C4AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_76455B7845AA933D(::Class_2_D5AD64F6FB3109AB* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_EAD95E789B53C4AB_METHOD_2_76455B7845AA933D_OFFSET))(this, a1, a2);
	}
};
