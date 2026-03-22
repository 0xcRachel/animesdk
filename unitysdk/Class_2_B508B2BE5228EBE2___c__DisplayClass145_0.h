#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_277;
class Class_0_16E4307DCC419505_282;
class Class_2_B508B2BE5228EBE2;

#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS145_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10DA79E0)
#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS145_0__RELEASEPRIORITY_B__0_OFFSET UNITYSDK_OFFSET(0x10DA9D20)
#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS145_0__RELEASEPRIORITY_B__1_OFFSET UNITYSDK_OFFSET(0x10DA9D40)

inline static constexpr unsigned int Class_2_B508B2BE5228EBE2___c__DisplayClass145_0_TypeDefinitionIndex = 38991;

class Class_2_B508B2BE5228EBE2___c__DisplayClass145_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_282* s; // 0x10
	::Class_2_B508B2BE5228EBE2* __4__this; // 0x18
	::Class_0_16E4307DCC419505_277* profileChangeAsyncHandle; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS145_0__CTOR_OFFSET))(this);
	}

	::System::Void _ReleasePriority_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS145_0__RELEASEPRIORITY_B__0_OFFSET))(this);
	}

	::System::Void _ReleasePriority_b__1(::System::Boolean v)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS145_0__RELEASEPRIORITY_B__1_OFFSET))(this, v);
	}
};
