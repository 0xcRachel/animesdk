#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7F753D12928E830D;

#define CLASS_1_7F753D12928E830D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9EB310)
#define CLASS_1_7F753D12928E830D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9EB350)
#define CLASS_1_7F753D12928E830D___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1A9EB360)

inline static constexpr unsigned int Class_1_7F753D12928E830D___c_TypeDefinitionIndex = 24436;

class Class_1_7F753D12928E830D___c : public ::System::Object
{
public:
	static ::Class_1_7F753D12928E830D___c** StaticGet___9()
	{
		return (::Class_1_7F753D12928E830D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F753D12928E830D___c_TypeDefinitionIndex)->GetStaticField(0x23720);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F753D12928E830D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F753D12928E830D___C__CTOR_OFFSET))(this);
	}

	::Class_1_7F753D12928E830D* __cctor_b__33_0()
	{
		return ((::Class_1_7F753D12928E830D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F753D12928E830D___C___CCTOR_B__33_0_OFFSET))(this);
	}
};
