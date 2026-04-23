#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_174DB79296E547C3_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC30FE60)
#define CLASS_2_174DB79296E547C3_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC30FF70)
#define CLASS_2_174DB79296E547C3_METHOD_2_0A584F53A2EE54DE_OFFSET UNITYSDK_OFFSET(0xC30F420)
#define CLASS_2_174DB79296E547C3_METHOD_2_2D91FF5C865B0402_OFFSET UNITYSDK_OFFSET(0xC30F0D0)
#define CLASS_2_174DB79296E547C3_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xC310160)
#define CLASS_2_174DB79296E547C3_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xC30F1A0)
#define CLASS_2_174DB79296E547C3_METHOD_2_75329C76D751A475_1_OFFSET UNITYSDK_OFFSET(0xC30F550)
#define CLASS_2_174DB79296E547C3_METHOD_2_75329C76D751A475_OFFSET UNITYSDK_OFFSET(0xC30F2D0)
#define CLASS_2_174DB79296E547C3_METHOD_2_7778ABE51AFDB516_OFFSET UNITYSDK_OFFSET(0xC30F210)
#define CLASS_2_174DB79296E547C3_METHOD_2_7FBAA229ED524F8E_1_OFFSET UNITYSDK_OFFSET(0xC30FB40)
#define CLASS_2_174DB79296E547C3_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xC30FAD0)
#define CLASS_2_174DB79296E547C3_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xC30FCE0)
#define CLASS_2_174DB79296E547C3_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xC30FDA0)
#define CLASS_2_174DB79296E547C3_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xC30FC20)
#define CLASS_2_174DB79296E547C3_METHOD_2_AE20E5BD3B1974BD_OFFSET UNITYSDK_OFFSET(0xC30F9B0)
#define CLASS_2_174DB79296E547C3_METHOD_2_DD84BCD1EDA42F6E_OFFSET UNITYSDK_OFFSET(0xC30F6A0)
#define CLASS_2_174DB79296E547C3_METHOD_2_DFE1F50F191E84E7_OFFSET UNITYSDK_OFFSET(0xC30F7F0)
#define CLASS_2_174DB79296E547C3_METHOD_2_EBDCA6CEF092A306_OFFSET UNITYSDK_OFFSET(0xC30F930)
#define CLASS_2_174DB79296E547C3_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xC30FBB0)
#define CLASS_2_174DB79296E547C3__CCTOR_OFFSET UNITYSDK_OFFSET(0xC310090)
#define CLASS_2_174DB79296E547C3__CTOR_OFFSET UNITYSDK_OFFSET(0xC310060)
#define CLASS_2_174DB79296E547C3__ONBIND_OFFSET UNITYSDK_OFFSET(0xC30F020)
#define CLASS_2_174DB79296E547C3___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC3101C0)
#define CLASS_2_174DB79296E547C3___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC310220)
#define CLASS_2_174DB79296E547C3___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xC310100)

inline static constexpr unsigned int Class_2_174DB79296E547C3_TypeDefinitionIndex = 66637;

class Class_2_174DB79296E547C3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet_Field_2_7()
	{
		return (::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_174DB79296E547C3_TypeDefinitionIndex)->GetStaticField(0x123E0);
	}
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::UnityEngine::Animation* Field_2_0; // 0x60
	::RPG::GameCore::GameEntity* Field_2_2; // 0x68
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_3; // 0x70
	::UnityEngine::Transform* Field_2_1; // 0x78
	::System::Boolean Field_2_4; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_2D91FF5C865B0402(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_METHOD_2_2D91FF5C865B0402_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_75329C76D751A475(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_METHOD_2_75329C76D751A475_OFFSET))(this, a1);
	}

	::System::Void Method_2_75329C76D751A475_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_METHOD_2_75329C76D751A475_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_DD84BCD1EDA42F6E(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_METHOD_2_DD84BCD1EDA42F6E_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A584F53A2EE54DE(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_METHOD_2_0A584F53A2EE54DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_DFE1F50F191E84E7(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_METHOD_2_DFE1F50F191E84E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_2_7778ABE51AFDB516()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_METHOD_2_7778ABE51AFDB516_OFFSET))(this);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_7FBAA229ED524F8E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_METHOD_2_7FBAA229ED524F8E_1_OFFSET))(this);
	}

	::System::Boolean Method_2_AE20E5BD3B1974BD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_METHOD_2_AE20E5BD3B1974BD_OFFSET))(this);
	}

	::System::Boolean Method_2_EBDCA6CEF092A306(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_METHOD_2_EBDCA6CEF092A306_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174DB79296E547C3___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
