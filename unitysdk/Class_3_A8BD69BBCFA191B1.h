#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

class WaveSimPanel;
namespace RPG::Client::DynamicFloatingObject { class DynamicFloatingManagerMono; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_3CCA0B8A31B650A8_1_OFFSET UNITYSDK_OFFSET(0x10BEDF10)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x10BEDD10)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x10BEE390)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x10BEE3F0)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x10BEE450)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10BEE330)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x10BEE280)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_73E3A8004F92B3A6_OFFSET UNITYSDK_OFFSET(0x10BEDAD0)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10BEDCB0)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_F245C316033C505E_OFFSET UNITYSDK_OFFSET(0x10BEE1E0)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x10BEDB10)
#define CLASS_3_A8BD69BBCFA191B1_TICK_OFFSET UNITYSDK_OFFSET(0x10BEE110)
#define CLASS_3_A8BD69BBCFA191B1__CTOR_OFFSET UNITYSDK_OFFSET(0x10BEE320)
#define CLASS_3_A8BD69BBCFA191B1___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10BEE4B0)

inline static constexpr unsigned int Class_3_A8BD69BBCFA191B1_TypeDefinitionIndex = 58572;

class Class_3_A8BD69BBCFA191B1 : public ::RPG::Client::TABehaviorBase
{
public:
	static ::Class_3_A8BD69BBCFA191B1** StaticGet_Field_3_0()
	{
		return (::Class_3_A8BD69BBCFA191B1**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A8BD69BBCFA191B1_TypeDefinitionIndex)->GetStaticField(0x7110);
	}
	::WaveSimPanel* Field_3_2; // 0x38
	::RPG::Client::DynamicFloatingObject::DynamicFloatingManagerMono* Field_3_1; // 0x40
	::System::Boolean Field_3_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1__CTOR_OFFSET))(this);
	}

	static ::Class_3_A8BD69BBCFA191B1* Method_3_73E3A8004F92B3A6()
	{
		return ((::Class_3_A8BD69BBCFA191B1*(*)())((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_METHOD_3_73E3A8004F92B3A6_OFFSET))();
	}

	::System::Void Method_3_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_METHOD_3_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_METHOD_3_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_3_3CCA0B8A31B650A8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_METHOD_3_3CCA0B8A31B650A8_1_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_F245C316033C505E(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_METHOD_3_F245C316033C505E_OFFSET))(this, a1);
	}

	::System::Void Method_3_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_METHOD_3_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
