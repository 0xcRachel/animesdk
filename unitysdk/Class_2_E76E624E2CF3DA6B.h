#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_151B93D9C4BBDCA4.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_401;
class Class_1_4CD8A1ACD565F336;
class Class_1_9B3591E177CAF203;
class Class_1_D33B7D6901AE39E9;
class Class_1_EBA383B8D63056FF;
class Class_2_C386A74518D39C8B;
class Class_3_667D9ACA35D85E8C;
namespace RPG::Client { class AchievementData; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TRFCameraComponentConfig; }
namespace RPG::GameCore { class TimeRelayFlameGameConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x16487D40)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_23CEDB1D271CAFBB_OFFSET UNITYSDK_OFFSET(0x16489240)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_2CC631B339284766_OFFSET UNITYSDK_OFFSET(0x16486990)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x16487660)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x16488380)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_3C2E750B4D78DF48_OFFSET UNITYSDK_OFFSET(0x16489C00)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_4A92540D4374B8D9_OFFSET UNITYSDK_OFFSET(0x16486770)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_70595BBE3E0E4F2A_OFFSET UNITYSDK_OFFSET(0x16489B20)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0x16489300)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x16489180)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x16489EF0)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_A36150C5DCC8409E_2_OFFSET UNITYSDK_OFFSET(0x16489F40)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x16489EA0)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_A56EAB6E8DBE44E9_OFFSET UNITYSDK_OFFSET(0x16489B90)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_A77870C566864FEA_1_OFFSET UNITYSDK_OFFSET(0x164899D0)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_A77870C566864FEA_2_OFFSET UNITYSDK_OFFSET(0x16489A40)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_A77870C566864FEA_3_OFFSET UNITYSDK_OFFSET(0x16489AB0)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_A77870C566864FEA_OFFSET UNITYSDK_OFFSET(0x16489960)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_A806B748F9FFC800_OFFSET UNITYSDK_OFFSET(0x1648A090)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x16489690)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16486680)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_BDB35EF922C47114_OFFSET UNITYSDK_OFFSET(0x16488E80)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x164890A0)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0x16487970)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_E9494E6235D3CB45_OFFSET UNITYSDK_OFFSET(0x1648A130)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x16489F90)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_EDE142C2A9A7B0CC_OFFSET UNITYSDK_OFFSET(0x1648A2A0)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_F62A76C6284AD01E_OFFSET UNITYSDK_OFFSET(0x164897C0)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x16489D20)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_FE268EA0D7E91617_OFFSET UNITYSDK_OFFSET(0x16488780)
#define CLASS_2_E76E624E2CF3DA6B_METHOD_2_FF4842B24EFFCBD6_OFFSET UNITYSDK_OFFSET(0x16489E10)
#define CLASS_2_E76E624E2CF3DA6B__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16488260)
#define CLASS_2_E76E624E2CF3DA6B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1648A5D0)
#define CLASS_2_E76E624E2CF3DA6B__CTOR_OFFSET UNITYSDK_OFFSET(0x1648A410)
#define CLASS_2_E76E624E2CF3DA6B__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x16487080)
#define CLASS_2_E76E624E2CF3DA6B__ONINIT_OFFSET UNITYSDK_OFFSET(0x16485E70)
#define CLASS_2_E76E624E2CF3DA6B__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x164882A0)
#define CLASS_2_E76E624E2CF3DA6B__ONTICK_OFFSET UNITYSDK_OFFSET(0x16487B10)
#define CLASS_2_E76E624E2CF3DA6B___IFIXBASEPROXY__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1648A740)
#define CLASS_2_E76E624E2CF3DA6B___IFIXBASEPROXY__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1648A680)
#define CLASS_2_E76E624E2CF3DA6B___IFIXBASEPROXY__ONINIT_OFFSET UNITYSDK_OFFSET(0x1648A620)
#define CLASS_2_E76E624E2CF3DA6B___IFIXBASEPROXY__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1648A7A0)
#define CLASS_2_E76E624E2CF3DA6B___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x1648A6E0)

inline static constexpr unsigned int Class_2_E76E624E2CF3DA6B_TypeDefinitionIndex = 56473;

