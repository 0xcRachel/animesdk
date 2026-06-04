#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/BaseEmoTimelineTrackV2.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2_GET_DEFAULTCLIP_OFFSET UNITYSDK_OFFSET(0x199D19D0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x199D1AA0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2_GET_TRACKTYPE_OFFSET UNITYSDK_OFFSET(0x199D19C0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2_METHOD_8_2EF969CA271C0A1B_OFFSET UNITYSDK_OFFSET(0x199D1A30)
#define RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2_METHOD_8_BB08A9D2DE9BCA34_OFFSET UNITYSDK_OFFSET(0x199D1E80)
#define RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x199D1B30)
#define RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2__CCTOR_OFFSET UNITYSDK_OFFSET(0x199D1DF0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2__CTOR_OFFSET UNITYSDK_OFFSET(0x199D1D00)
#define RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2___IFIXBASEPROXY_GET_DEFAULTCLIP_OFFSET UNITYSDK_OFFSET(0x199D1E40)
#define RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2___IFIXBASEPROXY_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x199D1ED0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2___IFIXBASEPROXY_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x199D1F10)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoEyeTimelineTrackV2_TypeDefinitionIndex = 46037;

	class EmoEyeTimelineTrackV2 : public ::RPGTools::Timeline::Emotion::BaseEmoTimelineTrackV2
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_k_Positions()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EmoEyeTimelineTrackV2_TypeDefinitionIndex)->GetStaticField(0xA2C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2__CCTOR_OFFSET))();
		}

		::RPGTools::Timeline::Emotion::EmoTrackType get_TrackType()
		{
			return ((::RPGTools::Timeline::Emotion::EmoTrackType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2_GET_TRACKTYPE_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* get_DefaultClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2_GET_DEFAULTCLIP_OFFSET))(this);
		}

		::UnityEngine::AvatarMask* Method_8_2EF969CA271C0A1B(::System::Int32 a1)
		{
			return ((::UnityEngine::AvatarMask*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2_METHOD_8_2EF969CA271C0A1B_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_Positions()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2_GET_POSITIONS_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2_ONCREATECLIP_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationClip* __iFixBaseProxy_get_DefaultClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2___IFIXBASEPROXY_GET_DEFAULTCLIP_OFFSET))(this);
		}

		::UnityEngine::AvatarMask* Method_8_BB08A9D2DE9BCA34(::System::Int32 a1)
		{
			return ((::UnityEngine::AvatarMask*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2_METHOD_8_BB08A9D2DE9BCA34_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* __iFixBaseProxy_get_Positions()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2___IFIXBASEPROXY_GET_POSITIONS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOEYETIMELINETRACKV2___IFIXBASEPROXY_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}
