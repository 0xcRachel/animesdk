#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightCommonDetailData; }
namespace RPG::Client { class GridFightOrbData; }
namespace RPG::GameCore { class GridFightBasicBonusConfigRow; }
namespace RPG::GameCore { class GridFightCombinationBonusConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x9331280)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x9331420)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x93313E0)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_GET_ORBS_OFFSET UNITYSDK_OFFSET(0x9331400)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_GET_ROLES_OFFSET UNITYSDK_OFFSET(0x93313C0)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_PARSE_1_OFFSET UNITYSDK_OFFSET(0x9330D60)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_PARSE_OFFSET UNITYSDK_OFFSET(0x9330310)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SETALLISDELAY_OFFSET UNITYSDK_OFFSET(0x9331060)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x9331430)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0x93313F0)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SET_ORBS_OFFSET UNITYSDK_OFFSET(0x9331410)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SET_ROLES_OFFSET UNITYSDK_OFFSET(0x93313D0)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9331440)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA__PARSEBASICBONUS_OFFSET UNITYSDK_OFFSET(0x93303E0)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA__PARSECOMBINATIONBONUS_OFFSET UNITYSDK_OFFSET(0x9330C40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusParseData_TypeDefinitionIndex = 51191;

	class GridFightBonusParseData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbData*>* _Orbs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>* _Roles_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>* _Items_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ItemCount_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Parse(::System::UInt32 bonusID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_PARSE_OFFSET))(this, bonusID);
		}

		::System::Void Parse_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* bonusIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_PARSE_1_OFFSET))(this, bonusIDs);
		}

		::System::Void _ParseCombinationBonus(::RPG::GameCore::GridFightCombinationBonusConfigRow* combinationRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightCombinationBonusConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA__PARSECOMBINATIONBONUS_OFFSET))(this, combinationRow);
		}

		::System::Void _ParseBasicBonus(::RPG::GameCore::GridFightBasicBonusConfigRow* basicRow, ::System::UInt32 count)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightBasicBonusConfigRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA__PARSEBASICBONUS_OFFSET))(this, basicRow, count);
		}

		::System::Void SetAllIsDelay(::System::Boolean isDelay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SETALLISDELAY_OFFSET))(this, isDelay);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_CLEAR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>* get_Roles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_GET_ROLES_OFFSET))(this);
		}

		::System::Void set_Roles(::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SET_ROLES_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>* get_Items()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SET_ITEMS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbData*>* get_Orbs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_GET_ORBS_OFFSET))(this);
		}

		::System::Void set_Orbs(::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SET_ORBS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_ItemCount()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_GET_ITEMCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemCount(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SET_ITEMCOUNT_OFFSET))(this, value);
		}
	};
}
