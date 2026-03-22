#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/CharacterResourceLoadOption.h"

class Class_0_16E4307DCC419505_347;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_326A6AB8CD444F36_OFFSET UNITYSDK_OFFSET(0x1111D260)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_3A9BDB056AF13046_OFFSET UNITYSDK_OFFSET(0x1111C980)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_41B0DC419524DD07_OFFSET UNITYSDK_OFFSET(0x1111E1C0)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_4AC38C7D74462263_OFFSET UNITYSDK_OFFSET(0x1111D9B0)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_58E4F6A5F8FAF17F_1_OFFSET UNITYSDK_OFFSET(0x1111DB70)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_58E4F6A5F8FAF17F_2_OFFSET UNITYSDK_OFFSET(0x1111DC20)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_58E4F6A5F8FAF17F_3_OFFSET UNITYSDK_OFFSET(0x1111DCB0)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_58E4F6A5F8FAF17F_4_OFFSET UNITYSDK_OFFSET(0x1111DE00)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_58E4F6A5F8FAF17F_5_OFFSET UNITYSDK_OFFSET(0x1111DEC0)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_58E4F6A5F8FAF17F_6_OFFSET UNITYSDK_OFFSET(0x1111DF80)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x1111DAE0)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_5B0531D5B96D6B96_1_OFFSET UNITYSDK_OFFSET(0x1111E030)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x1111DD40)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_77D3A713790E6153_OFFSET UNITYSDK_OFFSET(0x1111D5A0)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x1111CA40)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_8E7E5626595493F2_OFFSET UNITYSDK_OFFSET(0x1111DA80)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_8FA12AD2C48BC6DD_1_OFFSET UNITYSDK_OFFSET(0x1111E170)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_8FA12AD2C48BC6DD_OFFSET UNITYSDK_OFFSET(0x1111E120)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_C2637EBBF9112AC1_OFFSET UNITYSDK_OFFSET(0x1111D700)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_CC355FE9517A09BB_OFFSET UNITYSDK_OFFSET(0x1111C830)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_DEF2DE40AFA48D53_OFFSET UNITYSDK_OFFSET(0x1111E1D0)
#define CLASS_2_FE92CBE151F1F3E7_METHOD_2_E75622EEC310B11F_OFFSET UNITYSDK_OFFSET(0x1111D150)
#define CLASS_2_FE92CBE151F1F3E7_ONINIT_OFFSET UNITYSDK_OFFSET(0x1111B850)
#define CLASS_2_FE92CBE151F1F3E7_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x1111C370)
#define CLASS_2_FE92CBE151F1F3E7__CTOR_OFFSET UNITYSDK_OFFSET(0x1111E1E0)
#define CLASS_2_FE92CBE151F1F3E7___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0x1111E3C0)
#define CLASS_2_FE92CBE151F1F3E7___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x1111E420)

inline static constexpr unsigned int Class_2_FE92CBE151F1F3E7_TypeDefinitionIndex = 58447;

class Class_2_FE92CBE151F1F3E7 : public ::Class_1_47C4886CB6C61234
{
public:
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::String* Field_2_9; // 0x0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* Field_2_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::UInt32>* Field_2_4; // 0x30
	::RPG::GameCore::GameEntity* Field_2_5; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_0; // 0x40
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_3; // 0x48
	::System::UInt32 Field_2_6; // 0x50
	::System::UInt32 Field_2_7; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_CC355FE9517A09BB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::CharacterResourceLoadOption a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterResourceLoadOption))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_CC355FE9517A09BB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3A9BDB056AF13046(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_3A9BDB056AF13046_OFFSET))(this, a1);
	}

	::System::Void Method_2_E75622EEC310B11F(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_E75622EEC310B11F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_326A6AB8CD444F36(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_326A6AB8CD444F36_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_77D3A713790E6153(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_77D3A713790E6153_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4AC38C7D74462263(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_4AC38C7D74462263_OFFSET))(this, a1);
	}

	::System::Void Method_2_C2637EBBF9112AC1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_C2637EBBF9112AC1_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E7E5626595493F2(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_8E7E5626595493F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F_1(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_58E4F6A5F8FAF17F_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F_2(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_58E4F6A5F8FAF17F_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F_3(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_58E4F6A5F8FAF17F_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F_4(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_58E4F6A5F8FAF17F_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F_5(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_58E4F6A5F8FAF17F_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F_6(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_58E4F6A5F8FAF17F_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96_1(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_5B0531D5B96D6B96_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FA12AD2C48BC6DD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_8FA12AD2C48BC6DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FA12AD2C48BC6DD_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_8FA12AD2C48BC6DD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Method_2_41B0DC419524DD07()
	{
		return ((::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_41B0DC419524DD07_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::UInt32>* Method_2_DEF2DE40AFA48D53()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7_METHOD_2_DEF2DE40AFA48D53_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE92CBE151F1F3E7___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}
};
