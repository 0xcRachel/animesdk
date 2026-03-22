#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6B3EDCBEF279C737_Class_1_9A93F927319E5AA2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_6B3EDCBEF279C737___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8461CF0)
#define CLASS_2_6B3EDCBEF279C737___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8461D20)
#define CLASS_2_6B3EDCBEF279C737___C__HASCUSTOMTOPPANEL_B__0_0_OFFSET UNITYSDK_OFFSET(0x8461D30)

inline static constexpr unsigned int Class_2_6B3EDCBEF279C737___c_TypeDefinitionIndex = 57417;

class Class_2_6B3EDCBEF279C737___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_6B3EDCBEF279C737_Class_1_9A93F927319E5AA2*, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_2_6B3EDCBEF279C737_Class_1_9A93F927319E5AA2*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6B3EDCBEF279C737___c_TypeDefinitionIndex)->GetStaticField(0x35A90);
	}
	static ::Class_2_6B3EDCBEF279C737___c** StaticGet___9()
	{
		return (::Class_2_6B3EDCBEF279C737___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6B3EDCBEF279C737___c_TypeDefinitionIndex)->GetStaticField(0x35A98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6B3EDCBEF279C737___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B3EDCBEF279C737___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _HasCustomTopPanel_b__0_0(::Class_2_6B3EDCBEF279C737_Class_1_9A93F927319E5AA2* config)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6B3EDCBEF279C737_Class_1_9A93F927319E5AA2*))((::PBYTE)hIl2Cpp + CLASS_2_6B3EDCBEF279C737___C__HASCUSTOMTOPPANEL_B__0_0_OFFSET))(this, config);
	}
};
