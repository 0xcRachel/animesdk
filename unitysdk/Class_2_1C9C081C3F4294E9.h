#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1C9C081C3F4294E9_MapRotationChargerState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_347;
class Class_2_36C95D73718D07B1;
class Class_2_5AC0D8B32AD9BFBE;
namespace EffectPlugin { class Effect_CustomFollowPlugin; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginPerformEventListener; }
namespace RPG::GameCore { class ButtonListTrigger; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1C9C081C3F4294E9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10E95480)
#define CLASS_2_1C9C081C3F4294E9_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10E97560)
#define CLASS_2_1C9C081C3F4294E9_GET_HASINTERACTHANDLER_OFFSET UNITYSDK_OFFSET(0x10E975A0)
#define CLASS_2_1C9C081C3F4294E9_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x10E97580)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_073FCA6069BBB0A7_OFFSET UNITYSDK_OFFSET(0x10E97200)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_3B306F16BF78C1C7_OFFSET UNITYSDK_OFFSET(0x10E95E60)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_4D49EE67173872BB_OFFSET UNITYSDK_OFFSET(0x10E957A0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_64F3965CE4C4DB47_OFFSET UNITYSDK_OFFSET(0x10E95850)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x10E95CD0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_78C62398E94F0FB1_OFFSET UNITYSDK_OFFSET(0x10E96910)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_78C745004ACFE012_OFFSET UNITYSDK_OFFSET(0x10E96A70)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0x10E966F0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x10E95EC0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_983BE009C423EFE5_OFFSET UNITYSDK_OFFSET(0x10E95370)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_98744EBA2289900B_OFFSET UNITYSDK_OFFSET(0x10E97500)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_9D3D178316624130_OFFSET UNITYSDK_OFFSET(0x10E96100)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_A76A07E68FFF9CDC_OFFSET UNITYSDK_OFFSET(0x10E952D0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10E96890)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_C5325FA2E0D39092_OFFSET UNITYSDK_OFFSET(0x10E95B90)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x10E94FA0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_DFC11C3DC1DE053B_OFFSET UNITYSDK_OFFSET(0x10E964C0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_E24C0FFD2F80EEBC_OFFSET UNITYSDK_OFFSET(0x10E956F0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_EA53757A85D2A947_OFFSET UNITYSDK_OFFSET(0x10E96470)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_EAEB1D4D15F25F77_OFFSET UNITYSDK_OFFSET(0x10E96DE0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x10E96C80)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_F39B85D7AB2DF81D_OFFSET UNITYSDK_OFFSET(0x10E97330)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_F7E2157D0CAF556A_OFFSET UNITYSDK_OFFSET(0x10E955E0)
#define CLASS_2_1C9C081C3F4294E9_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10E97570)
#define CLASS_2_1C9C081C3F4294E9_SET_HASINTERACTHANDLER_OFFSET UNITYSDK_OFFSET(0x10E975B0)
#define CLASS_2_1C9C081C3F4294E9_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x10E97590)
#define CLASS_2_1C9C081C3F4294E9__CTOR_OFFSET UNITYSDK_OFFSET(0x10E975C0)

inline static constexpr unsigned int Class_2_1C9C081C3F4294E9_TypeDefinitionIndex = 45098;

