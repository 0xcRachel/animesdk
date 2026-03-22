#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace UnityEngine::UI { class Text; }

#define CLASS_2_58693492F724A715_METHOD_2_0EAFE72DD9AA7D3A_OFFSET UNITYSDK_OFFSET(0x10AC6AE0)
#define CLASS_2_58693492F724A715_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x10AC6A80)
#define CLASS_2_58693492F724A715_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x10AC6BD0)
#define CLASS_2_58693492F724A715__CTOR_OFFSET UNITYSDK_OFFSET(0x10AC6B40)
#define CLASS_2_58693492F724A715__ONBIND_OFFSET UNITYSDK_OFFSET(0x10AC6A20)
#define CLASS_2_58693492F724A715___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10AC6B70)

inline static constexpr unsigned int Class_2_58693492F724A715_TypeDefinitionIndex = 57507;

class Class_2_58693492F724A715 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Text* Field_2_0; // 0x60
	::System::Int32 Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58693492F724A715__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58693492F724A715__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_58693492F724A715_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_0EAFE72DD9AA7D3A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_58693492F724A715_METHOD_2_0EAFE72DD9AA7D3A_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58693492F724A715___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_58693492F724A715_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}
};
