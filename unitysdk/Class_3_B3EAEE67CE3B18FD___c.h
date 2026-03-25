#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_B3EAEE67CE3B18FD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11707740)
#define CLASS_3_B3EAEE67CE3B18FD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11707770)
#define CLASS_3_B3EAEE67CE3B18FD___C__FINISHINITGAME_B__15_0_OFFSET UNITYSDK_OFFSET(0x117077D0)
#define CLASS_3_B3EAEE67CE3B18FD___C___INITAUDIOPCK_B__12_2_OFFSET UNITYSDK_OFFSET(0x11707780)

inline static constexpr unsigned int Class_3_B3EAEE67CE3B18FD___c_TypeDefinitionIndex = 49574;

class Class_3_B3EAEE67CE3B18FD___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__15_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B3EAEE67CE3B18FD___c_TypeDefinitionIndex)->GetStaticField(0x33D50);
	}
	static ::System::Action** StaticGet___9__12_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B3EAEE67CE3B18FD___c_TypeDefinitionIndex)->GetStaticField(0x33D58);
	}
	static ::Class_3_B3EAEE67CE3B18FD___c** StaticGet___9()
	{
		return (::Class_3_B3EAEE67CE3B18FD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B3EAEE67CE3B18FD___c_TypeDefinitionIndex)->GetStaticField(0x33D60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD___C__CTOR_OFFSET))(this);
	}

	::System::Void __InitAudioPck_b__12_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD___C___INITAUDIOPCK_B__12_2_OFFSET))(this);
	}

	::System::Void _FinishInitGame_b__15_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD___C__FINISHINITGAME_B__15_0_OFFSET))(this);
	}
};
