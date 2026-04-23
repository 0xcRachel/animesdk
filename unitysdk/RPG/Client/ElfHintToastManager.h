#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfHintHandler; }
namespace RPG::Client { class ElfRestaurantModule; }
namespace RPG::Client { class UserPrefs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFHINTTOASTMANAGER_CHECKFARMHINTS_OFFSET UNITYSDK_OFFSET(0x15F76B30)
#define RPG_CLIENT_ELFHINTTOASTMANAGER_CHECKMENUCONFIGHINTS_OFFSET UNITYSDK_OFFSET(0x15F788B0)
#define RPG_CLIENT_ELFHINTTOASTMANAGER_CHECKRECIPEHINTS_OFFSET UNITYSDK_OFFSET(0x15F78220)
#define RPG_CLIENT_ELFHINTTOASTMANAGER_CHECKRESTAURANTUPGRADEHINTS_OFFSET UNITYSDK_OFFSET(0x15F77220)
#define RPG_CLIENT_ELFHINTTOASTMANAGER_TRYSHOWHINTS_OFFSET UNITYSDK_OFFSET(0x15F763A0)
#define RPG_CLIENT_ELFHINTTOASTMANAGER__CHECKEMPLOYEEMANAGEHINTS_OFFSET UNITYSDK_OFFSET(0x15F77B90)
#define RPG_CLIENT_ELFHINTTOASTMANAGER__CHECKPROFILERHINTS_OFFSET UNITYSDK_OFFSET(0x15F78D10)
#define RPG_CLIENT_ELFHINTTOASTMANAGER__CHECKSHOPGOODSHINTS_OFFSET UNITYSDK_OFFSET(0x15F78DB0)
#define RPG_CLIENT_ELFHINTTOASTMANAGER__CHECKSHOPTRADEORDERHINTS_OFFSET UNITYSDK_OFFSET(0x15F78E50)
#define RPG_CLIENT_ELFHINTTOASTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F760F0)
#define RPG_CLIENT_ELFHINTTOASTMANAGER__GENERATEHINTS_OFFSET UNITYSDK_OFFSET(0x15F764D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfHintToastManager_TypeDefinitionIndex = 58692;

	class ElfHintToastManager : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER__CTOR_OFFSET))(this);
		}

		::System::Boolean TryShowHints(::System::String* uiClassName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER_TRYSHOWHINTS_OFFSET))(this, uiClassName);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>* _GenerateHints(::System::String* uiClassName)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER__GENERATEHINTS_OFFSET))(this, uiClassName);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>* CheckFarmHints(::RPG::Client::ElfRestaurantModule* elfModule, ::RPG::Client::UserPrefs* userPrefs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID, ::RPG::Client::ElfRestaurantModule*, ::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER_CHECKFARMHINTS_OFFSET))(this, elfModule, userPrefs);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>* _CheckEmployeeManageHints(::RPG::Client::ElfRestaurantModule* elfModule, ::RPG::Client::UserPrefs* userPrefs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID, ::RPG::Client::ElfRestaurantModule*, ::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER__CHECKEMPLOYEEMANAGEHINTS_OFFSET))(this, elfModule, userPrefs);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>* CheckRestaurantUpgradeHints(::RPG::Client::ElfRestaurantModule* elfModule, ::RPG::Client::UserPrefs* userPrefs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID, ::RPG::Client::ElfRestaurantModule*, ::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER_CHECKRESTAURANTUPGRADEHINTS_OFFSET))(this, elfModule, userPrefs);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>* CheckRecipeHints(::RPG::Client::ElfRestaurantModule* elfModule, ::RPG::Client::UserPrefs* userPrefs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID, ::RPG::Client::ElfRestaurantModule*, ::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER_CHECKRECIPEHINTS_OFFSET))(this, elfModule, userPrefs);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>* CheckMenuConfigHints(::RPG::Client::ElfRestaurantModule* elfModule, ::RPG::Client::UserPrefs* userPrefs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID, ::RPG::Client::ElfRestaurantModule*, ::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER_CHECKMENUCONFIGHINTS_OFFSET))(this, elfModule, userPrefs);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ElfHintHandler*>* _CheckProfilerHints(::RPG::Client::ElfRestaurantModule* elfModule, ::RPG::Client::UserPrefs* userPrefs)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID, ::RPG::Client::ElfRestaurantModule*, ::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER__CHECKPROFILERHINTS_OFFSET))(this, elfModule, userPrefs);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ElfHintHandler*>* _CheckShopGoodsHints(::RPG::Client::ElfRestaurantModule* elfModule, ::RPG::Client::UserPrefs* userPrefs)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID, ::RPG::Client::ElfRestaurantModule*, ::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER__CHECKSHOPGOODSHINTS_OFFSET))(this, elfModule, userPrefs);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ElfHintHandler*>* _CheckShopTradeOrderHints(::RPG::Client::ElfRestaurantModule* elfModule, ::RPG::Client::UserPrefs* userPrefs)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID, ::RPG::Client::ElfRestaurantModule*, ::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER__CHECKSHOPTRADEORDERHINTS_OFFSET))(this, elfModule, userPrefs);
		}
	};
}
