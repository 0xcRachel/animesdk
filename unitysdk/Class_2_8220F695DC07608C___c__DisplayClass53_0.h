#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A12205C602394C2F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8220F695DC07608C___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105A2530)
#define CLASS_2_8220F695DC07608C___C__DISPLAYCLASS53_0___SETUPLINKEDITEM_B__0_OFFSET UNITYSDK_OFFSET(0x105A4090)

inline static constexpr unsigned int Class_2_8220F695DC07608C___c__DisplayClass53_0_TypeDefinitionIndex = 56853;

class Class_2_8220F695DC07608C___c__DisplayClass53_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* iconPaths; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8220F695DC07608C___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
	}

	::System::Void __SetupLinkedItem_b__0(::Class_2_A12205C602394C2F* panel, ::System::Int32 i)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A12205C602394C2F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8220F695DC07608C___C__DISPLAYCLASS53_0___SETUPLINKEDITEM_B__0_OFFSET))(this, panel, i);
	}
};
