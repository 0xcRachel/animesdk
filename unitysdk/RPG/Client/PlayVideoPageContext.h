#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_F75F1E7EF80C3D40;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class VideoCaptionConfig; }
namespace RPG::GameCore { class VideoConfigRow; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ADAPTMOVIEIMAGE_OFFSET UNITYSDK_OFFSET(0x9B125B0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_BEGINFADEOUTMASK_OFFSET UNITYSDK_OFFSET(0x9B122F0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_CLOSECAPTION_OFFSET UNITYSDK_OFFSET(0x9B113D0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ENDFADEOUTMASK_OFFSET UNITYSDK_OFFSET(0x9B12340)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ENDPLAY_OFFSET UNITYSDK_OFFSET(0x9B11B50)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_FADEOUTMASK_OFFSET UNITYSDK_OFFSET(0x9B117D0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_GETVIDEOCAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x9B10E20)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_GET__VIEW_OFFSET UNITYSDK_OFFSET(0x9B112B0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONHIDEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x9B11E20)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONLUACALLBACK_OFFSET UNITYSDK_OFFSET(0x9B120D0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONSKIPACTIONVERIFY_OFFSET UNITYSDK_OFFSET(0x9B12220)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONSKIPBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x9B11F80)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONVIDEOBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x9B11CB0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_OPENMASK_OFFSET UNITYSDK_OFFSET(0x9B11480)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_SET_VIDEOFULLPATH_OFFSET UNITYSDK_OFFSET(0x9B12AC0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_SHOWCAPTION_OFFSET UNITYSDK_OFFSET(0x9B12400)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_TICKCAPTION_OFFSET UNITYSDK_OFFSET(0x9B11990)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9B119D0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9B10ED0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9B10BA0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9B11030)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT__ONFORCECLOSEVIDEO_OFFSET UNITYSDK_OFFSET(0x9B11A70)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT__ONTICK_OFFSET UNITYSDK_OFFSET(0x9B11740)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x9B11370)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9B11330)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9B12C60)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9B12AD0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x9B12BF0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x9B12B90)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9B12B30)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayVideoPageContext_TypeDefinitionIndex = 58117;

	class PlayVideoPageContext : public ::RPG::Client::UIController
	{
	public:
		// static const ::System::Int32 AUDIO_TRACK_COUNT = 0x4; // 0x0
		// static const ::System::Single MASK_TIME; // 0x0
		::RPG::GameCore::VideoCaptionConfig* _captionConfig; // 0x180
		::RPG::GameCore::VideoConfigRow* _videoConfig; // 0x188
		::System::String* _videoFullPath; // 0x190
		::RPG::Client::LuaUIController* _skilDialog; // 0x198
		::System::Boolean _hasCaption; // 0x1A0
		::System::Boolean _isSkipBtnShow; // 0x1A1
		::UnityEngine::Color _maskColor; // 0x1A4
		::RPG::Client::LockSource _LockSource; // 0x1B4
		::System::Single _maskTimer; // 0x1B8
		::System::Boolean _isLoop; // 0x1BC
		::System::Boolean _isMasking; // 0x1BD
		::System::Boolean _canSkip; // 0x1BE
		::System::Boolean _isVideoPlaying; // 0x1BF

		::System::Void _ctor(::System::UInt32 videoID, ::System::Boolean canSkip, ::System::Boolean isLoop, ::System::Boolean lockSound)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT__CTOR_OFFSET))(this, videoID, canSkip, isLoop, lockSound);
		}

		::System::Void _ctor_1(::System::String* filePath, ::System::Boolean canSkip, ::System::Boolean isLoop)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT__CTOR_1_OFFSET))(this, filePath, canSkip, isLoop);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single deltaSecond)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT__ONTICK_OFFSET))(this, deltaSecond);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnForceCloseVideo(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT__ONFORCECLOSEVIDEO_OFFSET))(this, arg);
		}

		::System::Void TickCaption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_TICKCAPTION_OFFSET))(this);
		}

		::System::Void OnVideoButtonClick(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONVIDEOBUTTONCLICK_OFFSET))(this, param);
		}

		::System::Void OnHideButtonClick(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONHIDEBUTTONCLICK_OFFSET))(this, param);
		}

		::System::Void OnSkipButtonClick(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONSKIPBUTTONCLICK_OFFSET))(this, param);
		}

		::System::Int32 onLuaCallback(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONLUACALLBACK_OFFSET))(this, L);
		}

		::System::Void OnSkipActionVerify(::System::Boolean isOK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONSKIPACTIONVERIFY_OFFSET))(this, isOK);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ENDPLAY_OFFSET))(this);
		}

		::System::Void OpenMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_OPENMASK_OFFSET))(this);
		}

		::System::Void BeginFadeOutMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_BEGINFADEOUTMASK_OFFSET))(this);
		}

		::System::Void EndFadeOutMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ENDFADEOUTMASK_OFFSET))(this);
		}

		::System::Void FadeOutMask(::System::Single deltaSecond)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_FADEOUTMASK_OFFSET))(this, deltaSecond);
		}

		::RPG::GameCore::VideoCaptionConfig* GetVideoCaptionConfig(::System::String* captionPath)
		{
			return ((::RPG::GameCore::VideoCaptionConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_GETVIDEOCAPTIONCONFIG_OFFSET))(this, captionPath);
		}

		::System::Void CloseCaption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_CLOSECAPTION_OFFSET))(this);
		}

		::System::Void ShowCaption(::RPG::Client::TextID textID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_SHOWCAPTION_OFFSET))(this, textID);
		}

		::System::Void AdaptMovieImage(::System::Single videoRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ADAPTMOVIEIMAGE_OFFSET))(this, videoRatio);
		}

		::System::Void set_VideoFullPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_SET_VIDEOFULLPATH_OFFSET))(this, value);
		}

		::Class_2_F75F1E7EF80C3D40* get__View()
		{
			return ((::Class_2_F75F1E7EF80C3D40*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_GET__VIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__ADDHANDLERS_OFFSET))(this);
		}
	};
}
