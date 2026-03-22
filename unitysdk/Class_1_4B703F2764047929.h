#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PerformanceManager; }
namespace RPGTools { class MonoTimelineEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4B703F2764047929_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD237980)
#define CLASS_1_4B703F2764047929_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xD2378F0)
#define CLASS_1_4B703F2764047929_METHOD_1_27C97DD54FC313CD_OFFSET UNITYSDK_OFFSET(0xD237C80)
#define CLASS_1_4B703F2764047929_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xD238170)
#define CLASS_1_4B703F2764047929_METHOD_1_5CFB842120701715_OFFSET UNITYSDK_OFFSET(0xD238090)
#define CLASS_1_4B703F2764047929_METHOD_1_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0xD237B70)
#define CLASS_1_4B703F2764047929_METHOD_1_9076BB310BB6989E_OFFSET UNITYSDK_OFFSET(0xD2381F0)
#define CLASS_1_4B703F2764047929_METHOD_1_B9DFD2BB671CA1CD_OFFSET UNITYSDK_OFFSET(0xD238340)
#define CLASS_1_4B703F2764047929_METHOD_1_EBC30BBFA7BA7900_OFFSET UNITYSDK_OFFSET(0xD237E50)
#define CLASS_1_4B703F2764047929_METHOD_1_EDC14BF43D2DE2A9_OFFSET UNITYSDK_OFFSET(0xD2379D0)
#define CLASS_1_4B703F2764047929_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xD237F80)
#define CLASS_1_4B703F2764047929_METHOD_1_FFC37B94788B1CC4_OFFSET UNITYSDK_OFFSET(0xD237FD0)
#define CLASS_1_4B703F2764047929_TICK_OFFSET UNITYSDK_OFFSET(0xD237B00)
#define CLASS_1_4B703F2764047929__CTOR_OFFSET UNITYSDK_OFFSET(0xD2378A0)

inline static constexpr unsigned int Class_1_4B703F2764047929_TypeDefinitionIndex = 48095;

class Class_1_4B703F2764047929 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPGTools::MonoTimelineEffect*>* Field_1_2; // 0x10
	::RPG::Client::PerformanceManager* Field_1_0; // 0x18
	::System::Single Field_1_3; // 0x20
	::System::Boolean Field_1_1; // 0x24
	::System::Boolean Field_1_4; // 0x25

	::System::Void _ctor(::RPG::Client::PerformanceManager* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_7E1BADD1D133FA1C_OFFSET))(this);
	}

	::System::Void Method_1_27C97DD54FC313CD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_27C97DD54FC313CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBC30BBFA7BA7900(::RPGTools::MonoTimelineEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::MonoTimelineEffect*))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_EBC30BBFA7BA7900_OFFSET))(this, a1);
	}

	::System::Void Method_1_FFC37B94788B1CC4(::RPGTools::MonoTimelineEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::MonoTimelineEffect*))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_FFC37B94788B1CC4_OFFSET))(this, a1);
	}

	::RPGTools::MonoTimelineEffect* Method_1_5CFB842120701715(::System::String* a1)
	{
		return ((::RPGTools::MonoTimelineEffect*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_5CFB842120701715_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDC14BF43D2DE2A9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_EDC14BF43D2DE2A9_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9DFD2BB671CA1CD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_B9DFD2BB671CA1CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_9076BB310BB6989E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_9076BB310BB6989E_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}
};
