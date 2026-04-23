#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F6165DC3087012F0_Struct_2_E658502528B7C034_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MockAnimator; }
namespace System { class String; }

#define CLASS_1_F6165DC3087012F0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE4A650)
#define CLASS_1_F6165DC3087012F0_METHOD_1_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0xCE4A430)
#define CLASS_1_F6165DC3087012F0_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xCE4A5D0)
#define CLASS_1_F6165DC3087012F0_METHOD_1_6EE1CC10785DA101_OFFSET UNITYSDK_OFFSET(0xCE4A2E0)
#define CLASS_1_F6165DC3087012F0_METHOD_1_7EA0C5D3B27A2192_OFFSET UNITYSDK_OFFSET(0xCE4A6A0)
#define CLASS_1_F6165DC3087012F0_METHOD_1_B5431FFED5A8CE32_OFFSET UNITYSDK_OFFSET(0xCE4A790)
#define CLASS_1_F6165DC3087012F0__CTOR_OFFSET UNITYSDK_OFFSET(0xCE4A360)

inline static constexpr unsigned int Class_1_F6165DC3087012F0_TypeDefinitionIndex = 52535;

class Class_1_F6165DC3087012F0 : public ::System::Object
{
public:
	::RPG::Client::MockAnimator* Field_1_0; // 0x10
	::Il2CppArray<::Class_1_F6165DC3087012F0_Struct_2_E658502528B7C034_1>* Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x20

	::System::Void _ctor(::RPG::Client::MockAnimator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + CLASS_1_F6165DC3087012F0__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_F6165DC3087012F0* Method_1_6EE1CC10785DA101(::RPG::Client::MockAnimator* a1)
	{
		return ((::Class_1_F6165DC3087012F0*(*)(::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + CLASS_1_F6165DC3087012F0_METHOD_1_6EE1CC10785DA101_OFFSET))(a1);
	}

	::System::Void Method_1_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6165DC3087012F0_METHOD_1_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6165DC3087012F0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7EA0C5D3B27A2192(::System::String* a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F6165DC3087012F0_METHOD_1_7EA0C5D3B27A2192_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B5431FFED5A8CE32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F6165DC3087012F0_METHOD_1_B5431FFED5A8CE32_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6165DC3087012F0_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
