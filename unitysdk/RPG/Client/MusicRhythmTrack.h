#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MusicRhythmTrackRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSICRHYTHMTRACK_CREATE_OFFSET UNITYSDK_OFFSET(0x15F2A5D0)
#define RPG_CLIENT_MUSICRHYTHMTRACK_GET_EMPTYGRIDLIST_OFFSET UNITYSDK_OFFSET(0x15F2A690)
#define RPG_CLIENT_MUSICRHYTHMTRACK_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x15F2A7C0)
#define RPG_CLIENT_MUSICRHYTHMTRACK_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x15F2A860)
#define RPG_CLIENT_MUSICRHYTHMTRACK_GET_ID_OFFSET UNITYSDK_OFFSET(0x15F2A780)
#define RPG_CLIENT_MUSICRHYTHMTRACK_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x15F2A7A0)
#define RPG_CLIENT_MUSICRHYTHMTRACK_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x15F2A7E0)
#define RPG_CLIENT_MUSICRHYTHMTRACK_GET_ROW_OFFSET UNITYSDK_OFFSET(0x15F2A800)
#define RPG_CLIENT_MUSICRHYTHMTRACK_GET_TRACKNAME_OFFSET UNITYSDK_OFFSET(0x15F2A940)
#define RPG_CLIENT_MUSICRHYTHMTRACK_GET_UNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x15F2A8D0)
#define RPG_CLIENT_MUSICRHYTHMTRACK_ISGRIDEMPTY_OFFSET UNITYSDK_OFFSET(0x15F28000)
#define RPG_CLIENT_MUSICRHYTHMTRACK_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x15F2A7D0)
#define RPG_CLIENT_MUSICRHYTHMTRACK_SET_ID_OFFSET UNITYSDK_OFFSET(0x15F2A790)
#define RPG_CLIENT_MUSICRHYTHMTRACK_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x15F2A7B0)
#define RPG_CLIENT_MUSICRHYTHMTRACK_SET_PHASEID_OFFSET UNITYSDK_OFFSET(0x15F2A7F0)
#define RPG_CLIENT_MUSICRHYTHMTRACK_UNLOCK_OFFSET UNITYSDK_OFFSET(0x15F2A650)
#define RPG_CLIENT_MUSICRHYTHMTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2A640)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmTrack_TypeDefinitionIndex = 57029;

	class MusicRhythmTrack : public ::System::Object
	{
	public:
		::System::UInt32 _PhaseID_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x14
		::System::Boolean _IsLocked_k__BackingField; // 0x18
		::System::UInt32 _GroupID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMTRACK__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MusicRhythmTrack* Create(::System::UInt32 trackID, ::System::UInt32 groupID, ::System::UInt32 phaseID)
		{
			return ((::RPG::Client::MusicRhythmTrack*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMTRACK_CREATE_OFFSET))(trackID, groupID, phaseID);
		}

		::System::Void Unlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMTRACK_UNLOCK_OFFSET))(this);
		}

		::System::Boolean IsGridEmpty(::System::UInt32 gridID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMTRACK_ISGRIDEMPTY_OFFSET))(this, gridID);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMTRACK_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMTRACK_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMTRACK_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Void set_IsLocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMTRACK_SET_ISLOCKED_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMTRACK_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMTRACK_SET_GROUPID_OFFSET))(this, value);
		}

		::System::UInt32 get_PhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMTRACK_GET_PHASEID_OFFSET))(this);
		}

		::System::Void set_PhaseID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMTRACK_SET_PHASEID_OFFSET))(this, value);
		}

		::RPG::GameCore::MusicRhythmTrackRow* get_Row()
		{
			return ((::RPG::GameCore::MusicRhythmTrackRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMTRACK_GET_ROW_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMTRACK_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_UnlockSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMTRACK_GET_UNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::RPG::Client::TextID get_TrackName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMTRACK_GET_TRACKNAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EmptyGridList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMTRACK_GET_EMPTYGRIDLIST_OFFSET))(this);
		}
	};
}
