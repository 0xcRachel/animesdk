#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_29E838C92FC61B7A.h"

namespace RPG::Client { class UIController; }
namespace System { class Exception; }

#define CLASS_3_B327DB84DFAC7E3E_METHOD_3_37F2C36D59BADB3C_OFFSET UNITYSDK_OFFSET(0x10D925E0)
#define CLASS_3_B327DB84DFAC7E3E_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10D925A0)
#define CLASS_3_B327DB84DFAC7E3E_METHOD_3_EEABD52C0F4D0C8A_OFFSET UNITYSDK_OFFSET(0x10D924D0)
#define CLASS_3_B327DB84DFAC7E3E__CTOR_OFFSET UNITYSDK_OFFSET(0x10D92490)
#define CLASS_3_B327DB84DFAC7E3E__PLAYTRANSITION_B__1_0_OFFSET UNITYSDK_OFFSET(0x10D926C0)

inline static constexpr unsigned int Class_3_B327DB84DFAC7E3E_TypeDefinitionIndex = 58268;

class Class_3_B327DB84DFAC7E3E : public ::Class_2_29E838C92FC61B7A
{
public:
	::RPG::Client::UIController* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_3_B327DB84DFAC7E3E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_EEABD52C0F4D0C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B327DB84DFAC7E3E_METHOD_3_EEABD52C0F4D0C8A_OFFSET))(this);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B327DB84DFAC7E3E_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_3_37F2C36D59BADB3C(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_B327DB84DFAC7E3E_METHOD_3_37F2C36D59BADB3C_OFFSET))(this, a1);
	}

	::System::Void _PlayTransition_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B327DB84DFAC7E3E__PLAYTRANSITION_B__1_0_OFFSET))(this);
	}
};
