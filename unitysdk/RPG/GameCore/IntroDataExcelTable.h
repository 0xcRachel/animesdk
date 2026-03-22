#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IntroDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INTRODATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16B845F0)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16B84440)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16B84110)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16B843E0)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16B847C0)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16B84190)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16B84800)
#define RPG_GAMECORE_INTRODATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B849E0)
#define RPG_GAMECORE_INTRODATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16B84CD0)
#define RPG_GAMECORE_INTRODATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B85030)
#define RPG_GAMECORE_INTRODATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16B84940)
#define RPG_GAMECORE_INTRODATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16B848A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IntroDataExcelTable_TypeDefinitionIndex = 12565;

	class IntroDataExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(IntroDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x32A40);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(IntroDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x32A48);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IntroDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IntroDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(IntroDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x32A50);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(IntroDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xBF20);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(IntroDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xBF21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IntroDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IntroDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IntroDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IntroDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::IntroDataRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::IntroDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::IntroDataRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::IntroDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
