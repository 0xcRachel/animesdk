#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

#define CLASS_2_913E58F37633BA5B_CLEAR_OFFSET UNITYSDK_OFFSET(0xCABCA80)
#define CLASS_2_913E58F37633BA5B_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0xCABCA10)
#define CLASS_2_913E58F37633BA5B_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xCABCB20)
#define CLASS_2_913E58F37633BA5B__CTOR_OFFSET UNITYSDK_OFFSET(0xCABCBF0)
#define CLASS_2_913E58F37633BA5B___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCABCC00)
#define CLASS_2_913E58F37633BA5B___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xCABCC90)

inline static constexpr unsigned int Class_2_913E58F37633BA5B_TypeDefinitionIndex = 60639;

class Class_2_913E58F37633BA5B : public ::Class_1_7ACCB923E979A908
{
public:
	::System::Boolean Field_2_0; // 0x20
	::System::Boolean Field_2_4; // 0x21
	::System::Boolean Field_2_1; // 0x22
	::System::Int32 Field_2_3; // 0x24
	::System::Int32 Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913E58F37633BA5B__CTOR_OFFSET))(this);
	}

	static ::Class_2_913E58F37633BA5B* Method_2_07374B8FCDCB7B70()
	{
		return ((::Class_2_913E58F37633BA5B*(*)())((::PBYTE)hIl2Cpp + CLASS_2_913E58F37633BA5B_METHOD_2_07374B8FCDCB7B70_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913E58F37633BA5B_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913E58F37633BA5B_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913E58F37633BA5B___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913E58F37633BA5B___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
