#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_D16B8A42F6BB9A9F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD1C9360)
#define CLASS_1_D16B8A42F6BB9A9F___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD1C9390)
#define CLASS_1_D16B8A42F6BB9A9F___C___PLAYSCREENCUT_B__151_0_OFFSET UNITYSDK_OFFSET(0xD1C93A0)

inline static constexpr unsigned int Class_1_D16B8A42F6BB9A9F___c_TypeDefinitionIndex = 48102;

class Class_1_D16B8A42F6BB9A9F___c : public ::System::Object
{
public:
	static ::Class_1_D16B8A42F6BB9A9F___c** StaticGet___9()
	{
		return (::Class_1_D16B8A42F6BB9A9F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D16B8A42F6BB9A9F___c_TypeDefinitionIndex)->GetStaticField(0x19FE0);
	}
	static ::System::Action** StaticGet___9__151_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D16B8A42F6BB9A9F___c_TypeDefinitionIndex)->GetStaticField(0x19FE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D16B8A42F6BB9A9F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16B8A42F6BB9A9F___C__CTOR_OFFSET))(this);
	}

	::System::Void __PlayScreenCut_b__151_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16B8A42F6BB9A9F___C___PLAYSCREENCUT_B__151_0_OFFSET))(this);
	}
};
