#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_A89F7B4DA276C0D3;
namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_27786C24DA3EBF5C_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xA4857B0)
#define CLASS_2_27786C24DA3EBF5C_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xA4856E0)
#define CLASS_2_27786C24DA3EBF5C_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xA485730)
#define CLASS_2_27786C24DA3EBF5C_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xA485680)
#define CLASS_2_27786C24DA3EBF5C_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0xA4858E0)
#define CLASS_2_27786C24DA3EBF5C__CTOR_OFFSET UNITYSDK_OFFSET(0xA485850)
#define CLASS_2_27786C24DA3EBF5C__ONBIND_OFFSET UNITYSDK_OFFSET(0xA485600)
#define CLASS_2_27786C24DA3EBF5C___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA485880)

inline static constexpr unsigned int Class_2_27786C24DA3EBF5C_TypeDefinitionIndex = 66516;

class Class_2_27786C24DA3EBF5C : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	::RPG::Client::LocalizedText* Field_2_0; // 0x60
	::UnityEngine::Animation* Field_2_1; // 0x68
	::Class_1_A89F7B4DA276C0D3* Field_2_2; // 0x70
	::System::Int32 Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27786C24DA3EBF5C__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27786C24DA3EBF5C__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_27786C24DA3EBF5C_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27786C24DA3EBF5C_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27786C24DA3EBF5C_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27786C24DA3EBF5C_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27786C24DA3EBF5C___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_27786C24DA3EBF5C_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}
};
