#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1BDD670129DCB0E1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BEF96FA2AEAB87CC_CLEAR_OFFSET UNITYSDK_OFFSET(0xEB6E3D0)
#define CLASS_2_BEF96FA2AEAB87CC_GET_LAYER_OFFSET UNITYSDK_OFFSET(0xEB6E720)
#define CLASS_2_BEF96FA2AEAB87CC_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0xEB6E760)
#define CLASS_2_BEF96FA2AEAB87CC_GET_MAXLAYER_OFFSET UNITYSDK_OFFSET(0xEB6E740)
#define CLASS_2_BEF96FA2AEAB87CC_METHOD_2_883D674468E05079_OFFSET UNITYSDK_OFFSET(0xEB6E6C0)
#define CLASS_2_BEF96FA2AEAB87CC_METHOD_2_CF490FE5240C100D_OFFSET UNITYSDK_OFFSET(0xEB6E4A0)
#define CLASS_2_BEF96FA2AEAB87CC_SET_LAYER_OFFSET UNITYSDK_OFFSET(0xEB6E730)
#define CLASS_2_BEF96FA2AEAB87CC_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0xEB6E770)
#define CLASS_2_BEF96FA2AEAB87CC_SET_MAXLAYER_OFFSET UNITYSDK_OFFSET(0xEB6E750)
#define CLASS_2_BEF96FA2AEAB87CC__CTOR_OFFSET UNITYSDK_OFFSET(0xEB6E780)
#define CLASS_2_BEF96FA2AEAB87CC___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xEB6E7C0)

inline static constexpr unsigned int Class_2_BEF96FA2AEAB87CC_TypeDefinitionIndex = 50220;

class Class_2_BEF96FA2AEAB87CC : public ::Class_1_1BDD670129DCB0E1
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>* Field_2_3; // 0x30
	::RPG::GameCore::FixPoint _LifeTime_k__BackingField; // 0x38
	::RPG::GameCore::FixPoint _Layer_k__BackingField; // 0x40
	::RPG::GameCore::FixPoint _MaxLayer_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEF96FA2AEAB87CC__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEF96FA2AEAB87CC_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_CF490FE5240C100D(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BEF96FA2AEAB87CC_METHOD_2_CF490FE5240C100D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_883D674468E05079(::RPG::GameCore::ModifierBehaviorFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_2_BEF96FA2AEAB87CC_METHOD_2_883D674468E05079_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_Layer()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEF96FA2AEAB87CC_GET_LAYER_OFFSET))(this);
	}

	::System::Void set_Layer(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_BEF96FA2AEAB87CC_SET_LAYER_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_MaxLayer()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEF96FA2AEAB87CC_GET_MAXLAYER_OFFSET))(this);
	}

	::System::Void set_MaxLayer(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_BEF96FA2AEAB87CC_SET_MAXLAYER_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_LifeTime()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEF96FA2AEAB87CC_GET_LIFETIME_OFFSET))(this);
	}

	::System::Void set_LifeTime(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_BEF96FA2AEAB87CC_SET_LIFETIME_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEF96FA2AEAB87CC___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
