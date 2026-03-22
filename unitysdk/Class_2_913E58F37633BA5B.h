#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_910212C026901FF5.h"

#define CLASS_2_913E58F37633BA5B_CLEAR_OFFSET UNITYSDK_OFFSET(0x10CCE370)
#define CLASS_2_913E58F37633BA5B_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0x10CCE300)
#define CLASS_2_913E58F37633BA5B_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x10CCE410)
#define CLASS_2_913E58F37633BA5B__CTOR_OFFSET UNITYSDK_OFFSET(0x10CCE4E0)
#define CLASS_2_913E58F37633BA5B___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x10CCE4F0)
#define CLASS_2_913E58F37633BA5B___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x10CCE580)

inline static constexpr unsigned int Class_2_913E58F37633BA5B_TypeDefinitionIndex = 52359;

class Class_2_913E58F37633BA5B : public ::Class_1_910212C026901FF5
{
public:
	::System::Int32 Field_2_3; // 0x20
	::System::Int32 Field_2_2; // 0x24
	::System::Boolean Field_2_0; // 0x28
	::System::Boolean Field_2_4; // 0x29
	::System::Boolean Field_2_1; // 0x2A

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
