#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_1D65C84443DC695F;
namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_26B980A17DCAF9A7_2_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x10471F80)
#define CLASS_3_26B980A17DCAF9A7_2_METHOD_3_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x10472120)
#define CLASS_3_26B980A17DCAF9A7_2_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x104720D0)
#define CLASS_3_26B980A17DCAF9A7_2_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x10472000)
#define CLASS_3_26B980A17DCAF9A7_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10472170)
#define CLASS_3_26B980A17DCAF9A7_2___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x104721E0)
#define CLASS_3_26B980A17DCAF9A7_2___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x10472180)

inline static constexpr unsigned int Class_3_26B980A17DCAF9A7_2_TypeDefinitionIndex = 52339;

class Class_3_26B980A17DCAF9A7_2 : public ::Class_2_E408E6D7F3D1822C
{
public:
	::Class_1_1D65C84443DC695F* Field_3_0; // 0x28
	::UnityEngine::Vector2Int Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_2__CTOR_OFFSET))(this);
	}

	static ::Class_3_26B980A17DCAF9A7_2* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_26B980A17DCAF9A7_2*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_2_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_2_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_2_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_3_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_2_METHOD_3_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_2___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_2___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
