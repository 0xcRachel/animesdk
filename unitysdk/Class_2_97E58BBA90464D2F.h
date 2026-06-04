#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_3744C9F200AC03F4;
class Class_2_B49E223DF80566EF;
class Class_2_C3AC14C2FF8CD7D6;
class Class_2_E972752B9D4E2012;
namespace RPG::Client { class BattleAvatarCustomData; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_97E58BBA90464D2F_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16754CB0)
#define CLASS_2_97E58BBA90464D2F_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16754EC0)
#define CLASS_2_97E58BBA90464D2F_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x16753ED0)
#define CLASS_2_97E58BBA90464D2F_METHOD_2_12FBA0F9DF99A2E2_OFFSET UNITYSDK_OFFSET(0x16754620)
#define CLASS_2_97E58BBA90464D2F_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x16754040)
#define CLASS_2_97E58BBA90464D2F_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x167543F0)
#define CLASS_2_97E58BBA90464D2F_METHOD_2_1F0049EB5F9AF3BC_OFFSET UNITYSDK_OFFSET(0x167540C0)
#define CLASS_2_97E58BBA90464D2F_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x16754160)
#define CLASS_2_97E58BBA90464D2F_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x167551B0)
#define CLASS_2_97E58BBA90464D2F_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x16755150)
#define CLASS_2_97E58BBA90464D2F_METHOD_2_943E1EFDF67DA624_OFFSET UNITYSDK_OFFSET(0x16754BB0)
#define CLASS_2_97E58BBA90464D2F_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x16754C10)
#define CLASS_2_97E58BBA90464D2F_METHOD_2_DF7CEFC0E6C5FD0D_1_OFFSET UNITYSDK_OFFSET(0x16754990)
#define CLASS_2_97E58BBA90464D2F_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x16754770)
#define CLASS_2_97E58BBA90464D2F_METHOD_2_FA2356D61FA6F9C7_OFFSET UNITYSDK_OFFSET(0x16754450)
#define CLASS_2_97E58BBA90464D2F__CTOR_OFFSET UNITYSDK_OFFSET(0x16755090)
#define CLASS_2_97E58BBA90464D2F__ONBIND_OFFSET UNITYSDK_OFFSET(0x16753B10)
#define CLASS_2_97E58BBA90464D2F__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16754550)
#define CLASS_2_97E58BBA90464D2F__ONTICK_OFFSET UNITYSDK_OFFSET(0x167545A0)
#define CLASS_2_97E58BBA90464D2F___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x167552D0)
#define CLASS_2_97E58BBA90464D2F___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16755330)
#define CLASS_2_97E58BBA90464D2F___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x167550F0)
#define CLASS_2_97E58BBA90464D2F___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16755210)
#define CLASS_2_97E58BBA90464D2F___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x16755270)
#define CLASS_2_97E58BBA90464D2F___ONBIND_B__0_1_OFFSET UNITYSDK_OFFSET(0x167550E0)

inline static constexpr unsigned int Class_2_97E58BBA90464D2F_TypeDefinitionIndex = 67315;

class Class_2_97E58BBA90464D2F : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x60
	::RPG::Client::BattleAvatarCustomData* Field_2_3; // 0x68
	::Class_2_C3AC14C2FF8CD7D6* Field_2_4; // 0x70
	::Class_2_3744C9F200AC03F4* Field_2_5; // 0x78
	::Class_2_E972752B9D4E2012* Field_2_6; // 0x80
	::Class_2_B49E223DF80566EF* Field_2_7; // 0x88
	::RPG::Client::RPGAnimationEvent* Field_2_8; // 0x90
	::UnityEngine::Animation* Field_2_9; // 0x98
	::UnityEngine::RectTransform* Field_2_10; // 0xA0
	::UnityEngine::Transform* Field_2_11; // 0xA8
	::System::Boolean Field_2_12; // 0xB0
	::System::Boolean Field_2_13; // 0xB1
	::System::Boolean Field_2_14; // 0xB2

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_1F0049EB5F9AF3BC(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F_METHOD_2_1F0049EB5F9AF3BC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_FA2356D61FA6F9C7(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F_METHOD_2_FA2356D61FA6F9C7_OFFSET))(this, a1, a2);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F__ONDISPOSE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_12FBA0F9DF99A2E2(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F_METHOD_2_12FBA0F9DF99A2E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F_METHOD_2_DF7CEFC0E6C5FD0D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_943E1EFDF67DA624(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F_METHOD_2_943E1EFDF67DA624_OFFSET))(this, a1);
	}

	::System::Void Method_2_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __OnBind_b__0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F___ONBIND_B__0_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
