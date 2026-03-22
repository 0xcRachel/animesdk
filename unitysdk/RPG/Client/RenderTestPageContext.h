#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RenderTestMode.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9E8CD0C1037EB98E_2;
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class RenderTestPageContext_AnimationDropDownItem; }
namespace RPG::Client { class RenderTestPageContext_PlayerDropDownItem; }
namespace RPG::GameCore { class ShaderTestPreloadConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_RENDERTESTPAGECONTEXT_GETCAPTURETEXTURE_OFFSET UNITYSDK_OFFSET(0x9DBE340)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT_GET_VIEW_OFFSET UNITYSDK_OFFSET(0x9DAAC10)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9DAA6A0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9DAA740)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__GETCURRENTCHARACTERANIMATOR_OFFSET UNITYSDK_OFFSET(0x9DBD960)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__GETTRANSITFOV_OFFSET UNITYSDK_OFFSET(0x9DB8390)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__GETTRANSITOFFSET_OFFSET UNITYSDK_OFFSET(0x9DB81C0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITANIMATIONDROPDOWN_OFFSET UNITYSDK_OFFSET(0x9DAE270)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITAVATARDROPDOWN_OFFSET UNITYSDK_OFFSET(0x9DB8B30)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITBASELINEAVATARDROPDOWN_OFFSET UNITYSDK_OFFSET(0x9DACCA0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITDEBUGCAMCONFIGPANEL_OFFSET UNITYSDK_OFFSET(0x9DAC770)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITLIGHTINGDROPDOWN_OFFSET UNITYSDK_OFFSET(0x9DB5CF0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITMONSTERDROPDOWN_OFFSET UNITYSDK_OFFSET(0x9DB96C0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITNPCDROPDOWN_OFFSET UNITYSDK_OFFSET(0x9DB9CF0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITNPCMONSTERDROPDOWN_OFFSET UNITYSDK_OFFSET(0x9DB9100)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITPLAYERDROPDOWN_OFFSET UNITYSDK_OFFSET(0x9DB8560)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITSHADERTESTDROPDOWN_OFFSET UNITYSDK_OFFSET(0x9DAD880)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONANIMATIONPLAYED_OFFSET UNITYSDK_OFFSET(0x9DBD550)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONANIMATIONSLIDERCHANGED_OFFSET UNITYSDK_OFFSET(0x9DBD7C0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONAPPLYCAMECONFIG_OFFSET UNITYSDK_OFFSET(0x9DBAC80)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONBACKGROUNDTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x9DBD0C0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEAVATAR_OFFSET UNITYSDK_OFFSET(0x9DBA4C0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEBASELINEAVATAR_OFFSET UNITYSDK_OFFSET(0x9DAD650)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEBASELINEMONSTER_OFFSET UNITYSDK_OFFSET(0x9DBC100)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEBASELINENPC_OFFSET UNITYSDK_OFFSET(0x9DBBEE0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATECHARACTER_OFFSET UNITYSDK_OFFSET(0x9DB60D0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x9DBA8A0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATENPCMONSTER_OFFSET UNITYSDK_OFFSET(0x9DBA6B0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATENPC_OFFSET UNITYSDK_OFFSET(0x9DBAA90)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEPLAYER_OFFSET UNITYSDK_OFFSET(0x9DBA2D0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONEXITBTN_OFFSET UNITYSDK_OFFSET(0x9DB61F0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONEXPORTCAMECONFIG_OFFSET UNITYSDK_OFFSET(0x9DBB260)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONFRAMECAPTURE_OFFSET UNITYSDK_OFFSET(0x9DBDA90)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONHIDERIGHTUI_OFFSET UNITYSDK_OFFSET(0x9DB6530)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONHIDEUI_OFFSET UNITYSDK_OFFSET(0x9DB6270)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONLIGHTDIRECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x9DBD2A0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONLODLEVELCHANGE_OFFSET UNITYSDK_OFFSET(0x9DBBDB0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONLOOKATTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x9DBDF90)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONPINCHEND_OFFSET UNITYSDK_OFFSET(0x9DB8060)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONPINCHIN_OFFSET UNITYSDK_OFFSET(0x9DB7D60)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONPINCHOUT_OFFSET UNITYSDK_OFFSET(0x9DB7EE0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONREFRESHMATERIALS_OFFSET UNITYSDK_OFFSET(0x9DBC320)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONRESETBTN_OFFSET UNITYSDK_OFFSET(0x9DB67F0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONRESETROTBTN_OFFSET UNITYSDK_OFFSET(0x9DB68F0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSCREENDRAGING_OFFSET UNITYSDK_OFFSET(0x9DB69F0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSCROLL_OFFSET UNITYSDK_OFFSET(0x9DB76A0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSETMATERIALAVATAR_OFFSET UNITYSDK_OFFSET(0x9DBC5C0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSETMATERIALMONSTER_OFFSET UNITYSDK_OFFSET(0x9DBC780)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSETMATERIALNPC_OFFSET UNITYSDK_OFFSET(0x9DBC6A0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSETMATERIAL_OFFSET UNITYSDK_OFFSET(0x9DBC860)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSHOWCAPTUREPANEL_OFFSET UNITYSDK_OFFSET(0x9DBCEE0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSWITCHMODE_OFFSET UNITYSDK_OFFSET(0x9DBC9A0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONTICK_OFFSET UNITYSDK_OFFSET(0x9DB5F20)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__REFRESHCHARDROPDOWN_OFFSET UNITYSDK_OFFSET(0x9DAC700)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__SAVETOLOCAL_OFFSET UNITYSDK_OFFSET(0x9DBE1E0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__SCROLLCAMERA_OFFSET UNITYSDK_OFFSET(0x9DB7820)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x9DAAC70)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__TAKEMULTISCREENSHOT_OFFSET UNITYSDK_OFFSET(0x9DBDE60)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__TAKESINGLESCREENSHOT_OFFSET UNITYSDK_OFFSET(0x9DBDEF0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9DB5FF0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9DBE530)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x9DBE5F0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x9DBE590)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9DBE660)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___SETUPVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0x9DBE520)

namespace RPG::Client
{
	inline static constexpr unsigned int RenderTestPageContext_TypeDefinitionIndex = 58100;

	class RenderTestPageContext : public ::RPG::Client::UIController
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RenderTestPageContext_PlayerDropDownItem*>* _BaselineNPCDropDownList; // 0x180
		::System::Collections::Generic::List_1<::System::String*>* _NPCDropDownNameList; // 0x188
		::System::Collections::Generic::List_1<::System::String*>* _BaselineNPCDropDownNameList; // 0x190
		::UnityEngine::GameObject* GreenBlockObject; // 0x198
		::System::Collections::Generic::List_1<::System::String*>* _ShaderTestMonsters; // 0x1A0
		::System::Collections::Generic::List_1<::RPG::Client::RenderTestPageContext_PlayerDropDownItem*>* _NPCMonsterDropDownList; // 0x1A8
		::UnityEngine::Texture2D* CaptureTexture; // 0x1B0
		::System::Collections::Generic::List_1<::RPG::Client::RenderTestPageContext_PlayerDropDownItem*>* _PlayerDropDownList; // 0x1B8
		::System::Collections::Generic::List_1<::RPG::Client::RenderTestPageContext_PlayerDropDownItem*>* _NPCDropDownList; // 0x1C0
		::System::Collections::Generic::List_1<::System::String*>* _ShaderTestNpcs; // 0x1C8
		::System::Collections::Generic::List_1<::System::String*>* _NPCMonsterDropDownNameList; // 0x1D0
		::System::Collections::Generic::List_1<::System::String*>* _AvatarDropDownNameList; // 0x1D8
		::RPG::GameCore::ShaderTestPreloadConfig* shaderTestPreloadConfig; // 0x1E0
		::System::Collections::Generic::List_1<::System::String*>* _BaselineMonsterDropDownNameList; // 0x1E8
		::System::Collections::Generic::List_1<::System::String*>* _ShaderTestAvatars; // 0x1F0
		::System::Collections::Generic::List_1<::RPG::Client::RenderTestPageContext_PlayerDropDownItem*>* _AvatarDropDownList; // 0x1F8
		::System::Collections::Generic::List_1<::System::String*>* _BaselineAvatarDropDownNameList; // 0x200
		::System::Collections::Generic::List_1<::RPG::Client::RenderTestPageContext_PlayerDropDownItem*>* _MonsterDropDownList; // 0x208
		::System::Collections::Generic::List_1<::RPG::Client::RenderTestPageContext_PlayerDropDownItem*>* _BaselineAvatarDropDownList; // 0x210
		::System::Collections::Generic::List_1<::System::String*>* _PlayerDropDownNameList; // 0x218
		::System::Collections::Generic::List_1<::System::String*>* _MonsterDropDownNameList; // 0x220
		::System::Collections::Generic::List_1<::RPG::Client::RenderTestPageContext_AnimationDropDownItem*>* _AnimStateList; // 0x228
		::System::Collections::Generic::List_1<::System::String*>* _MaterialList; // 0x230
		::System::Collections::Generic::List_1<::RPG::Client::RenderTestPageContext_PlayerDropDownItem*>* _BaselineMonsterDropDownList; // 0x238
		::UnityEngine::Vector3 _InitLookAtPos; // 0x240
		::System::Single CaptureFrameFreeLookMaxDistance; // 0x24C
		::RPG::Client::RenderTestMode _RenderTestMode; // 0x250
		::UnityEngine::Vector3 _Offset; // 0x254
		::System::Int32 ModeNum; // 0x260
		::System::Boolean _IsHideRightUI; // 0x264
		::System::Boolean CapturingFrame; // 0x265
		::System::Boolean ShowingCapturePanel; // 0x266
		::System::Boolean _IsHideUI; // 0x267
		::System::Single CaptureFrameFreeLookMinDistance; // 0x268

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single deltaSecond)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONTICK_OFFSET))(this, deltaSecond);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void _OnCreateCharacter(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATECHARACTER_OFFSET))(this, param);
		}

		::System::Void _OnExitBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONEXITBTN_OFFSET))(this);
		}

		::System::Void _OnHideUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONHIDEUI_OFFSET))(this);
		}

		::System::Void _OnHideRightUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONHIDERIGHTUI_OFFSET))(this);
		}

		::System::Void _OnResetBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONRESETBTN_OFFSET))(this);
		}

		::System::Void _OnResetRotBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONRESETROTBTN_OFFSET))(this);
		}

		::System::Void _OnScreenDraging(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSCREENDRAGING_OFFSET))(this, eventData);
		}

		::System::Void _OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSCROLL_OFFSET))(this, eventData);
		}

		::System::Void _OnPinchIn(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONPINCHIN_OFFSET))(this, gesture);
		}

		::System::Void _OnPinchOut(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONPINCHOUT_OFFSET))(this, gesture);
		}

		::System::Void _OnPinchEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONPINCHEND_OFFSET))(this, gesture);
		}

		::System::Single _GetTransitOffset(::System::Single fDistance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__GETTRANSITOFFSET_OFFSET))(this, fDistance);
		}

		::System::Single _GetTransitFOV(::System::Single fDistance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__GETTRANSITFOV_OFFSET))(this, fDistance);
		}

		::System::Void _ScrollCamera(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__SCROLLCAMERA_OFFSET))(this, delta);
		}

		::System::Void _RefreshCharDropdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__REFRESHCHARDROPDOWN_OFFSET))(this);
		}

		::System::Void _InitPlayerDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITPLAYERDROPDOWN_OFFSET))(this);
		}

		::System::Void _InitAvatarDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITAVATARDROPDOWN_OFFSET))(this);
		}

		::System::Void _InitNPCMonsterDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITNPCMONSTERDROPDOWN_OFFSET))(this);
		}

		::System::Void _InitMonsterDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITMONSTERDROPDOWN_OFFSET))(this);
		}

		::System::Void _InitNPCDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITNPCDROPDOWN_OFFSET))(this);
		}

		::System::Void _OnCreatePlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEPLAYER_OFFSET))(this);
		}

		::System::Void _OnCreateAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEAVATAR_OFFSET))(this);
		}

		::System::Void _OnCreateNPCMonster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATENPCMONSTER_OFFSET))(this);
		}

		::System::Void _OnCreateMonster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEMONSTER_OFFSET))(this);
		}

		::System::Void _OnCreateNPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATENPC_OFFSET))(this);
		}

		::System::Void _OnApplyCameConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONAPPLYCAMECONFIG_OFFSET))(this);
		}

		::System::Void _InitDebugCamConfigPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITDEBUGCAMCONFIGPANEL_OFFSET))(this);
		}

		::System::Void _OnExportCameConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONEXPORTCAMECONFIG_OFFSET))(this);
		}

		::System::Void _InitBaselineAvatarDropdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITBASELINEAVATARDROPDOWN_OFFSET))(this);
		}

		::System::Void _OnLodLevelChange(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONLODLEVELCHANGE_OFFSET))(this, value);
		}

		::System::Void _OnCreateBaselineAvatar(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEBASELINEAVATAR_OFFSET))(this, index);
		}

		::System::Void _OnCreateBaselineNPC(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEBASELINENPC_OFFSET))(this, index);
		}

		::System::Void _OnCreateBaselineMonster(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEBASELINEMONSTER_OFFSET))(this, index);
		}

		::System::Void _InitShaderTestDropdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITSHADERTESTDROPDOWN_OFFSET))(this);
		}

		::System::Void _OnSetMaterialAvatar(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSETMATERIALAVATAR_OFFSET))(this, index);
		}

		::System::Void _OnSetMaterialNPC(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSETMATERIALNPC_OFFSET))(this, index);
		}

		::System::Void _OnSetMaterialMonster(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSETMATERIALMONSTER_OFFSET))(this, index);
		}

		::System::Void _OnRefreshMaterials(::Il2CppArray<::System::String*>* mats)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONREFRESHMATERIALS_OFFSET))(this, mats);
		}

		::System::Void _OnSetMaterial(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSETMATERIAL_OFFSET))(this, index);
		}

		::System::Void _OnSwitchMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSWITCHMODE_OFFSET))(this);
		}

		::System::Void _OnShowCapturePanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSHOWCAPTUREPANEL_OFFSET))(this);
		}

		::System::Void _OnBackgroundToggleChanged(::System::Boolean Value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONBACKGROUNDTOGGLECHANGED_OFFSET))(this, Value);
		}

		::System::Void _OnLightDirectionChanged(::System::Int32 Index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONLIGHTDIRECTIONCHANGED_OFFSET))(this, Index);
		}

		::System::Void _OnAnimationPlayed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONANIMATIONPLAYED_OFFSET))(this);
		}

		::System::Void _OnAnimationSliderChanged(::System::Single Value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONANIMATIONSLIDERCHANGED_OFFSET))(this, Value);
		}

		::UnityEngine::Animator* _GetCurrentCharacterAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__GETCURRENTCHARACTERANIMATOR_OFFSET))(this);
		}

		::System::Void _InitAnimationDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITANIMATIONDROPDOWN_OFFSET))(this);
		}

		::System::Void _InitLightingDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITLIGHTINGDROPDOWN_OFFSET))(this);
		}

		::System::Void _OnFrameCapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONFRAMECAPTURE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _TakeMultiScreenShot()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__TAKEMULTISCREENSHOT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _TakeSingleScreenShot(::System::String* FolderName, ::System::String* FileName)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__TAKESINGLESCREENSHOT_OFFSET))(this, FolderName, FileName);
		}

		::System::Void _OnLookAtToggleChanged(::System::Boolean Value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONLOOKATTOGGLECHANGED_OFFSET))(this, Value);
		}

		::System::Void _SaveToLocal(::Il2CppArray<::System::Byte>* mediaBytes, ::System::String* folderName, ::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__SAVETOLOCAL_OFFSET))(this, mediaBytes, folderName, fileName);
		}

		::UnityEngine::Texture2D* GetCaptureTexture(::System::Int32 Width, ::System::Int32 Height)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT_GETCAPTURETEXTURE_OFFSET))(this, Width, Height);
		}

		::Class_2_9E8CD0C1037EB98E_2* get_View()
		{
			return ((::Class_2_9E8CD0C1037EB98E_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT_GET_VIEW_OFFSET))(this);
		}

		::System::Void __SetupView_b__4_0(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___SETUPVIEW_B__4_0_OFFSET))(this, text);
		}

		::System::Void __iFixBaseProxy__CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
		}
	};
}
