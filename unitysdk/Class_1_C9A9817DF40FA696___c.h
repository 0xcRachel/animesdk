#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_91;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_C9A9817DF40FA696___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x171F9A30)
#define CLASS_1_C9A9817DF40FA696___C__CTOR_OFFSET UNITYSDK_OFFSET(0x171F9A70)
#define CLASS_1_C9A9817DF40FA696___C___SORTPOSLIST_B__3_0_OFFSET UNITYSDK_OFFSET(0x171F9A80)

inline static constexpr unsigned int Class_1_C9A9817DF40FA696___c_TypeDefinitionIndex = 73665;

class Class_1_C9A9817DF40FA696___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_D1E0AD3915BCCF29_91*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::Class_1_D1E0AD3915BCCF29_91*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9A9817DF40FA696___c_TypeDefinitionIndex)->GetStaticField(0x618F0);
	}
	static ::Class_1_C9A9817DF40FA696___c** StaticGet___9()
	{
		return (::Class_1_C9A9817DF40FA696___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9A9817DF40FA696___c_TypeDefinitionIndex)->GetStaticField(0x618F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9A9817DF40FA696___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9A9817DF40FA696___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __SortPosList_b__3_0(::Class_1_D1E0AD3915BCCF29_91* a1, ::Class_1_D1E0AD3915BCCF29_91* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_91*, ::Class_1_D1E0AD3915BCCF29_91*))((::PBYTE)hIl2Cpp + CLASS_1_C9A9817DF40FA696___C___SORTPOSLIST_B__3_0_OFFSET))(this, a1, a2);
	}
};
