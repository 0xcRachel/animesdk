#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_A9A3BF7907D46B0B_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x10A1BEA0)
#define CLASS_3_A9A3BF7907D46B0B_METHOD_3_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x10A1BFE0)
#define CLASS_3_A9A3BF7907D46B0B_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x10A1BF20)
#define CLASS_3_A9A3BF7907D46B0B__CTOR_OFFSET UNITYSDK_OFFSET(0x10A1C030)
#define CLASS_3_A9A3BF7907D46B0B___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x10A1C040)

inline static constexpr unsigned int Class_3_A9A3BF7907D46B0B_TypeDefinitionIndex = 52349;

class Class_3_A9A3BF7907D46B0B : public ::Class_2_E408E6D7F3D1822C
{
public:
	::System::Boolean Field_3_2; // 0x28
	::System::UInt32 Field_3_1; // 0x2C
	::UnityEngine::Vector2Int Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9A3BF7907D46B0B__CTOR_OFFSET))(this);
	}

	static ::Class_3_A9A3BF7907D46B0B* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_A9A3BF7907D46B0B*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_A9A3BF7907D46B0B_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9A3BF7907D46B0B_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9A3BF7907D46B0B_METHOD_3_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9A3BF7907D46B0B___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
