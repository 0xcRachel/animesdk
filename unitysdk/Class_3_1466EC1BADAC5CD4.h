#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNode_1.h"

class Class_1_9E350A19BBA25CA5;

#define CLASS_3_1466EC1BADAC5CD4_METHOD_3_0EE1F7F192FB3754_OFFSET UNITYSDK_OFFSET(0xF2DCA70)
#define CLASS_3_1466EC1BADAC5CD4_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0xF2DC990)
#define CLASS_3_1466EC1BADAC5CD4__CTOR_OFFSET UNITYSDK_OFFSET(0xF2DCAC0)
#define CLASS_3_1466EC1BADAC5CD4___IFIXBASEPROXY_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0xF2DCAE0)

inline static constexpr unsigned int Class_3_1466EC1BADAC5CD4_TypeDefinitionIndex = 56318;

class Class_3_1466EC1BADAC5CD4 : public ::RPG::Client::WorkNode_1<::Class_1_9E350A19BBA25CA5*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1466EC1BADAC5CD4__CTOR_OFFSET))(this);
	}

	::System::Void OnStartLoading()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1466EC1BADAC5CD4_ONSTARTLOADING_OFFSET))(this);
	}

	::System::Void Method_3_0EE1F7F192FB3754()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1466EC1BADAC5CD4_METHOD_3_0EE1F7F192FB3754_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnStartLoading()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1466EC1BADAC5CD4___IFIXBASEPROXY_ONSTARTLOADING_OFFSET))(this);
	}
};
