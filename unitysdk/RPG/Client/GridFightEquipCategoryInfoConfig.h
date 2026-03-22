#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x9349100)
#define RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_GET_CANBEUSEDASCRAFTCOST_OFFSET UNITYSDK_OFFSET(0x9349200)
#define RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_GET_CATEGORYNAME_OFFSET UNITYSDK_OFFSET(0x93491E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_GET_EQUIPCATEGORY_OFFSET UNITYSDK_OFFSET(0x93491C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_SET_CATEGORYNAME_OFFSET UNITYSDK_OFFSET(0x93491F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_SET_EQUIPCATEGORY_OFFSET UNITYSDK_OFFSET(0x93491D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9349160)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCategoryInfoConfig_TypeDefinitionIndex = 51271;

	class GridFightEquipCategoryInfoConfig : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::GridFightEquipCategory, ::RPG::Client::GridFightEquipCategoryInfoConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightEquipCategory, ::RPG::Client::GridFightEquipCategoryInfoConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipCategoryInfoConfig_TypeDefinitionIndex)->GetStaticField(0x444B0);
		}
		::RPG::Client::TextID _CategoryName_k__BackingField; // 0x10
		::RPG::GameCore::GridFightEquipCategory _EquipCategory_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::GameCore::GridFightEquipCategory category)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG__CTOR_OFFSET))(this, category);
		}

		static ::RPG::Client::GridFightEquipCategoryInfoConfig* GetConfig(::RPG::GameCore::GridFightEquipCategory category)
		{
			return ((::RPG::Client::GridFightEquipCategoryInfoConfig*(*)(::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_GETCONFIG_OFFSET))(category);
		}

		::RPG::GameCore::GridFightEquipCategory get_EquipCategory()
		{
			return ((::RPG::GameCore::GridFightEquipCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_GET_EQUIPCATEGORY_OFFSET))(this);
		}

		::System::Void set_EquipCategory(::RPG::GameCore::GridFightEquipCategory value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_SET_EQUIPCATEGORY_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_CategoryName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_GET_CATEGORYNAME_OFFSET))(this);
		}

		::System::Void set_CategoryName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_SET_CATEGORYNAME_OFFSET))(this, value);
		}

		::System::Boolean get_CanBeUsedAsCraftCost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_GET_CANBEUSEDASCRAFTCOST_OFFSET))(this);
		}
	};
}
