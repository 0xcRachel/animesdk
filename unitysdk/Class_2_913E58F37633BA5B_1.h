#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_910212C026901FF5.h"

#define CLASS_2_913E58F37633BA5B_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1059FA30)
#define CLASS_2_913E58F37633BA5B_1_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0x1059F9C0)
#define CLASS_2_913E58F37633BA5B_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1059FAD0)
#define CLASS_2_913E58F37633BA5B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1059FBA0)
#define CLASS_2_913E58F37633BA5B_1___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1059FBB0)
#define CLASS_2_913E58F37633BA5B_1___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1059FC40)

inline static constexpr unsigned int Class_2_913E58F37633BA5B_1_TypeDefinitionIndex = 52368;

class Class_2_913E58F37633BA5B_1 : public ::Class_1_910212C026901FF5
{
public:
	::System::Int32 Field_2_2; // 0x20
	::System::Boolean Field_2_0; // 0x24
	::System::Boolean Field_2_4; // 0x25
	::System::Boolean Field_2_1; // 0x26
	::System::Int32 Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913E58F37633BA5B_1__CTOR_OFFSET))(this);
	}

	static ::Class_2_913E58F37633BA5B_1* Method_2_07374B8FCDCB7B70()
	{
		return ((::Class_2_913E58F37633BA5B_1*(*)())((::PBYTE)hIl2Cpp + CLASS_2_913E58F37633BA5B_1_METHOD_2_07374B8FCDCB7B70_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913E58F37633BA5B_1_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913E58F37633BA5B_1_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913E58F37633BA5B_1___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913E58F37633BA5B_1___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
