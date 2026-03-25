#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerBarDrink; }
namespace RPG::Client { class DrinkMakerBarIngredient; }
namespace RPG::Client { class DrinkMakerTag; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_DRINKMAKERMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9527B70)
#define RPG_CLIENT_DRINKMAKERMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9527BB0)
#define RPG_CLIENT_DRINKMAKERMODULE___C__GETALLMIXTAGS_B__20_0_OFFSET UNITYSDK_OFFSET(0x9527BE0)
#define RPG_CLIENT_DRINKMAKERMODULE___C__GETALLUNLOCKEDDRINKSDATA_B__17_0_OFFSET UNITYSDK_OFFSET(0x9527BC0)
#define RPG_CLIENT_DRINKMAKERMODULE___C__GET_AVAILABLEINGREDIENTROWDATA_B__60_0_OFFSET UNITYSDK_OFFSET(0x9527C10)
#define RPG_CLIENT_DRINKMAKERMODULE___C__GET_AVAILABLEINGREDIENTROWDATA_B__60_1_OFFSET UNITYSDK_OFFSET(0x9527C30)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerModule___c_TypeDefinitionIndex = 51678;

	class DrinkMakerModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::DrinkMakerModule___c** StaticGet___9()
		{
			return (::RPG::Client::DrinkMakerModule___c**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerModule___c_TypeDefinitionIndex)->GetStaticField(0x46430);
		}
		static ::System::Func_2<::RPG::Client::DrinkMakerBarDrink*, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::RPG::Client::DrinkMakerBarDrink*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerModule___c_TypeDefinitionIndex)->GetStaticField(0x46438);
		}
		static ::System::Func_2<::RPG::Client::DrinkMakerBarIngredient*, ::System::Int32>** StaticGet___9__60_1()
		{
			return (::System::Func_2<::RPG::Client::DrinkMakerBarIngredient*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerModule___c_TypeDefinitionIndex)->GetStaticField(0x46440);
		}
		static ::System::Func_2<::RPG::Client::DrinkMakerTag*, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::RPG::Client::DrinkMakerTag*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerModule___c_TypeDefinitionIndex)->GetStaticField(0x46448);
		}
		static ::System::Func_2<::RPG::Client::DrinkMakerBarIngredient*, ::System::Boolean>** StaticGet___9__60_0()
		{
			return (::System::Func_2<::RPG::Client::DrinkMakerBarIngredient*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerModule___c_TypeDefinitionIndex)->GetStaticField(0x46450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllUnlockedDrinksData_b__17_0(::RPG::Client::DrinkMakerBarDrink* drink)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerBarDrink*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___C__GETALLUNLOCKEDDRINKSDATA_B__17_0_OFFSET))(this, drink);
		}

		::System::Boolean _GetAllMixTags_b__20_0(::RPG::Client::DrinkMakerTag* tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___C__GETALLMIXTAGS_B__20_0_OFFSET))(this, tag);
		}

		::System::Boolean _get_AvailableIngredientRowData_b__60_0(::RPG::Client::DrinkMakerBarIngredient* ingredient)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerBarIngredient*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___C__GET_AVAILABLEINGREDIENTROWDATA_B__60_0_OFFSET))(this, ingredient);
		}

		::System::Int32 _get_AvailableIngredientRowData_b__60_1(::RPG::Client::DrinkMakerBarIngredient* a)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerBarIngredient*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___C__GET_AVAILABLEINGREDIENTROWDATA_B__60_1_OFFSET))(this, a);
		}
	};
}
