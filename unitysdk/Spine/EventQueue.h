#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/EventQueue_EventQueueEntry.h"
#include "unitysdk/System/Object.h"

namespace Spine { class AnimationState; }
namespace Spine { class Event; }
namespace Spine { class TrackEntry; }
namespace Spine { template <typename T> class Pool_1; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SPINE_EVENTQUEUE_ADD_ANIMATIONSCHANGED_OFFSET UNITYSDK_OFFSET(0x156BC160)
#define SPINE_EVENTQUEUE_CLEAR_OFFSET UNITYSDK_OFFSET(0x156B3130)
#define SPINE_EVENTQUEUE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x156B1840)
#define SPINE_EVENTQUEUE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156B2960)
#define SPINE_EVENTQUEUE_DRAIN_OFFSET UNITYSDK_OFFSET(0x156AE8B0)
#define SPINE_EVENTQUEUE_END_OFFSET UNITYSDK_OFFSET(0x156AE670)
#define SPINE_EVENTQUEUE_EVENT_OFFSET UNITYSDK_OFFSET(0x156B1800)
#define SPINE_EVENTQUEUE_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x156B1BC0)
#define SPINE_EVENTQUEUE_REMOVE_ANIMATIONSCHANGED_OFFSET UNITYSDK_OFFSET(0x156BC1C0)
#define SPINE_EVENTQUEUE_START_OFFSET UNITYSDK_OFFSET(0x156B1C00)
#define SPINE_EVENTQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x156ADF80)

namespace Spine
{
	inline static constexpr unsigned int EventQueue_TypeDefinitionIndex = 36394;

	class EventQueue : public ::System::Object
	{
	public:
		::Spine::Pool_1<::Spine::TrackEntry*>* trackEntryPool; // 0x10
		::Spine::AnimationState* state; // 0x18
		::System::Collections::Generic::List_1<::Spine::EventQueue_EventQueueEntry>* eventQueueEntries; // 0x20
		::System::Action* AnimationsChanged; // 0x28
		::System::Boolean drainDisabled; // 0x30

		::System::Void _ctor(::Spine::AnimationState* state, ::System::Action* HandleAnimationsChanged, ::Spine::Pool_1<::Spine::TrackEntry*>* trackEntryPool)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*, ::System::Action*, ::Spine::Pool_1<::Spine::TrackEntry*>*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE__CTOR_OFFSET))(this, state, HandleAnimationsChanged, trackEntryPool);
		}

		::System::Void add_AnimationsChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_ADD_ANIMATIONSCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_AnimationsChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_REMOVE_ANIMATIONSCHANGED_OFFSET))(this, value);
		}

		::System::Void Start(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_START_OFFSET))(this, entry);
		}

		::System::Void Interrupt(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_INTERRUPT_OFFSET))(this, entry);
		}

		::System::Void End(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_END_OFFSET))(this, entry);
		}

		::System::Void Dispose(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_DISPOSE_OFFSET))(this, entry);
		}

		::System::Void Complete(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_COMPLETE_OFFSET))(this, entry);
		}

		::System::Void Event(::Spine::TrackEntry* entry, ::Spine::Event* e)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_EVENT_OFFSET))(this, entry, e);
		}

		::System::Void Drain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_DRAIN_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_CLEAR_OFFSET))(this);
		}
	};
}
