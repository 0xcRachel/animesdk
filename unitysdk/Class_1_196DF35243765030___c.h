#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_196DF35243765030;

#define CLASS_1_196DF35243765030___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D30D20)
#define CLASS_1_196DF35243765030___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19D30D50)
#define CLASS_1_196DF35243765030___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x19D30D60)

inline static constexpr unsigned int Class_1_196DF35243765030___c_TypeDefinitionIndex = 32396;

class Class_1_196DF35243765030___c : public ::System::Object
{
public:
	static ::Class_1_196DF35243765030___c** StaticGet___9()
	{
		return (::Class_1_196DF35243765030___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_196DF35243765030___c_TypeDefinitionIndex)->GetStaticField(0x15640);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_196DF35243765030___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196DF35243765030___C__CTOR_OFFSET))(this);
	}

	::Class_1_196DF35243765030* __cctor_b__43_0()
	{
		return ((::Class_1_196DF35243765030*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196DF35243765030___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
