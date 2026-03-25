#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_D16B8A42F6BB9A9F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x111DAFB0)
#define CLASS_1_D16B8A42F6BB9A9F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x111DAFE0)
#define CLASS_1_D16B8A42F6BB9A9F___C___PLAYSCREENCUT_B__155_0_OFFSET UNITYSDK_OFFSET(0x111DAFF0)

inline static constexpr unsigned int Class_1_D16B8A42F6BB9A9F___c_TypeDefinitionIndex = 49193;

class Class_1_D16B8A42F6BB9A9F___c : public ::System::Object
{
public:
	static ::Class_1_D16B8A42F6BB9A9F___c** StaticGet___9()
	{
		return (::Class_1_D16B8A42F6BB9A9F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D16B8A42F6BB9A9F___c_TypeDefinitionIndex)->GetStaticField(0x48D50);
	}
	static ::System::Action** StaticGet___9__155_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D16B8A42F6BB9A9F___c_TypeDefinitionIndex)->GetStaticField(0x48D58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D16B8A42F6BB9A9F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16B8A42F6BB9A9F___C__CTOR_OFFSET))(this);
	}

	::System::Void __PlayScreenCut_b__155_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16B8A42F6BB9A9F___C___PLAYSCREENCUT_B__155_0_OFFSET))(this);
	}
};
