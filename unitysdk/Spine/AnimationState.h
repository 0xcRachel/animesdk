#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Animation; }
namespace Spine { class AnimationStateData; }
namespace Spine { class AnimationState_TrackEntryDelegate; }
namespace Spine { class AnimationState_TrackEntryEventDelegate; }
namespace Spine { class AttachmentTimeline; }
namespace Spine { class Event; }
namespace Spine { class EventQueue; }
namespace Spine { class RotateTimeline; }
namespace Spine { class Skeleton; }
namespace Spine { class Slot; }
namespace Spine { class TrackEntry; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace Spine { template <typename T> class Pool_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define SPINE_ANIMATIONSTATE_ADDANIMATION_1_OFFSET UNITYSDK_OFFSET(0x183A8290)
#define SPINE_ANIMATIONSTATE_ADDANIMATION_OFFSET UNITYSDK_OFFSET(0x183A81D0)
#define SPINE_ANIMATIONSTATE_ADDEMPTYANIMATION_OFFSET UNITYSDK_OFFSET(0x183A85A0)
#define SPINE_ANIMATIONSTATE_ADDEVENTSUBSCRIBERSFROM_OFFSET UNITYSDK_OFFSET(0x183A3B00)
#define SPINE_ANIMATIONSTATE_ADD_COMPLETE_OFFSET UNITYSDK_OFFSET(0x183A3940)
#define SPINE_ANIMATIONSTATE_ADD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183A3880)
#define SPINE_ANIMATIONSTATE_ADD_END_OFFSET UNITYSDK_OFFSET(0x183A37C0)
#define SPINE_ANIMATIONSTATE_ADD_EVENT_OFFSET UNITYSDK_OFFSET(0x183A3A00)
#define SPINE_ANIMATIONSTATE_ADD_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x183A3700)
#define SPINE_ANIMATIONSTATE_ADD_START_OFFSET UNITYSDK_OFFSET(0x183A3640)
#define SPINE_ANIMATIONSTATE_ANIMATIONSCHANGED_OFFSET UNITYSDK_OFFSET(0x183A5480)
#define SPINE_ANIMATIONSTATE_APPLYATTACHMENTTIMELINE_OFFSET UNITYSDK_OFFSET(0x183A5E90)
#define SPINE_ANIMATIONSTATE_APPLYEVENTTIMELINESONLY_OFFSET UNITYSDK_OFFSET(0x183A6BE0)
#define SPINE_ANIMATIONSTATE_APPLYMIXINGFROMEVENTTIMELINESONLY_OFFSET UNITYSDK_OFFSET(0x183A7080)
#define SPINE_ANIMATIONSTATE_APPLYMIXINGFROM_OFFSET UNITYSDK_OFFSET(0x183A55A0)
#define SPINE_ANIMATIONSTATE_APPLYROTATETIMELINE_OFFSET UNITYSDK_OFFSET(0x183A6020)
#define SPINE_ANIMATIONSTATE_APPLY_OFFSET UNITYSDK_OFFSET(0x183A4AB0)
#define SPINE_ANIMATIONSTATE_ASSIGNEVENTSUBSCRIBERSFROM_OFFSET UNITYSDK_OFFSET(0x183A3AC0)
#define SPINE_ANIMATIONSTATE_CLEARLISTENERNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x183A8F50)
#define SPINE_ANIMATIONSTATE_CLEARNEXT_OFFSET UNITYSDK_OFFSET(0x183A4610)
#define SPINE_ANIMATIONSTATE_CLEARTRACKS_OFFSET UNITYSDK_OFFSET(0x183A77C0)
#define SPINE_ANIMATIONSTATE_CLEARTRACK_OFFSET UNITYSDK_OFFSET(0x183A7860)
#define SPINE_ANIMATIONSTATE_COMPUTEHOLD_OFFSET UNITYSDK_OFFSET(0x183A88D0)
#define SPINE_ANIMATIONSTATE_EXPANDTOINDEX_OFFSET UNITYSDK_OFFSET(0x183A7AA0)
#define SPINE_ANIMATIONSTATE_GETCURRENT_OFFSET UNITYSDK_OFFSET(0x183A8F00)
#define SPINE_ANIMATIONSTATE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x183A9000)
#define SPINE_ANIMATIONSTATE_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x183A8FE0)
#define SPINE_ANIMATIONSTATE_GET_TRACKS_OFFSET UNITYSDK_OFFSET(0x183A9090)
#define SPINE_ANIMATIONSTATE_NEWTRACKENTRY_OFFSET UNITYSDK_OFFSET(0x183A8090)
#define SPINE_ANIMATIONSTATE_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x183A30A0)
#define SPINE_ANIMATIONSTATE_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x183A3090)
#define SPINE_ANIMATIONSTATE_ONEND_OFFSET UNITYSDK_OFFSET(0x183A3080)
#define SPINE_ANIMATIONSTATE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x183A30B0)
#define SPINE_ANIMATIONSTATE_ONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x183A3070)
#define SPINE_ANIMATIONSTATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x183A2B10)
#define SPINE_ANIMATIONSTATE_QUEUEEVENTS_OFFSET UNITYSDK_OFFSET(0x183A65A0)
#define SPINE_ANIMATIONSTATE_REMOVE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x183A39A0)
#define SPINE_ANIMATIONSTATE_REMOVE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183A38E0)
#define SPINE_ANIMATIONSTATE_REMOVE_END_OFFSET UNITYSDK_OFFSET(0x183A3820)
#define SPINE_ANIMATIONSTATE_REMOVE_EVENT_OFFSET UNITYSDK_OFFSET(0x183A3A60)
#define SPINE_ANIMATIONSTATE_REMOVE_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x183A3760)
#define SPINE_ANIMATIONSTATE_REMOVE_START_OFFSET UNITYSDK_OFFSET(0x183A36A0)
#define SPINE_ANIMATIONSTATE_SETANIMATION_1_OFFSET UNITYSDK_OFFSET(0x183A7D50)
#define SPINE_ANIMATIONSTATE_SETANIMATION_OFFSET UNITYSDK_OFFSET(0x183A7BA0)
#define SPINE_ANIMATIONSTATE_SETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x183A7360)
#define SPINE_ANIMATIONSTATE_SETCURRENT_OFFSET UNITYSDK_OFFSET(0x183A4330)
#define SPINE_ANIMATIONSTATE_SETEMPTYANIMATIONS_OFFSET UNITYSDK_OFFSET(0x183A8640)
#define SPINE_ANIMATIONSTATE_SETEMPTYANIMATION_OFFSET UNITYSDK_OFFSET(0x183A8530)
#define SPINE_ANIMATIONSTATE_SET_DATA_OFFSET UNITYSDK_OFFSET(0x183A9010)
#define SPINE_ANIMATIONSTATE_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x183A8FF0)
#define SPINE_ANIMATIONSTATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x183A90A0)
#define SPINE_ANIMATIONSTATE_UPDATEMIXINGFROM_OFFSET UNITYSDK_OFFSET(0x183A46A0)
#define SPINE_ANIMATIONSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x183A3F80)
#define SPINE_ANIMATIONSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x183A9210)
#define SPINE_ANIMATIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x183A3CF0)
#define SPINE_ANIMATIONSTATE___CTOR_B__45_0_OFFSET UNITYSDK_OFFSET(0x183A92B0)

namespace Spine
{
	inline static constexpr unsigned int AnimationState_TypeDefinitionIndex = 30670;

