#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BillboardController; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x9C70330)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_26A1CC793D7F765C_OFFSET UNITYSDK_OFFSET(0x9C708A0)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_3D89102E85987FAC_OFFSET UNITYSDK_OFFSET(0x9C70F20)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9C707C0)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x9C71C70)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x9C71D40)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x9C71DA0)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9C71C10)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x9C6FC60)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_9B65AEC684B9E219_OFFSET UNITYSDK_OFFSET(0x9C70980)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x9C6FC10)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x9C702A0)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9C70180)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_B50CA01B5EDC1228_OFFSET UNITYSDK_OFFSET(0x9C70720)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_BE28ABCD589AA602_OFFSET UNITYSDK_OFFSET(0x9C71550)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_C6C47C9FFA92653C_OFFSET UNITYSDK_OFFSET(0x9C703A0)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9C70260)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x9C70840)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9C70140)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CC32BB23BD684E52_OFFSET UNITYSDK_OFFSET(0x9C704B0)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CF913A5B5B554D96_OFFSET UNITYSDK_OFFSET(0x9C708E0)
#define CLASS_3_3CD00A1D2AD9A3A8_TICK_OFFSET UNITYSDK_OFFSET(0x9C70450)
#define CLASS_3_3CD00A1D2AD9A3A8__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C6FAB0)
#define CLASS_3_3CD00A1D2AD9A3A8__CTOR_OFFSET UNITYSDK_OFFSET(0x9C71C00)
#define CLASS_3_3CD00A1D2AD9A3A8___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9C71CD0)

inline static constexpr unsigned int Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex = 57983;

class Class_3_3CD00A1D2AD9A3A8 : public ::RPG::Client::TABehaviorBase
{
public:
	static ::UnityEngine::Material** StaticGet_Field_3_30()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x3DE00);
	}
	static ::System::Int32* StaticGet_Field_3_28()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x10040);
	}
	static ::System::Int32* StaticGet_Field_3_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x10044);
	}
	static ::System::Int32* StaticGet_Field_3_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x10048);
	}
	static ::System::Int32* StaticGet_Field_3_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x1004C);
	}
	static ::System::Int32* StaticGet_Field_3_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x10050);
	}
	static ::System::Int32* StaticGet_Field_3_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x10054);
	}
	static ::System::Int32* StaticGet_Field_3_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x10058);
	}
	static ::System::Int32* StaticGet_Field_3_29()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x1005C);
	}
	static ::System::Int32* StaticGet_Field_3_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x10060);
	}
	static ::System::Int32* StaticGet_Field_3_25()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x10064);
	}
	static ::System::Int32* StaticGet_Field_3_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x10068);
	}
	static ::System::Int32* StaticGet_Field_3_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x1006C);
	}
	static ::System::Int32* StaticGet_Field_3_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x10070);
	}
	static ::System::Int32* StaticGet_Field_3_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x10074);
	}
	static ::System::Int32* StaticGet_Field_3_24()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x10078);
	}
	static ::System::Int32* StaticGet_Field_3_26()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x1007C);
	}
	static ::System::Int32* StaticGet_Field_3_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x10080);
	}
	static ::System::Int32* StaticGet_Field_3_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x10084);
	}
	::UnityEngine::MaterialPropertyBlock* Field_3_2; // 0x38
	::Il2CppArray<::UnityEngine::Renderer*>* Field_3_1; // 0x40
	::UnityEngine::Material* Field_3_8; // 0x48
	::UnityEngine::Transform* Field_3_9; // 0x50
	::UnityEngine::Transform* Field_3_5; // 0x58
	::System::Single Field_3_0; // 0x60
	::UnityEngine::Vector3 Field_3_6; // 0x64
	::System::Single Field_3_4; // 0x70
	::System::Single Field_3_7; // 0x74
	::System::Single Field_3_3; // 0x78
	::System::Boolean Field_3_11; // 0x7C
	::System::Boolean Field_3_10; // 0x7D

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_3_C6C47C9FFA92653C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_C6C47C9FFA92653C_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_B50CA01B5EDC1228()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_B50CA01B5EDC1228_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_8C704EC832EDEFC8_OFFSET))(this);
	}

	::UnityEngine::Material* Method_3_CF913A5B5B554D96(::UnityEngine::Renderer* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CF913A5B5B554D96_OFFSET))(this, a1);
	}

	::System::Void Method_3_CC32BB23BD684E52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CC32BB23BD684E52_OFFSET))(this);
	}

	::System::Void Method_3_9B65AEC684B9E219(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_9B65AEC684B9E219_OFFSET))(this, a1);
	}

	::System::Void Method_3_3D89102E85987FAC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_3D89102E85987FAC_OFFSET))(this, a1);
	}

	::System::Void Method_3_BE28ABCD589AA602(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_BE28ABCD589AA602_OFFSET))(this, a1);
	}

	::RPG::Client::BillboardController* Method_3_26A1CC793D7F765C()
	{
		return ((::RPG::Client::BillboardController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_26A1CC793D7F765C_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void Method_3_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
	}
};
