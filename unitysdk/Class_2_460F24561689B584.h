#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_460F24561689B584_Struct_2_12EC28F7D2711781.h"
#include "unitysdk/Class_2_460F24561689B584_Struct_2_6D1B98F3E7A7CA28.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_347;
class Class_1_8632A9A99C579E84;
class Class_2_1DBE0E1023AFDBC5;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_460F24561689B584_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8416E00)
#define CLASS_2_460F24561689B584_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8417370)
#define CLASS_2_460F24561689B584_METHOD_2_221A0C77140D71BA_OFFSET UNITYSDK_OFFSET(0x8417490)
#define CLASS_2_460F24561689B584_METHOD_2_29388402F1C16287_OFFSET UNITYSDK_OFFSET(0x8417A50)
#define CLASS_2_460F24561689B584_METHOD_2_9581BE628286891C_OFFSET UNITYSDK_OFFSET(0x8416AE0)
#define CLASS_2_460F24561689B584_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x8418D20)
#define CLASS_2_460F24561689B584_METHOD_2_B43DD0430B0FE876_OFFSET UNITYSDK_OFFSET(0x84178E0)
#define CLASS_2_460F24561689B584_METHOD_2_BDD7F33DA13FE2A4_OFFSET UNITYSDK_OFFSET(0x84172C0)
#define CLASS_2_460F24561689B584_METHOD_2_C575D690B75418DD_OFFSET UNITYSDK_OFFSET(0x8416B50)
#define CLASS_2_460F24561689B584_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8417A40)
#define CLASS_2_460F24561689B584_TICK_OFFSET UNITYSDK_OFFSET(0x8416E50)
#define CLASS_2_460F24561689B584__CCTOR_OFFSET UNITYSDK_OFFSET(0x8418D40)
#define CLASS_2_460F24561689B584__CTOR_OFFSET UNITYSDK_OFFSET(0x8418D30)
#define CLASS_2_460F24561689B584___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8418D90)
#define CLASS_2_460F24561689B584___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8418D80)

inline static constexpr unsigned int Class_2_460F24561689B584_TypeDefinitionIndex = 44727;

class Class_2_460F24561689B584 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Int32* StaticGet_Field_2_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_460F24561689B584_TypeDefinitionIndex)->GetStaticField(0x4A20);
	}
	// static const ::System::String* Field_2_0; // 0x0
	::Class_2_1DBE0E1023AFDBC5* Field_2_1; // 0x18
	::RPG::GameCore::GameEntity* Field_2_2; // 0x20
	::System::Boolean Field_2_6; // 0x28
	::Class_2_460F24561689B584_Struct_2_6D1B98F3E7A7CA28 Field_2_5; // 0x2C
	::Class_2_460F24561689B584_Struct_2_12EC28F7D2711781 Field_2_3; // 0x34
	::Class_2_460F24561689B584_Struct_2_12EC28F7D2711781 Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584__CCTOR_OFFSET))();
	}

	::System::Void Method_2_9581BE628286891C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_METHOD_2_9581BE628286891C_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C575D690B75418DD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_METHOD_2_C575D690B75418DD_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_LATEUPDATE_OFFSET))(this, a1);
	}

	::Class_1_8632A9A99C579E84* Method_2_BDD7F33DA13FE2A4(::Class_2_1DBE0E1023AFDBC5* a1)
	{
		return ((::Class_1_8632A9A99C579E84*(*)(::PVOID, ::Class_2_1DBE0E1023AFDBC5*))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_METHOD_2_BDD7F33DA13FE2A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_221A0C77140D71BA(::Class_2_1DBE0E1023AFDBC5* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1DBE0E1023AFDBC5*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_METHOD_2_221A0C77140D71BA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B43DD0430B0FE876(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_METHOD_2_B43DD0430B0FE876_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_29388402F1C16287(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_METHOD_2_29388402F1C16287_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
	}
};
