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

#define CLASS_2_D8A9B7E75FE2A68B_2_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x85658B0)
#define CLASS_2_D8A9B7E75FE2A68B_2_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x85659F0)
#define CLASS_2_D8A9B7E75FE2A68B_2_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x8563490)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x85657C0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_0DB3B52F010E39B1_OFFSET UNITYSDK_OFFSET(0x8564350)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_17F2CC8F872A04EE_OFFSET UNITYSDK_OFFSET(0x8564950)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_2EE5451A8927066E_OFFSET UNITYSDK_OFFSET(0x8564AD0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x8564D80)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8564130)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_507A5122CD01412B_1_OFFSET UNITYSDK_OFFSET(0x85654B0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x8565000)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_56FE2EA783DDD2BA_OFFSET UNITYSDK_OFFSET(0x85646A0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x8565D30)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8565CD0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_67600FA8688BAD61_OFFSET UNITYSDK_OFFSET(0x8564590)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x8565120)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_7AFC74ADCC2A9C7A_OFFSET UNITYSDK_OFFSET(0x8564740)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0x8564800)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_87A50CA00FA4E23D_OFFSET UNITYSDK_OFFSET(0x8564BF0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_8A0FE0FA78BDB613_OFFSET UNITYSDK_OFFSET(0x85651A0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_8C3DB70FFBBF01C7_1_OFFSET UNITYSDK_OFFSET(0x85641D0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x8563FB0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_9477221A6F70535F_OFFSET UNITYSDK_OFFSET(0x85652E0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x85656A0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x8565600)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_C20A7E9DF3996211_OFFSET UNITYSDK_OFFSET(0x8563F40)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x8565420)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_DDBFE8E9D8449B5F_OFFSET UNITYSDK_OFFSET(0x8563EF0)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x8563D80)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_F0880AD023811E29_OFFSET UNITYSDK_OFFSET(0x8565E00)
#define CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x8564890)
#define CLASS_2_D8A9B7E75FE2A68B_2_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x85634D0)
#define CLASS_2_D8A9B7E75FE2A68B_2__CTOR_OFFSET UNITYSDK_OFFSET(0x8565B10)
#define CLASS_2_D8A9B7E75FE2A68B_2__ONBIND_OFFSET UNITYSDK_OFFSET(0x8563510)
#define CLASS_2_D8A9B7E75FE2A68B_2__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x8563D10)
#define CLASS_2_D8A9B7E75FE2A68B_2__ONTICK_OFFSET UNITYSDK_OFFSET(0x8564DD0)
#define CLASS_2_D8A9B7E75FE2A68B_2___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8565E70)
#define CLASS_2_D8A9B7E75FE2A68B_2___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8565ED0)
#define CLASS_2_D8A9B7E75FE2A68B_2___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8565C10)
#define CLASS_2_D8A9B7E75FE2A68B_2___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x8565C70)
#define CLASS_2_D8A9B7E75FE2A68B_2___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x8565D90)

inline static constexpr unsigned int Class_2_D8A9B7E75FE2A68B_2_TypeDefinitionIndex = 57557;

class Class_2_D8A9B7E75FE2A68B_2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::Class_2_D8A9B7E75FE2A68B_2** StaticGet__Instance_k__BackingField()
	{
		return (::Class_2_D8A9B7E75FE2A68B_2**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D8A9B7E75FE2A68B_2_TypeDefinitionIndex)->GetStaticField(0x2CEC0);
	}
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_17; // 0x0
	// static const ::System::String* Field_2_18; // 0x0
	// static const ::System::String* Field_2_19; // 0x0
	// static const ::System::String* Field_2_20; // 0x0
	// static const ::System::UInt32 Field_2_23 = 0xD1; // 0x0
	// static const ::System::UInt32 Field_2_24 = 0xD2; // 0x0
	// static const ::System::UInt32 Field_2_25 = 0x1; // 0x0
	::RPG::Client::BattleGamePhase* Field_2_16; // 0x60
	::UnityEngine::Animation* Field_2_8; // 0x68
	::UnityEngine::UI::Button* Field_2_4; // 0x70
	::System::Collections::Generic::Stack_1<::Class_2_ED349B47CFEDF9B8*>* Field_2_22; // 0x78
	::UnityEngine::Transform* Field_2_2; // 0x80
	::UnityEngine::Transform* Field_2_3; // 0x88
	::System::Collections::Generic::Stack_1<::Class_2_ED349B47CFEDF9B8*>* Field_2_21; // 0x90
	::Class_2_764C2D7D755EF63E* Field_2_7; // 0x98
	::RPG::UINavigation::UINavigationZoneManager* Field_2_15; // 0xA0
	::UnityEngine::UI::Button* Field_2_5; // 0xA8
	::UnityEngine::RectTransform* Field_2_11; // 0xB0
	::UnityEngine::Animation* Field_2_9; // 0xB8
	::Class_2_2B7D66B6C432C71D* Field_2_6; // 0xC0
	::RPG::Client::MonoClickOutsideDetect* Field_2_12; // 0xC8
	::UnityEngine::Transform* Field_2_10; // 0xD0
	::System::Boolean Field_2_13; // 0xD8
	::System::Boolean Field_2_14; // 0xD9

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2__CTOR_OFFSET))(this);
	}

	static ::Class_2_D8A9B7E75FE2A68B_2* get_Instance()
	{
		return ((::Class_2_D8A9B7E75FE2A68B_2*(*)())((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_GET_INSTANCE_OFFSET))();
	}

	static ::System::Void set_Instance(::Class_2_D8A9B7E75FE2A68B_2* value)
	{
		return ((::System::Void(*)(::Class_2_D8A9B7E75FE2A68B_2*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_SET_INSTANCE_OFFSET))(value);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2__ONBIND_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_2_DDBFE8E9D8449B5F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_DDBFE8E9D8449B5F_OFFSET))(this);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_8C3DB70FFBBF01C7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C20A7E9DF3996211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_C20A7E9DF3996211_OFFSET))(this);
	}

	::Class_2_ED349B47CFEDF9B8* Method_2_0DB3B52F010E39B1()
	{
		return ((::Class_2_ED349B47CFEDF9B8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_0DB3B52F010E39B1_OFFSET))(this);
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

	::System::Void Method_2_17F2CC8F872A04EE(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_17F2CC8F872A04EE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2EE5451A8927066E(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_2EE5451A8927066E_OFFSET))(this, a1);
	}

	::System::Void Method_2_87A50CA00FA4E23D(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_87A50CA00FA4E23D_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_8A0FE0FA78BDB613(::InControl::InputDeviceClass a1)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_8A0FE0FA78BDB613_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::UInt32 Method_2_9477221A6F70535F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_9477221A6F70535F_OFFSET))(this);
	}

	::System::Boolean Method_2_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_507A5122CD01412B_OFFSET))(this);
	}

	::System::Boolean Method_2_507A5122CD01412B_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_507A5122CD01412B_1_OFFSET))(this);
	}

	::System::Boolean Method_2_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_7AEA4B2B25797605_OFFSET))(this);
	}

	::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_CE34EA208837238D_OFFSET))(this);
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

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void Method_2_F0880AD023811E29(::InControl::InputDeviceClass P0)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_2_METHOD_2_F0880AD023811E29_OFFSET))(this, P0);
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
