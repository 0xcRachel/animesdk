#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AudioBookDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16893C80)
#define RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16893AD0)
#define RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x168937A0)
#define RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16893A70)
#define RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16893E00)
#define RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16893820)
#define RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16893E40)
#define RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16894020)
#define RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16894170)
#define RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16894480)
#define RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16893F80)
#define RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16893EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AudioBookDataExcelTable_TypeDefinitionIndex = 11711;

	class AudioBookDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AudioBookDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AudioBookDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(AudioBookDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x23550);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AudioBookDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x23558);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AudioBookDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x23560);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AudioBookDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x72A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AudioBookDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x72A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AudioBookDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AudioBookDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AudioBookDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AudioBookDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AudioBookDataRow* GetData(::System::UInt32 BookID)
		{
			return ((::RPG::GameCore::AudioBookDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE_GETDATA_OFFSET))(BookID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AudioBookDataRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AudioBookDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOBOOKDATAEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
