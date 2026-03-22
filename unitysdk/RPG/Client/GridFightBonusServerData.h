#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_599;
class Class_1_A0F9A6CFA21CA68B;
namespace RPG::Client { class GridFightAugmentEffectData; }
namespace RPG::Client { class GridFightBattleResultBonus; }
namespace RPG::Client { class GridFightBonusResultData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_CLEARBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x9333E40)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_CLEARELITERESULT_OFFSET UNITYSDK_OFFSET(0x9333E90)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_DISTRIBUTEBONUS_OFFSET UNITYSDK_OFFSET(0x9333B20)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_BATTLEAUGMENTBONUSES_OFFSET UNITYSDK_OFFSET(0x9333FC0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_BATTLERESULTBONUSDATA_OFFSET UNITYSDK_OFFSET(0x9333FA0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_ELITEBRANCHBONUS_OFFSET UNITYSDK_OFFSET(0x9333FE0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_HASBATTLERESULTBONUS_OFFSET UNITYSDK_OFFSET(0x9334020)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_HASINITIALSUPPLYBONUS_OFFSET UNITYSDK_OFFSET(0x9333EE0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_HASTRAITEFFECTBONUS_OFFSET UNITYSDK_OFFSET(0x9333F00)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_INITIALSUPPLYBONUSRESULTDATA_OFFSET UNITYSDK_OFFSET(0x9333F60)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_OUTERBONUSES_OFFSET UNITYSDK_OFFSET(0x9334000)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_TRAITBONUSES_OFFSET UNITYSDK_OFFSET(0x9333F80)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_ISBATTLEBONUSCONTAINSORB_OFFSET UNITYSDK_OFFSET(0x9333D10)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_REGISTEDISTRIBUTOR_OFFSET UNITYSDK_OFFSET(0x9333C70)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_BATTLEAUGMENTBONUSES_OFFSET UNITYSDK_OFFSET(0x9333FD0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_BATTLERESULTBONUSDATA_OFFSET UNITYSDK_OFFSET(0x9333FB0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_ELITEBRANCHBONUS_OFFSET UNITYSDK_OFFSET(0x9333FF0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_INITIALSUPPLYBONUSRESULTDATA_OFFSET UNITYSDK_OFFSET(0x9333F70)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_OUTERBONUSES_OFFSET UNITYSDK_OFFSET(0x9334010)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_TRAITBONUSES_OFFSET UNITYSDK_OFFSET(0x9333F90)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9334080)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusServerData_TypeDefinitionIndex = 51196;

	class GridFightBonusServerData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusResultData*>* _OuterBonuses_k__BackingField; // 0x10
		::RPG::Client::GridFightBattleResultBonus* _BattleResultBonusData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugmentEffectData*>* _BattleAugmentBonuses_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::Class_1_A0F9A6CFA21CA68B*>* _TraitBonuses_k__BackingField; // 0x28
		::RPG::Client::GridFightBonusResultData* _EliteBranchBonus_k__BackingField; // 0x30
		::RPG::Client::GridFightBonusResultData* _InitialSupplyBonusResultData_k__BackingField; // 0x38
		::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_599*>* bonusDistributorQueue; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA__CTOR_OFFSET))(this);
		}

		::System::Void DistributeBonus(::RPG::Client::GridFightBonusResultData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_DISTRIBUTEBONUS_OFFSET))(this, data);
		}

		::System::Void RegisteDistributor(::Class_0_16E4307DCC419505_599* distributor)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_599*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_REGISTEDISTRIBUTOR_OFFSET))(this, distributor);
		}

		::System::Boolean IsBattleBonusContainsOrb(::System::UInt32 uid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_ISBATTLEBONUSCONTAINSORB_OFFSET))(this, uid);
		}

		::System::Void ClearBattleResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_CLEARBATTLERESULT_OFFSET))(this);
		}

		::System::Void ClearEliteResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_CLEARELITERESULT_OFFSET))(this);
		}

		::System::Boolean get_HasInitialSupplyBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_HASINITIALSUPPLYBONUS_OFFSET))(this);
		}

		::System::Boolean get_HasTraitEffectBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_HASTRAITEFFECTBONUS_OFFSET))(this);
		}

		::RPG::Client::GridFightBonusResultData* get_InitialSupplyBonusResultData()
		{
			return ((::RPG::Client::GridFightBonusResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_INITIALSUPPLYBONUSRESULTDATA_OFFSET))(this);
		}

		::System::Void set_InitialSupplyBonusResultData(::RPG::Client::GridFightBonusResultData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_INITIALSUPPLYBONUSRESULTDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_1_A0F9A6CFA21CA68B*>* get_TraitBonuses()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A0F9A6CFA21CA68B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_TRAITBONUSES_OFFSET))(this);
		}

		::System::Void set_TraitBonuses(::System::Collections::Generic::List_1<::Class_1_A0F9A6CFA21CA68B*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A0F9A6CFA21CA68B*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_TRAITBONUSES_OFFSET))(this, value);
		}

		::RPG::Client::GridFightBattleResultBonus* get_BattleResultBonusData()
		{
			return ((::RPG::Client::GridFightBattleResultBonus*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_BATTLERESULTBONUSDATA_OFFSET))(this);
		}

		::System::Void set_BattleResultBonusData(::RPG::Client::GridFightBattleResultBonus* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBattleResultBonus*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_BATTLERESULTBONUSDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugmentEffectData*>* get_BattleAugmentBonuses()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightAugmentEffectData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_BATTLEAUGMENTBONUSES_OFFSET))(this);
		}

		::System::Void set_BattleAugmentBonuses(::System::Collections::Generic::List_1<::RPG::Client::GridFightAugmentEffectData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightAugmentEffectData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_BATTLEAUGMENTBONUSES_OFFSET))(this, value);
		}

		::RPG::Client::GridFightBonusResultData* get_EliteBranchBonus()
		{
			return ((::RPG::Client::GridFightBonusResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_ELITEBRANCHBONUS_OFFSET))(this);
		}

		::System::Void set_EliteBranchBonus(::RPG::Client::GridFightBonusResultData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_ELITEBRANCHBONUS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusResultData*>* get_OuterBonuses()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusResultData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_OUTERBONUSES_OFFSET))(this);
		}

		::System::Void set_OuterBonuses(::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusResultData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusResultData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_OUTERBONUSES_OFFSET))(this, value);
		}

		::System::Boolean get_HasBattleResultBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_HASBATTLERESULTBONUS_OFFSET))(this);
		}
	};
}
