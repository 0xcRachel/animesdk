#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_34.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_626F93E2306641CC;
namespace System { class String; }

#define CLASS_3_5855B8E89C8BB77D_METHOD_3_EA8B33115E80A793_OFFSET UNITYSDK_OFFSET(0xAC7C070)
#define CLASS_3_5855B8E89C8BB77D_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xAC7C300)
#define CLASS_3_5855B8E89C8BB77D_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xAC7C130)
#define CLASS_3_5855B8E89C8BB77D__CTOR_OFFSET UNITYSDK_OFFSET(0xAC7C380)
#define CLASS_3_5855B8E89C8BB77D__ONEXECUTE_B__5_0_OFFSET UNITYSDK_OFFSET(0xAC7C390)
#define CLASS_3_5855B8E89C8BB77D___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xAC7C460)
#define CLASS_3_5855B8E89C8BB77D___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xAC7C400)

inline static constexpr unsigned int Class_3_5855B8E89C8BB77D_TypeDefinitionIndex = 61447;

class Class_3_5855B8E89C8BB77D : public ::Class_2_A48F3719AA1CF200_34
{
public:
	::System::String* Field_3_1; // 0x20
	::Class_3_626F93E2306641CC* Field_3_0; // 0x28
	::System::Single Field_3_3; // 0x30
	::UnityEngine::Vector3 Field_3_2; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5855B8E89C8BB77D__CTOR_OFFSET))(this);
	}

	static ::Class_3_5855B8E89C8BB77D* Method_3_EA8B33115E80A793(::Class_3_626F93E2306641CC* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::Class_3_5855B8E89C8BB77D*(*)(::Class_3_626F93E2306641CC*, ::System::String*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5855B8E89C8BB77D_METHOD_3_EA8B33115E80A793_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5855B8E89C8BB77D_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5855B8E89C8BB77D_ONCLEAR_OFFSET))(this);
	}

	::System::Void _OnExecute_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5855B8E89C8BB77D__ONEXECUTE_B__5_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5855B8E89C8BB77D___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5855B8E89C8BB77D___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
