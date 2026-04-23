#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5A3AB3BF8EC28EBA.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_3_12AB14B4A1DC6C5B_METHOD_3_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xD1F2DD0)
#define CLASS_3_12AB14B4A1DC6C5B_METHOD_3_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0xD1F2EB0)
#define CLASS_3_12AB14B4A1DC6C5B_METHOD_3_B9164D1137694C18_OFFSET UNITYSDK_OFFSET(0xD1F3080)
#define CLASS_3_12AB14B4A1DC6C5B_METHOD_3_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0xD1F30F0)
#define CLASS_3_12AB14B4A1DC6C5B_METHOD_3_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0xD1F2F40)
#define CLASS_3_12AB14B4A1DC6C5B__CCTOR_OFFSET UNITYSDK_OFFSET(0xD1F3030)
#define CLASS_3_12AB14B4A1DC6C5B__CTOR_OFFSET UNITYSDK_OFFSET(0xD1F2FF0)
#define CLASS_3_12AB14B4A1DC6C5B__ONBIND_OFFSET UNITYSDK_OFFSET(0xD1F2D70)
#define CLASS_3_12AB14B4A1DC6C5B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xD1F3070)

inline static constexpr unsigned int Class_3_12AB14B4A1DC6C5B_TypeDefinitionIndex = 66219;

class Class_3_12AB14B4A1DC6C5B : public ::Class_2_5A3AB3BF8EC28EBA
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_12AB14B4A1DC6C5B_TypeDefinitionIndex)->GetStaticField(0x32990);
	}
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	::UnityEngine::Animation* Field_3_1; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12AB14B4A1DC6C5B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_12AB14B4A1DC6C5B__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12AB14B4A1DC6C5B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12AB14B4A1DC6C5B_METHOD_3_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_3_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_12AB14B4A1DC6C5B_METHOD_3_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_3_848FDD59AB054F3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_12AB14B4A1DC6C5B_METHOD_3_848FDD59AB054F3D_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12AB14B4A1DC6C5B___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_B9164D1137694C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12AB14B4A1DC6C5B_METHOD_3_B9164D1137694C18_OFFSET))(this);
	}

	::System::Void Method_3_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_12AB14B4A1DC6C5B_METHOD_3_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}
};
