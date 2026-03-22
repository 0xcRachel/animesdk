#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournHandbookData_NPCProgressPair.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_36F606812EC9EB69_3;
class Class_1_85B276A0726A0A0D;
namespace RPG::Client { class RogueTournHandbookBuffCollection; }
namespace RPG::Client { class RogueTournHandbookEventDataItem; }
namespace RPG::Client { class RogueTournHandbookFormulaCollection; }
namespace RPG::Client { class RogueTournHandbookMiracleCollection; }
namespace RPG::Client { class RogueTournHandbookMiracleDataItem; }
namespace RPG::Client { class RogueTournHandbookRandomEventCollection; }
namespace RPG::Client { class RogueTournHandbookTitanBlessCollection; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E74D40)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GETMIRACLEDATABYMIRACLEID_OFFSET UNITYSDK_OFFSET(0x9E767E0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GETRANDOMEVENTDATABYNPCPROGRESS_OFFSET UNITYSDK_OFFSET(0x9E76730)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GET_ALLITEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x9E76EA0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GET_ALLUNLOCKEDITEMSCOUNT_OFFSET UNITYSDK_OFFSET(0x9E77150)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GET_BUFFCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9E76E40)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GET_FORMULACOLLECTION_OFFSET UNITYSDK_OFFSET(0x9E76E50)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GET_HEXCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9E76E70)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GET_ISALLITEMSUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9E77200)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GET_MIRACLECOLLECTION_OFFSET UNITYSDK_OFFSET(0x9E76E60)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GET_RANDOMEVENTCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9E76E80)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GET_TITANBLESSCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9E76E90)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA_ISCANTAKEANYHANDBOOKREWARD_OFFSET UNITYSDK_OFFSET(0x9E768B0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA_SYNCALL_OFFSET UNITYSDK_OFFSET(0x9E74E80)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x9E764A0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA__CHECKISANYQUESTCANTAKEBYCONSTNAME_OFFSET UNITYSDK_OFFSET(0x9E76950)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E74AA0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA__INITBUFFDATA_OFFSET UNITYSDK_OFFSET(0x9E74FE0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA__INITFORMULADATA_OFFSET UNITYSDK_OFFSET(0x9E75490)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA__INITMIRACLEDATA_OFFSET UNITYSDK_OFFSET(0x9E75700)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA__INITRANDOMEVENTDATA_OFFSET UNITYSDK_OFFSET(0x9E75B40)
#define RPG_CLIENT_ROGUETOURNHANDBOOKDATA__INITTITANBLESSDATA_OFFSET UNITYSDK_OFFSET(0x9E75EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookData_TypeDefinitionIndex = 53746;

	class RogueTournHandbookData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _MiracleID2HandbookID; // 0x10
		::RPG::Client::RogueTournHandbookMiracleCollection* _HexCollection_k__BackingField; // 0x18
		::RPG::Client::RogueTournHandbookRandomEventCollection* _RandomEventCollection_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::RogueTournHandbookData_NPCProgressPair, ::System::UInt32>* _NPCProgress2HandbookID; // 0x28
		::RPG::Client::RogueTournHandbookMiracleCollection* _MiracleCollection_k__BackingField; // 0x30
		::Il2CppArray<::System::String*>* _HandbookQuestConstStringArray; // 0x38
		::RPG::Client::RogueTournHandbookBuffCollection* _BuffCollection_k__BackingField; // 0x40
		::RPG::Client::RogueTournHandbookFormulaCollection* _FormulaCollection_k__BackingField; // 0x48
		::RPG::Client::RogueTournHandbookTitanBlessCollection* _TitanBlessCollection_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAll(::Class_1_85B276A0726A0A0D* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_85B276A0726A0A0D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA_SYNCALL_OFFSET))(this, proto);
		}

		::System::Void SyncUpdate(::Class_1_36F606812EC9EB69_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_36F606812EC9EB69_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA_SYNCUPDATE_OFFSET))(this, proto);
		}

		::RPG::Client::RogueTournHandbookEventDataItem* GetRandomEventDataByNPCProgress(::System::UInt32 npcID, ::System::UInt32 progress)
		{
			return ((::RPG::Client::RogueTournHandbookEventDataItem*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GETRANDOMEVENTDATABYNPCPROGRESS_OFFSET))(this, npcID, progress);
		}

		::RPG::Client::RogueTournHandbookMiracleDataItem* GetMiracleDataByMiracleID(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::RogueTournHandbookMiracleDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GETMIRACLEDATABYMIRACLEID_OFFSET))(this, miracleID);
		}

		::System::Boolean IsCanTakeAnyHandbookReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA_ISCANTAKEANYHANDBOOKREWARD_OFFSET))(this);
		}

		::System::Void _InitBuffData(::RPG::GameCore::RogueTournMode tournMode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA__INITBUFFDATA_OFFSET))(this, tournMode);
		}

		::System::Void _InitFormulaData(::RPG::GameCore::RogueTournMode tournMode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA__INITFORMULADATA_OFFSET))(this, tournMode);
		}

		::System::Void _InitMiracleData(::RPG::GameCore::RogueTournMode tournMode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA__INITMIRACLEDATA_OFFSET))(this, tournMode);
		}

		::System::Void _InitRandomEventData(::RPG::GameCore::RogueTournMode tournMode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA__INITRANDOMEVENTDATA_OFFSET))(this, tournMode);
		}

		::System::Void _InitTitanBlessData(::RPG::GameCore::RogueTournMode tournMode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA__INITTITANBLESSDATA_OFFSET))(this, tournMode);
		}

		::System::Boolean _CheckIsAnyQuestCanTakeByConstName(::System::String* constValueName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA__CHECKISANYQUESTCANTAKEBYCONSTNAME_OFFSET))(this, constValueName);
		}

		::RPG::Client::RogueTournHandbookBuffCollection* get_BuffCollection()
		{
			return ((::RPG::Client::RogueTournHandbookBuffCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GET_BUFFCOLLECTION_OFFSET))(this);
		}

		::RPG::Client::RogueTournHandbookFormulaCollection* get_FormulaCollection()
		{
			return ((::RPG::Client::RogueTournHandbookFormulaCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GET_FORMULACOLLECTION_OFFSET))(this);
		}

		::RPG::Client::RogueTournHandbookMiracleCollection* get_MiracleCollection()
		{
			return ((::RPG::Client::RogueTournHandbookMiracleCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GET_MIRACLECOLLECTION_OFFSET))(this);
		}

		::RPG::Client::RogueTournHandbookMiracleCollection* get_HexCollection()
		{
			return ((::RPG::Client::RogueTournHandbookMiracleCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GET_HEXCOLLECTION_OFFSET))(this);
		}

		::RPG::Client::RogueTournHandbookRandomEventCollection* get_RandomEventCollection()
		{
			return ((::RPG::Client::RogueTournHandbookRandomEventCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GET_RANDOMEVENTCOLLECTION_OFFSET))(this);
		}

		::RPG::Client::RogueTournHandbookTitanBlessCollection* get_TitanBlessCollection()
		{
			return ((::RPG::Client::RogueTournHandbookTitanBlessCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GET_TITANBLESSCOLLECTION_OFFSET))(this);
		}

		::System::UInt32 get_AllItemsCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GET_ALLITEMSCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_AllUnlockedItemsCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GET_ALLUNLOCKEDITEMSCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsAllItemsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKDATA_GET_ISALLITEMSUNLOCKED_OFFSET))(this);
		}
	};
}
