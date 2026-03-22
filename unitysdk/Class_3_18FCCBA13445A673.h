#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_18FCCBA13445A673_METHOD_3_620F752B8758282A_OFFSET UNITYSDK_OFFSET(0x1673E210)
#define CLASS_3_18FCCBA13445A673_METHOD_3_B291FB5C41D58000_OFFSET UNITYSDK_OFFSET(0x1673E290)
#define CLASS_3_18FCCBA13445A673__CTOR_OFFSET UNITYSDK_OFFSET(0x1673E260)

inline static constexpr unsigned int Class_3_18FCCBA13445A673_TypeDefinitionIndex = 19123;

class Class_3_18FCCBA13445A673 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18
	::Il2CppArray<::System::String*>* Field_3_5; // 0x20
	::System::Single Field_3_4; // 0x28
	::System::Boolean Field_3_6; // 0x2C
	::System::Boolean Field_3_1; // 0x2D
	::System::Boolean Field_3_3; // 0x2E
	::System::Boolean Field_3_2; // 0x2F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18FCCBA13445A673__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_620F752B8758282A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_18FCCBA13445A673*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_18FCCBA13445A673*&))((::PBYTE)hIl2Cpp + CLASS_3_18FCCBA13445A673_METHOD_3_620F752B8758282A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B291FB5C41D58000(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_18FCCBA13445A673* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_18FCCBA13445A673*))((::PBYTE)hIl2Cpp + CLASS_3_18FCCBA13445A673_METHOD_3_B291FB5C41D58000_OFFSET))(a1, a2);
	}
};
