#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/InControl/InputDeviceClass.h"

class Class_2_2B7D66B6C432C71D;
class Class_2_764C2D7D755EF63E;
class Class_2_ED349B47CFEDF9B8;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client { class MonoClickOutsideDetect; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_D8A9B7E75FE2A68B_2_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13E4D760)
#define CLASS_2_D8A9B7E75FE2A68B_2_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13E4D8E0)
#define CLASS_2_D8A9B7E75FE2A68B_2_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x13E4B6E0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x13E4D670)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_0B1EB5C9B94BAB66_1_OFFSET UNITYSDK_OFFSET(0x13E4D450)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x13E4D190)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_265045B8E51327D0_OFFSET UNITYSDK_OFFSET(0x13E4C120)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_2EE5451A8927066E_OFFSET UNITYSDK_OFFSET(0x13E4CC30)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_39195C992EC20F6E_OFFSET UNITYSDK_OFFSET(0x13E4D2B0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x13E4CF70)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13E4C230)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_4628F59881B23161_OFFSET UNITYSDK_OFFSET(0x13E4D320)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_5031A97BC9F22DE2_OFFSET UNITYSDK_OFFSET(0x13E4CD50)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_56FE2EA783DDD2BA_OFFSET UNITYSDK_OFFSET(0x13E4C770)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13E4DC60)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13E4DC00)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_67600FA8688BAD61_OFFSET UNITYSDK_OFFSET(0x13E4C660)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_7AFC74ADCC2A9C7A_OFFSET UNITYSDK_OFFSET(0x13E4C810)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0x13E4C8D0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_8800E8CC95B74FDB_OFFSET UNITYSDK_OFFSET(0x13E4CA20)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_8B320F9C06FC45D4_1_OFFSET UNITYSDK_OFFSET(0x13E4C2E0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_8B320F9C06FC45D4_OFFSET UNITYSDK_OFFSET(0x13E4C190)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_96901355422487A1_OFFSET UNITYSDK_OFFSET(0x13E4DD20)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x13E4D5D0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x13E4D530)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x13E4D250)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_B07FEF75B659E00F_OFFSET UNITYSDK_OFFSET(0x13E4C0D0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x13E4BF80)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_E2080E3275E6E700_OFFSET UNITYSDK_OFFSET(0x13E4C380)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x13E4D3F0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x13E4C960)
#define CLASS_2_D8A9B7E75FE2A68B_2_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x13E4B6F0)
#define CLASS_2_D8A9B7E75FE2A68B_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13E4DA40)
#define CLASS_2_D8A9B7E75FE2A68B_2__ONBIND_OFFSET UNITYSDK_OFFSET(0x13E4B700)
#define CLASS_2_D8A9B7E75FE2A68B_2__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x13E4BF30)
#define CLASS_2_D8A9B7E75FE2A68B_2__ONTICK_OFFSET UNITYSDK_OFFSET(0x13E4CFC0)
#define CLASS_2_D8A9B7E75FE2A68B_2___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13E4DD80)
#define CLASS_2_D8A9B7E75FE2A68B_2___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13E4DDE0)
#define CLASS_2_D8A9B7E75FE2A68B_2___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13E4DB40)
#define CLASS_2_D8A9B7E75FE2A68B_2___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x13E4DBA0)
#define CLASS_2_D8A9B7E75FE2A68B_2___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x13E4DCC0)

inline static constexpr unsigned int Class_2_D8A9B7E75FE2A68B_2_TypeDefinitionIndex = 67508;

