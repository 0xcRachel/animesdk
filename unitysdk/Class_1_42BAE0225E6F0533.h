#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CelestialBodyType.h"
#include "unitysdk/System/Object.h"

class CelestialBodyData;
class Class_0_16E4307DCC419505_737;
class OrbitData;
class SolarSystemData;
class VisibilityConfig;
namespace RPG::Client { class SolarSystemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_42BAE0225E6F0533_METHOD_1_3FAAA518D3F433CC_OFFSET UNITYSDK_OFFSET(0xFD7E7E0)
#define CLASS_1_42BAE0225E6F0533_METHOD_1_423325F9A06215F6_OFFSET UNITYSDK_OFFSET(0xFD7E390)
#define CLASS_1_42BAE0225E6F0533_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xFD7EE90)
#define CLASS_1_42BAE0225E6F0533_METHOD_1_7977DF97CE6192D8_OFFSET UNITYSDK_OFFSET(0xFD7EFC0)
#define CLASS_1_42BAE0225E6F0533_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xFD7E700)
#define CLASS_1_42BAE0225E6F0533_METHOD_1_9DF1FF7A918D895E_OFFSET UNITYSDK_OFFSET(0xFD7E9E0)
#define CLASS_1_42BAE0225E6F0533_METHOD_1_A4E70CB481BCC07A_OFFSET UNITYSDK_OFFSET(0xFD7EB50)
#define CLASS_1_42BAE0225E6F0533_METHOD_1_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0xFD7EF20)
#define CLASS_1_42BAE0225E6F0533_METHOD_1_D788A58AD31561C6_OFFSET UNITYSDK_OFFSET(0xFD7E680)
#define CLASS_1_42BAE0225E6F0533__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD7F040)
#define CLASS_1_42BAE0225E6F0533__CTOR_OFFSET UNITYSDK_OFFSET(0xFD7E3A0)

inline static constexpr unsigned int Class_1_42BAE0225E6F0533_TypeDefinitionIndex = 55512;

class Class_1_42BAE0225E6F0533 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::CelestialBodyType>** StaticGet_Field_1_12()
	{
		return (::System::Collections::Generic::List_1<::CelestialBodyType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_42BAE0225E6F0533_TypeDefinitionIndex)->GetStaticField(0x74E0);
	}
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_737*>* Field_1_10; // 0x10
	::SolarSystemData* Field_1_6; // 0x18
	::System::Collections::Generic::Dictionary_2<::CelestialBodyType, ::Class_0_16E4307DCC419505_737*>* Field_1_11; // 0x20
	::VisibilityConfig* Field_1_1; // 0x28
	::System::String* Field_1_0; // 0x30
	::System::Boolean Field_1_4; // 0x38
	::System::Boolean Field_1_5; // 0x39
	::System::Int32 Field_1_8; // 0x3C
	::System::Single Field_1_9; // 0x40
	::System::Single Field_1_3; // 0x44
	::System::Single Field_1_7; // 0x48
	::System::Single Field_1_2; // 0x4C

	::System::Void _ctor(::RPG::Client::SolarSystemConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SolarSystemConfig*))((::PBYTE)hIl2Cpp + CLASS_1_42BAE0225E6F0533__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_42BAE0225E6F0533__CCTOR_OFFSET))();
	}

	::SolarSystemData* Method_1_423325F9A06215F6()
	{
		return ((::SolarSystemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42BAE0225E6F0533_METHOD_1_423325F9A06215F6_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42BAE0225E6F0533_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_3FAAA518D3F433CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42BAE0225E6F0533_METHOD_1_3FAAA518D3F433CC_OFFSET))(this);
	}

	::System::Boolean Method_1_D788A58AD31561C6(::CelestialBodyType a1, ::OrbitData* a2, ::CelestialBodyData* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::CelestialBodyType, ::OrbitData*, ::CelestialBodyData*))((::PBYTE)hIl2Cpp + CLASS_1_42BAE0225E6F0533_METHOD_1_D788A58AD31561C6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9DF1FF7A918D895E(::Class_0_16E4307DCC419505_737* a1, ::CelestialBodyType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_737*, ::CelestialBodyType))((::PBYTE)hIl2Cpp + CLASS_1_42BAE0225E6F0533_METHOD_1_9DF1FF7A918D895E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A4E70CB481BCC07A(::Class_0_16E4307DCC419505_737* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_737*))((::PBYTE)hIl2Cpp + CLASS_1_42BAE0225E6F0533_METHOD_1_A4E70CB481BCC07A_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_42BAE0225E6F0533_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_42BAE0225E6F0533_METHOD_1_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Void Method_1_7977DF97CE6192D8(::VisibilityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::VisibilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_42BAE0225E6F0533_METHOD_1_7977DF97CE6192D8_OFFSET))(this, a1);
	}
};
