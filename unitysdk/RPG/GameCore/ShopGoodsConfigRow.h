#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GoodsRefreshType.h"
#include "unitysdk/RPG/GameCore/LimitType.h"
#include "unitysdk/RPG/GameCore/ShopGoodTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOPGOODSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F50600)
#define RPG_GAMECORE_SHOPGOODSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F51310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopGoodsConfigRow_TypeDefinitionIndex = 13735;

	class ShopGoodsConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CurrencyList; // 0x10
		::Il2CppArray<::System::UInt32>* LimitValue1List; // 0x18
		::Il2CppArray<::System::UInt32>* CurrencyCostList; // 0x20
		::Il2CppArray<::System::UInt32>* LimitValue2List; // 0x28
		::Il2CppArray<::System::UInt32>* OnShelfValue1List; // 0x30
		::RPG::GameCore::GoodsRefreshType RefreshType; // 0x38
		::System::UInt32 TagParam; // 0x3C
		::System::UInt32 ItemGroupID; // 0x40
		::System::UInt32 GoodsSortID; // 0x44
		::System::UInt32 ItemCount; // 0x48
		::System::Boolean IsLimitedTimePurchase; // 0x4C
		::System::Boolean IsNew; // 0x4D
		::System::Boolean IsOnSale; // 0x4E
		::System::UInt32 ItemID; // 0x50
		::RPG::GameCore::ShopGoodTag TagType; // 0x54
		::System::UInt32 LimitTimes; // 0x58
		::System::UInt32 CycleDays; // 0x5C
		::System::UInt32 Level; // 0x60
		::System::UInt32 ActivityModuleID; // 0x64
		::System::UInt32 ShopID; // 0x68
		::System::UInt32 Rank; // 0x6C
		::RPG::GameCore::LimitType LimitType1; // 0x70
		::RPG::GameCore::LimitType LimitType2; // 0x74
		::System::UInt32 ScheduleDataID; // 0x78
		::System::Int32 RefreshOffset; // 0x7C
		::RPG::GameCore::LimitType OnShelfType1; // 0x80
		::System::UInt32 GoodsID; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ShopGoodsConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShopGoodsConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
