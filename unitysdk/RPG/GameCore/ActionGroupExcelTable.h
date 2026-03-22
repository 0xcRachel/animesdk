#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActionGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIONGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x167799D0)
#define RPG_GAMECORE_ACTIONGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16779820)
#define RPG_GAMECORE_ACTIONGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x167794F0)
#define RPG_GAMECORE_ACTIONGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x167797C0)
#define RPG_GAMECORE_ACTIONGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16779B80)
#define RPG_GAMECORE_ACTIONGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16779570)
#define RPG_GAMECORE_ACTIONGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16779BC0)
#define RPG_GAMECORE_ACTIONGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16779DA0)
#define RPG_GAMECORE_ACTIONGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1677A1B0)
#define RPG_GAMECORE_ACTIONGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1677A4C0)
#define RPG_GAMECORE_ACTIONGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16779D00)
#define RPG_GAMECORE_ACTIONGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16779C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionGroupExcelTable_TypeDefinitionIndex = 12550;

	class ActionGroupExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A700);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A708);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A710);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x63F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x63F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONGROUPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActionGroupRow* GetData(::System::String* ActionGroupName)
		{
			return ((::RPG::GameCore::ActionGroupRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONGROUPEXCELTABLE_GETDATA_OFFSET))(ActionGroupName);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONGROUPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActionGroupRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActionGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONGROUPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