class Class_2_D8A9B7E75FE2A68B_2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::Class_2_D8A9B7E75FE2A68B_2** StaticGet__Instance_k__BackingField()
	{
		return (::Class_2_D8A9B7E75FE2A68B_2**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D8A9B7E75FE2A68B_2_TypeDefinitionIndex)->GetStaticField(0x445C0);
	}
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::UInt32 Field_2_6 = 0xD1; // 0x0
	// static const ::System::UInt32 Field_2_7 = 0xD2; // 0x0
	// static const ::System::UInt32 Field_2_8 = 0x1; // 0x0
	::RPG::UINavigation::UINavigationZoneManager* Field_2_9; // 0x60
	::RPG::Client::MonoClickOutsideDetect* Field_2_10; // 0x68
	::UnityEngine::Animation* Field_2_11; // 0x70
	::Class_2_2B7D66B6C432C71D* Field_2_12; // 0x78
	::UnityEngine::Transform* Field_2_13; // 0x80
	::UnityEngine::Animation* Field_2_14; // 0x88
	::UnityEngine::Transform* Field_2_15; // 0x90
	::System::Collections::Generic::Stack_1<::Class_2_ED349B47CFEDF9B8*>* Field_2_16; // 0x98
	::UnityEngine::RectTransform* Field_2_17; // 0xA0
	::UnityEngine::UI::Button* Field_2_18; // 0xA8
	::UnityEngine::UI::Button* Field_2_19; // 0xB0
	::RPG::Client::BattleGamePhase* Field_2_20; // 0xB8
	::Class_2_764C2D7D755EF63E* Field_2_21; // 0xC0
	::UnityEngine::Transform* Field_2_22; // 0xC8
	::System::Collections::Generic::Stack_1<::Class_2_ED349B47CFEDF9B8*>* Field_2_23; // 0xD0
	::System::Boolean Field_2_24; // 0xD8
	::System::Boolean Field_2_25; // 0xD9

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2__CTOR_OFFSET))(this);
	}

	static ::Class_2_D8A9B7E75FE2A68B_2* get_Instance()
	{
		return ((::Class_2_D8A9B7E75FE2A68B_2*(*)())((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_GET_INSTANCE_OFFSET))();
	}

	static ::System::Void set_Instance(::Class_2_D8A9B7E75FE2A68B_2* a1)
	{
		return ((::System::Void(*)(::Class_2_D8A9B7E75FE2A68B_2*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_SET_INSTANCE_OFFSET))(a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2__ONBIND_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_B07FEF75B659E00F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_B07FEF75B659E00F_OFFSET))(this);
	}

	::System::Void Method_2_8B320F9C06FC45D4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_8B320F9C06FC45D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B320F9C06FC45D4_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_8B320F9C06FC45D4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_265045B8E51327D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_265045B8E51327D0_OFFSET))(this);
	}

	::Class_2_ED349B47CFEDF9B8* Method_2_E2080E3275E6E700()
	{
		return ((::Class_2_ED349B47CFEDF9B8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_E2080E3275E6E700_OFFSET))(this);
	}

	::System::Void Method_2_67600FA8688BAD61(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_67600FA8688BAD61_OFFSET))(this, a1);
	}

	::System::Void Method_2_56FE2EA783DDD2BA(::Class_2_ED349B47CFEDF9B8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_ED349B47CFEDF9B8*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_56FE2EA783DDD2BA_OFFSET))(this, a1);
	}

	::System::Void Method_2_7AFC74ADCC2A9C7A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_7AFC74ADCC2A9C7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_848FDD59AB054F3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_848FDD59AB054F3D_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_8800E8CC95B74FDB(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_8800E8CC95B74FDB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2EE5451A8927066E(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_2EE5451A8927066E_OFFSET))(this, a1);
	}

	::System::Void Method_2_5031A97BC9F22DE2(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_5031A97BC9F22DE2_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_39195C992EC20F6E(::InControl::InputDeviceClass a1)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_39195C992EC20F6E_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::UInt32 Method_2_4628F59881B23161()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_4628F59881B23161_OFFSET))(this);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_0B1EB5C9B94BAB66_1_OFFSET))(this);
	}

	::System::Boolean Method_2_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_96901355422487A1(::InControl::InputDeviceClass a1)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_96901355422487A1_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
