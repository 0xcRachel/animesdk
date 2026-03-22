#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_775;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_22B7D2FD4E422EE5_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAC9A960)
#define CLASS_2_22B7D2FD4E422EE5_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAC9AC00)
#define CLASS_2_22B7D2FD4E422EE5_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0xAC9A730)
#define CLASS_2_22B7D2FD4E422EE5_METHOD_2_0C726E1A401D0413_OFFSET UNITYSDK_OFFSET(0xAC9A490)
#define CLASS_2_22B7D2FD4E422EE5_METHOD_2_0ED1963A672FB61E_OFFSET UNITYSDK_OFFSET(0xAC99E90)
#define CLASS_2_22B7D2FD4E422EE5_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0xAC9A0A0)
#define CLASS_2_22B7D2FD4E422EE5_METHOD_2_7469FC1146945FD8_OFFSET UNITYSDK_OFFSET(0xAC9A4E0)
#define CLASS_2_22B7D2FD4E422EE5_METHOD_2_7D21D8548943D577_OFFSET UNITYSDK_OFFSET(0xAC99E40)
#define CLASS_2_22B7D2FD4E422EE5_METHOD_2_97CAD17442913F0E_OFFSET UNITYSDK_OFFSET(0xAC9A2C0)
#define CLASS_2_22B7D2FD4E422EE5_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xAC9A880)
#define CLASS_2_22B7D2FD4E422EE5_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xAC9A8E0)
#define CLASS_2_22B7D2FD4E422EE5_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xAC9A120)
#define CLASS_2_22B7D2FD4E422EE5_METHOD_2_C49BD18776DC458B_OFFSET UNITYSDK_OFFSET(0xAC9A360)
#define CLASS_2_22B7D2FD4E422EE5_METHOD_2_E73DDCF78AD28B11_OFFSET UNITYSDK_OFFSET(0xAC9A1E0)
#define CLASS_2_22B7D2FD4E422EE5_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xAC99B60)
#define CLASS_2_22B7D2FD4E422EE5__CTOR_OFFSET UNITYSDK_OFFSET(0xAC99B00)
#define CLASS_2_22B7D2FD4E422EE5__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xAC99BD0)
#define CLASS_2_22B7D2FD4E422EE5__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xAC99CE0)
#define CLASS_2_22B7D2FD4E422EE5___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAC9AFA0)
#define CLASS_2_22B7D2FD4E422EE5___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAC9B000)
#define CLASS_2_22B7D2FD4E422EE5___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xAC9AE50)
#define CLASS_2_22B7D2FD4E422EE5___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xAC9AEE0)
#define CLASS_2_22B7D2FD4E422EE5___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xAC9AF40)

inline static constexpr unsigned int Class_2_22B7D2FD4E422EE5_TypeDefinitionIndex = 57110;

class Class_2_22B7D2FD4E422EE5 : public ::RPG::Client::UIController
{
public:
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	::Class_0_16E4307DCC419505_775* Field_2_1; // 0x180
	::RPG::GameCore::BattleInstance* Field_2_0; // 0x188
	::RPG::Client::LongPressEvent* Field_2_2; // 0x190
	::System::UInt32 Field_2_3; // 0x198
	::UnityEngine::Vector2 Field_2_5; // 0x19C
	::System::Boolean Field_2_4; // 0x1A4

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5__CTOR_OFFSET))(this, a1);
	}

	::System::String* ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5__SETUPVIEW_OFFSET))(this);
	}

	::System::Void Method_2_0ED1963A672FB61E(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5_METHOD_2_0ED1963A672FB61E_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_E73DDCF78AD28B11(::RPG::GameCore::LevelBattleEventCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5_METHOD_2_E73DDCF78AD28B11_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C726E1A401D0413(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5_METHOD_2_0C726E1A401D0413_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D21D8548943D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5_METHOD_2_7D21D8548943D577_OFFSET))(this);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_2_C49BD18776DC458B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5_METHOD_2_C49BD18776DC458B_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_7469FC1146945FD8()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5_METHOD_2_7469FC1146945FD8_OFFSET))(this);
	}

	::System::Boolean Method_2_97CAD17442913F0E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5_METHOD_2_97CAD17442913F0E_OFFSET))(this, a1);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B7D2FD4E422EE5___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
