#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ItemRecycleShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ITEMRECYCLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B96200)
#define RPG_GAMECORE_ITEMRECYCLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16B96910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemRecycleRow_TypeDefinitionIndex = 12630;

	class ItemRecycleRow : public ::System::Object
	{
	public:
		::System::String* RecycleTime; // 0x10
		::System::Boolean ShowTimeType; // 0x18
		::System::Boolean IsShowTime; // 0x19
		::System::UInt32 ItemID; // 0x1C
		::RPG::GameCore::ItemRecycleShowType ShowType; // 0x20
		::RPG::Client::TextID Tips; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRECYCLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ItemRecycleRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemRecycleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRECYCLEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
