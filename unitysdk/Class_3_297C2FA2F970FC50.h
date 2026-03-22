#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DE15EA7F53A0550.h"

class Class_1_2FDE33CCAE591AA8;
class Class_1_CB8B5340883CE90A;
namespace System { class String; }

#define CLASS_3_297C2FA2F970FC50_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x8A69460)
#define CLASS_3_297C2FA2F970FC50_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x8A69470)
#define CLASS_3_297C2FA2F970FC50__CTOR_OFFSET UNITYSDK_OFFSET(0x8A693C0)
#define CLASS_3_297C2FA2F970FC50___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x8A69480)

inline static constexpr unsigned int Class_3_297C2FA2F970FC50_TypeDefinitionIndex = 59219;

class Class_3_297C2FA2F970FC50 : public ::Class_2_3DE15EA7F53A0550
{
public:
	::Class_1_CB8B5340883CE90A* Field_3_2; // 0x18
	::Class_1_2FDE33CCAE591AA8* _OnBtnClose_k__BackingField; // 0x20
	::System::String* Field_3_0; // 0x28

	::System::Void _ctor(::System::String* a1, ::Class_1_CB8B5340883CE90A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_CB8B5340883CE90A*))((::PBYTE)hIl2Cpp + CLASS_3_297C2FA2F970FC50__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_2FDE33CCAE591AA8* get_OnBtnClose()
	{
		return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_297C2FA2F970FC50_GET_ONBTNCLOSE_OFFSET))(this);
	}

	::System::Void set_OnBtnClose(::Class_1_2FDE33CCAE591AA8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + CLASS_3_297C2FA2F970FC50_SET_ONBTNCLOSE_OFFSET))(this, value);
	}

	::System::Void __ctor_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_297C2FA2F970FC50___CTOR_B__0_0_OFFSET))(this);
	}
};
