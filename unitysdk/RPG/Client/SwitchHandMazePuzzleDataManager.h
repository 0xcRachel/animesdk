#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_40A00D6074B2BA8E;
namespace RPG::Client { class SwitchHandCoinContainer; }
namespace RPG::Client { class SwitchHandMazePuzzleRowWrapper; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FE5F50)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETMAZEPUZZLEROWWRAPPER_1_OFFSET UNITYSDK_OFFSET(0x9FE6070)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETMAZEPUZZLEROWWRAPPER_OFFSET UNITYSDK_OFFSET(0x9FE5470)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETPUZZLECOLLECTCOINCNT_OFFSET UNITYSDK_OFFSET(0x9FE6180)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETPUZZLETOTALCOINCNT_OFFSET UNITYSDK_OFFSET(0x9FE62A0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETROWWRAPPERLIST_OFFSET UNITYSDK_OFFSET(0x9FE5800)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x9FE5C30)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_SYNCCOLLECTCOINCNT_OFFSET UNITYSDK_OFFSET(0x9FE63C0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_TRYFIRECOINCOLLECTFINISHEVENT_OFFSET UNITYSDK_OFFSET(0x9FE6420)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__CALCULATEPUZZLECOINCOLLECTCNT_OFFSET UNITYSDK_OFFSET(0x9FE65B0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9FE6B90)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__INITCOINCONTAINER_OFFSET UNITYSDK_OFFSET(0x9FE5E40)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__INITMAZEPUZZLEROW_OFFSET UNITYSDK_OFFSET(0x9FE5C80)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__ISCHESTHIDDEN_OFFSET UNITYSDK_OFFSET(0x9FE6A60)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchHandMazePuzzleDataManager_TypeDefinitionIndex = 53944;

	class SwitchHandMazePuzzleDataManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SwitchHandMazePuzzleRowWrapper*>* _RowList; // 0x10
		::RPG::Client::SwitchHandCoinContainer* _CoinContainer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwitchHandMazePuzzleRowWrapper*>* GetRowWrapperList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwitchHandMazePuzzleRowWrapper*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETROWWRAPPERLIST_OFFSET))(this);
		}

		::RPG::Client::SwitchHandMazePuzzleRowWrapper* GetMazePuzzleRowWrapper(::System::UInt32 switchID)
		{
			return ((::RPG::Client::SwitchHandMazePuzzleRowWrapper*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETMAZEPUZZLEROWWRAPPER_OFFSET))(this, switchID);
		}

		::RPG::Client::SwitchHandMazePuzzleRowWrapper* GetMazePuzzleRowWrapper_1(::System::UInt32 mappingInfoGroupID, ::System::UInt32 mappingInfoInstanceID, ::System::UInt32 mappingInfoFloorID, ::System::UInt32 mappingInfoPlaneID)
		{
			return ((::RPG::Client::SwitchHandMazePuzzleRowWrapper*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETMAZEPUZZLEROWWRAPPER_1_OFFSET))(this, mappingInfoGroupID, mappingInfoInstanceID, mappingInfoFloorID, mappingInfoPlaneID);
		}

		::System::UInt32 GetPuzzleCollectCoinCnt(::System::UInt32 mappingInfoGroupID, ::System::UInt32 mappingInfoPropID, ::System::UInt32 mappingInfoFloorID, ::System::UInt32 mappingInfoPlaneID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETPUZZLECOLLECTCOINCNT_OFFSET))(this, mappingInfoGroupID, mappingInfoPropID, mappingInfoFloorID, mappingInfoPlaneID);
		}

		::System::UInt32 GetPuzzleTotalCoinCnt(::System::UInt32 mappingInfoGroupID, ::System::UInt32 mappingInfoPropID, ::System::UInt32 mappingInfoFloorID, ::System::UInt32 mappingInfoPlaneID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETPUZZLETOTALCOINCNT_OFFSET))(this, mappingInfoGroupID, mappingInfoPropID, mappingInfoFloorID, mappingInfoPlaneID);
		}

		::System::Void SyncCollectCoinCnt(::Class_1_40A00D6074B2BA8E* handData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_40A00D6074B2BA8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_SYNCCOLLECTCOINCNT_OFFSET))(this, handData);
		}

		::System::Void TryFireCoinCollectFinishEvent(::System::UInt32 puzzleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_TRYFIRECOINCOLLECTFINISHEVENT_OFFSET))(this, puzzleID);
		}

		::System::Boolean _IsChestHidden(::System::UInt32 chestGroupID, ::System::UInt32 chestInstanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__ISCHESTHIDDEN_OFFSET))(this, chestGroupID, chestInstanceID);
		}

		::System::Void _InitMazePuzzleRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__INITMAZEPUZZLEROW_OFFSET))(this);
		}

		::System::UInt32 _CalculatePuzzleCoinCollectCnt(::System::UInt32 puzzleID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__CALCULATEPUZZLECOINCOLLECTCNT_OFFSET))(this, puzzleID);
		}

		::System::Void _InitCoinContainer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__INITCOINCONTAINER_OFFSET))(this);
		}
	};
}
