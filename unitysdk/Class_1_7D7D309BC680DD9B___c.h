#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_7D7D309BC680DD9B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10DBDC20)
#define CLASS_1_7D7D309BC680DD9B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10DBDC60)
#define CLASS_1_7D7D309BC680DD9B___C__REMOVELAUCHERRECORD_B__7_0_OFFSET UNITYSDK_OFFSET(0x10DBDC70)

inline static constexpr unsigned int Class_1_7D7D309BC680DD9B___c_TypeDefinitionIndex = 48542;

class Class_1_7D7D309BC680DD9B___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D7D309BC680DD9B___c_TypeDefinitionIndex)->GetStaticField(0x25D40);
	}
	static ::Class_1_7D7D309BC680DD9B___c** StaticGet___9()
	{
		return (::Class_1_7D7D309BC680DD9B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D7D309BC680DD9B___c_TypeDefinitionIndex)->GetStaticField(0x25D48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D7D309BC680DD9B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D7D309BC680DD9B___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveLaucherRecord_b__7_0(::System::String* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7D7D309BC680DD9B___C__REMOVELAUCHERRECORD_B__7_0_OFFSET))(this, e);
	}
};
