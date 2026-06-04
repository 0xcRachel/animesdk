#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

#define CLASS_2_A0124D2925BA9618_CLEAR_OFFSET UNITYSDK_OFFSET(0x1778D7D0)
#define CLASS_2_A0124D2925BA9618_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0x1778D760)
#define CLASS_2_A0124D2925BA9618_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1778D870)
#define CLASS_2_A0124D2925BA9618__CTOR_OFFSET UNITYSDK_OFFSET(0x1778D8F0)
#define CLASS_2_A0124D2925BA9618___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1778D900)
#define CLASS_2_A0124D2925BA9618___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1778D980)

inline static constexpr unsigned int Class_2_A0124D2925BA9618_TypeDefinitionIndex = 61572;

class Class_2_A0124D2925BA9618 : public ::Class_1_3713064DEE761936
{
public:
	::System::Int32 Field_2_0; // 0x20
	::System::Int32 Field_2_1; // 0x24
	::System::Int32 Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0124D2925BA9618__CTOR_OFFSET))(this);
	}

	static ::Class_2_A0124D2925BA9618* Method_2_E9C0A4FCB77B6D02()
	{
		return ((::Class_2_A0124D2925BA9618*(*)())((::PBYTE)hIl2Cpp + CLASS_2_A0124D2925BA9618_METHOD_2_E9C0A4FCB77B6D02_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0124D2925BA9618_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0124D2925BA9618_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0124D2925BA9618___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0124D2925BA9618___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
