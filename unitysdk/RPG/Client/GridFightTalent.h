#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3DE734113B1E313B_3;
class Class_1_DB57B006CFFCF00A;
namespace RPG::Client { class GridFightPermanentTalentTree; }
namespace RPG::Client { class GridFightSeasonTalentTree; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTALENT_CLEARPERMANENTTALENT_OFFSET UNITYSDK_OFFSET(0x94056C0)
#define RPG_CLIENT_GRIDFIGHTTALENT_CLEARSEASONTALENT_OFFSET UNITYSDK_OFFSET(0x94057E0)
#define RPG_CLIENT_GRIDFIGHTTALENT_GET_CURRENCYCNT_OFFSET UNITYSDK_OFFSET(0x9405330)
#define RPG_CLIENT_GRIDFIGHTTALENT_GET_CURRENCYICONPATH_OFFSET UNITYSDK_OFFSET(0x9405290)
#define RPG_CLIENT_GRIDFIGHTTALENT_GET_CURRENCYID_OFFSET UNITYSDK_OFFSET(0x9405180)
#define RPG_CLIENT_GRIDFIGHTTALENT_GET_PERMANENTTALENTTREE_OFFSET UNITYSDK_OFFSET(0x9405140)
#define RPG_CLIENT_GRIDFIGHTTALENT_GET_SEASONTALENTTREE_OFFSET UNITYSDK_OFFSET(0x9405160)
#define RPG_CLIENT_GRIDFIGHTTALENT_SET_PERMANENTTALENTTREE_OFFSET UNITYSDK_OFFSET(0x9405150)
#define RPG_CLIENT_GRIDFIGHTTALENT_SET_SEASONTALENTTREE_OFFSET UNITYSDK_OFFSET(0x9405170)
#define RPG_CLIENT_GRIDFIGHTTALENT_SYNC_1_OFFSET UNITYSDK_OFFSET(0x9405450)
#define RPG_CLIENT_GRIDFIGHTTALENT_SYNC_OFFSET UNITYSDK_OFFSET(0x94053E0)
#define RPG_CLIENT_GRIDFIGHTTALENT_UPDATEPERMANENTTALENT_OFFSET UNITYSDK_OFFSET(0x94054C0)
#define RPG_CLIENT_GRIDFIGHTTALENT_UPDATESEASONTALENT_OFFSET UNITYSDK_OFFSET(0x9405660)
#define RPG_CLIENT_GRIDFIGHTTALENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9405830)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTalent_TypeDefinitionIndex = 51866;

	class GridFightTalent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightSeasonTalentTree* _SeasonTalentTree_k__BackingField; // 0x10
		::RPG::Client::GridFightPermanentTalentTree* _PermanentTalentTree_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightPermanentTalentTree* get_PermanentTalentTree()
		{
			return ((::RPG::Client::GridFightPermanentTalentTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_GET_PERMANENTTALENTTREE_OFFSET))(this);
		}

		::System::Void set_PermanentTalentTree(::RPG::Client::GridFightPermanentTalentTree* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPermanentTalentTree*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_SET_PERMANENTTALENTTREE_OFFSET))(this, value);
		}

		::RPG::Client::GridFightSeasonTalentTree* get_SeasonTalentTree()
		{
			return ((::RPG::Client::GridFightSeasonTalentTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_GET_SEASONTALENTTREE_OFFSET))(this);
		}

		::System::Void set_SeasonTalentTree(::RPG::Client::GridFightSeasonTalentTree* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSeasonTalentTree*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_SET_SEASONTALENTTREE_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrencyId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_GET_CURRENCYID_OFFSET))(this);
		}

		::System::String* get_CurrencyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_GET_CURRENCYICONPATH_OFFSET))(this);
		}

		::System::Int64 get_CurrencyCnt()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_GET_CURRENCYCNT_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_3DE734113B1E313B_3* permanentInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3DE734113B1E313B_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_SYNC_OFFSET))(this, permanentInfo);
		}

		::System::Void Sync_1(::Class_1_DB57B006CFFCF00A* seasonInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DB57B006CFFCF00A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_SYNC_1_OFFSET))(this, seasonInfo);
		}

		::System::Void UpdatePermanentTalent(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_UPDATEPERMANENTTALENT_OFFSET))(this, id);
		}

		::System::Void UpdateSeasonTalent(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_UPDATESEASONTALENT_OFFSET))(this, id);
		}

		::System::Void ClearPermanentTalent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_CLEARPERMANENTTALENT_OFFSET))(this);
		}

		::System::Void ClearSeasonTalent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_CLEARSEASONTALENT_OFFSET))(this);
		}
	};
}
