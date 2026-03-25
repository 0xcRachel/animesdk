#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_896;
namespace RPG::Client { class UIController; }

#define CLASS_1_A0006ECA6A059FE3_METHOD_1_D75B8ED822851E16_1_OFFSET UNITYSDK_OFFSET(0x10B40D80)
#define CLASS_1_A0006ECA6A059FE3_METHOD_1_D75B8ED822851E16_OFFSET UNITYSDK_OFFSET(0x10B40C40)
#define CLASS_1_A0006ECA6A059FE3__CTOR_OFFSET UNITYSDK_OFFSET(0x10B40EC0)

inline static constexpr unsigned int Class_1_A0006ECA6A059FE3_TypeDefinitionIndex = 59934;

class Class_1_A0006ECA6A059FE3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0006ECA6A059FE3__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_896* Method_1_D75B8ED822851E16(::RPG::Client::UIController* a1)
	{
		return ((::Class_0_16E4307DCC419505_896*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_A0006ECA6A059FE3_METHOD_1_D75B8ED822851E16_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_896* Method_1_D75B8ED822851E16_1(::RPG::Client::UIController* a1)
	{
		return ((::Class_0_16E4307DCC419505_896*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_A0006ECA6A059FE3_METHOD_1_D75B8ED822851E16_1_OFFSET))(this, a1);
	}
};
