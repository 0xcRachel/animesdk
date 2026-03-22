#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_24;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class BaseGachaDecideData; }
namespace RPG::Client { class GachaDrawData; }
namespace RPG::Client { class GachaTokenData; }
namespace RPG::GameCore { class GachaBasicInfoConfigRow; }
namespace RPG::GameCore { class GachaTypeBasicInfoRow; }
namespace RPG::GameCore { class ItemRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BASEGACHAPOOLDATA_BASEGACHAPOOLDATACOMPARISON_OFFSET UNITYSDK_OFFSET(0x8D736B0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GETDECIDEDITEMIDS_OFFSET UNITYSDK_OFFSET(0x8D72820)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_CANDECIDE_OFFSET UNITYSDK_OFFSET(0x8D72900)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_DECIDEDATA_OFFSET UNITYSDK_OFFSET(0x8D72A30)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_DETAILITEMSROW_OFFSET UNITYSDK_OFFSET(0x8D735F0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_GACHAID_OFFSET UNITYSDK_OFFSET(0x8D71FF0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_GACHATYPE_OFFSET UNITYSDK_OFFSET(0x8D73010)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_GOLDROW_OFFSET UNITYSDK_OFFSET(0x8D73610)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_ISINGROUPPOOL_OFFSET UNITYSDK_OFFSET(0x8D73630)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x8D73590)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_PRIZEITEMSROW_OFFSET UNITYSDK_OFFSET(0x8D735D0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x8D73570)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_TYPEBASICINFOROW_OFFSET UNITYSDK_OFFSET(0x8D735B0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_HAVETIMELIMIT_OFFSET UNITYSDK_OFFSET(0x8D73530)
#define RPG_CLIENT_BASEGACHAPOOLDATA_ISFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0x8D73430)
#define RPG_CLIENT_BASEGACHAPOOLDATA_ISUPITEMINDECIDEDITEMS_OFFSET UNITYSDK_OFFSET(0x8D72910)
#define RPG_CLIENT_BASEGACHAPOOLDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x8D733F0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_DECIDEDATA_OFFSET UNITYSDK_OFFSET(0x8D72A40)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_DETAILITEMSROW_OFFSET UNITYSDK_OFFSET(0x8D73600)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_GOLDROW_OFFSET UNITYSDK_OFFSET(0x8D73620)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_PRIZEITEMSROW_OFFSET UNITYSDK_OFFSET(0x8D735E0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x8D73580)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_TYPEBASICINFOROW_OFFSET UNITYSDK_OFFSET(0x8D735C0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SYNCDECIDEDATA_OFFSET UNITYSDK_OFFSET(0x8D726D0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SYNCGACHAPOOLDATA_OFFSET UNITYSDK_OFFSET(0x8D72F20)
#define RPG_CLIENT_BASEGACHAPOOLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8D72A50)
#define RPG_CLIENT_BASEGACHAPOOLDATA__INITDETAILITEMSROW_OFFSET UNITYSDK_OFFSET(0x8D73030)
#define RPG_CLIENT_BASEGACHAPOOLDATA__INITGACHADRAWDATA_OFFSET UNITYSDK_OFFSET(0x8D72D80)
#define RPG_CLIENT_BASEGACHAPOOLDATA__INITGACHATOKENDATA_OFFSET UNITYSDK_OFFSET(0x8D72CE0)
#define RPG_CLIENT_BASEGACHAPOOLDATA__INITPRIZEITEMSROW_OFFSET UNITYSDK_OFFSET(0x8D73210)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGachaPoolData_TypeDefinitionIndex = 51084;

	class BaseGachaPoolData : public ::System::Object
	{
	public:
		// static const ::System::Int32 _MULTI_DRAW_TIME = 0xA; // 0x0
		::RPG::Client::GachaDrawData* SingleDrawData; // 0x10
		::RPG::Client::GachaTokenData* GachaTokenData; // 0x18
		::RPG::Client::BaseGachaDecideData* _DecideData_k__BackingField; // 0x20
		::RPG::GameCore::GachaBasicInfoConfigRow* _Row_k__BackingField; // 0x28
		::RPG::GameCore::ItemRow* _GoldRow_k__BackingField; // 0x30
		::RPG::Client::GachaDrawData* MultiDrawData; // 0x38
		::RPG::GameCore::GachaTypeBasicInfoRow* _TypeBasicInfoRow_k__BackingField; // 0x40
		::System::String* HistoryURL; // 0x48
		::Il2CppArray<::RPG::GameCore::ItemRow*>* _PrizeItemsRow_k__BackingField; // 0x50
		::Il2CppArray<::RPG::GameCore::ItemRow*>* _DetailItemsRow_k__BackingField; // 0x58
		::System::String* DetailURL; // 0x60
		::System::Int64 BeginTimeStamp; // 0x68
		::System::Int64 CurrentGachaTime; // 0x70
		::System::Int64 EndTimeStamp; // 0x78

		::System::Void _ctor(::System::UInt32 gachaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA__CTOR_OFFSET))(this, gachaID);
		}

		::System::Void SyncDecideData(::Class_1_21DCD4640D389503_24* gachaInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SYNCDECIDEDATA_OFFSET))(this, gachaInfo);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetDecidedItemIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GETDECIDEDITEMIDS_OFFSET))(this);
		}

		::System::Boolean IsUpItemInDecidedItems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_ISUPITEMINDECIDEDITEMS_OFFSET))(this);
		}

		::System::Boolean get_CanDecide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_CANDECIDE_OFFSET))(this);
		}

		::RPG::Client::BaseGachaDecideData* get_DecideData()
		{
			return ((::RPG::Client::BaseGachaDecideData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_DECIDEDATA_OFFSET))(this);
		}

		::System::Void set_DecideData(::RPG::Client::BaseGachaDecideData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaDecideData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_DECIDEDATA_OFFSET))(this, value);
		}

		::System::Void SyncGachaPoolData(::Class_1_21DCD4640D389503_24* gachaInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SYNCGACHAPOOLDATA_OFFSET))(this, gachaInfo);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_ISVALID_OFFSET))(this);
		}

		::System::Boolean IsFeatureClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_ISFEATURECLOSED_OFFSET))(this);
		}

		::System::Boolean HaveTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_HAVETIMELIMIT_OFFSET))(this);
		}

		::System::Void _InitGachaTokenData(::System::UInt32 itemID, ::System::UInt32 price)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA__INITGACHATOKENDATA_OFFSET))(this, itemID, price);
		}

		::System::Void _InitGachaDrawData(::System::UInt32 itemID, ::System::UInt32 price)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA__INITGACHADRAWDATA_OFFSET))(this, itemID, price);
		}

		::System::Void _InitPrizeItemsRow(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* prizeItemsID)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA__INITPRIZEITEMSROW_OFFSET))(this, prizeItemsID);
		}

		::System::Void _InitDetailItemsRow(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* detailItemsID)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA__INITDETAILITEMSROW_OFFSET))(this, detailItemsID);
		}

		::System::UInt32 get_GachaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_GACHAID_OFFSET))(this);
		}

		::RPG::GameCore::GachaType get_GachaType()
		{
			return ((::RPG::GameCore::GachaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_GACHATYPE_OFFSET))(this);
		}

		::RPG::GameCore::GachaBasicInfoConfigRow* get_Row()
		{
			return ((::RPG::GameCore::GachaBasicInfoConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::GachaBasicInfoConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaBasicInfoConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_ROW_OFFSET))(this, value);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_PREFABPATH_OFFSET))(this);
		}

		::RPG::GameCore::GachaTypeBasicInfoRow* get_TypeBasicInfoRow()
		{
			return ((::RPG::GameCore::GachaTypeBasicInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_TYPEBASICINFOROW_OFFSET))(this);
		}

		::System::Void set_TypeBasicInfoRow(::RPG::GameCore::GachaTypeBasicInfoRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaTypeBasicInfoRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_TYPEBASICINFOROW_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::ItemRow*>* get_PrizeItemsRow()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_PRIZEITEMSROW_OFFSET))(this);
		}

		::System::Void set_PrizeItemsRow(::Il2CppArray<::RPG::GameCore::ItemRow*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_PRIZEITEMSROW_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::ItemRow*>* get_DetailItemsRow()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_DETAILITEMSROW_OFFSET))(this);
		}

		::System::Void set_DetailItemsRow(::Il2CppArray<::RPG::GameCore::ItemRow*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_DETAILITEMSROW_OFFSET))(this, value);
		}

		::RPG::GameCore::ItemRow* get_GoldRow()
		{
			return ((::RPG::GameCore::ItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_GOLDROW_OFFSET))(this);
		}

		::System::Void set_GoldRow(::RPG::GameCore::ItemRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_GOLDROW_OFFSET))(this, value);
		}

		::System::Boolean get_IsInGroupPool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_ISINGROUPPOOL_OFFSET))(this);
		}

		static ::System::Int32 BaseGachaPoolDataComparison(::RPG::Client::BaseGachaPoolData* lhs, ::RPG::Client::BaseGachaPoolData* rhs)
		{
			return ((::System::Int32(*)(::RPG::Client::BaseGachaPoolData*, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_BASEGACHAPOOLDATACOMPARISON_OFFSET))(lhs, rhs);
		}
	};
}
