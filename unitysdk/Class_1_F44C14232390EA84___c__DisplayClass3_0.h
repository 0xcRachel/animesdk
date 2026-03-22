#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_4.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_35379441886C7D20;
class Class_1_F44C14232390EA84;
namespace RPG::Client { class LobbyModule; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10F37170)
#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x10F382A0)
#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__2_OFFSET UNITYSDK_OFFSET(0x10F38590)
#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__3_OFFSET UNITYSDK_OFFSET(0x10F38630)
#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__4_OFFSET UNITYSDK_OFFSET(0x10F38640)
#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_G___CREATELOBBY_1_OFFSET UNITYSDK_OFFSET(0x10F38460)

inline static constexpr unsigned int Class_1_F44C14232390EA84___c__DisplayClass3_0_TypeDefinitionIndex = 52529;

class Class_1_F44C14232390EA84___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::Func_1<::Class_1_35379441886C7D20*>* extInfoGetter; // 0x10
	::System::Action* __9__2; // 0x18
	::System::Action* __9__3; // 0x20
	::System::Action* __9__4; // 0x28
	::Class_1_F44C14232390EA84* __4__this; // 0x30
	::RPG::Client::LobbyModule* lobbyModule; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _TryCreateAndOpen_b__0(::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_4> param)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_4>))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__0_OFFSET))(this, param);
	}

	::System::Void _TryCreateAndOpen_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__2_OFFSET))(this);
	}

	::System::Void _TryCreateAndOpen_b__3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__3_OFFSET))(this);
	}

	::System::Void _TryCreateAndOpen_b__4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__4_OFFSET))(this);
	}

	::System::Void _TryCreateAndOpen_g___CreateLobby_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_G___CREATELOBBY_1_OFFSET))(this);
	}
};
