#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESTAURANTRECIPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16DEF8F0)
#define RPG_GAMECORE_RESTAURANTRECIPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF00D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantRecipeRow_TypeDefinitionIndex = 10516;

	class RestaurantRecipeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TAGList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Materials; // 0x18
		::System::String* Model; // 0x20
		::System::String* IMGPath; // 0x28
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x30
		::RPG::Client::TextID Detail; // 0x38
		::RPG::Client::TextID Name; // 0x48
		::System::UInt32 RecipeID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantRecipeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantRecipeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
