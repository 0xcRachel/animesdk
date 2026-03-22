#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AllowedLanguageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16884CD0)
#define RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16884B20)
#define RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x168847F0)
#define RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16884AC0)
#define RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16884EA0)
#define RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16884870)
#define RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16884EE0)
#define RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x168850C0)
#define RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16885310)
#define RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16885670)
#define RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16885020)
#define RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16884F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AllowedLanguageExcelTable_TypeDefinitionIndex = 11477;

	class AllowedLanguageExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AllowedLanguageExcelTable_TypeDefinitionIndex)->GetStaticField(0x24BC0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AllowedLanguageExcelTable_TypeDefinitionIndex)->GetStaticField(0x24BC8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AllowedLanguageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AllowedLanguageRow*>**)Il2CppClass::FromTypeDefinitionIndex(AllowedLanguageExcelTable_TypeDefinitionIndex)->GetStaticField(0x24BD0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AllowedLanguageExcelTable_TypeDefinitionIndex)->GetStaticField(0x7920);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AllowedLanguageExcelTable_TypeDefinitionIndex)->GetStaticField(0x7921);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AllowedLanguageRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AllowedLanguageRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AllowedLanguageRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AllowedLanguageRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AllowedLanguageRow* GetData(::System::String* Area, ::System::Byte Type)
		{
			return ((::RPG::GameCore::AllowedLanguageRow*(*)(::System::String*, ::System::Byte))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE_GETDATA_OFFSET))(Area, Type);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AllowedLanguageRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AllowedLanguageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDLANGUAGEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
