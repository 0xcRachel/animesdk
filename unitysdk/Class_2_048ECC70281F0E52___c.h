#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_048ECC70281F0E52___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEEEC920)
#define CLASS_2_048ECC70281F0E52___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEEEC960)
#define CLASS_2_048ECC70281F0E52___C___SHOWTUTORIALGUIDE_B__5_1_OFFSET UNITYSDK_OFFSET(0xEEEC970)

inline static constexpr unsigned int Class_2_048ECC70281F0E52___c_TypeDefinitionIndex = 54118;

class Class_2_048ECC70281F0E52___c : public ::System::Object
{
public:
	static ::Class_2_048ECC70281F0E52___c** StaticGet___9()
	{
		return (::Class_2_048ECC70281F0E52___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_048ECC70281F0E52___c_TypeDefinitionIndex)->GetStaticField(0x5260);
	}
	static ::System::Action** StaticGet___9__5_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_048ECC70281F0E52___c_TypeDefinitionIndex)->GetStaticField(0x5268);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_048ECC70281F0E52___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_048ECC70281F0E52___C__CTOR_OFFSET))(this);
	}

	::System::Void __ShowTutorialGuide_b__5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_048ECC70281F0E52___C___SHOWTUTORIALGUIDE_B__5_1_OFFSET))(this);
	}
};
