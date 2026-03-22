#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_277;
class Class_2_8C27D73A0DAA64D4;
class Class_2_91373D945FF91389;

#define CLASS_1_515D5D1FAE590301_METHOD_1_0F42D2784451DA2A_OFFSET UNITYSDK_OFFSET(0x10F95F60)
#define CLASS_1_515D5D1FAE590301_METHOD_1_37E9432FB73B58E7_OFFSET UNITYSDK_OFFSET(0x10F95FE0)
#define CLASS_1_515D5D1FAE590301_METHOD_1_AA041EC2967F998A_OFFSET UNITYSDK_OFFSET(0x10F95E90)
#define CLASS_1_515D5D1FAE590301__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F96130)

inline static constexpr unsigned int Class_1_515D5D1FAE590301_TypeDefinitionIndex = 38915;

class Class_1_515D5D1FAE590301 : public ::System::Object
{
public:
	static ::Class_2_8C27D73A0DAA64D4** StaticGet_Field_1_0()
	{
		return (::Class_2_8C27D73A0DAA64D4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_515D5D1FAE590301_TypeDefinitionIndex)->GetStaticField(0x37BF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_515D5D1FAE590301__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_AA041EC2967F998A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_515D5D1FAE590301_METHOD_1_AA041EC2967F998A_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_277* Method_1_0F42D2784451DA2A()
	{
		return ((::Class_0_16E4307DCC419505_277*(*)())((::PBYTE)hIl2Cpp + CLASS_1_515D5D1FAE590301_METHOD_1_0F42D2784451DA2A_OFFSET))();
	}

	static ::System::Void Method_1_37E9432FB73B58E7(::Class_2_91373D945FF91389* a1)
	{
		return ((::System::Void(*)(::Class_2_91373D945FF91389*))((::PBYTE)hIl2Cpp + CLASS_1_515D5D1FAE590301_METHOD_1_37E9432FB73B58E7_OFFSET))(a1);
	}
};
