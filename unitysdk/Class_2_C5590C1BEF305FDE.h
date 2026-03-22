#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_151B93D9C4BBDCA4.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameClientNetMode.h"

class Class_1_75C90E178B164D38;
class Class_3_8DD85AA212CEC7D4;
class Class_3_F36DF45E925CAADA;

#define CLASS_2_C5590C1BEF305FDE_METHOD_2_2F5AC4358F4D89A9_OFFSET UNITYSDK_OFFSET(0x1026E630)
#define CLASS_2_C5590C1BEF305FDE_METHOD_2_9407410AABC43F0E_OFFSET UNITYSDK_OFFSET(0x1026E640)
#define CLASS_2_C5590C1BEF305FDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1026E650)
#define CLASS_2_C5590C1BEF305FDE__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1026E520)
#define CLASS_2_C5590C1BEF305FDE__ONINIT_OFFSET UNITYSDK_OFFSET(0x1026DE20)
#define CLASS_2_C5590C1BEF305FDE__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1026E170)
#define CLASS_2_C5590C1BEF305FDE__ONSTART_OFFSET UNITYSDK_OFFSET(0x1026DFC0)
#define CLASS_2_C5590C1BEF305FDE__ONTICK_OFFSET UNITYSDK_OFFSET(0x1026E090)
#define CLASS_2_C5590C1BEF305FDE___IFIXBASEPROXY__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1026E7B0)
#define CLASS_2_C5590C1BEF305FDE___IFIXBASEPROXY__ONINIT_OFFSET UNITYSDK_OFFSET(0x1026E6E0)
#define CLASS_2_C5590C1BEF305FDE___IFIXBASEPROXY__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1026E880)
#define CLASS_2_C5590C1BEF305FDE___IFIXBASEPROXY__ONSTART_OFFSET UNITYSDK_OFFSET(0x1026E750)
#define CLASS_2_C5590C1BEF305FDE___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x1026E810)

inline static constexpr unsigned int Class_2_C5590C1BEF305FDE_TypeDefinitionIndex = 47964;

class Class_2_C5590C1BEF305FDE : public ::Class_1_151B93D9C4BBDCA4
{
public:
	::Class_3_8DD85AA212CEC7D4* Field_2_1; // 0x78
	::Class_3_F36DF45E925CAADA* Field_2_2; // 0x80
	::RPG::Client::LittleGameShare::LittleGameClientNetMode Field_2_0; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5590C1BEF305FDE__CTOR_OFFSET))(this);
	}

	::System::Void _OnInit(::Class_1_75C90E178B164D38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75C90E178B164D38*))((::PBYTE)hIl2Cpp + CLASS_2_C5590C1BEF305FDE__ONINIT_OFFSET))(this, a1);
	}

	::System::Void _OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5590C1BEF305FDE__ONSTART_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C5590C1BEF305FDE__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnLateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C5590C1BEF305FDE__ONLATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void _OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5590C1BEF305FDE__ONCLEAR_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::LittleGameClientNetMode Method_2_2F5AC4358F4D89A9()
	{
		return ((::RPG::Client::LittleGameShare::LittleGameClientNetMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5590C1BEF305FDE_METHOD_2_2F5AC4358F4D89A9_OFFSET))(this);
	}

	::System::Void Method_2_9407410AABC43F0E(::RPG::Client::LittleGameShare::LittleGameClientNetMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::LittleGameClientNetMode))((::PBYTE)hIl2Cpp + CLASS_2_C5590C1BEF305FDE_METHOD_2_9407410AABC43F0E_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnInit(::Class_1_75C90E178B164D38* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75C90E178B164D38*))((::PBYTE)hIl2Cpp + CLASS_2_C5590C1BEF305FDE___IFIXBASEPROXY__ONINIT_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5590C1BEF305FDE___IFIXBASEPROXY__ONSTART_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5590C1BEF305FDE___IFIXBASEPROXY__ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C5590C1BEF305FDE___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnLateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C5590C1BEF305FDE___IFIXBASEPROXY__ONLATEUPDATE_OFFSET))(this, P0);
	}
};
