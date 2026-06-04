#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_F877D4CB3D5FA9F1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1463C810)
#define CLASS_3_F877D4CB3D5FA9F1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1463C840)
#define CLASS_3_F877D4CB3D5FA9F1___C__FINISHINITGAME_B__15_0_OFFSET UNITYSDK_OFFSET(0x1463C8A0)
#define CLASS_3_F877D4CB3D5FA9F1___C___INITAUDIOPCK_B__12_2_OFFSET UNITYSDK_OFFSET(0x1463C850)

inline static constexpr unsigned int Class_3_F877D4CB3D5FA9F1___c_TypeDefinitionIndex = 57158;

class Class_3_F877D4CB3D5FA9F1___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__15_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F877D4CB3D5FA9F1___c_TypeDefinitionIndex)->GetStaticField(0x8A40);
	}
	static ::System::Action** StaticGet___9__12_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F877D4CB3D5FA9F1___c_TypeDefinitionIndex)->GetStaticField(0x8A48);
	}
	static ::Class_3_F877D4CB3D5FA9F1___c** StaticGet___9()
	{
		return (::Class_3_F877D4CB3D5FA9F1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F877D4CB3D5FA9F1___c_TypeDefinitionIndex)->GetStaticField(0x8A50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1___C__CTOR_OFFSET))(this);
	}

	::System::Void __InitAudioPck_b__12_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1___C___INITAUDIOPCK_B__12_2_OFFSET))(this);
	}

	::System::Void _FinishInitGame_b__15_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1___C__FINISHINITGAME_B__15_0_OFFSET))(this);
	}
};
