#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_96290D3EA3548FA1;
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_EB6A6370F37BDD01_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8A730F0)
#define CLASS_2_EB6A6370F37BDD01_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8A73230)
#define CLASS_2_EB6A6370F37BDD01_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x8A724B0)
#define CLASS_2_EB6A6370F37BDD01_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x8A724D0)
#define CLASS_2_EB6A6370F37BDD01_METHOD_2_52DA4589948A713E_OFFSET UNITYSDK_OFFSET(0x8A72B20)
#define CLASS_2_EB6A6370F37BDD01_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x8A734E0)
#define CLASS_2_EB6A6370F37BDD01_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x8A73540)
#define CLASS_2_EB6A6370F37BDD01_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8A73480)
#define CLASS_2_EB6A6370F37BDD01_METHOD_2_7136DC8DFCDC2E24_1_OFFSET UNITYSDK_OFFSET(0x8A72C60)
#define CLASS_2_EB6A6370F37BDD01_METHOD_2_7136DC8DFCDC2E24_2_OFFSET UNITYSDK_OFFSET(0x8A72CB0)
#define CLASS_2_EB6A6370F37BDD01_METHOD_2_7136DC8DFCDC2E24_OFFSET UNITYSDK_OFFSET(0x8A72C10)
#define CLASS_2_EB6A6370F37BDD01_METHOD_2_7AEA761C95272723_OFFSET UNITYSDK_OFFSET(0x8A72D00)
#define CLASS_2_EB6A6370F37BDD01_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x8A727C0)
#define CLASS_2_EB6A6370F37BDD01_METHOD_2_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0x8A726C0)
#define CLASS_2_EB6A6370F37BDD01_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x8A72F90)
#define CLASS_2_EB6A6370F37BDD01_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x8A73040)
#define CLASS_2_EB6A6370F37BDD01_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x8A72EE0)
#define CLASS_2_EB6A6370F37BDD01_METHOD_2_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x8A724E0)
#define CLASS_2_EB6A6370F37BDD01_METHOD_2_CB8E229BDF290D41_OFFSET UNITYSDK_OFFSET(0x8A72810)
#define CLASS_2_EB6A6370F37BDD01_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x8A735A0)
#define CLASS_2_EB6A6370F37BDD01_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x8A72B80)
#define CLASS_2_EB6A6370F37BDD01_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x8A724C0)
#define CLASS_2_EB6A6370F37BDD01__CTOR_OFFSET UNITYSDK_OFFSET(0x8A73350)
#define CLASS_2_EB6A6370F37BDD01__ONBIND_OFFSET UNITYSDK_OFFSET(0x8A72350)
#define CLASS_2_EB6A6370F37BDD01___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8A73610)
#define CLASS_2_EB6A6370F37BDD01___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8A73670)
#define CLASS_2_EB6A6370F37BDD01___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8A73420)
#define CLASS_2_EB6A6370F37BDD01___REFRESHVIEW_B__19_0_OFFSET UNITYSDK_OFFSET(0x8A733A0)
#define CLASS_2_EB6A6370F37BDD01___REFRESHVIEW_B__19_2_OFFSET UNITYSDK_OFFSET(0x8A733D0)

inline static constexpr unsigned int Class_2_EB6A6370F37BDD01_TypeDefinitionIndex = 59232;

class Class_2_EB6A6370F37BDD01 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::UInt32 Field_2_9 = 0x4; // 0x0
	::RPG::GameCore::LevelUIComponent* Field_2_5; // 0x60
	::RPG::Client::NodeListViewPanel_1<::Class_2_96290D3EA3548FA1*>* Field_2_2; // 0x68
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_8; // 0x70
	::UnityEngine::Transform* Field_2_3; // 0x78
	::RPG::GameCore::GameEntity* Field_2_6; // 0x80
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_7; // 0x88
	::UnityEngine::UI::Button* Field_2_1; // 0x90
	::System::Int32 _Index_k__BackingField; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_METHOD_2_A6544B958241856F_OFFSET))(this);
	}

	::System::Void Method_2_9B92C44D5842AA8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_METHOD_2_9B92C44D5842AA8A_OFFSET))(this);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_52DA4589948A713E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_METHOD_2_52DA4589948A713E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_7136DC8DFCDC2E24(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_METHOD_2_7136DC8DFCDC2E24_OFFSET))(this, a1);
	}

	::System::Void Method_2_7136DC8DFCDC2E24_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_METHOD_2_7136DC8DFCDC2E24_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7136DC8DFCDC2E24_2(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_METHOD_2_7136DC8DFCDC2E24_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB8E229BDF290D41()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_METHOD_2_CB8E229BDF290D41_OFFSET))(this);
	}

	static ::System::Boolean Method_2_7AEA761C95272723(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_METHOD_2_7AEA761C95272723_OFFSET))(a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __RefreshView_b__19_0(::RPG::GameCore::TurnBasedModifierInstance* modifier)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01___REFRESHVIEW_B__19_0_OFFSET))(this, modifier);
	}

	::System::Void __RefreshView_b__19_2(::Class_2_96290D3EA3548FA1* panel, ::System::Int32 i)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_96290D3EA3548FA1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01___REFRESHVIEW_B__19_2_OFFSET))(this, panel, i);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
