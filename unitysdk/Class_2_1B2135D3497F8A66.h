#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"
#include "unitysdk/Struct_2_76A4522D4905FF64.h"

class Class_2_1B2135D3497F8A66_Class_1_12CFD4109BB62456;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1B2135D3497F8A66_GET_NEEDLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14A00E70)
#define CLASS_2_1B2135D3497F8A66_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14A00E80)
#define CLASS_2_1B2135D3497F8A66_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x14A00FA0)
#define CLASS_2_1B2135D3497F8A66_METHOD_2_79734A163132F053_OFFSET UNITYSDK_OFFSET(0x14A00A70)
#define CLASS_2_1B2135D3497F8A66_METHOD_2_9C05ABC9E776C74C_OFFSET UNITYSDK_OFFSET(0x14A00600)
#define CLASS_2_1B2135D3497F8A66_METHOD_2_F289A5A170401D6B_OFFSET UNITYSDK_OFFSET(0x14A00920)
#define CLASS_2_1B2135D3497F8A66_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x14A00380)
#define CLASS_2_1B2135D3497F8A66__CTOR_OFFSET UNITYSDK_OFFSET(0x14A00EE0)
#define CLASS_2_1B2135D3497F8A66___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x14A00F40)

inline static constexpr unsigned int Class_2_1B2135D3497F8A66_TypeDefinitionIndex = 56229;

class Class_2_1B2135D3497F8A66 : public ::Class_1_47C4886CB6C61234
{
public:
	::System::Collections::Generic::List_1<::Class_2_1B2135D3497F8A66_Class_1_12CFD4109BB62456*>* Field_2_0; // 0x20
	::System::Boolean _NeedLateUpdate_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B2135D3497F8A66__CTOR_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B2135D3497F8A66_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_9C05ABC9E776C74C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1B2135D3497F8A66_METHOD_2_9C05ABC9E776C74C_OFFSET))(this, a1);
	}

	::System::Void Method_2_F289A5A170401D6B(::Struct_2_76A4522D4905FF64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_76A4522D4905FF64))((::PBYTE)hIl2Cpp + CLASS_2_1B2135D3497F8A66_METHOD_2_F289A5A170401D6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_79734A163132F053(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1B2135D3497F8A66_METHOD_2_79734A163132F053_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B2135D3497F8A66_GET_NEEDLATEUPDATE_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B2135D3497F8A66_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B2135D3497F8A66___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1B2135D3497F8A66_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
