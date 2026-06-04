#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_434D09EE8A1FE6FE_TweenState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5C7F69784A5C81DE_2;
namespace RPG::Client { class IEvolveBuildFirstStageTutorialUnlockConfig; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class PauseDialogParam; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelEvolveBuildExpStepUp; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_434D09EE8A1FE6FE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16E96DB0)
#define CLASS_2_434D09EE8A1FE6FE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16E97070)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x16E952D0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x16E96320)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x16E95E10)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_09CD6CE8D5445621_OFFSET UNITYSDK_OFFSET(0x16E963E0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x16E950E0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_176EDC9D2FA71031_OFFSET UNITYSDK_OFFSET(0x16E96790)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x16E95C20)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_41E028BA4D0D3010_OFFSET UNITYSDK_OFFSET(0x16E95F40)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x16E95A60)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_55AE2FF9B0044B45_OFFSET UNITYSDK_OFFSET(0x16E96440)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x16E97440)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x16E974A0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x16E973E0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x16E95490)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x16E95AE0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_9ACA15A5DE5A3B88_OFFSET UNITYSDK_OFFSET(0x16E960D0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x16E96D30)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_AFD66A83AEF40D90_OFFSET UNITYSDK_OFFSET(0x16E95D30)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x16E96260)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x16E96AD0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x16E96C70)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16E96B70)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_F791161BD22F2F17_OFFSET UNITYSDK_OFFSET(0x16E95CA0)
#define CLASS_2_434D09EE8A1FE6FE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E97300)
#define CLASS_2_434D09EE8A1FE6FE__ONBIND_OFFSET UNITYSDK_OFFSET(0x16E94EA0)
#define CLASS_2_434D09EE8A1FE6FE__ONTICK_OFFSET UNITYSDK_OFFSET(0x16E96730)
#define CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16E97560)
#define CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16E975C0)
#define CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x16E97380)
#define CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x16E97500)

inline static constexpr unsigned int Class_2_434D09EE8A1FE6FE_TypeDefinitionIndex = 66719;

class Class_2_434D09EE8A1FE6FE : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_1 = 0x14; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	// static const ::System::Single Field_2_3; // 0x0
	// static const ::System::Single Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::String* Field_2_9; // 0x0
	::UnityEngine::UI::Image* Field_2_10; // 0x60
	::UnityEngine::UI::Button* Field_2_11; // 0x68
	::UnityEngine::UI::Text* Field_2_12; // 0x70
	::UnityEngine::Animation* Field_2_13; // 0x78
	::UnityEngine::UI::SmoothMask* Field_2_14; // 0x80
	::UnityEngine::UI::SmoothMask* Field_2_15; // 0x88
	::UnityEngine::Animation* Field_2_16; // 0x90
	::UnityEngine::Transform* Field_2_17; // 0x98
	::UnityEngine::UI::Text* Field_2_18; // 0xA0
	::RPG::Client::MonoInControlTip* Field_2_19; // 0xA8
	::RPG::GameCore::BattleInstance* Field_2_20; // 0xB0
	::RPG::Client::RPGAnimationEvent* Field_2_21; // 0xB8
	::UnityEngine::Animation* Field_2_22; // 0xC0
	::RPG::GameCore::LevelUIComponent* Field_2_23; // 0xC8
	::UnityEngine::UI::Button* Field_2_24; // 0xD0
	::RPG::Client::PauseDialogParam* Field_2_25; // 0xD8
	::RPG::GameCore::LevelDataComponent* Field_2_26; // 0xE0
	::UnityEngine::Vector3 Field_2_27; // 0xE8
	::System::Single Field_2_28; // 0xF4
	::System::Single Field_2_29; // 0xF8
	::System::Single Field_2_30; // 0xFC
	::System::Single Field_2_31; // 0x100
	::System::Boolean Field_2_32; // 0x104
	::Class_2_434D09EE8A1FE6FE_TweenState Field_2_33; // 0x108
	::System::UInt32 Field_2_34; // 0x10C
	::System::Single Field_2_35; // 0x110

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_2_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_F791161BD22F2F17(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_F791161BD22F2F17_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFD66A83AEF40D90(::Class_1_5C7F69784A5C81DE_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5C7F69784A5C81DE_2*))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_AFD66A83AEF40D90_OFFSET))(this, a1);
	}

	::System::Void Method_2_41E028BA4D0D3010(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_41E028BA4D0D3010_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void Method_2_09CD6CE8D5445621(::RPG::GameCore::LevelEvolveBuildExpStepUp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEvolveBuildExpStepUp*))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_09CD6CE8D5445621_OFFSET))(this, a1);
	}

	::System::Void Method_2_55AE2FF9B0044B45(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_55AE2FF9B0044B45_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_176EDC9D2FA71031(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_176EDC9D2FA71031_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::RPG::Client::IEvolveBuildFirstStageTutorialUnlockConfig* Method_2_9ACA15A5DE5A3B88()
	{
		return ((::RPG::Client::IEvolveBuildFirstStageTutorialUnlockConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_9ACA15A5DE5A3B88_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
