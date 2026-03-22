#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CityAtmosphereThread/ECityAtmosphereThreadType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_944;
class Class_1_33CD93C022C9C39F;

#define CLASS_1_4D7F8DF6C5CA4FE8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A32970)
#define CLASS_1_4D7F8DF6C5CA4FE8_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x10A32430)
#define CLASS_1_4D7F8DF6C5CA4FE8_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x10A329F0)
#define CLASS_1_4D7F8DF6C5CA4FE8_METHOD_1_5D0C5F986FBADE92_OFFSET UNITYSDK_OFFSET(0x10A324B0)
#define CLASS_1_4D7F8DF6C5CA4FE8_METHOD_1_8E74AD7CADDB24BA_OFFSET UNITYSDK_OFFSET(0x10A32780)
#define CLASS_1_4D7F8DF6C5CA4FE8_METHOD_1_96826B3FCA681BFB_OFFSET UNITYSDK_OFFSET(0x10A32550)
#define CLASS_1_4D7F8DF6C5CA4FE8_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x10A32450)
#define CLASS_1_4D7F8DF6C5CA4FE8_METHOD_1_AA169839CB93802A_1_OFFSET UNITYSDK_OFFSET(0x10A326C0)
#define CLASS_1_4D7F8DF6C5CA4FE8_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x10A32600)
#define CLASS_1_4D7F8DF6C5CA4FE8_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x10A32440)
#define CLASS_1_4D7F8DF6C5CA4FE8__CTOR_OFFSET UNITYSDK_OFFSET(0x10A32820)

inline static constexpr unsigned int Class_1_4D7F8DF6C5CA4FE8_TypeDefinitionIndex = 62300;

class Class_1_4D7F8DF6C5CA4FE8 : public ::System::Object
{
public:
	static ::Class_1_4D7F8DF6C5CA4FE8** StaticGet__Instance_k__BackingField()
	{
		return (::Class_1_4D7F8DF6C5CA4FE8**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D7F8DF6C5CA4FE8_TypeDefinitionIndex)->GetStaticField(0x2FA80);
	}
	::Il2CppArray<::Class_0_16E4307DCC419505_944*>* Field_1_1; // 0x10
	::Class_1_33CD93C022C9C39F* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D7F8DF6C5CA4FE8__CTOR_OFFSET))(this);
	}

	static ::Class_1_4D7F8DF6C5CA4FE8* get_Instance()
	{
		return ((::Class_1_4D7F8DF6C5CA4FE8*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D7F8DF6C5CA4FE8_GET_INSTANCE_OFFSET))();
	}

	static ::System::Void set_Instance(::Class_1_4D7F8DF6C5CA4FE8* value)
	{
		return ((::System::Void(*)(::Class_1_4D7F8DF6C5CA4FE8*))((::PBYTE)hIl2Cpp + CLASS_1_4D7F8DF6C5CA4FE8_SET_INSTANCE_OFFSET))(value);
	}

	static ::Class_1_33CD93C022C9C39F* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_33CD93C022C9C39F*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D7F8DF6C5CA4FE8_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	static ::System::Void Method_1_5D0C5F986FBADE92(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4D7F8DF6C5CA4FE8_METHOD_1_5D0C5F986FBADE92_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_96826B3FCA681BFB(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D7F8DF6C5CA4FE8_METHOD_1_96826B3FCA681BFB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D7F8DF6C5CA4FE8_METHOD_1_AA169839CB93802A_OFFSET))();
	}

	static ::System::Void Method_1_AA169839CB93802A_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D7F8DF6C5CA4FE8_METHOD_1_AA169839CB93802A_1_OFFSET))();
	}

	static ::System::Void Method_1_8E74AD7CADDB24BA(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4D7F8DF6C5CA4FE8_METHOD_1_8E74AD7CADDB24BA_OFFSET))(a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D7F8DF6C5CA4FE8_DISPOSE_OFFSET))(this);
	}

	::Class_1_33CD93C022C9C39F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_33CD93C022C9C39F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D7F8DF6C5CA4FE8_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
