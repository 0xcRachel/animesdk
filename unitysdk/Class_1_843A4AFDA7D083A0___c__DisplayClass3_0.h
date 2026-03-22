#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_109729CD11AC6CD9;
class Class_1_1F09213678A820A2;

#define CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x103BDA00)
#define CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS3_0__TRYREMOVESHOWDATA_B__0_OFFSET UNITYSDK_OFFSET(0x103BE0B0)
#define CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS3_0__TRYREMOVESHOWDATA_B__1_OFFSET UNITYSDK_OFFSET(0x103BE0D0)

inline static constexpr unsigned int Class_1_843A4AFDA7D083A0___c__DisplayClass3_0_TypeDefinitionIndex = 57427;

class Class_1_843A4AFDA7D083A0___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_1_1F09213678A820A2* data; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _TryRemoveShowData_b__0(::Class_1_109729CD11AC6CD9* item)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_109729CD11AC6CD9*))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS3_0__TRYREMOVESHOWDATA_B__0_OFFSET))(this, item);
	}

	::System::Boolean _TryRemoveShowData_b__1(::Class_1_109729CD11AC6CD9* item)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_109729CD11AC6CD9*))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS3_0__TRYREMOVESHOWDATA_B__1_OFFSET))(this, item);
	}
};
