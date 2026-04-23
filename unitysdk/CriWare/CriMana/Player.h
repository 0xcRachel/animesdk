#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/CriWare/CriMana/EventPoint.h"
#include "unitysdk/CriWare/CriMana/Player_AudioTrack.h"
#include "unitysdk/CriWare/CriMana/Player_CriManaUnityPlayer_RenderEventAction.h"
#include "unitysdk/CriWare/CriMana/Player_MovieEventSyncMode.h"
#include "unitysdk/CriWare/CriMana/Player_SetMode.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/CriWare/CriMana/Player_TimerType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"

namespace CriWare { class CriAtomEx3dSource; }
namespace CriWare { class CriAtomExPlayer; }
namespace CriWare { class CriFsBinder; }
namespace CriWare { class CriManaMovieMaterialBase; }
namespace CriWare { class CriManaMoviePlayerHolder; }
namespace CriWare::CriMana { class FrameInfo; }
namespace CriWare::CriMana { class MovieInfo; }
namespace CriWare::CriMana { class Player_CuePointCallback; }
namespace CriWare::CriMana { class Player_CuePointCallbackFromNativeDelegate; }
namespace CriWare::CriMana { class Player_ShaderDispatchCallback; }
namespace CriWare::CriMana { class Player_StatusChangeCallback; }
namespace CriWare::CriMana { class Player_SubtitleChangeCallback; }
namespace CriWare::CriMana::Detail { class RendererResource; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MonoBehaviour; }

