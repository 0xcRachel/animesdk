#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleCollegeData; }
namespace RPG::GameCore { class BattleCollegeTypeGroupConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_ADDBATTLECOLLEGEDATA_OFFSET UNITYSDK_OFFSET(0x8D97D10)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x8D97C70)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_BATTLECOLLEGEDATALIST_OFFSET UNITYSDK_OFFSET(0x8D97E00)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x8D97E70)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x8D97DC0)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_ISADVANCED_OFFSET UNITYSDK_OFFSET(0x8D97F80)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x8D97F20)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x8D97DE0)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x8D97E20)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x8D97D80)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_SET_BATTLECOLLEGEDATALIST_OFFSET UNITYSDK_OFFSET(0x8D97E10)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x8D97DD0)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x8D97DF0)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8D97C30)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleCollegeGroupData_TypeDefinitionIndex = 49898;

	class BattleCollegeGroupData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeData*>* _BattleCollegeDataList_k__BackingField; // 0x10
		::RPG::GameCore::BattleCollegeTypeGroupConfigRow* _Row_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleCollegeGroupData* Create(::System::UInt32 ID)
		{
			return ((::RPG::Client::BattleCollegeGroupData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_CREATE_OFFSET))(ID);
		}

		::System::Void AddBattleCollegeData(::RPG::Client::BattleCollegeData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleCollegeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_ADDBATTLECOLLEGEDATA_OFFSET))(this, data);
		}

		::System::Boolean IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_ISUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::BattleCollegeTypeGroupConfigRow* get_Row()
		{
			return ((::RPG::GameCore::BattleCollegeTypeGroupConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::BattleCollegeTypeGroupConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCollegeTypeGroupConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_SET_ROW_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeData*>* get_BattleCollegeDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_BATTLECOLLEGEDATALIST_OFFSET))(this);
		}

		::System::Void set_BattleCollegeDataList(::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_SET_BATTLECOLLEGEDATALIST_OFFSET))(this, value);
		}

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Int32 get_FinishCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_FINISHCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsAdvanced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_ISADVANCED_OFFSET))(this);
		}
	};
}
