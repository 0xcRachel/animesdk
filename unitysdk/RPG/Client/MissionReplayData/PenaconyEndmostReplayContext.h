#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PenaconyEndmostChronicleContext; }
namespace RPG::Client::MissionReplayData { class IMissionReplayData; }

#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_AUTOSHOW_OFFSET UNITYSDK_OFFSET(0x97561C0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0x9755EF0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GETCHAPTERID_OFFSET UNITYSDK_OFFSET(0x9756010)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GETMISSIONID_OFFSET UNITYSDK_OFFSET(0x97560A0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GETRECORDPAGEID_OFFSET UNITYSDK_OFFSET(0x9756480)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GET_CURINDEX_OFFSET UNITYSDK_OFFSET(0x9756590)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GET_REPLAYDATA_OFFSET UNITYSDK_OFFSET(0x97565B0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_SETPENACONYENDMOSTCHRONICLECONTEXT_OFFSET UNITYSDK_OFFSET(0x9756430)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_SETREPLAYDATA_OFFSET UNITYSDK_OFFSET(0x9756170)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_SET_CURINDEX_OFFSET UNITYSDK_OFFSET(0x97565A0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_SET_REPLAYDATA_OFFSET UNITYSDK_OFFSET(0x97565C0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9756000)

namespace RPG::Client::MissionReplayData
{
	inline static constexpr unsigned int PenaconyEndmostReplayContext_TypeDefinitionIndex = 59658;

	class PenaconyEndmostReplayContext : public ::System::Object
	{
	public:
		::RPG::Client::MissionReplayData::IMissionReplayData* _ReplayData_k__BackingField; // 0x10
		::RPG::Client::PenaconyEndmostChronicleContext* _EndmostChronicleContext; // 0x18
		::System::Boolean _IsFromMissionChronicle; // 0x20
		::System::UInt32 _PathID; // 0x24
		::System::Int32 _CurIndex_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MissionReplayData::PenaconyEndmostReplayContext* Create()
		{
			return ((::RPG::Client::MissionReplayData::PenaconyEndmostReplayContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_CREATE_OFFSET))();
		}

		::System::UInt32 GetChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GETCHAPTERID_OFFSET))(this);
		}

		::System::UInt32 GetMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GETMISSIONID_OFFSET))(this);
		}

		::System::Void SetReplayData(::RPG::Client::MissionReplayData::IMissionReplayData* replayData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_SETREPLAYDATA_OFFSET))(this, replayData);
		}

		::System::Void AutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_AUTOSHOW_OFFSET))(this);
		}

		::System::Void SetPenaconyEndmostChronicleContext(::RPG::Client::PenaconyEndmostChronicleContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PenaconyEndmostChronicleContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_SETPENACONYENDMOSTCHRONICLECONTEXT_OFFSET))(this, context);
		}

		::System::UInt32 GetRecordPageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GETRECORDPAGEID_OFFSET))(this);
		}

		::System::Int32 get_CurIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GET_CURINDEX_OFFSET))(this);
		}

		::System::Void set_CurIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_SET_CURINDEX_OFFSET))(this, value);
		}

		::RPG::Client::MissionReplayData::IMissionReplayData* get_ReplayData()
		{
			return ((::RPG::Client::MissionReplayData::IMissionReplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GET_REPLAYDATA_OFFSET))(this);
		}

		::System::Void set_ReplayData(::RPG::Client::MissionReplayData::IMissionReplayData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_SET_REPLAYDATA_OFFSET))(this, value);
		}
	};
}
