#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightEquipUpgradeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16B22070)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16B21EF0)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16B21BC0)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16B21E90)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16B22240)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16B21C40)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16B22280)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B22460)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16B225A0)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B228B0)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16B223C0)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16B22320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEquipUpgradeConfigExcelTable_TypeDefinitionIndex = 12231;

	class GridFightEquipUpgradeConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipUpgradeConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipUpgradeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipUpgradeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E740);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipUpgradeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E748);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipUpgradeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E750);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipUpgradeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xAE00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipUpgradeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xAE01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipUpgradeConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipUpgradeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipUpgradeConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipUpgradeConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GridFightEquipUpgradeConfigRow* GetData(::System::UInt32 PreID)
		{
			return ((::RPG::GameCore::GridFightEquipUpgradeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_GETDATA_OFFSET))(PreID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GridFightEquipUpgradeConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightEquipUpgradeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
