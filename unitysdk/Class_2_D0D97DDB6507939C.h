#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_A5CBD6EBD02154CA;

#define CLASS_2_D0D97DDB6507939C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10E40EE0)
#define CLASS_2_D0D97DDB6507939C_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x10E40E90)
#define CLASS_2_D0D97DDB6507939C_TICK_OFFSET UNITYSDK_OFFSET(0x10E40F30)
#define CLASS_2_D0D97DDB6507939C__CTOR_OFFSET UNITYSDK_OFFSET(0x10E40FD0)
#define CLASS_2_D0D97DDB6507939C___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10E40FE0)

inline static constexpr unsigned int Class_2_D0D97DDB6507939C_TypeDefinitionIndex = 45111;

class Class_2_D0D97DDB6507939C : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_1_A5CBD6EBD02154CA* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0D97DDB6507939C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_A5CBD6EBD02154CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A5CBD6EBD02154CA*))((::PBYTE)hIl2Cpp + CLASS_2_D0D97DDB6507939C_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0D97DDB6507939C_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D0D97DDB6507939C_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D0D97DDB6507939C___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
