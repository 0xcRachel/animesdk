#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_83288D0BBCD65F9B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D882F0)
#define CLASS_1_83288D0BBCD65F9B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10D88330)
#define CLASS_1_83288D0BBCD65F9B___C___CREATEBIGDATARECOMMEND_B__4_0_OFFSET UNITYSDK_OFFSET(0x10D88460)
#define CLASS_1_83288D0BBCD65F9B___C___CREATESYSTEMRECOMMEND_B__3_0_OFFSET UNITYSDK_OFFSET(0x10D88340)

inline static constexpr unsigned int Class_1_83288D0BBCD65F9B___c_TypeDefinitionIndex = 52121;

class Class_1_83288D0BBCD65F9B___c : public ::System::Object
{
public:
	static ::Class_1_83288D0BBCD65F9B___c** StaticGet___9()
	{
		return (::Class_1_83288D0BBCD65F9B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83288D0BBCD65F9B___c_TypeDefinitionIndex)->GetStaticField(0x22FC0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__3_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83288D0BBCD65F9B___c_TypeDefinitionIndex)->GetStaticField(0x22FC8);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__4_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83288D0BBCD65F9B___c_TypeDefinitionIndex)->GetStaticField(0x22FD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83288D0BBCD65F9B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83288D0BBCD65F9B___C__CTOR_OFFSET))(this);
	}

	::System::String* __CreateSystemRecommend_b__3_0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83288D0BBCD65F9B___C___CREATESYSTEMRECOMMEND_B__3_0_OFFSET))(this);
	}

	::System::String* __CreateBigDataRecommend_b__4_0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83288D0BBCD65F9B___C___CREATEBIGDATARECOMMEND_B__4_0_OFFSET))(this);
	}
};
