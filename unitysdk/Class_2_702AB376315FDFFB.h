#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_519;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_702AB376315FDFFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1C9170)
#define CLASS_2_702AB376315FDFFB_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xD1C90E0)
#define CLASS_2_702AB376315FDFFB_METHOD_2_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0xD1C91C0)
#define CLASS_2_702AB376315FDFFB_METHOD_2_9C1F668AC136A1A1_OFFSET UNITYSDK_OFFSET(0xD1C95D0)
#define CLASS_2_702AB376315FDFFB_TICK_OFFSET UNITYSDK_OFFSET(0xD1C93D0)
#define CLASS_2_702AB376315FDFFB__CTOR_OFFSET UNITYSDK_OFFSET(0xD1C9660)
#define CLASS_2_702AB376315FDFFB___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xD1C9670)

inline static constexpr unsigned int Class_2_702AB376315FDFFB_TypeDefinitionIndex = 52752;

class Class_2_702AB376315FDFFB : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_519*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_702AB376315FDFFB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_702AB376315FDFFB_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_702AB376315FDFFB_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_702AB376315FDFFB_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_9C1F668AC136A1A1(::Class_0_16E4307DCC419505_519* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_519*))((::PBYTE)hIl2Cpp + CLASS_2_702AB376315FDFFB_METHOD_2_9C1F668AC136A1A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_702AB376315FDFFB_METHOD_2_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_702AB376315FDFFB___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
