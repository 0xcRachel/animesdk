#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_999;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_5160BB95422A9D2B_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1607D040)
#define CLASS_2_5160BB95422A9D2B_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1607D300)
#define CLASS_2_5160BB95422A9D2B_METHOD_2_0C726E1A401D0413_OFFSET UNITYSDK_OFFSET(0x1607CC20)
#define CLASS_2_5160BB95422A9D2B_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x1607C830)
#define CLASS_2_5160BB95422A9D2B_METHOD_2_7D21D8548943D577_OFFSET UNITYSDK_OFFSET(0x1607C560)
#define CLASS_2_5160BB95422A9D2B_METHOD_2_97CAD17442913F0E_OFFSET UNITYSDK_OFFSET(0x1607CA50)
#define CLASS_2_5160BB95422A9D2B_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x1607CEC0)
#define CLASS_2_5160BB95422A9D2B_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x1607CF60)
#define CLASS_2_5160BB95422A9D2B_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x1607CFC0)
#define CLASS_2_5160BB95422A9D2B_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x1607C8B0)
#define CLASS_2_5160BB95422A9D2B_METHOD_2_BD92F971DD8434FD_OFFSET UNITYSDK_OFFSET(0x1607CC70)
#define CLASS_2_5160BB95422A9D2B_METHOD_2_C49BD18776DC458B_OFFSET UNITYSDK_OFFSET(0x1607CAF0)
#define CLASS_2_5160BB95422A9D2B_METHOD_2_D18B555AAF65E415_OFFSET UNITYSDK_OFFSET(0x1607C5B0)
#define CLASS_2_5160BB95422A9D2B_METHOD_2_E73DDCF78AD28B11_OFFSET UNITYSDK_OFFSET(0x1607C970)
#define CLASS_2_5160BB95422A9D2B_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1607C250)
#define CLASS_2_5160BB95422A9D2B__CTOR_OFFSET UNITYSDK_OFFSET(0x1607C1F0)
#define CLASS_2_5160BB95422A9D2B__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1607C2C0)
#define CLASS_2_5160BB95422A9D2B__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1607C400)
#define CLASS_2_5160BB95422A9D2B___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1607D6D0)
#define CLASS_2_5160BB95422A9D2B___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1607D730)
#define CLASS_2_5160BB95422A9D2B___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1607D590)
#define CLASS_2_5160BB95422A9D2B___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1607D610)
#define CLASS_2_5160BB95422A9D2B___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1607D670)

inline static constexpr unsigned int Class_2_5160BB95422A9D2B_TypeDefinitionIndex = 66959;

class Class_2_5160BB95422A9D2B : public ::RPG::Client::UIController
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::RPG::GameCore::BattleInstance* Field_2_2; // 0x180
	::Class_0_16E4307DCC419505_999* Field_2_3; // 0x188
	::RPG::Client::LongPressEvent* Field_2_4; // 0x190
	::System::UInt32 Field_2_5; // 0x198
	::System::Boolean Field_2_6; // 0x19C
	::UnityEngine::Vector2 Field_2_7; // 0x1A0

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B__CTOR_OFFSET))(this, a1);
	}

	::System::String* ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B__SETUPVIEW_OFFSET))(this);
	}

	::System::Void Method_2_D18B555AAF65E415(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B_METHOD_2_D18B555AAF65E415_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_E73DDCF78AD28B11(::RPG::GameCore::LevelBattleEventCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B_METHOD_2_E73DDCF78AD28B11_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C726E1A401D0413(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B_METHOD_2_0C726E1A401D0413_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D21D8548943D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B_METHOD_2_7D21D8548943D577_OFFSET))(this);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_2_C49BD18776DC458B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B_METHOD_2_C49BD18776DC458B_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_BD92F971DD8434FD()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B_METHOD_2_BD92F971DD8434FD_OFFSET))(this);
	}

	::System::Boolean Method_2_97CAD17442913F0E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B_METHOD_2_97CAD17442913F0E_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5160BB95422A9D2B___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
