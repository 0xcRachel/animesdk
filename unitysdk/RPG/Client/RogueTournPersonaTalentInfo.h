#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E2E44FDCCFF6FA83_24;
namespace RPG::Client { class RogueTournPersonaTalentGroupData; }
namespace RPG::Client { class RogueTournPersonaTalentNodeData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_CANUNLOCKNEXTTALENT_OFFSET UNITYSDK_OFFSET(0xA3D6F60)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3D6200)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETALLTALENTGROUPS_OFFSET UNITYSDK_OFFSET(0xA3D69C0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETLATESTUNLOCKTALENT_OFFSET UNITYSDK_OFFSET(0xA3D6CF0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETNEXTUNLOCKTALENT_OFFSET UNITYSDK_OFFSET(0xA3D6BD0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETTALENTGROUP_OFFSET UNITYSDK_OFFSET(0xA3D6A00)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETTALENTSOFGROUP_OFFSET UNITYSDK_OFFSET(0xA3D6AF0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETTALENTUNLOCKEDPROGRESSINFO_OFFSET UNITYSDK_OFFSET(0xA3D6E20)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA3D5730)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA3D6380)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA3D5600)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO__GENERATEORDEREDTALENTLIST_OFFSET UNITYSDK_OFFSET(0xA3D5F70)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaTalentInfo_TypeDefinitionIndex = 55266;

	class RogueTournPersonaTalentInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentNodeData*>*>* _GroupID2TalentNodes; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentGroupData*>* _TalentGroups; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournPersonaTalentNodeData*>* _TalentID2TalentNode; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentNodeData*>* _OrderedTalentNodes; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_E2E44FDCCFF6FA83_24* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E2E44FDCCFF6FA83_24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_SYNC_OFFSET))(this, proto);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentGroupData*>* GetAllTalentGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETALLTALENTGROUPS_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaTalentGroupData* GetTalentGroup(::System::UInt32 groupID)
		{
			return ((::RPG::Client::RogueTournPersonaTalentGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETTALENTGROUP_OFFSET))(this, groupID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentNodeData*>* GetTalentsOfGroup(::System::UInt32 groupID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentNodeData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETTALENTSOFGROUP_OFFSET))(this, groupID);
		}

		::RPG::Client::RogueTournPersonaTalentNodeData* GetNextUnlockTalent()
		{
			return ((::RPG::Client::RogueTournPersonaTalentNodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETNEXTUNLOCKTALENT_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaTalentNodeData* GetLatestUnlockTalent()
		{
			return ((::RPG::Client::RogueTournPersonaTalentNodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETLATESTUNLOCKTALENT_OFFSET))(this);
		}

		::System::Void GetTalentUnlockedProgressInfo(::System::UInt32& unlockedCnt, ::System::UInt32& totalCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETTALENTUNLOCKEDPROGRESSINFO_OFFSET))(this, unlockedCnt, totalCnt);
		}

		::System::Boolean CanUnlockNextTalent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_CANUNLOCKNEXTTALENT_OFFSET))(this);
		}

		::System::Void _GenerateOrderedTalentList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO__GENERATEORDEREDTALENTLIST_OFFSET))(this);
		}
	};
}
