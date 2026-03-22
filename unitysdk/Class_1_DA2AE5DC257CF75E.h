#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace InControl { class PlayerAction; }
namespace System { class String; }

#define CLASS_1_DA2AE5DC257CF75E_METHOD_1_86C6EB2BDA90ED1A_OFFSET UNITYSDK_OFFSET(0x9F075C0)
#define CLASS_1_DA2AE5DC257CF75E_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x9F076F0)
#define CLASS_1_DA2AE5DC257CF75E_METHOD_1_EDF3A7604F066081_OFFSET UNITYSDK_OFFSET(0x9F07660)
#define CLASS_1_DA2AE5DC257CF75E__CTOR_OFFSET UNITYSDK_OFFSET(0x9F076E0)

inline static constexpr unsigned int Class_1_DA2AE5DC257CF75E_TypeDefinitionIndex = 54142;

class Class_1_DA2AE5DC257CF75E : public ::System::Object
{
public:
	::InControl::PlayerAction* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA2AE5DC257CF75E__CTOR_OFFSET))(this);
	}

	static ::Class_1_DA2AE5DC257CF75E* Method_1_86C6EB2BDA90ED1A(::System::String* a1)
	{
		return ((::Class_1_DA2AE5DC257CF75E*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA2AE5DC257CF75E_METHOD_1_86C6EB2BDA90ED1A_OFFSET))(a1);
	}

	static ::Class_1_DA2AE5DC257CF75E* Method_1_EDF3A7604F066081(::InControl::PlayerAction* a1)
	{
		return ((::Class_1_DA2AE5DC257CF75E*(*)(::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + CLASS_1_DA2AE5DC257CF75E_METHOD_1_EDF3A7604F066081_OFFSET))(a1);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA2AE5DC257CF75E_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}
};
