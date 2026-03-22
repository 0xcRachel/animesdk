#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/GroupStateType.h"

class Class_0_16E4307DCC419505_347;
class Class_1_F44524D91BEABB41_1;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_3FFC9E2A64DB7F5F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111F1790)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0x111F16E0)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x111F1910)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_272068886DA88B16_OFFSET UNITYSDK_OFFSET(0x111F1E90)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x111F2050)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x111F1CD0)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x111F1FE0)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x111F2110)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_C886532D02F6AF70_OFFSET UNITYSDK_OFFSET(0x111F1A90)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_D3CB18105BA9D504_OFFSET UNITYSDK_OFFSET(0x111F1D20)
#define CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_E70E7CFB1DF7C909_OFFSET UNITYSDK_OFFSET(0x111F2100)
#define CLASS_2_3FFC9E2A64DB7F5F_TICK_OFFSET UNITYSDK_OFFSET(0x111F18B0)
#define CLASS_2_3FFC9E2A64DB7F5F__CTOR_OFFSET UNITYSDK_OFFSET(0x111F2120)
#define CLASS_2_3FFC9E2A64DB7F5F___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x111F21A0)

inline static constexpr unsigned int Class_2_3FFC9E2A64DB7F5F_TypeDefinitionIndex = 44887;

class Class_2_3FFC9E2A64DB7F5F : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F44524D91BEABB41_1*>* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_2; // 0x20
	::RPG::GameCore::GroupStateType Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_01109DD29CB4D216_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C886532D02F6AF70(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_C886532D02F6AF70_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3CB18105BA9D504(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_D3CB18105BA9D504_OFFSET))(this, a1);
	}

	::System::Void Method_2_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_272068886DA88B16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_272068886DA88B16_OFFSET))(this);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::RPG::GameCore::GroupStateType Method_2_E70E7CFB1DF7C909()
	{
		return ((::RPG::GameCore::GroupStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_E70E7CFB1DF7C909_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3FFC9E2A64DB7F5F___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
