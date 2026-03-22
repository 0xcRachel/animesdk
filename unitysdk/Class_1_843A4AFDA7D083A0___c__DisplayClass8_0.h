#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_109729CD11AC6CD9;
class Class_1_1F09213678A820A2;

#define CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x103BDFB0)
#define CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS8_0___TRYADDSHOWDATA_B__1_OFFSET UNITYSDK_OFFSET(0x103BE0F0)

inline static constexpr unsigned int Class_1_843A4AFDA7D083A0___c__DisplayClass8_0_TypeDefinitionIndex = 57428;

class Class_1_843A4AFDA7D083A0___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_1_1F09213678A820A2* data; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryAddShowData_b__1(::Class_1_109729CD11AC6CD9* item)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_109729CD11AC6CD9*))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS8_0___TRYADDSHOWDATA_B__1_OFFSET))(this, item);
	}
};
