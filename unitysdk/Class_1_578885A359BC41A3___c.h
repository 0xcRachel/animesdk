#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_567;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_578885A359BC41A3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC4CEA80)
#define CLASS_1_578885A359BC41A3___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC4CEAB0)
#define CLASS_1_578885A359BC41A3___C__SKIPVIRTUALTIMETABLETONEXTSUBWAYARRIVED_B__25_0_OFFSET UNITYSDK_OFFSET(0xC4CEAC0)

inline static constexpr unsigned int Class_1_578885A359BC41A3___c_TypeDefinitionIndex = 55189;

class Class_1_578885A359BC41A3___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_0_16E4307DCC419505_567*, ::System::Boolean>** StaticGet___9__25_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_567*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_578885A359BC41A3___c_TypeDefinitionIndex)->GetStaticField(0x5EC00);
	}
	static ::Class_1_578885A359BC41A3___c** StaticGet___9()
	{
		return (::Class_1_578885A359BC41A3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_578885A359BC41A3___c_TypeDefinitionIndex)->GetStaticField(0x5EC08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _SkipVirtualTimetableToNextSubwayArrived_b__25_0(::Class_0_16E4307DCC419505_567* manager)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_567*))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3___C__SKIPVIRTUALTIMETABLETONEXTSUBWAYARRIVED_B__25_0_OFFSET))(this, manager);
	}
};
