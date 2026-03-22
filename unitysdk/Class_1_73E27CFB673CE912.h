#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class UIController; }
namespace System { class Action; }

#define CLASS_1_73E27CFB673CE912_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8D41E10)
#define CLASS_1_73E27CFB673CE912_METHOD_1_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x8D41E50)
#define CLASS_1_73E27CFB673CE912_METHOD_1_7DF075E665CB5282_1_OFFSET UNITYSDK_OFFSET(0x8D42180)
#define CLASS_1_73E27CFB673CE912_METHOD_1_7DF075E665CB5282_OFFSET UNITYSDK_OFFSET(0x8D420E0)
#define CLASS_1_73E27CFB673CE912_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x8D41FF0)
#define CLASS_1_73E27CFB673CE912_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8D42140)
#define CLASS_1_73E27CFB673CE912__CTOR_OFFSET UNITYSDK_OFFSET(0x8D41E00)

inline static constexpr unsigned int Class_1_73E27CFB673CE912_TypeDefinitionIndex = 47883;

class Class_1_73E27CFB673CE912 : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_1; // 0x10
	::RPG::Client::ChallengePeakGroup* Field_1_0; // 0x18

	::System::Void _ctor(::RPG::Client::ChallengePeakGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + CLASS_1_73E27CFB673CE912__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73E27CFB673CE912_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73E27CFB673CE912_METHOD_1_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73E27CFB673CE912_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_7DF075E665CB5282(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_73E27CFB673CE912_METHOD_1_7DF075E665CB5282_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73E27CFB673CE912_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_7DF075E665CB5282_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_73E27CFB673CE912_METHOD_1_7DF075E665CB5282_1_OFFSET))(this, a1);
	}
};
