#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_12A9E44435FBA7F9_1;
class Class_1_24B2AFBC155BAEAC;
namespace RPG::GameCore { class BoxingClubStageGroupConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_CURRENTSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x8E01140)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_CURRENTSTAGE_OFFSET UNITYSDK_OFFSET(0x8E01120)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_ISBATTLING_OFFSET UNITYSDK_OFFSET(0x8E01100)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_SELECTEDBUFFLIST_OFFSET UNITYSDK_OFFSET(0x8E01160)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_STAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x8E00EA0)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_ISFINALROUND_OFFSET UNITYSDK_OFFSET(0x8E01090)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_SETINBATTLE_OFFSET UNITYSDK_OFFSET(0x8E00EF0)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_SET_CURRENTSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x8E01150)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_SET_CURRENTSTAGE_OFFSET UNITYSDK_OFFSET(0x8E01130)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_SET_ISBATTLING_OFFSET UNITYSDK_OFFSET(0x8E01110)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_TRYUPDATEINFOBYNOTIFY_OFFSET UNITYSDK_OFFSET(0x8E00FD0)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_UPDATEDATABYNETPACKET_OFFSET UNITYSDK_OFFSET(0x8E00AD0)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_UPDATESTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x8E00F40)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x8E00970)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubBattleRecord_TypeDefinitionIndex = 49969;

	class BoxingClubBattleRecord : public ::System::Object
	{
	public:
		::RPG::GameCore::BoxingClubStageGroupConfigRow* Row; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectedBuffList; // 0x18
		::System::Boolean _IsBattling_k__BackingField; // 0x20
		::System::Boolean IsBattleWin; // 0x21
		::System::UInt32 _CurrentStageIndex_k__BackingField; // 0x24
		::System::UInt32 CurrentRoundNum; // 0x28
		::System::UInt32 _CurrentStage_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 stageGroupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD__CTOR_OFFSET))(this, stageGroupID);
		}

		::System::Void UpdateDataByNetPacket(::Class_1_24B2AFBC155BAEAC* packet)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_24B2AFBC155BAEAC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_UPDATEDATABYNETPACKET_OFFSET))(this, packet);
		}

		::System::Void SetInBattle(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_SETINBATTLE_OFFSET))(this, value);
		}

		::System::Void UpdateStageIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_UPDATESTAGEINDEX_OFFSET))(this);
		}

		::System::Void TryUpdateInfoByNotify(::Class_1_12A9E44435FBA7F9_1* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_12A9E44435FBA7F9_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_TRYUPDATEINFOBYNOTIFY_OFFSET))(this, ntf);
		}

		::System::Boolean IsFinalRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_ISFINALROUND_OFFSET))(this);
		}

		::System::Boolean get_IsBattling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_ISBATTLING_OFFSET))(this);
		}

		::System::Void set_IsBattling(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_SET_ISBATTLING_OFFSET))(this, value);
		}

		::System::UInt32 get_StageGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_STAGEGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_CurrentStage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_CURRENTSTAGE_OFFSET))(this);
		}

		::System::Void set_CurrentStage(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_SET_CURRENTSTAGE_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentStageIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_CURRENTSTAGEINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentStageIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_SET_CURRENTSTAGEINDEX_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectedBuffList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_SELECTEDBUFFLIST_OFFSET))(this);
		}
	};
}
