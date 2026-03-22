#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A490681D87FEF21;
class Class_1_877AA22B04AFB81F;

#define CLASS_1_B46A5E438595FE97___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F426B0)
#define CLASS_1_B46A5E438595FE97___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F426F0)
#define CLASS_1_B46A5E438595FE97___C___CCTOR_B__27_0_OFFSET UNITYSDK_OFFSET(0x15F42700)

inline static constexpr unsigned int Class_1_B46A5E438595FE97___c_TypeDefinitionIndex = 28047;

class Class_1_B46A5E438595FE97___c : public ::System::Object
{
public:
	static ::Class_1_B46A5E438595FE97___c** StaticGet___9()
	{
		return (::Class_1_B46A5E438595FE97___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B46A5E438595FE97___c_TypeDefinitionIndex)->GetStaticField(0x2E7C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B46A5E438595FE97___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46A5E438595FE97___C__CTOR_OFFSET))(this);
	}

	::System::Single __cctor_b__27_0(::Class_1_0A490681D87FEF21* _, ::Class_1_877AA22B04AFB81F* _, ::System::UInt32 _, ::System::UInt32 _)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_0A490681D87FEF21*, ::Class_1_877AA22B04AFB81F*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B46A5E438595FE97___C___CCTOR_B__27_0_OFFSET))(this, _, _, _, _);
	}
};
