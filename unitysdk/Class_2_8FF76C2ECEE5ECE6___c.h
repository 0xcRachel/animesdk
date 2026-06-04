#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1FF62FAE312BC49_7;
class Class_1_D17272E82AE804C2_682;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_8FF76C2ECEE5ECE6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F42320)
#define CLASS_2_8FF76C2ECEE5ECE6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14F42360)
#define CLASS_2_8FF76C2ECEE5ECE6___C__SENDPIXAIRGETDATACSREQ_B__5_0_OFFSET UNITYSDK_OFFSET(0x14F42370)
#define CLASS_2_8FF76C2ECEE5ECE6___C__SENDPIXAIRQUITSTAGECSREQ_B__9_0_OFFSET UNITYSDK_OFFSET(0x14F42380)

inline static constexpr unsigned int Class_2_8FF76C2ECEE5ECE6___c_TypeDefinitionIndex = 73546;

class Class_2_8FF76C2ECEE5ECE6___c : public ::System::Object
{
public:
	static ::Class_2_8FF76C2ECEE5ECE6___c** StaticGet___9()
	{
		return (::Class_2_8FF76C2ECEE5ECE6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8FF76C2ECEE5ECE6___c_TypeDefinitionIndex)->GetStaticField(0x121F0);
	}
	static ::System::Action_1<::Class_1_B1FF62FAE312BC49_7*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_1_B1FF62FAE312BC49_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8FF76C2ECEE5ECE6___c_TypeDefinitionIndex)->GetStaticField(0x121F8);
	}
	static ::System::Action_1<::Class_1_D17272E82AE804C2_682*>** StaticGet___9__9_0()
	{
		return (::System::Action_1<::Class_1_D17272E82AE804C2_682*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8FF76C2ECEE5ECE6___c_TypeDefinitionIndex)->GetStaticField(0x12200);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8FF76C2ECEE5ECE6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FF76C2ECEE5ECE6___C__CTOR_OFFSET))(this);
	}

	::System::Void _SendPixAirGetDataCsReq_b__5_0(::Class_1_B1FF62FAE312BC49_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_7*))((::PBYTE)hIl2Cpp + CLASS_2_8FF76C2ECEE5ECE6___C__SENDPIXAIRGETDATACSREQ_B__5_0_OFFSET))(this, a1);
	}

	::System::Void _SendPixAirQuitStageCsReq_b__9_0(::Class_1_D17272E82AE804C2_682* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_682*))((::PBYTE)hIl2Cpp + CLASS_2_8FF76C2ECEE5ECE6___C__SENDPIXAIRQUITSTAGECSREQ_B__9_0_OFFSET))(this, a1);
	}
};