class Class_2_1C9C081C3F4294E9 : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::String* Field_2_17; // 0x0
	::System::String* Field_2_22; // 0x18
	::System::String* Field_2_25; // 0x20
	::System::String* Field_2_5; // 0x28
	::System::String* Field_2_24; // 0x30
	::System::String* Field_2_6; // 0x38
	::RPG::Client::MapRotationInfo* Field_2_10; // 0x40
	::System::String* Field_2_23; // 0x48
	::System::String* Field_2_8; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* Field_2_4; // 0x58
	::Class_2_5AC0D8B32AD9BFBE* Field_2_11; // 0x60
	::RPG::GameCore::PropComponent* Field_2_12; // 0x68
	::System::Action_1<::Class_2_1C9C081C3F4294E9_MapRotationChargerState>* Field_2_0; // 0x70
	::RPG::GameCore::ButtonListTrigger* Field_2_20; // 0x78
	::System::String* Field_2_21; // 0x80
	::RPG::Client::MapDef* Field_2_14; // 0x88
	::RPG::GameCore::ColliderTriggerComponent* Field_2_13; // 0x90
	::Class_2_36C95D73718D07B1* Field_2_9; // 0x98
	::RPG::Client::MapPropDef* Field_2_15; // 0xA0
	::System::String* Field_2_7; // 0xA8
	::RPG::Client::TextID Field_2_19; // 0xB0
	::RPG::Client::TextID Field_2_18; // 0xC0
	::System::UInt32 Field_2_16; // 0xD0
	::System::Boolean _HasInteractHandler_k__BackingField; // 0xD4
	::System::UInt32 _InstanceID_k__BackingField; // 0xD8
	::System::UInt32 _GroupID_k__BackingField; // 0xDC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_F7E2157D0CAF556A(::Class_2_1C9C081C3F4294E9_MapRotationChargerState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1C9C081C3F4294E9_MapRotationChargerState))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_F7E2157D0CAF556A_OFFSET))(this, a1);
	}

	::System::Void Method_2_C5325FA2E0D39092(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_C5325FA2E0D39092_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_3B306F16BF78C1C7(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_3B306F16BF78C1C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9D3D178316624130(::System::String* a1, ::RPG::Client::TextID a2, ::RPG::Client::TextID a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_9D3D178316624130_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EA53757A85D2A947(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_EA53757A85D2A947_OFFSET))(this, a1);
	}

	::System::Void Method_2_DFC11C3DC1DE053B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_DFC11C3DC1DE053B_OFFSET))(this, a1);
	}

	::System::Void Method_2_81A66FB988DFA6AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_81A66FB988DFA6AA_OFFSET))(this);
	}

	::System::Void Method_2_78C745004ACFE012(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_78C745004ACFE012_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_EAEB1D4D15F25F77(::RPG::Client::MonoEffect* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_EAEB1D4D15F25F77_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_073FCA6069BBB0A7(::EffectPlugin::Effect_CustomFollowPlugin* a1, ::RPG::Client::MonoEffectPluginPerformEventListener* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::EffectPlugin::Effect_CustomFollowPlugin*, ::RPG::Client::MonoEffectPluginPerformEventListener*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_073FCA6069BBB0A7_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_A76A07E68FFF9CDC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_A76A07E68FFF9CDC_OFFSET))(this);
	}

	::System::Void Method_2_F39B85D7AB2DF81D(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_F39B85D7AB2DF81D_OFFSET))(this, a1);
	}

	::System::Void Method_2_983BE009C423EFE5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_983BE009C423EFE5_OFFSET))(this);
	}

	::System::Void Method_2_98744EBA2289900B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_98744EBA2289900B_OFFSET))(this, a1);
	}

	::System::Void Method_2_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Void Method_2_9765352E01408D38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_9765352E01408D38_OFFSET))(this);
	}

	::System::Void Method_2_78C62398E94F0FB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_78C62398E94F0FB1_OFFSET))(this);
	}

	::System::Void Method_2_64F3965CE4C4DB47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_64F3965CE4C4DB47_OFFSET))(this);
	}

	::Class_2_1C9C081C3F4294E9_MapRotationChargerState Method_2_E24C0FFD2F80EEBC()
	{
		return ((::Class_2_1C9C081C3F4294E9_MapRotationChargerState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_E24C0FFD2F80EEBC_OFFSET))(this);
	}

	::System::Void Method_2_4D49EE67173872BB(::Class_2_1C9C081C3F4294E9_MapRotationChargerState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1C9C081C3F4294E9_MapRotationChargerState))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_4D49EE67173872BB_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_SET_GROUPID_OFFSET))(this, value);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_SET_INSTANCEID_OFFSET))(this, value);
	}

	::System::Boolean get_HasInteractHandler()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_GET_HASINTERACTHANDLER_OFFSET))(this);
	}

	::System::Void set_HasInteractHandler(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_SET_HASINTERACTHANDLER_OFFSET))(this, value);
	}
};
