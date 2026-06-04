#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::GameCore { class AddChallengeBossInfoPanelState; }
namespace RPG::GameCore { class RemoveChallengeBossInfoPanelState; }
namespace RPG::GameCore { class SwitchChallengeBossInfoPanelState; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_6FE13DC8E3A9F329_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x177A3010)
#define CLASS_2_6FE13DC8E3A9F329_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x177A31D0)
#define CLASS_2_6FE13DC8E3A9F329_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x177A1AA0)
#define CLASS_2_6FE13DC8E3A9F329_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x177A1AC0)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x177A1CB0)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x177A2500)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x177A2CA0)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_30866F9CCFB9057B_OFFSET UNITYSDK_OFFSET(0x177A1E70)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_5633C39E0F4C80C6_OFFSET UNITYSDK_OFFSET(0x177A27B0)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x177A34E0)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x177A3480)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_8C0F82AA8DA03496_OFFSET UNITYSDK_OFFSET(0x177A2970)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x177A22F0)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x177A2DE0)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x177A2E80)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x177A2D40)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_BA60B5B08BA71FA9_OFFSET UNITYSDK_OFFSET(0x177A2B90)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0x177A2F20)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_D10D72BF522CC48B_OFFSET UNITYSDK_OFFSET(0x177A2C20)
#define CLASS_2_6FE13DC8E3A9F329_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x177A1AB0)
#define CLASS_2_6FE13DC8E3A9F329__CTOR_OFFSET UNITYSDK_OFFSET(0x177A3370)
#define CLASS_2_6FE13DC8E3A9F329__ONBIND_OFFSET UNITYSDK_OFFSET(0x177A1AD0)
#define CLASS_2_6FE13DC8E3A9F329__ONTICK_OFFSET UNITYSDK_OFFSET(0x177A23B0)
#define CLASS_2_6FE13DC8E3A9F329___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x177A35A0)
#define CLASS_2_6FE13DC8E3A9F329___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x177A3600)
#define CLASS_2_6FE13DC8E3A9F329___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x177A3420)
#define CLASS_2_6FE13DC8E3A9F329___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x177A3540)

inline static constexpr unsigned int Class_2_6FE13DC8E3A9F329_TypeDefinitionIndex = 67367;

class Class_2_6FE13DC8E3A9F329 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::Client::AnimatorButton* Field_2_1; // 0x60
	::UnityEngine::UI::Text* Field_2_2; // 0x68
	::UnityEngine::Animation* Field_2_3; // 0x70
	::RPG::Client::AnimatorButton* Field_2_4; // 0x78
	::UnityEngine::CanvasGroup* Field_2_5; // 0x80
	::System::Collections::Generic::Dictionary_2<::RPG::Client::TextID, ::System::Int32>* Field_2_6; // 0x88
	::UnityEngine::Transform* Field_2_7; // 0x90
	::UnityEngine::Transform* Field_2_8; // 0x98
	::UnityEngine::CanvasGroup* Field_2_9; // 0xA0
	::System::Int32 _Index_k__BackingField; // 0xA8
	::System::Int32 Field_2_11; // 0xAC
	::RPG::Client::TextID Field_2_12; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329__CTOR_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_GET_TRANS_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_2_30866F9CCFB9057B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_30866F9CCFB9057B_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Void Method_2_8C0F82AA8DA03496(::RPG::GameCore::SwitchChallengeBossInfoPanelState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_8C0F82AA8DA03496_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA60B5B08BA71FA9(::RPG::GameCore::AddChallengeBossInfoPanelState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AddChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_BA60B5B08BA71FA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_D10D72BF522CC48B(::RPG::GameCore::RemoveChallengeBossInfoPanelState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RemoveChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_D10D72BF522CC48B_OFFSET))(this, a1);
	}

	::System::Void Method_2_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_2566AD459572DFC3_OFFSET))(this);
	}

	::RPG::Client::TextID Method_2_5633C39E0F4C80C6()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_5633C39E0F4C80C6_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
