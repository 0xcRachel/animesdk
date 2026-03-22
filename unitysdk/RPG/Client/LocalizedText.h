#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FontType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/UI/Text.h"

namespace RPG::Client { class TextmapStatic_TextCompileContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class Font; }

#define RPG_CLIENT_LOCALIZEDTEXT_APPLYTEXTGENERATOR_OFFSET UNITYSDK_OFFSET(0x9581AB0)
#define RPG_CLIENT_LOCALIZEDTEXT_AWAKE_OFFSET UNITYSDK_OFFSET(0x957FED0)
#define RPG_CLIENT_LOCALIZEDTEXT_CHECKFONT_OFFSET UNITYSDK_OFFSET(0x9580DA0)
#define RPG_CLIENT_LOCALIZEDTEXT_FORCEDUSEFONT_OFFSET UNITYSDK_OFFSET(0x95830C0)
#define RPG_CLIENT_LOCALIZEDTEXT_GETDISPLAYLENGTH_OFFSET UNITYSDK_OFFSET(0x9583120)
#define RPG_CLIENT_LOCALIZEDTEXT_GET_FONT_OFFSET UNITYSDK_OFFSET(0x9580700)
#define RPG_CLIENT_LOCALIZEDTEXT_GET_FORBIDNOLEADINGCHAR_OFFSET UNITYSDK_OFFSET(0x9581DE0)
#define RPG_CLIENT_LOCALIZEDTEXT_GET_TEXTMAPID_OFFSET UNITYSDK_OFFSET(0x9583F60)
#define RPG_CLIENT_LOCALIZEDTEXT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x9581950)
#define RPG_CLIENT_LOCALIZEDTEXT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9581010)
#define RPG_CLIENT_LOCALIZEDTEXT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9580FC0)
#define RPG_CLIENT_LOCALIZEDTEXT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9580F70)
#define RPG_CLIENT_LOCALIZEDTEXT_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9581860)
#define RPG_CLIENT_LOCALIZEDTEXT_ONUITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0x95814A0)
#define RPG_CLIENT_LOCALIZEDTEXT_ONUITEXTSWITCH_OFFSET UNITYSDK_OFFSET(0x95818B0)
#define RPG_CLIENT_LOCALIZEDTEXT_ONUIWORLDFONTCHANGE_OFFSET UNITYSDK_OFFSET(0x9581900)
#define RPG_CLIENT_LOCALIZEDTEXT_RELEASECUSTOMFONT_OFFSET UNITYSDK_OFFSET(0x9583650)
#define RPG_CLIENT_LOCALIZEDTEXT_SETCUSTOMFONTBYAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0x95833B0)
#define RPG_CLIENT_LOCALIZEDTEXT_SETCUSTOMIZEDTEXTWITHTEXTID_OFFSET UNITYSDK_OFFSET(0x9582C50)
#define RPG_CLIENT_LOCALIZEDTEXT_SETCUSTOMIZEDTEXT_OFFSET UNITYSDK_OFFSET(0x9581FE0)
#define RPG_CLIENT_LOCALIZEDTEXT_SETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x9582F00)
#define RPG_CLIENT_LOCALIZEDTEXT_SETSIMPLETEXT_OFFSET UNITYSDK_OFFSET(0x9581F40)
#define RPG_CLIENT_LOCALIZEDTEXT_SETSINGLELINEELLIPSIS_OFFSET UNITYSDK_OFFSET(0x9581EA0)
#define RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDBYTALKSENTENCE_OFFSET UNITYSDK_OFFSET(0x9583760)
#define RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDFORDEBUG_OFFSET UNITYSDK_OFFSET(0x9583710)
#define RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDWITHCUSTOMSELECTPATTERN_1_OFFSET UNITYSDK_OFFSET(0x9582E60)
#define RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDWITHCUSTOMSELECTPATTERN_OFFSET UNITYSDK_OFFSET(0x9582DD0)
#define RPG_CLIENT_LOCALIZEDTEXT_SETTEXTID_1_OFFSET UNITYSDK_OFFSET(0x9582D40)
#define RPG_CLIENT_LOCALIZEDTEXT_SETTEXTID_OFFSET UNITYSDK_OFFSET(0x9582CC0)
#define RPG_CLIENT_LOCALIZEDTEXT_SET_FONT_OFFSET UNITYSDK_OFFSET(0x95805D0)
#define RPG_CLIENT_LOCALIZEDTEXT_SET_FORBIDNOLEADINGCHAR_OFFSET UNITYSDK_OFFSET(0x9581DF0)
#define RPG_CLIENT_LOCALIZEDTEXT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x9581960)
#define RPG_CLIENT_LOCALIZEDTEXT_START_OFFSET UNITYSDK_OFFSET(0x9580F30)
#define RPG_CLIENT_LOCALIZEDTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x9584070)
#define RPG_CLIENT_LOCALIZEDTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9583F70)
#define RPG_CLIENT_LOCALIZEDTEXT__GETACTUALPATH_OFFSET UNITYSDK_OFFSET(0x9583B70)
#define RPG_CLIENT_LOCALIZEDTEXT__GETTEXTMAP_OFFSET UNITYSDK_OFFSET(0x9580760)
#define RPG_CLIENT_LOCALIZEDTEXT__ONMCVCHANGE_OFFSET UNITYSDK_OFFSET(0x95837B0)
#define RPG_CLIENT_LOCALIZEDTEXT__ONRUBYLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x9583D70)
#define RPG_CLIENT_LOCALIZEDTEXT__ONTEXTJOINCHANGE_OFFSET UNITYSDK_OFFSET(0x9583850)
#define RPG_CLIENT_LOCALIZEDTEXT__ONUITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0x95814F0)
#define RPG_CLIENT_LOCALIZEDTEXT__PROCESSWHITEBG_OFFSET UNITYSDK_OFFSET(0x9582610)
#define RPG_CLIENT_LOCALIZEDTEXT__RECOMPILETEXT_OFFSET UNITYSDK_OFFSET(0x9580EB0)
#define RPG_CLIENT_LOCALIZEDTEXT__REFRESHRUBYDURINGRENDERUPDATE_OFFSET UNITYSDK_OFFSET(0x9583EC0)
#define RPG_CLIENT_LOCALIZEDTEXT__REGISTERPATTERNCHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0x9583900)
#define RPG_CLIENT_LOCALIZEDTEXT__TRYREGISTERDIRTYLAYOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9582BB0)
#define RPG_CLIENT_LOCALIZEDTEXT__TRYREGISTERREFRESHRUBYDURINGRENDERUPDATE_OFFSET UNITYSDK_OFFSET(0x9583DD0)
#define RPG_CLIENT_LOCALIZEDTEXT__TRYUNREGISTERDIRTYLAYOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x95813F0)
#define RPG_CLIENT_LOCALIZEDTEXT__TRYUNREGISTERREFRESHRUBYDURINGRENDERUPDATE_OFFSET UNITYSDK_OFFSET(0x9583C80)
#define RPG_CLIENT_LOCALIZEDTEXT__UNREGISTERPATTERNCHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0x95811A0)
#define RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x95840E0)
#define RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_GET_FONT_OFFSET UNITYSDK_OFFSET(0x95841E0)
#define RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9584120)
#define RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9584110)
#define RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9584100)
#define RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_SET_FONT_OFFSET UNITYSDK_OFFSET(0x9584200)
#define RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x9584130)
#define RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0x95840F0)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalizedText_TypeDefinitionIndex = 57835;

	class LocalizedText : public ::UnityEngine::UI::Text
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_COLOR()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(LocalizedText_TypeDefinitionIndex)->GetStaticField(0x1C040);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet__ReColor()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LocalizedText_TypeDefinitionIndex)->GetStaticField(0x1C048);
		}
		static ::System::String** StaticGet_EditorPrefix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LocalizedText_TypeDefinitionIndex)->GetStaticField(0x1C050);
		}
		::System::Boolean mForbidNoLeadingChar; // 0x190
		::UnityEngine::Font* _CustomFont; // 0x198
		::System::String* TextmapID; // 0x1A0
		::RPG::Client::TextID textID; // 0x1A8
		::Il2CppArray<::System::Object*>* replaceParams; // 0x1B8
		::System::Collections::Generic::List_1<::System::Boolean>* customSelect; // 0x1C0
		::System::Boolean _InUse; // 0x1C8
		::System::Boolean _InMCVPattern; // 0x1C9
		::System::Boolean _RegisteredDirtyLayoutCallback; // 0x1CA
		::System::Boolean _RegisteredDuringRenderUpdateCallback; // 0x1CB
		::System::String* _CustomizedTextBeforeCompileRuby; // 0x1D0
		::RPG::Client::TextmapStatic_TextCompileContext* _TextCompileContext; // 0x1D8
		::System::Single _DefaultDisplayHeight; // 0x1E0
		::System::Boolean _IsResized; // 0x1E4
		::System::Boolean RefreshByLanguageChange; // 0x1E5
		::System::Boolean IsWhiteBG; // 0x1E6
		::System::Boolean EnableRuby; // 0x1E7
		::System::Boolean EnableTextIcons; // 0x1E8
		::System::Boolean IsSingleLineEllipsis; // 0x1E9
		::RPG::Client::FontType ForcedFont; // 0x1EC
		::System::Boolean IsDynamicTextID; // 0x1F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUITextLanguageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_ONUITEXTLANGUAGECHANGE_OFFSET))(this);
		}

		::System::Void OnUITextChangeFontFromCondenseToComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET))(this);
		}

		::System::Void OnUITextSwitch(::System::Boolean toTextID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_ONUITEXTSWITCH_OFFSET))(this, toTextID);
		}

		::System::Void OnUIWorldFontChange(::System::Boolean toWorldFont)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_ONUIWORLDFONTCHANGE_OFFSET))(this, toWorldFont);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SET_TEXT_OFFSET))(this, value);
		}

		::System::Boolean get_ForbidNoLeadingChar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_GET_FORBIDNOLEADINGCHAR_OFFSET))(this);
		}

		::System::Void set_ForbidNoLeadingChar(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SET_FORBIDNOLEADINGCHAR_OFFSET))(this, value);
		}

		::System::Void ApplyTextGenerator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_APPLYTEXTGENERATOR_OFFSET))(this);
		}

		::System::Void SetSingleLineEllipsis(::System::Boolean open)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETSINGLELINEELLIPSIS_OFFSET))(this, open);
		}

		::UnityEngine::Font* get_font()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_GET_FONT_OFFSET))(this);
		}

		::System::Void set_font(::UnityEngine::Font* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SET_FONT_OFFSET))(this, value);
		}

		::System::Void SetSimpleText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETSIMPLETEXT_OFFSET))(this, text);
		}

		::System::Void SetCustomizedText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETCUSTOMIZEDTEXT_OFFSET))(this, text);
		}

		::System::Void SetCustomizedTextWithTextID(::System::String* text, ::RPG::Client::TextID textID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETCUSTOMIZEDTEXTWITHTEXTID_OFFSET))(this, text, textID);
		}

		::System::Void SetTextID(::RPG::Client::TextID textID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETTEXTID_OFFSET))(this, textID);
		}

		::System::Void SetTextID_1(::RPG::Client::TextID textID, ::Il2CppArray<::System::Object*>* replaceParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETTEXTID_1_OFFSET))(this, textID, replaceParams);
		}

		::System::Void SetTextIDWithCustomSelectPattern(::RPG::Client::TextID textID, ::System::Collections::Generic::List_1<::System::Boolean>* customSelect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::Collections::Generic::List_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDWITHCUSTOMSELECTPATTERN_OFFSET))(this, textID, customSelect);
		}

		::System::Void SetTextIDWithCustomSelectPattern_1(::RPG::Client::TextID textID, ::System::Collections::Generic::List_1<::System::Boolean>* customSelect, ::Il2CppArray<::System::Object*>* replaceParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::Collections::Generic::List_1<::System::Boolean>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDWITHCUSTOMSELECTPATTERN_1_OFFSET))(this, textID, customSelect, replaceParams);
		}

		::System::Boolean CheckFont(::System::Boolean checkAll)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_CHECKFONT_OFFSET))(this, checkAll);
		}

		::System::Void SetHighLight(::System::Int32 start, ::System::Int32 end, ::System::String* colorStr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETHIGHLIGHT_OFFSET))(this, start, end, colorStr);
		}

		::System::Void ForcedUseFont(::RPG::Client::FontType fontType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FontType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_FORCEDUSEFONT_OFFSET))(this, fontType);
		}

		::System::Int32 GetDisplayLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_GETDISPLAYLENGTH_OFFSET))(this);
		}

		::System::Void SetCustomFontByAudioLanguage(::System::String* audioLanguage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETCUSTOMFONTBYAUDIOLANGUAGE_OFFSET))(this, audioLanguage);
		}

		::System::Void ReleaseCustomFont()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_RELEASECUSTOMFONT_OFFSET))(this);
		}

		::System::Void SetTextIDForDebug(::RPG::Client::TextID textID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDFORDEBUG_OFFSET))(this, textID);
		}

		::System::Void SetTextIDByTalkSentence(::System::UInt32 talkSentenceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_SETTEXTIDBYTALKSENTENCE_OFFSET))(this, talkSentenceID);
		}

		::System::Void _OnUITextLanguageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__ONUITEXTLANGUAGECHANGE_OFFSET))(this);
		}

		::System::String* _ProcessWhiteBG(::System::String* text)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__PROCESSWHITEBG_OFFSET))(this, text);
		}

		::System::Void _OnMCVChange(::System::UInt32 mainMissionID, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__ONMCVCHANGE_OFFSET))(this, mainMissionID, name);
		}

		::System::Void _OnTextJoinChange(::System::UInt32 textJoinID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__ONTEXTJOINCHANGE_OFFSET))(this, textJoinID);
		}

		::System::Void _RecompileText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__RECOMPILETEXT_OFFSET))(this);
		}

		::System::Void _RegisterPatternChangeCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__REGISTERPATTERNCHANGECALLBACK_OFFSET))(this);
		}

		::System::Void _UnRegisterPatternChangeCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__UNREGISTERPATTERNCHANGECALLBACK_OFFSET))(this);
		}

		::System::String* _GetActualPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__GETACTUALPATH_OFFSET))(this);
		}

		::System::Void _GetTextmap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__GETTEXTMAP_OFFSET))(this);
		}

		::System::Void _TryRegisterDirtyLayoutCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__TRYREGISTERDIRTYLAYOUTCALLBACK_OFFSET))(this);
		}

		::System::Void _TryUnRegisterDirtyLayoutCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__TRYUNREGISTERDIRTYLAYOUTCALLBACK_OFFSET))(this);
		}

		::System::Void _OnRubyLayoutDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__ONRUBYLAYOUTDIRTY_OFFSET))(this);
		}

		::System::Void _TryRegisterRefreshRubyDuringRenderUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__TRYREGISTERREFRESHRUBYDURINGRENDERUPDATE_OFFSET))(this);
		}

		::System::Void _TryUnregisterRefreshRubyDuringRenderUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__TRYUNREGISTERREFRESHRUBYDURINGRENDERUPDATE_OFFSET))(this);
		}

		::System::Void _RefreshRubyDuringRenderUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT__REFRESHRUBYDURINGRENDERUPDATE_OFFSET))(this);
		}

		::System::String* get_TextMapId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT_GET_TEXTMAPID_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_START_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_set_text(::System::String* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_SET_TEXT_OFFSET))(this, P0);
		}

		::UnityEngine::Font* __iFixBaseProxy_get_font()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_GET_FONT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_set_font(::UnityEngine::Font* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXT___IFIXBASEPROXY_SET_FONT_OFFSET))(this, P0);
		}
	};
}
