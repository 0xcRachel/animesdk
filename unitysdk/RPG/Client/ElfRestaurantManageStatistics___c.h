#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x913D010)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x913D050)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTPRODUCINGPRODUCTIDS_B__21_0_OFFSET UNITYSDK_OFFSET(0x913D1E0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTPRODUCINGPRODUCTIDS_B__21_1_OFFSET UNITYSDK_OFFSET(0x913D1F0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTSELLINGRECIPEIDS_B__16_0_OFFSET UNITYSDK_OFFSET(0x913D060)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTSELLINGRECIPEIDS_B__16_1_OFFSET UNITYSDK_OFFSET(0x913D070)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETHIGHESTSELLPRICERECIPEIDS_B__19_0_OFFSET UNITYSDK_OFFSET(0x913D1C0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETHIGHESTSELLPRICERECIPEIDS_B__19_1_OFFSET UNITYSDK_OFFSET(0x913D1D0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETTOTALRECIPECOUNT_B__17_0_OFFSET UNITYSDK_OFFSET(0x913D080)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantManageStatistics___c_TypeDefinitionIndex = 50656;

	class ElfRestaurantManageStatistics___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x46120);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x46128);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x46130);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>** StaticGet___9__21_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x46138);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x46140);
		}
		static ::RPG::Client::ElfRestaurantManageStatistics___c** StaticGet___9()
		{
			return (::RPG::Client::ElfRestaurantManageStatistics___c**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x46148);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x46150);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x46158);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetBestSellingRecipeIDs_b__16_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTSELLINGRECIPEIDS_B__16_0_OFFSET))(this, p);
		}

		::System::UInt32 _GetBestSellingRecipeIDs_b__16_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> p)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTSELLINGRECIPEIDS_B__16_1_OFFSET))(this, p);
		}

		::System::Boolean _GetTotalRecipeCount_b__17_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*> r)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETTOTALRECIPECOUNT_B__17_0_OFFSET))(this, r);
		}

		::System::Int32 _GetHighestSellPriceRecipeIDs_b__19_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETHIGHESTSELLPRICERECIPEIDS_B__19_0_OFFSET))(this, p);
		}

		::System::UInt32 _GetHighestSellPriceRecipeIDs_b__19_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> p)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETHIGHESTSELLPRICERECIPEIDS_B__19_1_OFFSET))(this, p);
		}

		::System::Int32 _GetBestProducingProductIDs_b__21_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTPRODUCINGPRODUCTIDS_B__21_0_OFFSET))(this, p);
		}

		::System::UInt32 _GetBestProducingProductIDs_b__21_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> p)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTPRODUCINGPRODUCTIDS_B__21_1_OFFSET))(this, p);
		}
	};
}
