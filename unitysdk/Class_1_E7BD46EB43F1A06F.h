#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_E7BD46EB43F1A06F__CCTOR_OFFSET UNITYSDK_OFFSET(0xD1C35D0)
#define CLASS_1_E7BD46EB43F1A06F__CTOR_OFFSET UNITYSDK_OFFSET(0xD1C35C0)

inline static constexpr unsigned int Class_1_E7BD46EB43F1A06F_TypeDefinitionIndex = 49906;

class Class_1_E7BD46EB43F1A06F : public ::System::Object
{
public:
	static ::Class_1_E7BD46EB43F1A06F** StaticGet_Field_1_2()
	{
		return (::Class_1_E7BD46EB43F1A06F**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7BD46EB43F1A06F_TypeDefinitionIndex)->GetStaticField(0x2E080);
	}
	::RPG::GameCore::FixPoint Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7BD46EB43F1A06F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7BD46EB43F1A06F__CCTOR_OFFSET))();
	}
};
