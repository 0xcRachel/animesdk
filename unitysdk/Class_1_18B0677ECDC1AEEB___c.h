#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_450;
class Class_0_16E4307DCC419505_452;
class Class_2_2690241A4D35989E;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_18B0677ECDC1AEEB___C__ADDPROGRESSLOG_B__90_5_OFFSET UNITYSDK_OFFSET(0x10F4AD40)
#define CLASS_1_18B0677ECDC1AEEB___C__ADDPROGRESSLOG_B__90_6_OFFSET UNITYSDK_OFFSET(0x10F4AD80)
#define CLASS_1_18B0677ECDC1AEEB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F4ACF0)
#define CLASS_1_18B0677ECDC1AEEB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F4AD30)

inline static constexpr unsigned int Class_1_18B0677ECDC1AEEB___c_TypeDefinitionIndex = 47111;

class Class_1_18B0677ECDC1AEEB___c : public ::System::Object
{
public:
	static ::Class_1_18B0677ECDC1AEEB___c** StaticGet___9()
	{
		return (::Class_1_18B0677ECDC1AEEB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_18B0677ECDC1AEEB___c_TypeDefinitionIndex)->GetStaticField(0x33B70);
	}
	static ::System::Action_1<::Class_2_2690241A4D35989E*>** StaticGet___9__90_6()
	{
		return (::System::Action_1<::Class_2_2690241A4D35989E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_18B0677ECDC1AEEB___c_TypeDefinitionIndex)->GetStaticField(0x33B78);
	}
	static ::System::Action_2<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*>** StaticGet___9__90_5()
	{
		return (::System::Action_2<::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_18B0677ECDC1AEEB___c_TypeDefinitionIndex)->GetStaticField(0x33B80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB___C__CTOR_OFFSET))(this);
	}

	::System::Void _AddProgressLog_b__90_5(::Class_0_16E4307DCC419505_450* progress, ::Class_0_16E4307DCC419505_452* data)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB___C__ADDPROGRESSLOG_B__90_5_OFFSET))(this, progress, data);
	}

	::System::Void _AddProgressLog_b__90_6(::Class_2_2690241A4D35989E* ax)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*))((::PBYTE)hIl2Cpp + CLASS_1_18B0677ECDC1AEEB___C__ADDPROGRESSLOG_B__90_6_OFFSET))(this, ax);
	}
};
