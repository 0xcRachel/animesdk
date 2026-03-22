#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityPanelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x167A1250)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x167A10A0)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x167A0D70)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x167A1040)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x167A13D0)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x167A0DF0)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x167A1410)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x167A15F0)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x167A1E70)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x167A2190)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x167A1550)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x167A14B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPanelExcelTable_TypeDefinitionIndex = 10413;

	class ActivityPanelExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPanelExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B0A0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPanelExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B0A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPanelExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B0B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityPanelExcelTable_TypeDefinitionIndex)->GetStaticField(0x66B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityPanelExcelTable_TypeDefinitionIndex)->GetStaticField(0x66B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityPanelRow* GetData(::System::UInt32 PanelID)
		{
			return ((::RPG::GameCore::ActivityPanelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_GETDATA_OFFSET))(PanelID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityPanelRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityPanelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
