#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournLayerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16ECA840)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16ECA690)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16ECA360)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16ECA630)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16ECA9C0)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16ECA3E0)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16ECAA00)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16ECABE0)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16ECAD20)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16ECB030)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16ECAB40)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16ECAAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournLayerExcelTable_TypeDefinitionIndex = 13610;

	class RogueTournLayerExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournLayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x6DC0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournLayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x6DC8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournLayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x6DD0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTournLayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x2460);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueTournLayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x2461);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournLayerRow* GetData(::System::UInt32 LayerID)
		{
			return ((::RPG::GameCore::RogueTournLayerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_GETDATA_OFFSET))(LayerID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTournLayerRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournLayerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
