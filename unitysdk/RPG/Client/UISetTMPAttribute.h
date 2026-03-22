#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SDFTextAlignType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class UISetTMPAttribute_Class_3_50D343C44D28BEFB_7; }
namespace RPG::Client { class UITMPAnimateAttribute; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_Text; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UISETTMPATTRIBUTE_AWAKE_OFFSET UNITYSDK_OFFSET(0xA1FEB20)
#define RPG_CLIENT_UISETTMPATTRIBUTE_FORCETMPMESHUPDATE_OFFSET UNITYSDK_OFFSET(0xA1FEFF0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_GETCENTERPOS_OFFSET UNITYSDK_OFFSET(0xA201610)
#define RPG_CLIENT_UISETTMPATTRIBUTE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA200210)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0xA200DC0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xA200830)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0xA201380)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA2004B0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0xA201490)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0xA2005D0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xA1FEE10)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0xA200780)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_F70DB5A290D65023_OFFSET UNITYSDK_OFFSET(0xA203580)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA1FEC90)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA1FEDC0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONINVISIBLE_OFFSET UNITYSDK_OFFSET(0xA200530)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA2014E0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0xA201420)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTSWITCH_OFFSET UNITYSDK_OFFSET(0xA201520)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONUIWORLDFONTCHANGE_OFFSET UNITYSDK_OFFSET(0xA201570)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONVISIBLE_OFFSET UNITYSDK_OFFSET(0xA200410)
#define RPG_CLIENT_UISETTMPATTRIBUTE_RESETFONTSIZE_OFFSET UNITYSDK_OFFSET(0xA200C10)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETCONFIGSHOW_OFFSET UNITYSDK_OFFSET(0xA200FD0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETCUSTOMGETSDFASSETPATHDELEGATE_OFFSET UNITYSDK_OFFSET(0xA2015C0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETFACETOCAMERA_OFFSET UNITYSDK_OFFSET(0xA200F80)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETFONTSIZE_OFFSET UNITYSDK_OFFSET(0xA200B50)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEALIGNTYPE_OFFSET UNITYSDK_OFFSET(0xA201090)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEFONTASSET_OFFSET UNITYSDK_OFFSET(0xA201170)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEISKAOMOJI_OFFSET UNITYSDK_OFFSET(0xA2011F0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDESCALE_OFFSET UNITYSDK_OFFSET(0xA200D10)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETTEXTID_OFFSET UNITYSDK_OFFSET(0xA2007D0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETTEXT_OFFSET UNITYSDK_OFFSET(0xA200AE0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_START_OFFSET UNITYSDK_OFFSET(0xA1FEFA0)
#define RPG_CLIENT_UISETTMPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xA203A80)
#define RPG_CLIENT_UISETTMPATTRIBUTE__SHUFFLE_OFFSET UNITYSDK_OFFSET(0xA201270)

namespace RPG::Client
{
	inline static constexpr unsigned int UISetTMPAttribute_TypeDefinitionIndex = 56343;

	class UISetTMPAttribute : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* backgroundGO; // 0x18
		::System::Single backPaddingLeft; // 0x20
		::System::Single backPaddingRight; // 0x24
		::System::Single backPaddingUp; // 0x28
		::System::Single backPaddingDown; // 0x2C
		::System::Boolean IfUIUse; // 0x30
		::UnityEngine::RectTransform* Field_5_6; // 0x38
		::System::Boolean LoadSDFFont; // 0x40
		::System::Boolean EditorFrequencyTick; // 0x41
		::TMPro::TMP_Text* Field_5_9; // 0x48
		::UnityEngine::Vector3 Field_5_10; // 0x50
		::System::String* Field_5_11; // 0x60
		::RPG::Client::TextID Field_5_12; // 0x68
		::System::String* Field_5_13; // 0x78
		::System::Boolean Field_5_14; // 0x80
		::System::Single Field_5_15; // 0x84
		::System::Single Field_5_16; // 0x88
		::System::Single Field_5_17; // 0x8C
		::System::Boolean Field_5_18; // 0x90
		::System::Boolean Field_5_19; // 0x91
		::System::Boolean Field_5_20; // 0x92
		::RPG::Client::UITMPAnimateAttribute* Field_5_21; // 0x98
		::TMPro::TMP_FontAsset* Field_5_22; // 0xA0
		::RPG::Client::UISetTMPAttribute_Class_3_50D343C44D28BEFB_7* Field_5_23; // 0xA8
		::System::Boolean Field_5_24; // 0xB0
		::System::Single Field_5_25; // 0xB4
		::UnityEngine::RectTransform* Field_5_26; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_START_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONVISIBLE_OFFSET))(this);
		}

		::System::Void OnInVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONINVISIBLE_OFFSET))(this);
		}

		::System::Void Method_5_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_E7EF6BC52B28648C_OFFSET))(this);
		}

		::System::Void Method_5_ED79705457B92B5C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_ED79705457B92B5C_OFFSET))(this);
		}

		::System::Void SetTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETTEXTID_OFFSET))(this, a1);
		}

		::System::Void SetText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETTEXT_OFFSET))(this, a1);
		}

		::System::Void SetFontSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETFONTSIZE_OFFSET))(this, a1);
		}

		::System::Void ResetFontSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_RESETFONTSIZE_OFFSET))(this);
		}

		::System::Void SetOverrideScale(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDESCALE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFaceToCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETFACETOCAMERA_OFFSET))(this, a1);
		}

		::System::Void SetConfigShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETCONFIGSHOW_OFFSET))(this, a1);
		}

		::System::Void SetOverrideAlignType(::RPG::GameCore::SDFTextAlignType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SDFTextAlignType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEALIGNTYPE_OFFSET))(this, a1);
		}

		::System::Void SetOverrideFontAsset(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEFONTASSET_OFFSET))(this, a1);
		}

		::System::Void SetOverrideIsKaomoji(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEISKAOMOJI_OFFSET))(this, a1, a2);
		}

		::System::Void ForceTMPMeshUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_FORCETMPMESHUPDATE_OFFSET))(this);
		}

		::System::Void OnUITextLanguageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTLANGUAGECHANGE_OFFSET))(this);
		}

		::System::Void OnUITextChangeFontFromCondenseToComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET))(this);
		}

		::System::Void OnUITextSwitch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTSWITCH_OFFSET))(this, a1);
		}

		::System::Void OnUIWorldFontChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONUIWORLDFONTCHANGE_OFFSET))(this, a1);
		}

		::System::Void SetCustomGetSDFAssetPathDelegate(::RPG::Client::UISetTMPAttribute_Class_3_50D343C44D28BEFB_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UISetTMPAttribute_Class_3_50D343C44D28BEFB_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETCUSTOMGETSDFASSETPATHDELEGATE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCenterPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_GETCENTERPOS_OFFSET))(this);
		}

		::System::Void Method_5_2C95AFAD0256302F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_2C95AFAD0256302F_OFFSET))(this);
		}

		::System::Void Method_5_B732DC7FA82BA621()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_B732DC7FA82BA621_OFFSET))(this);
		}

		::System::Void Method_5_08DCF72FBE01FF99()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_08DCF72FBE01FF99_OFFSET))(this);
		}

		static ::System::Void _Shuffle(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE__SHUFFLE_OFFSET))(a1);
		}

		::System::Single Method_5_43E290A0B26B39F6(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_43E290A0B26B39F6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_D7852DE078ACC1F1_OFFSET))(this);
		}

		::System::String* Method_5_F70DB5A290D65023()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_F70DB5A290D65023_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_9681042564541CD6_OFFSET))(this);
		}
	};
}
