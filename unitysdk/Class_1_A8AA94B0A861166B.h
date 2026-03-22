#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_347;
namespace RPG::Client { class SpecialVisionSystem; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_A8AA94B0A861166B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDEC1700)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_46FADA273D811721_OFFSET UNITYSDK_OFFSET(0xDEC04F0)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_4E80C32BD992E8BD_OFFSET UNITYSDK_OFFSET(0xDEC1240)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_58723AF19337DFD2_OFFSET UNITYSDK_OFFSET(0xDEC0B70)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_58FD8BDD015C3AAA_OFFSET UNITYSDK_OFFSET(0xDEC1740)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_7447CBAA6A2E5916_OFFSET UNITYSDK_OFFSET(0xDEC15E0)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0xDEC12E0)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_97285E397E8F5091_OFFSET UNITYSDK_OFFSET(0xDEC0FA0)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_BC2DC3CD22DB8F47_OFFSET UNITYSDK_OFFSET(0xDEC0310)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xDEC0550)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_D4DA5D82D6238D9E_OFFSET UNITYSDK_OFFSET(0xDEC0A50)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0xDEC0740)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_EBEE0D0A222A8264_1_OFFSET UNITYSDK_OFFSET(0xDEC1680)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0xDEC11C0)
#define CLASS_1_A8AA94B0A861166B__CCTOR_OFFSET UNITYSDK_OFFSET(0xDEC1A10)
#define CLASS_1_A8AA94B0A861166B__CTOR_OFFSET UNITYSDK_OFFSET(0xDEC1A00)

inline static constexpr unsigned int Class_1_A8AA94B0A861166B_TypeDefinitionIndex = 54525;

class Class_1_A8AA94B0A861166B : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_17()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2A720);
	}
	static ::System::String** StaticGet_Field_1_16()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2A728);
	}
	static ::System::String** StaticGet_Field_1_18()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2A730);
	}
	static ::System::String** StaticGet_Field_1_14()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2A738);
	}
	static ::System::String** StaticGet_Field_1_22()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2A740);
	}
	static ::System::String** StaticGet_Field_1_24()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2A748);
	}
	static ::Class_1_A8AA94B0A861166B** StaticGet_Field_1_21()
	{
		return (::Class_1_A8AA94B0A861166B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2A750);
	}
	static ::System::String** StaticGet_Field_1_20()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2A758);
	}
	static ::System::String** StaticGet_Field_1_19()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2A760);
	}
	static ::System::String** StaticGet_Field_1_23()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2A768);
	}
	static ::System::String** StaticGet_Field_1_15()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2A770);
	}
	::RPG::Client::SpecialVisionSystem* Field_1_6; // 0x10
	::RPG::GameCore::GameEntity* Field_1_5; // 0x18
	::System::String* Field_1_9; // 0x20
	::RPG::GameCore::EventManager* Field_1_7; // 0x28
	::RPG::GameCore::GameEntity* Field_1_2; // 0x30
	::System::Single Field_1_11; // 0x38
	::System::Boolean Field_1_13; // 0x3C
	::System::Boolean Field_1_10; // 0x3D
	::System::Boolean Field_1_0; // 0x3E
	::System::Boolean Field_1_1; // 0x3F
	::System::UInt32 Field_1_8; // 0x40
	::System::Int32 Field_1_12; // 0x44
	::System::UInt32 Field_1_3; // 0x48
	::System::UInt32 Field_1_4; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B__CCTOR_OFFSET))();
	}

	::System::Void Method_1_BC2DC3CD22DB8F47(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_BC2DC3CD22DB8F47_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_46FADA273D811721(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_46FADA273D811721_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Boolean Method_1_58723AF19337DFD2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_58723AF19337DFD2_OFFSET))(this);
	}

	::System::Boolean Method_1_97285E397E8F5091()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_97285E397E8F5091_OFFSET))(this);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_1_EBEE0D0A222A8264_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_EBEE0D0A222A8264_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7447CBAA6A2E5916(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_7447CBAA6A2E5916_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4E80C32BD992E8BD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_4E80C32BD992E8BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_58FD8BDD015C3AAA(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_58FD8BDD015C3AAA_OFFSET))(this, a1);
	}

	::System::Void Method_1_D4DA5D82D6238D9E(::System::UInt32 a1, ::System::String* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_D4DA5D82D6238D9E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}
};
