#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_29E838C92FC61B7A.h"

namespace RPG::Client { class UIController; }
namespace System { class Exception; }

#define CLASS_3_B327DB84DFAC7E3E_1_METHOD_3_37F2C36D59BADB3C_OFFSET UNITYSDK_OFFSET(0xF5855B0)
#define CLASS_3_B327DB84DFAC7E3E_1_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xF585570)
#define CLASS_3_B327DB84DFAC7E3E_1_METHOD_3_C9F59B9D8CCA4DFF_OFFSET UNITYSDK_OFFSET(0xF585450)
#define CLASS_3_B327DB84DFAC7E3E_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF585410)

inline static constexpr unsigned int Class_3_B327DB84DFAC7E3E_1_TypeDefinitionIndex = 58269;

class Class_3_B327DB84DFAC7E3E_1 : public ::Class_2_29E838C92FC61B7A
{
public:
	::RPG::Client::UIController* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_3_B327DB84DFAC7E3E_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_C9F59B9D8CCA4DFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B327DB84DFAC7E3E_1_METHOD_3_C9F59B9D8CCA4DFF_OFFSET))(this);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B327DB84DFAC7E3E_1_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_3_37F2C36D59BADB3C(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_B327DB84DFAC7E3E_1_METHOD_3_37F2C36D59BADB3C_OFFSET))(this, a1);
	}
};