#define CRIWARE_CRIMANA_PLAYER_ADD_ONSUBTITLECHANGED_OFFSET UNITYSDK_OFFSET(0x1A4E8670)
#define CRIWARE_CRIMANA_PLAYER_ALLOCATESUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4EE0E0)
#define CRIWARE_CRIMANA_PLAYER_CREATERENDERERRESOURCE_OFFSET UNITYSDK_OFFSET(0x1A4E9B40)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE0348BF1B_OFFSET UNITYSDK_OFFSET(0x1A4ED8D0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE0EA59F65_OFFSET UNITYSDK_OFFSET(0x1A4ECEF0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE162DD162_OFFSET UNITYSDK_OFFSET(0x1A4EC140)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE165B6B70_OFFSET UNITYSDK_OFFSET(0x1A4E9430)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE18BFCB88_OFFSET UNITYSDK_OFFSET(0x1A4EB0F0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE1E785A43_OFFSET UNITYSDK_OFFSET(0x1A4F00C0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE1EBB12C5_OFFSET UNITYSDK_OFFSET(0x1A4ED670)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE1FF2F5BE_OFFSET UNITYSDK_OFFSET(0x1A4ED410)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE213452EF_OFFSET UNITYSDK_OFFSET(0x1A4ED180)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE27ED314F_OFFSET UNITYSDK_OFFSET(0x1A4F0EA0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE2C8FF595_OFFSET UNITYSDK_OFFSET(0x1A4EE390)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE31668293_OFFSET UNITYSDK_OFFSET(0x1A4EDB60)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE328F2911_OFFSET UNITYSDK_OFFSET(0x1A4EB550)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE33981CC9_OFFSET UNITYSDK_OFFSET(0x1A4F14C0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE362A826C_OFFSET UNITYSDK_OFFSET(0x1A4F06B0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE3CE8CE6A_OFFSET UNITYSDK_OFFSET(0x1A4F0730)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE3F9C5D06_OFFSET UNITYSDK_OFFSET(0x1A4EC8C0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE419ECAF8_OFFSET UNITYSDK_OFFSET(0x1A4F0B30)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE4331E077_OFFSET UNITYSDK_OFFSET(0x1A4EC2C0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE55ECC3E4_OFFSET UNITYSDK_OFFSET(0x1A4EFA60)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE61523A0C_OFFSET UNITYSDK_OFFSET(0x1A4F0570)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE65553651_OFFSET UNITYSDK_OFFSET(0x1A4EC090)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE662A91B8_OFFSET UNITYSDK_OFFSET(0x1A4EE860)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE66A63134_OFFSET UNITYSDK_OFFSET(0x1A4F1440)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE6756AE56_OFFSET UNITYSDK_OFFSET(0x1A4ECB30)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE705B8C6D_OFFSET UNITYSDK_OFFSET(0x1A4EC520)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE725ED4B4_OFFSET UNITYSDK_OFFSET(0x1A4F07C0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE72A5B8BF_OFFSET UNITYSDK_OFFSET(0x1A4F13C0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE7500F0DD_OFFSET UNITYSDK_OFFSET(0x1A4EE5E0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE7779586C_OFFSET UNITYSDK_OFFSET(0x1A4EE4C0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE7C753A2E_1_OFFSET UNITYSDK_OFFSET(0x1A4EBA30)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE7C753A2E_OFFSET UNITYSDK_OFFSET(0x1A4EB780)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE88D04318_OFFSET UNITYSDK_OFFSET(0x1A4E8960)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE8A87737B_OFFSET UNITYSDK_OFFSET(0x1A4EC9F0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE95A85424_OFFSET UNITYSDK_OFFSET(0x1A4E93A0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE966C4BA9_OFFSET UNITYSDK_OFFSET(0x1A4ED7A0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREA59E0F01_OFFSET UNITYSDK_OFFSET(0x1A4EF860)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREA7F6DE6B_OFFSET UNITYSDK_OFFSET(0x1A4EE730)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREAB576D15_OFFSET UNITYSDK_OFFSET(0x1A4EC780)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREABF659EC_OFFSET UNITYSDK_OFFSET(0x1A4EFF50)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREB2460D7A_OFFSET UNITYSDK_OFFSET(0x1A4EDCF0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREB28B5D50_OFFSET UNITYSDK_OFFSET(0x1A4EBDA0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREBB898C91_OFFSET UNITYSDK_OFFSET(0x1A4EAE80)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREBD24DE27_OFFSET UNITYSDK_OFFSET(0x1A4EC3F0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREC35C3DC3_1_OFFSET UNITYSDK_OFFSET(0x1A4EBAC0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREC35C3DC3_OFFSET UNITYSDK_OFFSET(0x1A4EB810)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREC5A3A88D_OFFSET UNITYSDK_OFFSET(0x1A4EDA00)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREC7C5CC77_OFFSET UNITYSDK_OFFSET(0x1A4EEA60)
#define CRIWARE_CRIMANA_PLAYER_CRIWARECEA2FA98_OFFSET UNITYSDK_OFFSET(0x1A4F0F20)
#define CRIWARE_CRIMANA_PLAYER_CRIWARED30C9C6F_OFFSET UNITYSDK_OFFSET(0x1A4ED540)
#define CRIWARE_CRIMANA_PLAYER_CRIWARED99932F6_OFFSET UNITYSDK_OFFSET(0x1A4ECC60)
#define CRIWARE_CRIMANA_PLAYER_CRIWARED9F7168D_OFFSET UNITYSDK_OFFSET(0x1A4F0620)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREDA0693CD_OFFSET UNITYSDK_OFFSET(0x1A4EBE30)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREE2DF1163_OFFSET UNITYSDK_OFFSET(0x1A4F0040)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREEB32FC73_OFFSET UNITYSDK_OFFSET(0x1A4EC650)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREEDB46019_OFFSET UNITYSDK_OFFSET(0x1A4EB4B0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREEFA5210A_OFFSET UNITYSDK_OFFSET(0x1A4EB220)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREF4B0CC4E_OFFSET UNITYSDK_OFFSET(0x1A4EDE80)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREFD186F02_OFFSET UNITYSDK_OFFSET(0x1A4E8D30)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREUNITY_GETRENDEREVENTFUNC_OFFSET UNITYSDK_OFFSET(0x1A4EFED0)
#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x1A4E8440)
#define CRIWARE_CRIMANA_PLAYER_DEALLOCATESUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4EE2C0)
#define CRIWARE_CRIMANA_PLAYER_DISABLEINFOS_OFFSET UNITYSDK_OFFSET(0x1A4EAF00)
#define CRIWARE_CRIMANA_PLAYER_DISPOSERENDERERRESOURCE_OFFSET UNITYSDK_OFFSET(0x1A4EA2B0)
#define CRIWARE_CRIMANA_PLAYER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A4E9520)
#define CRIWARE_CRIMANA_PLAYER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A4E9AC0)
#define CRIWARE_CRIMANA_PLAYER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A4E94B0)
#define CRIWARE_CRIMANA_PLAYER_GETDISPLAYEDFRAMENO_OFFSET UNITYSDK_OFFSET(0x1A4EE540)
#define CRIWARE_CRIMANA_PLAYER_GETEXTRAAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1A4ED960)
#define CRIWARE_CRIMANA_PLAYER_GETSUBAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1A4ED700)
#define CRIWARE_CRIMANA_PLAYER_GETTIME_OFFSET UNITYSDK_OFFSET(0x1A4EE420)
#define CRIWARE_CRIMANA_PLAYER_GETVOLUME_OFFSET UNITYSDK_OFFSET(0x1A4ED4A0)
#define CRIWARE_CRIMANA_PLAYER_GET_ADDITIVEMODE_OFFSET UNITYSDK_OFFSET(0x1A4E8770)
#define CRIWARE_CRIMANA_PLAYER_GET_APPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x1A4E87B0)
#define CRIWARE_CRIMANA_PLAYER_GET_ATOMEX3DSOURCEFORAMBISONICS_OFFSET UNITYSDK_OFFSET(0x1A4E8A30)
#define CRIWARE_CRIMANA_PLAYER_GET_ATOMEXPLAYER_OFFSET UNITYSDK_OFFSET(0x1A4E8A20)
#define CRIWARE_CRIMANA_PLAYER_GET_FRAMEINFO_OFFSET UNITYSDK_OFFSET(0x1A4E8810)
#define CRIWARE_CRIMANA_PLAYER_GET_ISALIVE_OFFSET UNITYSDK_OFFSET(0x1A4EFEC0)
#define CRIWARE_CRIMANA_PLAYER_GET_ISFRAMEAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1A4E87F0)
#define CRIWARE_CRIMANA_PLAYER_GET_MAXFRAMEDROP_OFFSET UNITYSDK_OFFSET(0x1A4E8790)
#define CRIWARE_CRIMANA_PLAYER_GET_MOVIEINFO_OFFSET UNITYSDK_OFFSET(0x1A4E8800)
#define CRIWARE_CRIMANA_PLAYER_GET_NATIVESTATUS_OFFSET UNITYSDK_OFFSET(0x1A4E88B0)
#define CRIWARE_CRIMANA_PLAYER_GET_NUMBEROFENTRIES_OFFSET UNITYSDK_OFFSET(0x1A4E88C0)
#define CRIWARE_CRIMANA_PLAYER_GET_PLAYERHOLDER_OFFSET UNITYSDK_OFFSET(0x1A4E8A50)
#define CRIWARE_CRIMANA_PLAYER_GET_REQUIREDSTATUS_OFFSET UNITYSDK_OFFSET(0x1A4E84F0)
#define CRIWARE_CRIMANA_PLAYER_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1A4E8820)
#define CRIWARE_CRIMANA_PLAYER_GET_SUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4E89E0)
#define CRIWARE_CRIMANA_PLAYER_GET_SUBTITLESIZE_OFFSET UNITYSDK_OFFSET(0x1A4E8A00)
#define CRIWARE_CRIMANA_PLAYER_GET_TIMERTYPE_OFFSET UNITYSDK_OFFSET(0x1A4E8A40)
#define CRIWARE_CRIMANA_PLAYER_GET_UIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x1A4E87D0)
#define CRIWARE_CRIMANA_PLAYER_HASRENDEREDNEWFRAME_OFFSET UNITYSDK_OFFSET(0x1A4EE660)
#define CRIWARE_CRIMANA_PLAYER_INTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1A4EEAF0)
#define CRIWARE_CRIMANA_PLAYER_INVOKEPLAYERSTATUSCHECK_OFFSET UNITYSDK_OFFSET(0x1A4E8530)
#define CRIWARE_CRIMANA_PLAYER_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1A4EB170)
#define CRIWARE_CRIMANA_PLAYER_ISSUEPLUGINEVENT_OFFSET UNITYSDK_OFFSET(0x1A4EFD20)
#define CRIWARE_CRIMANA_PLAYER_ISSUEPLUGINUPDATESFORFRAMES_OFFSET UNITYSDK_OFFSET(0x1A4EFFD0)
#define CRIWARE_CRIMANA_PLAYER_LOOP_OFFSET UNITYSDK_OFFSET(0x1A4EC210)
#define CRIWARE_CRIMANA_PLAYER_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1A4EFB00)
#define CRIWARE_CRIMANA_PLAYER_PAUSEONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1A4F0FA0)
#define CRIWARE_CRIMANA_PLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1A4EACB0)
#define CRIWARE_CRIMANA_PLAYER_PREPAREFORRENDERING_OFFSET UNITYSDK_OFFSET(0x1A4EA9A0)
#define CRIWARE_CRIMANA_PLAYER_PREPARENATIVEPLAYER_OFFSET UNITYSDK_OFFSET(0x1A4EA380)
#define CRIWARE_CRIMANA_PLAYER_PREPARE_OFFSET UNITYSDK_OFFSET(0x1A4EA330)
#define CRIWARE_CRIMANA_PLAYER_REMOVE_ONSUBTITLECHANGED_OFFSET UNITYSDK_OFFSET(0x1A4E86F0)
#define CRIWARE_CRIMANA_PLAYER_SETASRRACKID_OFFSET UNITYSDK_OFFSET(0x1A4EE680)
#define CRIWARE_CRIMANA_PLAYER_SETAUDIOTRACK_1_OFFSET UNITYSDK_OFFSET(0x1A4ECCE0)
#define CRIWARE_CRIMANA_PLAYER_SETAUDIOTRACK_OFFSET UNITYSDK_OFFSET(0x1A4ECBB0)
#define CRIWARE_CRIMANA_PLAYER_SETBUFFERINGTIME_OFFSET UNITYSDK_OFFSET(0x1A4EC940)
#define CRIWARE_CRIMANA_PLAYER_SETBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1A4EDA80)
#define CRIWARE_CRIMANA_PLAYER_SETCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A4EBB70)
#define CRIWARE_CRIMANA_PLAYER_SETDATA_1_OFFSET UNITYSDK_OFFSET(0x1A4EB8B0)
#define CRIWARE_CRIMANA_PLAYER_SETDATA_OFFSET UNITYSDK_OFFSET(0x1A4EB610)
#define CRIWARE_CRIMANA_PLAYER_SETDECRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0x1A4EE7B0)
#define CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1A4EDDA0)
#define CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOTRACK_1_OFFSET UNITYSDK_OFFSET(0x1A4ED200)
#define CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOTRACK_OFFSET UNITYSDK_OFFSET(0x1A4ED0D0)
#define CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1A4ED820)
#define CRIWARE_CRIMANA_PLAYER_SETFILERANGE_OFFSET UNITYSDK_OFFSET(0x1A4EBED0)
#define CRIWARE_CRIMANA_PLAYER_SETFILE_OFFSET UNITYSDK_OFFSET(0x1A4EB2A0)
#define CRIWARE_CRIMANA_PLAYER_SETMANUALTIMERUNIT_OFFSET UNITYSDK_OFFSET(0x1A4EF6E0)
#define CRIWARE_CRIMANA_PLAYER_SETMASTERTIMERTYPE_OFFSET UNITYSDK_OFFSET(0x1A4EC340)
#define CRIWARE_CRIMANA_PLAYER_SETMAXPICTUREDATASIZE_OFFSET UNITYSDK_OFFSET(0x1A4EC810)
#define CRIWARE_CRIMANA_PLAYER_SETMINBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1A4ECA80)
#define CRIWARE_CRIMANA_PLAYER_SETMOVIEEVENTSYNCMODE_OFFSET UNITYSDK_OFFSET(0x1A4EC5A0)
#define CRIWARE_CRIMANA_PLAYER_SETSEEKPOSITION_OFFSET UNITYSDK_OFFSET(0x1A4EC470)
#define CRIWARE_CRIMANA_PLAYER_SETSHADERDISPATCHCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A4EE410)
#define CRIWARE_CRIMANA_PLAYER_SETSPEED_OFFSET UNITYSDK_OFFSET(0x1A4EC6D0)
#define CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1A4EDC10)
#define CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOTRACK_1_OFFSET UNITYSDK_OFFSET(0x1A4ECF70)
#define CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOTRACK_OFFSET UNITYSDK_OFFSET(0x1A4ECE40)
#define CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1A4ED5C0)
#define CRIWARE_CRIMANA_PLAYER_SETSUBTITLECHANNEL_OFFSET UNITYSDK_OFFSET(0x1A4EDF30)
#define CRIWARE_CRIMANA_PLAYER_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x1A4ED360)
#define CRIWARE_CRIMANA_PLAYER_SET_ADDITIVEMODE_OFFSET UNITYSDK_OFFSET(0x1A4E8780)
#define CRIWARE_CRIMANA_PLAYER_SET_APPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x1A4E87C0)
#define CRIWARE_CRIMANA_PLAYER_SET_MAXFRAMEDROP_OFFSET UNITYSDK_OFFSET(0x1A4E87A0)
#define CRIWARE_CRIMANA_PLAYER_SET_PLAYERHOLDER_OFFSET UNITYSDK_OFFSET(0x1A4E8A60)
#define CRIWARE_CRIMANA_PLAYER_SET_REQUIREDSTATUS_OFFSET UNITYSDK_OFFSET(0x1A4E8500)
#define CRIWARE_CRIMANA_PLAYER_SET_SUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4E89F0)
#define CRIWARE_CRIMANA_PLAYER_SET_SUBTITLESIZE_OFFSET UNITYSDK_OFFSET(0x1A4E8A10)
#define CRIWARE_CRIMANA_PLAYER_SET_UIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x1A4E87E0)
#define CRIWARE_CRIMANA_PLAYER_START_OFFSET UNITYSDK_OFFSET(0x1A4EAB80)
#define CRIWARE_CRIMANA_PLAYER_STOPFORSEEK_OFFSET UNITYSDK_OFFSET(0x1A4EAF20)
#define CRIWARE_CRIMANA_PLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x1A4EAD80)
#define CRIWARE_CRIMANA_PLAYER_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A4EFE70)
#define CRIWARE_CRIMANA_PLAYER_UPDATENATIVEPLAYER_OFFSET UNITYSDK_OFFSET(0x1A4EA550)
#define CRIWARE_CRIMANA_PLAYER_UPDATEWITHMANUALTIMEADVANCED_OFFSET UNITYSDK_OFFSET(0x1A4EF8F0)
#define CRIWARE_CRIMANA_PLAYER_UPDATEWITHUSERTIME_OFFSET UNITYSDK_OFFSET(0x1A4EE8E0)
#define CRIWARE_CRIMANA_PLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A4EFAE0)
#define CRIWARE_CRIMANA_PLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4F1540)
#define CRIWARE_CRIMANA_PLAYER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4E8DB0)
#define CRIWARE_CRIMANA_PLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4E8A70)
#define CRIWARE_CRIMANA_PLAYER__PAUSEFORPREPAREFORRENDERING_OFFSET UNITYSDK_OFFSET(0x1A4EAAB0)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_TypeDefinitionIndex = 36949;

	class Player : public ::CriWare::CriDisposable
	{
	public:
		static ::CriWare::CriMana::Player** StaticGet_updatingPlayer()
		{
			return (::CriWare::CriMana::Player**)Il2CppClass::FromTypeDefinitionIndex(Player_TypeDefinitionIndex)->GetStaticField(0xE140);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet__criWareWaitForGfxThreadPresent()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Player_TypeDefinitionIndex)->GetStaticField(0x4F20);
		}
		// static const ::System::Int32 InvalidPlayerId = 0xFFFFFFFF; // 0x0
		::CriWare::CriMana::Player_StatusChangeCallback* statusChangeCallback; // 0x20
		::CriWare::CriMana::Player_SubtitleChangeCallback* OnSubtitleChanged; // 0x28
		::CriWare::CriAtomExPlayer* _atomExPlayer; // 0x30
		::CriWare::CriMana::Detail::RendererResource* rendererResource; // 0x38
		::CriWare::CriAtomEx3dSource* _atomEx3Dsource; // 0x40
		::CriWare::CriMana::MovieInfo* _movieInfo; // 0x48
		::CriWare::CriMana::Player_ShaderDispatchCallback* _shaderDispatchCallback; // 0x50
		::CriWare::CriManaMoviePlayerHolder* _playerHolder_k__BackingField; // 0x58
		::CriWare::CriMana::FrameInfo* _frameInfo; // 0x60
		::CriWare::CriMana::Player_CuePointCallback* cuePointCallback; // 0x68
		::System::UInt32 droppedFrameCount; // 0x70
		::System::Boolean wasStopping; // 0x74
		::System::Boolean isFrameInfoAvailable; // 0x75
		::System::Boolean _applyTargetAlpha_k__BackingField; // 0x76
		::System::Boolean isMovieInfoAvailable; // 0x77
		::System::Int32 _maxFrameDrop_k__BackingField; // 0x78
		::System::Boolean isNativeInitialized; // 0x7C
		::System::Boolean _uiRenderMode_k__BackingField; // 0x7D
		::System::Boolean isPreparingForRendering; // 0x7E
		::System::Boolean _additiveMode_k__BackingField; // 0x7F
		::System::Int32 playerId; // 0x80
		::System::Boolean isStoppingForSeek; // 0x84
		::System::Boolean enableSubtitle; // 0x85
		::System::Boolean isDisposed; // 0x86
		::System::Boolean isNativeStartInvoked; // 0x87
		::CriWare::CriMana::Player_TimerType _timerType; // 0x88
		::CriWare::CriMana::Player_Status _nativeStatus; // 0x8C
		::System::Nullable_1<::CriWare::CriMana::Player_Status> lastPlayerStatus; // 0x90
		::CriWare::CriMana::Player_Status internalrequiredStatus; // 0x98
		::System::Int32 subtitleBufferSize; // 0x9C
		::System::Nullable_1<::CriWare::CriMana::Player_Status> lastNativeStatus; // 0xA0
		::System::Int32 _subtitleSize_k__BackingField; // 0xA8
		::System::IntPtr _subtitleBuffer_k__BackingField; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean advanced_audio_mode, ::System::Boolean ambisonics_mode, ::System::UInt32 max_path_length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__CTOR_1_OFFSET))(this, advanced_audio_mode, ambisonics_mode, max_path_length);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__CCTOR_OFFSET))();
		}

		::CriWare::CriMana::Player_Status get_requiredStatus()
		{
			return ((::CriWare::CriMana::Player_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_REQUIREDSTATUS_OFFSET))(this);
		}

		::System::Void set_requiredStatus(::CriWare::CriMana::Player_Status value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_Status))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_REQUIREDSTATUS_OFFSET))(this, value);
		}

		::System::Void add_OnSubtitleChanged(::CriWare::CriMana::Player_SubtitleChangeCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_SubtitleChangeCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ADD_ONSUBTITLECHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnSubtitleChanged(::CriWare::CriMana::Player_SubtitleChangeCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_SubtitleChangeCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_REMOVE_ONSUBTITLECHANGED_OFFSET))(this, value);
		}

		::System::Boolean get_additiveMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_ADDITIVEMODE_OFFSET))(this);
		}

		::System::Void set_additiveMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_ADDITIVEMODE_OFFSET))(this, value);
		}

		::System::Int32 get_maxFrameDrop()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_MAXFRAMEDROP_OFFSET))(this);
		}

		::System::Void set_maxFrameDrop(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_MAXFRAMEDROP_OFFSET))(this, value);
		}

		::System::Boolean get_applyTargetAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_APPLYTARGETALPHA_OFFSET))(this);
		}

		::System::Void set_applyTargetAlpha(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_APPLYTARGETALPHA_OFFSET))(this, value);
		}

		::System::Boolean get_uiRenderMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_UIRENDERMODE_OFFSET))(this);
		}

		::System::Void set_uiRenderMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_UIRENDERMODE_OFFSET))(this, value);
		}

		::System::Boolean get_isFrameAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_ISFRAMEAVAILABLE_OFFSET))(this);
		}

		::CriWare::CriMana::MovieInfo* get_movieInfo()
		{
			return ((::CriWare::CriMana::MovieInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_MOVIEINFO_OFFSET))(this);
		}

		::CriWare::CriMana::FrameInfo* get_frameInfo()
		{
			return ((::CriWare::CriMana::FrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_FRAMEINFO_OFFSET))(this);
		}

		::CriWare::CriMana::Player_Status get_status()
		{
			return ((::CriWare::CriMana::Player_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_STATUS_OFFSET))(this);
		}

		::CriWare::CriMana::Player_Status get_nativeStatus()
		{
			return ((::CriWare::CriMana::Player_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_NATIVESTATUS_OFFSET))(this);
		}

		::System::Int32 get_numberOfEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_NUMBEROFENTRIES_OFFSET))(this);
		}

		::System::IntPtr get_subtitleBuffer()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_SUBTITLEBUFFER_OFFSET))(this);
		}

		::System::Void set_subtitleBuffer(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_SUBTITLEBUFFER_OFFSET))(this, value);
		}

		::System::Int32 get_subtitleSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_SUBTITLESIZE_OFFSET))(this);
		}

		::System::Void set_subtitleSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_SUBTITLESIZE_OFFSET))(this, value);
		}

		::CriWare::CriAtomExPlayer* get_atomExPlayer()
		{
			return ((::CriWare::CriAtomExPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_ATOMEXPLAYER_OFFSET))(this);
		}

		::CriWare::CriAtomEx3dSource* get_atomEx3DsourceForAmbisonics()
		{
			return ((::CriWare::CriAtomEx3dSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_ATOMEX3DSOURCEFORAMBISONICS_OFFSET))(this);
		}

		::CriWare::CriMana::Player_TimerType get_timerType()
		{
			return ((::CriWare::CriMana::Player_TimerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_TIMERTYPE_OFFSET))(this);
		}

		::CriWare::CriManaMoviePlayerHolder* get_playerHolder()
		{
			return ((::CriWare::CriManaMoviePlayerHolder*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_PLAYERHOLDER_OFFSET))(this);
		}

		::System::Void set_playerHolder(::CriWare::CriManaMoviePlayerHolder* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriManaMoviePlayerHolder*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_PLAYERHOLDER_OFFSET))(this, value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DISPOSE_OFFSET))(this);
		}

		::System::Void CreateRendererResource(::System::Int32 width, ::System::Int32 height, ::System::Boolean alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CREATERENDERERRESOURCE_OFFSET))(this, width, height, alpha);
		}

		::System::Void DisposeRendererResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DISPOSERENDERERRESOURCE_OFFSET))(this);
		}

		::System::Void Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_PREPARE_OFFSET))(this);
		}

		::System::Void PrepareForRendering()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_PREPAREFORRENDERING_OFFSET))(this);
		}

		::System::Void _PauseForPrepareForRendering()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__PAUSEFORPREPAREFORRENDERING_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_STOP_OFFSET))(this);
		}

		::System::Void StopForSeek()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_STOPFORSEEK_OFFSET))(this);
		}

		::System::Void Pause(::System::Boolean sw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_PAUSE_OFFSET))(this, sw);
		}

		::System::Boolean IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ISPAUSED_OFFSET))(this);
		}

		::System::Boolean SetFile(::CriWare::CriFsBinder* binder, ::System::String* moviePath, ::CriWare::CriMana::Player_SetMode setMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::CriWare::CriMana::Player_SetMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETFILE_OFFSET))(this, binder, moviePath, setMode);
		}

		::System::Boolean SetData(::System::IntPtr data, ::System::Int64 dataSize, ::CriWare::CriMana::Player_SetMode setMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int64, ::CriWare::CriMana::Player_SetMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETDATA_OFFSET))(this, data, dataSize, setMode);
		}

		::System::Boolean SetData_1(::Il2CppArray<::System::Byte>* data, ::System::Int64 datasize, ::CriWare::CriMana::Player_SetMode setMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int64, ::CriWare::CriMana::Player_SetMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETDATA_1_OFFSET))(this, data, datasize, setMode);
		}

		::System::Boolean SetContentId(::CriWare::CriFsBinder* binder, ::System::Int32 contentId, ::CriWare::CriMana::Player_SetMode setMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::Int32, ::CriWare::CriMana::Player_SetMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETCONTENTID_OFFSET))(this, binder, contentId, setMode);
		}

		::System::Boolean SetFileRange(::System::String* filePath, ::System::UInt64 offset, ::System::Int64 range, ::CriWare::CriMana::Player_SetMode setMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt64, ::System::Int64, ::CriWare::CriMana::Player_SetMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETFILERANGE_OFFSET))(this, filePath, offset, range, setMode);
		}

		::System::Void Loop(::System::Boolean sw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_LOOP_OFFSET))(this, sw);
		}

		::System::Void SetMasterTimerType(::CriWare::CriMana::Player_TimerType timerType)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_TimerType))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETMASTERTIMERTYPE_OFFSET))(this, timerType);
		}

		::System::Void SetSeekPosition(::System::Int32 frameNumber)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSEEKPOSITION_OFFSET))(this, frameNumber);
		}

		::System::Void SetMovieEventSyncMode(::CriWare::CriMana::Player_MovieEventSyncMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_MovieEventSyncMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETMOVIEEVENTSYNCMODE_OFFSET))(this, mode);
		}

		::System::Void SetSpeed(::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSPEED_OFFSET))(this, speed);
		}

		::System::Void SetMaxPictureDataSize(::System::UInt32 maxDataSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETMAXPICTUREDATASIZE_OFFSET))(this, maxDataSize);
		}

		::System::Void SetBufferingTime(::System::Single sec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETBUFFERINGTIME_OFFSET))(this, sec);
		}

		::System::Void SetMinBufferSize(::System::Int32 min_buffer_size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETMINBUFFERSIZE_OFFSET))(this, min_buffer_size);
		}

		::System::Void SetAudioTrack(::System::Int32 track)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETAUDIOTRACK_OFFSET))(this, track);
		}

		::System::Void SetAudioTrack_1(::CriWare::CriMana::Player_AudioTrack track)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_AudioTrack))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETAUDIOTRACK_1_OFFSET))(this, track);
		}

		::System::Void SetSubAudioTrack(::System::Int32 track)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOTRACK_OFFSET))(this, track);
		}

		::System::Void SetSubAudioTrack_1(::CriWare::CriMana::Player_AudioTrack track)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_AudioTrack))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOTRACK_1_OFFSET))(this, track);
		}

		::System::Void SetExtraAudioTrack(::System::Int32 track)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOTRACK_OFFSET))(this, track);
		}

		::System::Void SetExtraAudioTrack_1(::CriWare::CriMana::Player_AudioTrack track)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_AudioTrack))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOTRACK_1_OFFSET))(this, track);
		}

		::System::Void SetVolume(::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETVOLUME_OFFSET))(this, volume);
		}

		::System::Single GetVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GETVOLUME_OFFSET))(this);
		}

		::System::Void SetSubAudioVolume(::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOVOLUME_OFFSET))(this, volume);
		}

		::System::Single GetSubAudioVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GETSUBAUDIOVOLUME_OFFSET))(this);
		}

		::System::Void SetExtraAudioVolume(::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOVOLUME_OFFSET))(this, volume);
		}

		::System::Single GetExtraAudioVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GETEXTRAAUDIOVOLUME_OFFSET))(this);
		}

		::System::Void SetBusSendLevel(::System::String* bus_name, ::System::Single level)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETBUSSENDLEVEL_OFFSET))(this, bus_name, level);
		}

		::System::Void SetSubAudioBusSendLevel(::System::String* bus_name, ::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOBUSSENDLEVEL_OFFSET))(this, bus_name, volume);
		}

		::System::Void SetExtraAudioBusSendLevel(::System::String* bus_name, ::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOBUSSENDLEVEL_OFFSET))(this, bus_name, volume);
		}

		::System::Void SetSubtitleChannel(::System::Int32 channel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSUBTITLECHANNEL_OFFSET))(this, channel);
		}

		::System::Void SetShaderDispatchCallback(::CriWare::CriMana::Player_ShaderDispatchCallback* shaderDispatchCallback)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_ShaderDispatchCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSHADERDISPATCHCALLBACK_OFFSET))(this, shaderDispatchCallback);
		}

		::System::Int64 GetTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GETTIME_OFFSET))(this);
		}

		::System::Int32 GetDisplayedFrameNo()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GETDISPLAYEDFRAMENO_OFFSET))(this);
		}

		::System::Boolean HasRenderedNewFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_HASRENDEREDNEWFRAME_OFFSET))(this);
		}

		::System::Void SetAsrRackId(::System::Int32 asrRackId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETASRRACKID_OFFSET))(this, asrRackId);
		}

		::System::Void SetDecryptionKey(::System::UInt64 key)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETDECRYPTIONKEY_OFFSET))(this, key);
		}

		::System::Void UpdateWithUserTime(::System::UInt64 timeCount, ::System::UInt64 timeUnit)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATEWITHUSERTIME_OFFSET))(this, timeCount, timeUnit);
		}

		::System::Void SetManualTimerUnit(::System::UInt64 timeUnitN, ::System::UInt64 timeUnitD)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETMANUALTIMERUNIT_OFFSET))(this, timeUnitN, timeUnitD);
		}

		::System::Void UpdateWithManualTimeAdvanced()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATEWITHMANUALTIMEADVANCED_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATE_OFFSET))(this);
		}

		::System::Void OnWillRenderObject(::CriWare::CriManaMovieMaterialBase* sender)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriManaMovieMaterialBase*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ONWILLRENDEROBJECT_OFFSET))(this, sender);
		}

		::System::Boolean UpdateMaterial(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATEMATERIAL_OFFSET))(this, material);
		}

		::System::Boolean get_isAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_ISALIVE_OFFSET))(this);
		}

		::System::Void IssuePluginEvent(::CriWare::CriMana::Player_CriManaUnityPlayer_RenderEventAction renderEventAction)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_CriManaUnityPlayer_RenderEventAction))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ISSUEPLUGINEVENT_OFFSET))(this, renderEventAction);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void InternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_INTERNALUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* IssuePluginUpdatesForFrames(::System::Int32 frameCount, ::UnityEngine::MonoBehaviour* playerHolder, ::System::Boolean destroy, ::System::Int32 playerId)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::UnityEngine::MonoBehaviour*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ISSUEPLUGINUPDATESFORFRAMES_OFFSET))(this, frameCount, playerHolder, destroy, playerId);
		}

		::System::Void DisableInfos(::System::Boolean keepFrameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DISABLEINFOS_OFFSET))(this, keepFrameInfo);
		}

		::System::Void PrepareNativePlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_PREPARENATIVEPLAYER_OFFSET))(this);
		}

		::System::Void UpdateNativePlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATENATIVEPLAYER_OFFSET))(this);
		}

		::System::Void InvokePlayerStatusCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_INVOKEPLAYERSTATUSCHECK_OFFSET))(this);
		}

		::System::Void AllocateSubtitleBuffer(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ALLOCATESUBTITLEBUFFER_OFFSET))(this, size);
		}

		::System::Void DeallocateSubtitleBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DEALLOCATESUBTITLEBUFFER_OFFSET))(this);
		}

		::System::Void PauseOnApplicationPause(::System::Boolean sw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_PAUSEONAPPLICATIONPAUSE_OFFSET))(this, sw);
		}

		static ::System::Void CuePointCallbackFromNative(::System::IntPtr ptr1, ::System::IntPtr ptr2, ::CriWare::CriMana::EventPoint& eventPoint)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::CriWare::CriMana::EventPoint&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVE_OFFSET))(ptr1, ptr2, eventPoint);
		}

		static ::System::Int32 CRIWAREFD186F02()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREFD186F02_OFFSET))();
		}

		static ::System::Int32 CRIWARE72A5B8BF()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE72A5B8BF_OFFSET))();
		}

		static ::System::Int32 CRIWARE95A85424(::System::Boolean useAtomExPlayer, ::System::UInt32 maxPathLength)
		{
			return ((::System::Int32(*)(::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE95A85424_OFFSET))(useAtomExPlayer, maxPathLength);
		}

		static ::System::Void CRIWAREABF659EC(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREABF659EC_OFFSET))(player_id);
		}

		static ::System::Void CRIWAREEDB46019(::System::Int32 player_id, ::System::IntPtr binder, ::System::String* path)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREEDB46019_OFFSET))(player_id, binder, path);
		}

		static ::System::Void CRIWAREB28B5D50(::System::Int32 player_id, ::System::IntPtr binder, ::System::Int32 content_id)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREB28B5D50_OFFSET))(player_id, binder, content_id);
		}

		static ::System::Void CRIWARE65553651(::System::Int32 player_id, ::System::String* path, ::System::UInt64 offset, ::System::Int64 range)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::UInt64, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE65553651_OFFSET))(player_id, path, offset, range);
		}

		static ::System::Void CRIWARE7C753A2E(::System::Int32 player_id, ::System::IntPtr data, ::System::Int64 datasize)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE7C753A2E_OFFSET))(player_id, data, datasize);
		}

		static ::System::Void CRIWARE7C753A2E_1(::System::Int32 player_id, ::Il2CppArray<::System::Byte>* data, ::System::Int64 datasize)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE7C753A2E_1_OFFSET))(player_id, data, datasize);
		}

		static ::System::Boolean CRIWARE328F2911(::System::Int32 player_id, ::System::IntPtr binder, ::System::String* path, ::System::Boolean repeat)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE328F2911_OFFSET))(player_id, binder, path, repeat);
		}

		static ::System::Boolean CRIWAREDA0693CD(::System::Int32 player_id, ::System::IntPtr binder, ::System::Int32 content_id, ::System::Boolean repeat)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREDA0693CD_OFFSET))(player_id, binder, content_id, repeat);
		}

		static ::System::Boolean CRIWARE162DD162(::System::Int32 player_id, ::System::String* path, ::System::UInt64 offset, ::System::Int64 range, ::System::Boolean repeat)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::String*, ::System::UInt64, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE162DD162_OFFSET))(player_id, path, offset, range, repeat);
		}

		static ::System::Boolean CRIWAREC35C3DC3(::System::Int32 player_id, ::System::IntPtr data, ::System::Int64 datasize, ::System::Boolean repeat)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREC35C3DC3_OFFSET))(player_id, data, datasize, repeat);
		}

		static ::System::Boolean CRIWAREC35C3DC3_1(::System::Int32 player_id, ::Il2CppArray<::System::Byte>* data, ::System::Int64 datasize, ::System::Boolean repeat)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREC35C3DC3_1_OFFSET))(player_id, data, datasize, repeat);
		}

		static ::System::Void CRIWARE66A63134(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE66A63134_OFFSET))(player_id);
		}

		static ::System::Int32 CRIWARE88D04318(::System::Int32 player_id)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE88D04318_OFFSET))(player_id);
		}

		static ::System::Void CRIWARED9F7168D(::System::Int32 player_id, ::CriWare::CriMana::Player_CuePointCallbackFromNativeDelegate* cbfunc)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriMana::Player_CuePointCallbackFromNativeDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARED9F7168D_OFFSET))(player_id, cbfunc);
		}

		static ::System::Void CRIWARE1E785A43(::System::Int32 player_id, ::CriWare::CriMana::MovieInfo* movie_info)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE1E785A43_OFFSET))(player_id, movie_info);
		}

		static ::System::Int32 CRIWARE3CE8CE6A(::System::Int32 player_id, ::System::IntPtr subtitle_buffer, ::System::UInt32& subtitle_size)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::IntPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE3CE8CE6A_OFFSET))(player_id, subtitle_buffer, subtitle_size);
		}

		static ::System::Void CRIWARE362A826C(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE362A826C_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE61523A0C(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE61523A0C_OFFSET))(player_id);
		}

		static ::System::Void CRIWAREBB898C91(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREBB898C91_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE705B8C6D(::System::Int32 player_id, ::System::Int32 seek_frame_no)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE705B8C6D_OFFSET))(player_id, seek_frame_no);
		}

		static ::System::Void CRIWAREEB32FC73(::System::Int32 player_id, ::CriWare::CriMana::Player_MovieEventSyncMode mode)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriMana::Player_MovieEventSyncMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREEB32FC73_OFFSET))(player_id, mode);
		}

		static ::System::Void CRIWARE18BFCB88(::System::Int32 player_id, ::System::Int32 sw)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE18BFCB88_OFFSET))(player_id, sw);
		}

		static ::System::Boolean CRIWAREEFA5210A(::System::Int32 player_id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREEFA5210A_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE4331E077(::System::Int32 player_id, ::System::Int32 sw)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE4331E077_OFFSET))(player_id, sw);
		}

		static ::System::Int64 CRIWARE7779586C(::System::Int32 player_id)
		{
			return ((::System::Int64(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE7779586C_OFFSET))(player_id);
		}

		static ::System::Int32 CRIWARE33981CC9(::System::Int32 player_id)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE33981CC9_OFFSET))(player_id);
		}

		static ::System::IntPtr CRIWARE165B6B70(::System::Int32 player_id)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE165B6B70_OFFSET))(player_id);
		}

		static ::System::Int32 CRIWARE7500F0DD(::System::Int32 player_id)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE7500F0DD_OFFSET))(player_id);
		}

		static ::System::Void CRIWARED99932F6(::System::Int32 player_id, ::System::Int32 track)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARED99932F6_OFFSET))(player_id, track);
		}

		static ::System::Void CRIWARE1FF2F5BE(::System::Int32 player_id, ::System::Single vol)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE1FF2F5BE_OFFSET))(player_id, vol);
		}

		static ::System::Single CRIWARED30C9C6F(::System::Int32 player_id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARED30C9C6F_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE0EA59F65(::System::Int32 player_id, ::System::Int32 track)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE0EA59F65_OFFSET))(player_id, track);
		}

		static ::System::Void CRIWARE1EBB12C5(::System::Int32 player_id, ::System::Single vol)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE1EBB12C5_OFFSET))(player_id, vol);
		}

		static ::System::Single CRIWARE966C4BA9(::System::Int32 player_id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE966C4BA9_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE213452EF(::System::Int32 player_id, ::System::Int32 track)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE213452EF_OFFSET))(player_id, track);
		}

		static ::System::Void CRIWARE0348BF1B(::System::Int32 player_id, ::System::Single vol)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE0348BF1B_OFFSET))(player_id, vol);
		}

		static ::System::Single CRIWAREC5A3A88D(::System::Int32 player_id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREC5A3A88D_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE31668293(::System::Int32 player_id, ::System::String* bus_name, ::System::Single level)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE31668293_OFFSET))(player_id, bus_name, level);
		}

		static ::System::Void CRIWAREB2460D7A(::System::Int32 player_id, ::System::String* bus_name, ::System::Single level)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREB2460D7A_OFFSET))(player_id, bus_name, level);
		}

		static ::System::Void CRIWAREF4B0CC4E(::System::Int32 player_id, ::System::String* bus_name, ::System::Single level)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREF4B0CC4E_OFFSET))(player_id, bus_name, level);
		}

		static ::System::Void CRIWARE2C8FF595(::System::Int32 player_id, ::System::Int32 channel)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE2C8FF595_OFFSET))(player_id, channel);
		}

		static ::System::Void CRIWAREAB576D15(::System::Int32 player_id, ::System::Single speed)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREAB576D15_OFFSET))(player_id, speed);
		}

		static ::System::Void CRIWARE3F9C5D06(::System::Int32 player_id, ::System::UInt32 max_data_size)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE3F9C5D06_OFFSET))(player_id, max_data_size);
		}

		static ::System::Void CRIWARE8A87737B(::System::Int32 player_id, ::System::Single sec)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE8A87737B_OFFSET))(player_id, sec);
		}

		static ::System::Void CRIWARE6756AE56(::System::Int32 player_id, ::System::Int32 min_buffer_size)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE6756AE56_OFFSET))(player_id, min_buffer_size);
		}

		static ::System::Void CRIWAREA7F6DE6B(::System::Int32 player_id, ::System::Int32 asr_rack_id)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREA7F6DE6B_OFFSET))(player_id, asr_rack_id);
		}

		static ::System::Void CRIWAREE2DF1163(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREE2DF1163_OFFSET))(player_id);
		}

		static ::System::Void CRIWAREBD24DE27(::System::Int32 player_id, ::CriWare::CriMana::Player_TimerType timer_type)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriMana::Player_TimerType))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREBD24DE27_OFFSET))(player_id, timer_type);
		}

		static ::System::Void CRIWAREC7C5CC77(::System::Int32 player_id, ::System::UInt64 user_count, ::System::UInt64 user_unit)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREC7C5CC77_OFFSET))(player_id, user_count, user_unit);
		}

		static ::System::Void CRIWAREA59E0F01(::System::Int32 player_id, ::System::UInt64 timer_unit_n, ::System::UInt64 timer_unit_d)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREA59E0F01_OFFSET))(player_id, timer_unit_n, timer_unit_d);
		}

		static ::System::Void CRIWARE55ECC3E4(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE55ECC3E4_OFFSET))(player_id);
		}

		static ::System::Void CRIWARECEA2FA98(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARECEA2FA98_OFFSET))(player_id);
		}

		static ::System::IntPtr CRIWARE27ED314F(::System::Int32 player_id, ::System::Int32 bufferSize)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE27ED314F_OFFSET))(player_id, bufferSize);
		}

		static ::System::Boolean CRIWARE725ED4B4(::System::Int32 player_id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE725ED4B4_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE419ECAF8(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE419ECAF8_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE662A91B8(::System::Int32 player_id, ::System::UInt64 key)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE662A91B8_OFFSET))(player_id, key);
		}

		static ::System::IntPtr criWareUnity_GetRenderEventFunc()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREUNITY_GETRENDEREVENTFUNC_OFFSET))();
		}
	};
}
