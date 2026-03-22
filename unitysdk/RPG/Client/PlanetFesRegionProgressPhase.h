#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlanetFesRegionPhaseRow; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_BUFFDESC_OFFSET UNITYSDK_OFFSET(0x9AFF620)
#define RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x9AFF540)
#define RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_DESCTEXTID_OFFSET UNITYSDK_OFFSET(0x9AFF5F0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0x9AFF420)
#define RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_ID_OFFSET UNITYSDK_OFFSET(0x9AEFB60)
#define RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9AFF560)
#define RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_ISREWARDGOT_OFFSET UNITYSDK_OFFSET(0x9AFF580)
#define RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x9AFF5C0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_PICTURE_OFFSET UNITYSDK_OFFSET(0x9AFF5A0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_PROGRESSPERMILLAGE_OFFSET UNITYSDK_OFFSET(0x9AFF280)
#define RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x9AFF650)
#define RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x9AFEA80)
#define RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_SETCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9AFF2A0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_SETREWARDGOT_OFFSET UNITYSDK_OFFSET(0x9AFF2F0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_SET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9AFF570)
#define RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_SET_ISREWARDGOT_OFFSET UNITYSDK_OFFSET(0x9AFF590)
#define RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9AFEB30)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesRegionProgressPhase_TypeDefinitionIndex = 53085;

	class PlanetFesRegionProgressPhase : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesRegionPhaseRow* _Row; // 0x10
		::System::Boolean _IsCompleted_k__BackingField; // 0x18
		::System::Boolean _IsRewardGot_k__BackingField; // 0x19

		::System::Void _ctor(::RPG::GameCore::PlanetFesRegionPhaseRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesRegionPhaseRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE__CTOR_OFFSET))(this, row);
		}

		::System::Void SetCompleted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_SETCOMPLETED_OFFSET))(this, value);
		}

		::System::Void SetRewardGot(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_SETREWARDGOT_OFFSET))(this, value);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void set_IsCompleted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_SET_ISCOMPLETED_OFFSET))(this, value);
		}

		::System::Boolean get_IsRewardGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_ISREWARDGOT_OFFSET))(this);
		}

		::System::Void set_IsRewardGot(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_SET_ISREWARDGOT_OFFSET))(this, value);
		}

		::System::String* get_Picture()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_PICTURE_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_NAMETEXTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_DescTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_DESCTEXTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_BuffDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_BUFFDESC_OFFSET))(this);
		}

		::System::UInt32 get_ProgressPermillage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_PROGRESSPERMILLAGE_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_BUFFID_OFFSET))(this);
		}

		::System::Boolean get_HasReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_HASREWARD_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_REWARDID_OFFSET))(this);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESSPHASE_GET_PROGRESS_OFFSET))(this);
		}
	};
}
