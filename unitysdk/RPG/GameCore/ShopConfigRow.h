#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimitType.h"
#include "unitysdk/RPG/GameCore/ShopMainType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1939D180)
#define RPG_GAMECORE_SHOPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1939DC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopConfigRow_TypeDefinitionIndex = 14316;

	class ShopConfigRow : public ::System::Object
	{
	public:
		::System::String* ShopIconPath; // 0x10
		::System::String* ShopBar; // 0x18
		::Il2CppArray<::System::UInt32>* LimitValue1List; // 0x20
		::Il2CppArray<::System::UInt32>* LimitValue2List; // 0x28
		::System::UInt32 ShopID; // 0x30
		::RPG::GameCore::ShopMainType ShopMainType; // 0x34
		::RPG::Client::TextID ShopName; // 0x38
		::System::UInt32 ShopSortID; // 0x48
		::System::UInt32 ScheduleDataID; // 0x4C
		::System::UInt32 ActivityModuleID; // 0x50
		::RPG::GameCore::LimitType LimitType2; // 0x54
		::System::Boolean HideRemainTime; // 0x58
		::System::Boolean IsOpen; // 0x59
		::System::Boolean ServerVerification; // 0x5A
		::System::UInt32 ShopGroupID; // 0x5C
		::RPG::Client::TextID ShopDesc; // 0x60
		::RPG::GameCore::LimitType LimitType1; // 0x70
		::System::UInt32 ShopType; // 0x74

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
