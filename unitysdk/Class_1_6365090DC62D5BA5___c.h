#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0B052D8983672B34;
class Class_1_BCC22A53597699D4;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_6365090DC62D5BA5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1621BAB0)
#define CLASS_1_6365090DC62D5BA5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1621BAE0)
#define CLASS_1_6365090DC62D5BA5___C___SORT_B__15_0_OFFSET UNITYSDK_OFFSET(0x1621BAF0)
#define CLASS_1_6365090DC62D5BA5___C___SORT_B__15_1_OFFSET UNITYSDK_OFFSET(0x1621BB70)

inline static constexpr unsigned int Class_1_6365090DC62D5BA5___c_TypeDefinitionIndex = 32719;

class Class_1_6365090DC62D5BA5___c : public ::System::Object
{
public:
	static ::Class_1_6365090DC62D5BA5___c** StaticGet___9()
	{
		return (::Class_1_6365090DC62D5BA5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6365090DC62D5BA5___c_TypeDefinitionIndex)->GetStaticField(0x137C0);
	}
	static ::System::Comparison_1<::Class_1_0B052D8983672B34*>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::Class_1_0B052D8983672B34*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6365090DC62D5BA5___c_TypeDefinitionIndex)->GetStaticField(0x137C8);
	}
	static ::System::Comparison_1<::Class_1_BCC22A53597699D4*>** StaticGet___9__15_1()
	{
		return (::System::Comparison_1<::Class_1_BCC22A53597699D4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6365090DC62D5BA5___c_TypeDefinitionIndex)->GetStaticField(0x137D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6365090DC62D5BA5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6365090DC62D5BA5___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __Sort_b__15_0(::Class_1_0B052D8983672B34* x, ::Class_1_0B052D8983672B34* y)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_0B052D8983672B34*, ::Class_1_0B052D8983672B34*))((::PBYTE)hIl2Cpp + CLASS_1_6365090DC62D5BA5___C___SORT_B__15_0_OFFSET))(this, x, y);
	}

	::System::Int32 __Sort_b__15_1(::Class_1_BCC22A53597699D4* x, ::Class_1_BCC22A53597699D4* y)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_BCC22A53597699D4*, ::Class_1_BCC22A53597699D4*))((::PBYTE)hIl2Cpp + CLASS_1_6365090DC62D5BA5___C___SORT_B__15_1_OFFSET))(this, x, y);
	}
};
