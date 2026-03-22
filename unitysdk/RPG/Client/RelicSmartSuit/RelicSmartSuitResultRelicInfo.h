#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicItemData; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x9D9F4B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x9DA6860)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_GET_HITCOUNT_OFFSET UNITYSDK_OFFSET(0x9DA6840)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_GET_ISMAINPROPERTYMATCH_OFFSET UNITYSDK_OFFSET(0x9DA6820)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_GET_RELICITEMDATA_OFFSET UNITYSDK_OFFSET(0x9DA67E0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x9DA6800)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_SET_HITCOUNT_OFFSET UNITYSDK_OFFSET(0x9DA6850)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_SET_ISMAINPROPERTYMATCH_OFFSET UNITYSDK_OFFSET(0x9DA6830)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_SET_RELICITEMDATA_OFFSET UNITYSDK_OFFSET(0x9DA67F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x9DA6810)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9DA6900)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitResultRelicInfo_TypeDefinitionIndex = 59420;

	class RelicSmartSuitResultRelicInfo : public ::System::Object
	{
	public:
		::RPG::Client::RelicItemData* _RelicItemData_k__BackingField; // 0x10
		::System::UInt32 _HitCount_k__BackingField; // 0x18
		::System::Single _Score_k__BackingField; // 0x1C
		::System::Boolean _IsMainPropertyMatch_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::RelicItemData* relicData, ::System::Single score)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO__CTOR_OFFSET))(this, relicData, score);
		}

		::RPG::Client::RelicItemData* get_RelicItemData()
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_GET_RELICITEMDATA_OFFSET))(this);
		}

		::System::Void set_RelicItemData(::RPG::Client::RelicItemData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_SET_RELICITEMDATA_OFFSET))(this, value);
		}

		::System::Single get_Score()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_SET_SCORE_OFFSET))(this, value);
		}

		::System::Boolean get_IsMainPropertyMatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_GET_ISMAINPROPERTYMATCH_OFFSET))(this);
		}

		::System::Void set_IsMainPropertyMatch(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_SET_ISMAINPROPERTYMATCH_OFFSET))(this, value);
		}

		::System::UInt32 get_HitCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_GET_HITCOUNT_OFFSET))(this);
		}

		::System::Void set_HitCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_SET_HITCOUNT_OFFSET))(this, value);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* Create(::RPG::Client::RelicItemData* relicData, ::System::Single score)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*(*)(::RPG::Client::RelicItemData*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_CREATE_OFFSET))(relicData, score);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* Clone()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITRESULTRELICINFO_CLONE_OFFSET))(this);
		}
	};
}
