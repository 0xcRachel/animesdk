#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_59305B446B42427E.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

class Class_1_FFE03FE61A5D4B1E;
namespace RPG::Client { class MonoCurveTriggerManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropInteractionTrigger_ButtonParam; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_BC84B87740DAFF4F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105A7E10)
#define CLASS_2_BC84B87740DAFF4F_DOONENTER_OFFSET UNITYSDK_OFFSET(0x105A8070)
#define CLASS_2_BC84B87740DAFF4F_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x105A8610)
#define CLASS_2_BC84B87740DAFF4F_DOONTICK_OFFSET UNITYSDK_OFFSET(0x105A8680)
#define CLASS_2_BC84B87740DAFF4F_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x105A8A40)
#define CLASS_2_BC84B87740DAFF4F_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x105A8A00)
#define CLASS_2_BC84B87740DAFF4F_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x105A8A20)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_1265AD26B9934ADC_OFFSET UNITYSDK_OFFSET(0x105A8970)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_17FF7E72EFD64472_OFFSET UNITYSDK_OFFSET(0x105A87C0)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_229CEF33F0AF9039_1_OFFSET UNITYSDK_OFFSET(0x105A7F60)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x105A8710)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x105A8010)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0x105A80D0)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x105A7EE0)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_BF85224A16082717_OFFSET UNITYSDK_OFFSET(0x105A7BF0)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_F7D9E881EE15AF45_OFFSET UNITYSDK_OFFSET(0x105A7D10)
#define CLASS_2_BC84B87740DAFF4F_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x105A8A50)
#define CLASS_2_BC84B87740DAFF4F_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x105A8A10)
#define CLASS_2_BC84B87740DAFF4F_SET_TEXTID_OFFSET UNITYSDK_OFFSET(0x105A8A30)
#define CLASS_2_BC84B87740DAFF4F__CTOR_OFFSET UNITYSDK_OFFSET(0x105A7C00)
#define CLASS_2_BC84B87740DAFF4F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105A8A60)
#define CLASS_2_BC84B87740DAFF4F___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x105A8A70)
#define CLASS_2_BC84B87740DAFF4F___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x105A8A80)

inline static constexpr unsigned int Class_2_BC84B87740DAFF4F_TypeDefinitionIndex = 63217;

class Class_2_BC84B87740DAFF4F : public ::Class_1_59305B446B42427E
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::System::String* _IconPath_k__BackingField; // 0x98
	::RPG::GameCore::PropInteractionTrigger_ButtonParam* Field_2_4; // 0xA0
	::RPG::GameCore::GameEntity* Field_2_1; // 0xA8
	::RPG::Client::MonoCurveTriggerManager* Field_2_3; // 0xB0
	::RPG::GameCore::GameEntity* Field_2_2; // 0xB8
	::Class_1_FFE03FE61A5D4B1E* Field_2_5; // 0xC0
	::RPG::Client::TextID _TextID_k__BackingField; // 0xC8
	::System::UInt32 _RuntimeID_k__BackingField; // 0xD8
	::System::Single Field_2_8; // 0xDC
	::System::Boolean Field_2_9; // 0xE0
	::System::Boolean Field_2_7; // 0xE1
	::System::Boolean Field_2_6; // 0xE2

	::System::Void _ctor(::RPG::Client::MonoCurveTriggerManager* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::OptionTriggerInfo* a3, ::Class_1_FFE03FE61A5D4B1E* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCurveTriggerManager*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::OptionTriggerInfo*, ::Class_1_FFE03FE61A5D4B1E*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::PropInteractionTrigger_ButtonParam* Method_2_BF85224A16082717()
	{
		return ((::RPG::GameCore::PropInteractionTrigger_ButtonParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_BF85224A16082717_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7D9E881EE15AF45(::RPG::GameCore::OptionTriggerInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTriggerInfo*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_F7D9E881EE15AF45_OFFSET))(this, a1);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_DOONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E586421BA588EFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_3E586421BA588EFD_OFFSET))(this);
	}

	::System::Void Method_2_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_2_229CEF33F0AF9039_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_229CEF33F0AF9039_1_OFFSET))(this);
	}

	::System::Void Method_2_17FF7E72EFD64472(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_17FF7E72EFD64472_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1265AD26B9934ADC(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_1265AD26B9934ADC_OFFSET))(this, a1);
	}

	::System::UInt32 get_RuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_GET_RUNTIMEID_OFFSET))(this);
	}

	::System::Void set_RuntimeID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_SET_RUNTIMEID_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_TextID()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_GET_TEXTID_OFFSET))(this);
	}

	::System::Void set_TextID(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_SET_TEXTID_OFFSET))(this, value);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_SET_ICONPATH_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
