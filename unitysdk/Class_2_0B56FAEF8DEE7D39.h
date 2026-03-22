#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_910212C026901FF5.h"

namespace System { class String; }

#define CLASS_2_0B56FAEF8DEE7D39_CLEAR_OFFSET UNITYSDK_OFFSET(0x1098EDF0)
#define CLASS_2_0B56FAEF8DEE7D39_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0x1098ED80)
#define CLASS_2_0B56FAEF8DEE7D39_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1098EE80)
#define CLASS_2_0B56FAEF8DEE7D39__CTOR_OFFSET UNITYSDK_OFFSET(0x1098EEE0)
#define CLASS_2_0B56FAEF8DEE7D39___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1098EEF0)
#define CLASS_2_0B56FAEF8DEE7D39___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1098EF80)

inline static constexpr unsigned int Class_2_0B56FAEF8DEE7D39_TypeDefinitionIndex = 52380;

class Class_2_0B56FAEF8DEE7D39 : public ::Class_1_910212C026901FF5
{
public:
	::System::String* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B56FAEF8DEE7D39__CTOR_OFFSET))(this);
	}

	static ::Class_2_0B56FAEF8DEE7D39* Method_2_07374B8FCDCB7B70()
	{
		return ((::Class_2_0B56FAEF8DEE7D39*(*)())((::PBYTE)hIl2Cpp + CLASS_2_0B56FAEF8DEE7D39_METHOD_2_07374B8FCDCB7B70_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B56FAEF8DEE7D39_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B56FAEF8DEE7D39_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B56FAEF8DEE7D39___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B56FAEF8DEE7D39___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
