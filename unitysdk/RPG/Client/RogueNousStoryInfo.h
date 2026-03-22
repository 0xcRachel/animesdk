#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6303FAC302C29AF3_4;
class Class_1_E85FDBE62E39A5EA_5;
class Class_1_FA4F4A67B1C04320_175;
namespace RPG::Client { class RogueNousMainMissionDataItem; }
namespace RPG::Client { class RogueNousSubMissionDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUENOUSSTORYINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E3CA90)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GETENDMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9E3DBB0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GETGENERALMAINMISSIONS_OFFSET UNITYSDK_OFFSET(0x9E3DCD0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GETMAINSTORYBYLAYER_OFFSET UNITYSDK_OFFSET(0x9E3DD80)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GETNEXTSUBSTORYIDS_OFFSET UNITYSDK_OFFSET(0x9E3DE70)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GETSTARTMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9E3DA90)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_ALLFINISHEDSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x9E3E260)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_ALLMAINSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x9E3E300)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_ALLSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x9E3E350)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_ALLSUBSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x9E3E2B0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_MAINMISSIONDICT_OFFSET UNITYSDK_OFFSET(0x9E3E200)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_MAINMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x9E3E1C0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_METMAINSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x9E3E240)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_SUBMISSIONDICT_OFFSET UNITYSDK_OFFSET(0x9E3E1E0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_SUBMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x9E3E1A0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_UNLOCKEDSUBSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x9E3E220)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9E3BF20)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_SET_MAINMISSIONDICT_OFFSET UNITYSDK_OFFSET(0x9E3E210)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_SET_MAINMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x9E3E1D0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_SET_METMAINSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x9E3E250)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_SET_SUBMISSIONDICT_OFFSET UNITYSDK_OFFSET(0x9E3E1F0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_SET_SUBMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x9E3E1B0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_SET_UNLOCKEDSUBSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x9E3E230)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_SYNC_1_OFFSET UNITYSDK_OFFSET(0x9E3D700)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_SYNC_2_OFFSET UNITYSDK_OFFSET(0x9E3D8A0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x9E3CC20)
#define RPG_CLIENT_ROGUENOUSSTORYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9E3E420)
#define RPG_CLIENT_ROGUENOUSSTORYINFO__GETGENERALMAINMISSIONS_B__7_0_OFFSET UNITYSDK_OFFSET(0x9E3E430)
#define RPG_CLIENT_ROGUENOUSSTORYINFO__INITMAINMISSIONS_OFFSET UNITYSDK_OFFSET(0x9E3C760)
#define RPG_CLIENT_ROGUENOUSSTORYINFO__INITSUBMISSIONS_OFFSET UNITYSDK_OFFSET(0x9E3BF70)
#define RPG_CLIENT_ROGUENOUSSTORYINFO__REFRESHUNLOCKEDCOUNT_OFFSET UNITYSDK_OFFSET(0x9E3D600)
#define RPG_CLIENT_ROGUENOUSSTORYINFO__SYNCMAINSTORIES_OFFSET UNITYSDK_OFFSET(0x9E3CC90)
#define RPG_CLIENT_ROGUENOUSSTORYINFO__SYNCSUBSTORIES_OFFSET UNITYSDK_OFFSET(0x9E3D1F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousStoryInfo_TypeDefinitionIndex = 53641;

	class RogueNousStoryInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousSubMissionDataItem*>* _SubMissionDict_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueNousMainMissionDataItem*>* _MainMissionList_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _FirstLayerSubMissionIDs; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousMainMissionDataItem*>* _MainMissionDict_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::RogueNousSubMissionDataItem*>* _SubMissionList_k__BackingField; // 0x30
		::System::UInt32 _EndStoryGroupID; // 0x38
		::System::UInt32 _MetMainStoryCount_k__BackingField; // 0x3C
		::System::UInt32 _UnlockedSubStoryCount_k__BackingField; // 0x40
		::System::UInt32 _StartStoryGroupID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_6303FAC302C29AF3_4* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6303FAC302C29AF3_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_SYNC_OFFSET))(this, rsp);
		}

		::System::Void Sync_1(::Class_1_FA4F4A67B1C04320_175* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_175*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_SYNC_1_OFFSET))(this, rsp);
		}

		::System::Void Sync_2(::Class_1_E85FDBE62E39A5EA_5* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_SYNC_2_OFFSET))(this, rsp);
		}

		::RPG::Client::RogueNousMainMissionDataItem* GetStartMainMissionData()
		{
			return ((::RPG::Client::RogueNousMainMissionDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GETSTARTMAINMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::RogueNousMainMissionDataItem* GetEndMainMissionData()
		{
			return ((::RPG::Client::RogueNousMainMissionDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GETENDMAINMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousMainMissionDataItem*>* GetGeneralMainMissions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousMainMissionDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GETGENERALMAINMISSIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousMainMissionDataItem*>* GetMainStoryByLayer(::System::UInt32 layerValue)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousMainMissionDataItem*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GETMAINSTORYBYLAYER_OFFSET))(this, layerValue);
		}

		::Il2CppArray<::System::UInt32>* GetNextSubStoryIDs(::System::UInt32 subStoryID)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GETNEXTSUBSTORYIDS_OFFSET))(this, subStoryID);
		}

		::System::Void _InitSubMissions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO__INITSUBMISSIONS_OFFSET))(this);
		}

		::System::Void _InitMainMissions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO__INITMAINMISSIONS_OFFSET))(this);
		}

		::System::Void _SyncSubStories(::Class_1_6303FAC302C29AF3_4* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6303FAC302C29AF3_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO__SYNCSUBSTORIES_OFFSET))(this, rsp);
		}

		::System::Void _SyncMainStories(::Class_1_6303FAC302C29AF3_4* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6303FAC302C29AF3_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO__SYNCMAINSTORIES_OFFSET))(this, rsp);
		}

		::System::Void _RefreshUnlockedCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO__REFRESHUNLOCKEDCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousSubMissionDataItem*>* get_SubMissionList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousSubMissionDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_SUBMISSIONLIST_OFFSET))(this);
		}

		::System::Void set_SubMissionList(::System::Collections::Generic::List_1<::RPG::Client::RogueNousSubMissionDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueNousSubMissionDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_SET_SUBMISSIONLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousMainMissionDataItem*>* get_MainMissionList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousMainMissionDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_MAINMISSIONLIST_OFFSET))(this);
		}

		::System::Void set_MainMissionList(::System::Collections::Generic::List_1<::RPG::Client::RogueNousMainMissionDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueNousMainMissionDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_SET_MAINMISSIONLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousSubMissionDataItem*>* get_SubMissionDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousSubMissionDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_SUBMISSIONDICT_OFFSET))(this);
		}

		::System::Void set_SubMissionDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousSubMissionDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousSubMissionDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_SET_SUBMISSIONDICT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousMainMissionDataItem*>* get_MainMissionDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousMainMissionDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_MAINMISSIONDICT_OFFSET))(this);
		}

		::System::Void set_MainMissionDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousMainMissionDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousMainMissionDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_SET_MAINMISSIONDICT_OFFSET))(this, value);
		}

		::System::UInt32 get_UnlockedSubStoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_UNLOCKEDSUBSTORYCOUNT_OFFSET))(this);
		}

		::System::Void set_UnlockedSubStoryCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_SET_UNLOCKEDSUBSTORYCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_MetMainStoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_METMAINSTORYCOUNT_OFFSET))(this);
		}

		::System::Void set_MetMainStoryCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_SET_METMAINSTORYCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_AllFinishedStoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_ALLFINISHEDSTORYCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_AllSubStoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_ALLSUBSTORYCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_AllMainStoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_ALLMAINSTORYCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_AllStoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_ALLSTORYCOUNT_OFFSET))(this);
		}

		::System::Boolean _GetGeneralMainMissions_b__7_0(::RPG::Client::RogueNousMainMissionDataItem* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousMainMissionDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO__GETGENERALMAINMISSIONS_B__7_0_OFFSET))(this, a);
		}
	};
}
