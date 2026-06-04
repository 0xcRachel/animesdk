#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_430FA2F73B5C666A_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x172A4360)
#define CLASS_2_430FA2F73B5C666A_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x172A4480)
#define CLASS_2_430FA2F73B5C666A_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x172A4210)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x172A3CA0)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x172A41D0)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x172A3C00)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x172A45B0)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_6CF053D5B1EC7D64_OFFSET UNITYSDK_OFFSET(0x172A40F0)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_6E26D7E65873E2FB_OFFSET UNITYSDK_OFFSET(0x172A3FC0)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x172A3D40)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x172A42C0)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x172A4220)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_D0658526DC9E67E7_OFFSET UNITYSDK_OFFSET(0x172A3EA0)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_D81224686493F7E5_OFFSET UNITYSDK_OFFSET(0x172A3CF0)
#define CLASS_2_430FA2F73B5C666A__CTOR_OFFSET UNITYSDK_OFFSET(0x172A4570)
#define CLASS_2_430FA2F73B5C666A__ONBIND_OFFSET UNITYSDK_OFFSET(0x172A3C60)
#define CLASS_2_430FA2F73B5C666A___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x172A4670)
#define CLASS_2_430FA2F73B5C666A___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x172A46D0)
#define CLASS_2_430FA2F73B5C666A___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x172A4610)

inline static constexpr unsigned int Class_2_430FA2F73B5C666A_TypeDefinitionIndex = 66764;

class Class_2_430FA2F73B5C666A : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Transform* Field_2_1; // 0x60
	::RPG::GameCore::GameEntity* Field_2_2; // 0x68
	::System::Action* Field_2_3; // 0x70
	::System::Boolean Field_2_4; // 0x78
	::System::Int32 _Priority_k__BackingField; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_D81224686493F7E5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_D81224686493F7E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0658526DC9E67E7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_D0658526DC9E67E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_6E26D7E65873E2FB(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_6E26D7E65873E2FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_6CF053D5B1EC7D64(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_6CF053D5B1EC7D64_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
