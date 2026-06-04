#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimitType.h"
#include "unitysdk/RPG/GameCore/ShopMainType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19FF6A00)
#define RPG_GAMECORE_SHOPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF7890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopConfigRow_TypeDefinitionIndex = 14366;

	class ShopConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LimitValue1List; // 0x10
		::System::String* ShopIconPath; // 0x18
		::System::String* ShopBar; // 0x20
		::Il2CppArray<::System::UInt32>* LimitValue2List; // 0x28
		::System::UInt32 ShopID; // 0x30
		::System::UInt32 ActivityModuleID; // 0x34
		::RPG::Client::TextID ShopName; // 0x38
		::System::UInt32 ShopSortID; // 0x48
		::System::UInt32 ShopGroupID; // 0x4C
		::RPG::Client::TextID ShopDesc; // 0x50
		::RPG::GameCore::ShopMainType ShopMainType; // 0x60
		::System::Boolean HideRemainTime; // 0x64
		::System::Boolean IsOpen; // 0x65
		::System::Boolean ServerVerification; // 0x66
		::RPG::GameCore::LimitType LimitType2; // 0x68
		::System::UInt32 ShopType; // 0x6C
		::System::UInt32 ScheduleDataID; // 0x70
		::RPG::GameCore::LimitType LimitType1; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShopConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShopConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
