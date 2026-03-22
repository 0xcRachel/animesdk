#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimitType.h"
#include "unitysdk/RPG/GameCore/ShopMainType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F4F240)
#define RPG_GAMECORE_SHOPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4FD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopConfigRow_TypeDefinitionIndex = 13730;

	class ShopConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LimitValue2List; // 0x10
		::Il2CppArray<::System::UInt32>* LimitValue1List; // 0x18
		::System::String* ShopBar; // 0x20
		::System::String* ShopIconPath; // 0x28
		::System::UInt32 ShopID; // 0x30
		::RPG::GameCore::LimitType LimitType1; // 0x34
		::System::UInt32 ActivityModuleID; // 0x38
		::System::UInt32 ShopSortID; // 0x3C
		::RPG::Client::TextID ShopDesc; // 0x40
		::System::UInt32 ScheduleDataID; // 0x50
		::System::Boolean IsOpen; // 0x54
		::System::Boolean ServerVerification; // 0x55
		::System::Boolean HideRemainTime; // 0x56
		::RPG::Client::TextID ShopName; // 0x58
		::RPG::GameCore::ShopMainType ShopMainType; // 0x68
		::System::UInt32 ShopType; // 0x6C
		::System::UInt32 ShopGroupID; // 0x70
		::RPG::GameCore::LimitType LimitType2; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ShopConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShopConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