	class AnimationState : public ::System::Object
	{
	public:
		static ::Spine::Animation** StaticGet_EmptyAnimation()
		{
			return (::Spine::Animation**)Il2CppClass::FromTypeDefinitionIndex(AnimationState_TypeDefinitionIndex)->GetStaticField(0xB30);
		}
		// static const ::System::Int32 Subsequent = 0x0; // 0x0
		// static const ::System::Int32 First = 0x1; // 0x0
		// static const ::System::Int32 HoldSubsequent = 0x2; // 0x0
		// static const ::System::Int32 HoldFirst = 0x3; // 0x0
		// static const ::System::Int32 HoldMix = 0x4; // 0x0
		// static const ::System::Int32 Setup = 0x1; // 0x0
		// static const ::System::Int32 Current = 0x2; // 0x0
		::Spine::AnimationState_TrackEntryEventDelegate* Event; // 0x10
		::Spine::AnimationState_TrackEntryDelegate* Start; // 0x18
		::System::Collections::Generic::HashSet_1<::System::String*>* propertyIds; // 0x20
		::Spine::AnimationState_TrackEntryDelegate* Interrupt; // 0x28
		::Spine::AnimationState_TrackEntryDelegate* Dispose; // 0x30
		::Spine::Pool_1<::Spine::TrackEntry*>* trackEntryPool; // 0x38
		::Spine::EventQueue* queue; // 0x40
		::Spine::AnimationState_TrackEntryDelegate* End; // 0x48
		::Spine::ExposedList_1<::Spine::TrackEntry*>* tracks; // 0x50
		::Spine::ExposedList_1<::Spine::Event*>* events; // 0x58
		::Spine::AnimationStateData* data; // 0x60
		::Spine::AnimationState_TrackEntryDelegate* Complete; // 0x68
		::System::Boolean animationsChanged; // 0x70
		::System::Single timeScale; // 0x74
		::System::Int32 unkeyedState; // 0x78

