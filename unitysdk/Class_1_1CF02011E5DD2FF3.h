#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_212BF926532DB357;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1CF02011E5DD2FF3_METHOD_1_28141416ADF4E9A8_OFFSET UNITYSDK_OFFSET(0xFD65460)
#define CLASS_1_1CF02011E5DD2FF3_METHOD_1_2E8AFDFF20EB7DF5_OFFSET UNITYSDK_OFFSET(0xFD64730)
#define CLASS_1_1CF02011E5DD2FF3_METHOD_1_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0xFD65CC0)
#define CLASS_1_1CF02011E5DD2FF3_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xFD641E0)
#define CLASS_1_1CF02011E5DD2FF3_METHOD_1_722C40A9A071D2E1_OFFSET UNITYSDK_OFFSET(0xFD649F0)
#define CLASS_1_1CF02011E5DD2FF3_METHOD_1_8D986F406A96904A_OFFSET UNITYSDK_OFFSET(0xFD647B0)
#define CLASS_1_1CF02011E5DD2FF3_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xFD65D80)
#define CLASS_1_1CF02011E5DD2FF3_METHOD_1_9B2911E57853F013_OFFSET UNITYSDK_OFFSET(0xFD642A0)
#define CLASS_1_1CF02011E5DD2FF3_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xFD65DD0)
#define CLASS_1_1CF02011E5DD2FF3_METHOD_1_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0xFD65160)
#define CLASS_1_1CF02011E5DD2FF3_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0xFD64C40)
#define CLASS_1_1CF02011E5DD2FF3__CTOR_OFFSET UNITYSDK_OFFSET(0xFD64090)

inline static constexpr unsigned int Class_1_1CF02011E5DD2FF3_TypeDefinitionIndex = 43824;

class Class_1_1CF02011E5DD2FF3 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_6; // 0x0
	::RPG::GameCore::GameEntity* Field_1_2; // 0x10
	::Class_1_212BF926532DB357* Field_1_3; // 0x18
	::RPG::GameCore::TurnBasedGameMode* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::Class_1_212BF926532DB357*>* Field_1_1; // 0x28
	::System::Int32 Field_1_5; // 0x30
	::System::Int32 Field_1_4; // 0x34

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_1CF02011E5DD2FF3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF02011E5DD2FF3_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::Class_1_212BF926532DB357* Method_1_2E8AFDFF20EB7DF5(::System::Int32 a1)
	{
		return ((::Class_1_212BF926532DB357*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1CF02011E5DD2FF3_METHOD_1_2E8AFDFF20EB7DF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D986F406A96904A(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1CF02011E5DD2FF3_METHOD_1_8D986F406A96904A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF02011E5DD2FF3_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Method_1_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF02011E5DD2FF3_METHOD_1_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_28141416ADF4E9A8()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF02011E5DD2FF3_METHOD_1_28141416ADF4E9A8_OFFSET))(this);
	}

	::System::Void Method_1_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF02011E5DD2FF3_METHOD_1_3BC8B8F2BB08C1C2_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_9B2911E57853F013(::Class_1_212BF926532DB357* a1, ::System::Boolean a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::Class_1_212BF926532DB357*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1CF02011E5DD2FF3_METHOD_1_9B2911E57853F013_OFFSET))(this, a1, a2);
	}

	::Class_1_212BF926532DB357* Method_1_722C40A9A071D2E1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_212BF926532DB357*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_1CF02011E5DD2FF3_METHOD_1_722C40A9A071D2E1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF02011E5DD2FF3_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF02011E5DD2FF3_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}
};
