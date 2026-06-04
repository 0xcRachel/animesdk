#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_541;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9A13CA3DCD0659E3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x133E8D10)
#define CLASS_2_9A13CA3DCD0659E3_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x133E8C80)
#define CLASS_2_9A13CA3DCD0659E3_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x133E91C0)
#define CLASS_2_9A13CA3DCD0659E3_METHOD_2_D1305BC17A89C222_OFFSET UNITYSDK_OFFSET(0x133E8D60)
#define CLASS_2_9A13CA3DCD0659E3_TICK_OFFSET UNITYSDK_OFFSET(0x133E8F90)
#define CLASS_2_9A13CA3DCD0659E3__CTOR_OFFSET UNITYSDK_OFFSET(0x133E92A0)
#define CLASS_2_9A13CA3DCD0659E3___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x133E92B0)

inline static constexpr unsigned int Class_2_9A13CA3DCD0659E3_TypeDefinitionIndex = 53457;

class Class_2_9A13CA3DCD0659E3 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_541*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A13CA3DCD0659E3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A13CA3DCD0659E3_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A13CA3DCD0659E3_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A13CA3DCD0659E3_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_541* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_541*))((::PBYTE)hIl2Cpp + CLASS_2_9A13CA3DCD0659E3_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_D1305BC17A89C222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A13CA3DCD0659E3_METHOD_2_D1305BC17A89C222_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A13CA3DCD0659E3___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