		::System::Void _ctor(::Spine::AnimationStateData* data)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationStateData*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE__CTOR_OFFSET))(this, data);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE__CCTOR_OFFSET))();
		}

		::System::Void OnStart(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONSTART_OFFSET))(this, entry);
		}

		::System::Void OnInterrupt(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONINTERRUPT_OFFSET))(this, entry);
		}

		::System::Void OnEnd(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONEND_OFFSET))(this, entry);
		}

		::System::Void OnDispose(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONDISPOSE_OFFSET))(this, entry);
		}

		::System::Void OnComplete(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONCOMPLETE_OFFSET))(this, entry);
		}

		::System::Void OnEvent(::Spine::TrackEntry* entry, ::Spine::Event* e)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONEVENT_OFFSET))(this, entry, e);
		}

		::System::Void add_Start(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_START_OFFSET))(this, value);
		}

		::System::Void remove_Start(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_START_OFFSET))(this, value);
		}

		::System::Void add_Interrupt(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_INTERRUPT_OFFSET))(this, value);
		}

		::System::Void remove_Interrupt(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_INTERRUPT_OFFSET))(this, value);
		}

		::System::Void add_End(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_END_OFFSET))(this, value);
		}

		::System::Void remove_End(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_END_OFFSET))(this, value);
		}

		::System::Void add_Dispose(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_DISPOSE_OFFSET))(this, value);
		}

		::System::Void remove_Dispose(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_DISPOSE_OFFSET))(this, value);
		}

		::System::Void add_Complete(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_COMPLETE_OFFSET))(this, value);
		}

		::System::Void remove_Complete(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_COMPLETE_OFFSET))(this, value);
		}

		::System::Void add_Event(::Spine::AnimationState_TrackEntryEventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryEventDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_EVENT_OFFSET))(this, value);
		}

		::System::Void remove_Event(::Spine::AnimationState_TrackEntryEventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryEventDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_EVENT_OFFSET))(this, value);
		}

		::System::Void AssignEventSubscribersFrom(::Spine::AnimationState* src)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ASSIGNEVENTSUBSCRIBERSFROM_OFFSET))(this, src);
		}

		::System::Void AddEventSubscribersFrom(::Spine::AnimationState* src)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADDEVENTSUBSCRIBERSFROM_OFFSET))(this, src);
		}

		::System::Void Update(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_UPDATE_OFFSET))(this, delta);
		}

		::System::Boolean UpdateMixingFrom(::Spine::TrackEntry* to, ::System::Single delta)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::TrackEntry*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_UPDATEMIXINGFROM_OFFSET))(this, to, delta);
		}

		::System::Boolean Apply(::Spine::Skeleton* skeleton)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLY_OFFSET))(this, skeleton);
		}

		::System::Boolean ApplyEventTimelinesOnly(::Spine::Skeleton* skeleton, ::System::Boolean issueEvents)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Skeleton*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYEVENTTIMELINESONLY_OFFSET))(this, skeleton, issueEvents);
		}

		::System::Single ApplyMixingFrom(::Spine::TrackEntry* to, ::Spine::Skeleton* skeleton, ::Spine::MixBlend blend)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Skeleton*, ::Spine::MixBlend))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYMIXINGFROM_OFFSET))(this, to, skeleton, blend);
		}

		::System::Single ApplyMixingFromEventTimelinesOnly(::Spine::TrackEntry* to, ::Spine::Skeleton* skeleton, ::System::Boolean issueEvents)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Skeleton*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYMIXINGFROMEVENTTIMELINESONLY_OFFSET))(this, to, skeleton, issueEvents);
		}

		::System::Void ApplyAttachmentTimeline(::Spine::AttachmentTimeline* timeline, ::Spine::Skeleton* skeleton, ::System::Single time, ::Spine::MixBlend blend, ::System::Boolean attachments)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AttachmentTimeline*, ::Spine::Skeleton*, ::System::Single, ::Spine::MixBlend, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYATTACHMENTTIMELINE_OFFSET))(this, timeline, skeleton, time, blend, attachments);
		}

		::System::Void SetAttachment(::Spine::Skeleton* skeleton, ::Spine::Slot* slot, ::System::String* attachmentName, ::System::Boolean attachments)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::Spine::Slot*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETATTACHMENT_OFFSET))(this, skeleton, slot, attachmentName, attachments);
		}

		static ::System::Void ApplyRotateTimeline(::Spine::RotateTimeline* timeline, ::Spine::Skeleton* skeleton, ::System::Single time, ::System::Single alpha, ::Spine::MixBlend blend, ::Il2CppArray<::System::Single>* timelinesRotation, ::System::Int32 i, ::System::Boolean firstFrame)
		{
			return ((::System::Void(*)(::Spine::RotateTimeline*, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::MixBlend, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYROTATETIMELINE_OFFSET))(timeline, skeleton, time, alpha, blend, timelinesRotation, i, firstFrame);
		}

		::System::Void QueueEvents(::Spine::TrackEntry* entry, ::System::Single animationTime)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_QUEUEEVENTS_OFFSET))(this, entry, animationTime);
		}

		::System::Void ClearTracks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_CLEARTRACKS_OFFSET))(this);
		}

		::System::Void ClearTrack(::System::Int32 trackIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_CLEARTRACK_OFFSET))(this, trackIndex);
		}

		::System::Void SetCurrent(::System::Int32 index, ::Spine::TrackEntry* current, ::System::Boolean interrupt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Spine::TrackEntry*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETCURRENT_OFFSET))(this, index, current, interrupt);
		}

		::Spine::TrackEntry* SetAnimation(::System::Int32 trackIndex, ::System::String* animationName, ::System::Boolean loop)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETANIMATION_OFFSET))(this, trackIndex, animationName, loop);
		}

		::Spine::TrackEntry* SetAnimation_1(::System::Int32 trackIndex, ::Spine::Animation* animation, ::System::Boolean loop)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::Spine::Animation*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETANIMATION_1_OFFSET))(this, trackIndex, animation, loop);
		}

		::Spine::TrackEntry* AddAnimation(::System::Int32 trackIndex, ::System::String* animationName, ::System::Boolean loop, ::System::Single delay)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADDANIMATION_OFFSET))(this, trackIndex, animationName, loop, delay);
		}

		::Spine::TrackEntry* AddAnimation_1(::System::Int32 trackIndex, ::Spine::Animation* animation, ::System::Boolean loop, ::System::Single delay)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::Spine::Animation*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADDANIMATION_1_OFFSET))(this, trackIndex, animation, loop, delay);
		}

		::Spine::TrackEntry* SetEmptyAnimation(::System::Int32 trackIndex, ::System::Single mixDuration)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETEMPTYANIMATION_OFFSET))(this, trackIndex, mixDuration);
		}

		::Spine::TrackEntry* AddEmptyAnimation(::System::Int32 trackIndex, ::System::Single mixDuration, ::System::Single delay)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADDEMPTYANIMATION_OFFSET))(this, trackIndex, mixDuration, delay);
		}

		::System::Void SetEmptyAnimations(::System::Single mixDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETEMPTYANIMATIONS_OFFSET))(this, mixDuration);
		}

		::Spine::TrackEntry* ExpandToIndex(::System::Int32 index)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_EXPANDTOINDEX_OFFSET))(this, index);
		}

		::Spine::TrackEntry* NewTrackEntry(::System::Int32 trackIndex, ::Spine::Animation* animation, ::System::Boolean loop, ::Spine::TrackEntry* last)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::Spine::Animation*, ::System::Boolean, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_NEWTRACKENTRY_OFFSET))(this, trackIndex, animation, loop, last);
		}

		::System::Void ClearNext(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_CLEARNEXT_OFFSET))(this, entry);
		}

		::System::Void AnimationsChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ANIMATIONSCHANGED_OFFSET))(this);
		}

		::System::Void ComputeHold(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_COMPUTEHOLD_OFFSET))(this, entry);
		}

		::Spine::TrackEntry* GetCurrent(::System::Int32 trackIndex)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_GETCURRENT_OFFSET))(this, trackIndex);
		}

		::System::Void ClearListenerNotifications()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_CLEARLISTENERNOTIFICATIONS_OFFSET))(this);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_TimeScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SET_TIMESCALE_OFFSET))(this, value);
		}

		::Spine::AnimationStateData* get_Data()
		{
			return ((::Spine::AnimationStateData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::Spine::AnimationStateData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationStateData*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SET_DATA_OFFSET))(this, value);
		}

		::Spine::ExposedList_1<::Spine::TrackEntry*>* get_Tracks()
		{
			return ((::Spine::ExposedList_1<::Spine::TrackEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_GET_TRACKS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TOSTRING_OFFSET))(this);
		}

		::System::Void __ctor_b__45_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE___CTOR_B__45_0_OFFSET))(this);
		}
	};
}