class Class_2_E76E624E2CF3DA6B : public ::Class_1_151B93D9C4BBDCA4
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E76E624E2CF3DA6B_TypeDefinitionIndex)->GetStaticField(0x62160);
	}
	static ::RPG::GameCore::TimeRelayFlameGameConfig** StaticGet_Field_2_1()
	{
		return (::RPG::GameCore::TimeRelayFlameGameConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E76E624E2CF3DA6B_TypeDefinitionIndex)->GetStaticField(0x62168);
	}
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E76E624E2CF3DA6B_TypeDefinitionIndex)->GetStaticField(0x12850);
	}
	::RPG::Client::LuaUIController* Field_2_3; // 0x78
	::RPG::Client::AchievementData* Field_2_4; // 0x80
	::Class_1_9B3591E177CAF203* Field_2_5; // 0x88
	::RPG::Client::AchievementData* Field_2_6; // 0x90
	::Class_2_C386A74518D39C8B* Field_2_7; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_8; // 0xA0
	::Class_1_D33B7D6901AE39E9* Field_2_9; // 0xA8
	::Class_3_667D9ACA35D85E8C* Field_2_10; // 0xB0
	::RPG::GameCore::TRFCameraComponentConfig* Field_2_11; // 0xB8
	::System::Collections::Generic::List_1<::Class_1_EBA383B8D63056FF*>* Field_2_12; // 0xC0
	::System::Boolean Field_2_13; // 0xC8
	::System::Boolean Field_2_14; // 0xC9
	::System::UInt32 Field_2_15; // 0xCC
	::System::Nullable_1<::System::Single> Field_2_16; // 0xD0
	::UnityEngine::Vector3 Field_2_17; // 0xD8
	::System::Single Field_2_18; // 0xE4
	::System::Single Field_2_19; // 0xE8
	::System::Int32 Field_2_20; // 0xEC
	::UnityEngine::Vector3 Field_2_21; // 0xF0
	::System::Nullable_1<::System::Single> Field_2_22; // 0xFC
	::System::Single Field_2_23; // 0x104
	::System::Int32 Field_2_24; // 0x108
	::System::UInt32 Field_2_25; // 0x10C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B__CCTOR_OFFSET))();
	}

	::System::Void _OnInit(::Class_1_4CD8A1ACD565F336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CD8A1ACD565F336*))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B__ONINIT_OFFSET))(this, a1);
	}

	::System::Void _OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B__ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B__ONTICK_OFFSET))(this, a1);
	}

	::System::Boolean _CanLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B__CANLATEUPDATE_OFFSET))(this);
	}

	::System::Void _OnLateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B__ONLATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_BDB35EF922C47114(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_BDB35EF922C47114_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_EBA383B8D63056FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBA383B8D63056FF*))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_0AB718BEE9EA06D7(::Class_1_EBA383B8D63056FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBA383B8D63056FF*))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F62A76C6284AD01E(::RPG::Client::AchievementData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_F62A76C6284AD01E_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE268EA0D7E91617()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_FE268EA0D7E91617_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_23CEDB1D271CAFBB(::RPG::GameCore::PuzzleCustomEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_23CEDB1D271CAFBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A77870C566864FEA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_A77870C566864FEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_A77870C566864FEA_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_A77870C566864FEA_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A77870C566864FEA_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_A77870C566864FEA_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A77870C566864FEA_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_A77870C566864FEA_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_70595BBE3E0E4F2A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_70595BBE3E0E4F2A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A56EAB6E8DBE44E9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_A56EAB6E8DBE44E9_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C2E750B4D78DF48(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_3C2E750B4D78DF48_OFFSET))(this, a1);
	}

	::System::Void Method_2_81A66FB988DFA6AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_81A66FB988DFA6AA_OFFSET))(this);
	}

	::System::Void Method_2_4A92540D4374B8D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_4A92540D4374B8D9_OFFSET))(this);
	}

	::System::Void Method_2_D87A7D8243E04FD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_D87A7D8243E04FD7_OFFSET))(this);
	}

	::System::Void Method_2_2CC631B339284766(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_2CC631B339284766_OFFSET))(this, a1);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::System::Single Method_2_FC5102551AF3CB1A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_FC5102551AF3CB1A_OFFSET))(this);
	}

	::System::Void Method_2_FF4842B24EFFCBD6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_FF4842B24EFFCBD6_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_B1936CE4DA97AA45_OFFSET))();
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_A36150C5DCC8409E_2_OFFSET))(this);
	}

	::System::Void Method_2_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::Void Method_2_A806B748F9FFC800(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_A806B748F9FFC800_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9494E6235D3CB45(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_E9494E6235D3CB45_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE142C2A9A7B0CC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B_METHOD_2_EDE142C2A9A7B0CC_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnInit(::Class_1_4CD8A1ACD565F336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CD8A1ACD565F336*))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B___IFIXBASEPROXY__ONINIT_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B___IFIXBASEPROXY__ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy__CanLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B___IFIXBASEPROXY__CANLATEUPDATE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnLateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E76E624E2CF3DA6B___IFIXBASEPROXY__ONLATEUPDATE_OFFSET))(this, a1);
	}
};
