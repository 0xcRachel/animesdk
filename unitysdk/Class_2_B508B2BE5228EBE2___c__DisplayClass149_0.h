#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_277;
class Class_0_16E4307DCC419505_282;
class Class_2_B508B2BE5228EBE2;
namespace System { class Action; }

#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS149_0__APPLYSTACKASYNCRESLOADING_B__0_OFFSET UNITYSDK_OFFSET(0x10DA9E40)
#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS149_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10DA7CB0)

inline static constexpr unsigned int Class_2_B508B2BE5228EBE2___c__DisplayClass149_0_TypeDefinitionIndex = 38993;

class Class_2_B508B2BE5228EBE2___c__DisplayClass149_0 : public ::System::Object
{
public:
	::Class_2_B508B2BE5228EBE2* __4__this; // 0x10
	::Class_0_16E4307DCC419505_282* s; // 0x18
	::System::Action* onFinish; // 0x20
	::Class_0_16E4307DCC419505_277* profileChangeAsyncHandle; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS149_0__CTOR_OFFSET))(this);
	}

	::System::Void _ApplyStackAsyncResLoading_b__0(::System::Boolean v)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS149_0__APPLYSTACKASYNCRESLOADING_B__0_OFFSET))(this, v);
	}
};
