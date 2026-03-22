#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_17D1ADB128FED134.h"

#define CLASS_2_99A13A3E958619B0_CLEAR_OFFSET UNITYSDK_OFFSET(0xD21DAA0)
#define CLASS_2_99A13A3E958619B0_METHOD_2_77D33294EC223E96_OFFSET UNITYSDK_OFFSET(0xD21DAF0)
#define CLASS_2_99A13A3E958619B0__CTOR_OFFSET UNITYSDK_OFFSET(0xD21DCE0)
#define CLASS_2_99A13A3E958619B0___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xD21DD00)

inline static constexpr unsigned int Class_2_99A13A3E958619B0_TypeDefinitionIndex = 56472;

class Class_2_99A13A3E958619B0 : public ::Class_1_17D1ADB128FED134
{
public:
	// static const ::System::Single Field_2_1; // 0x0
	::System::Single Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99A13A3E958619B0__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99A13A3E958619B0_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_77D33294EC223E96(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_99A13A3E958619B0_METHOD_2_77D33294EC223E96_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99A13A3E958619B0___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
