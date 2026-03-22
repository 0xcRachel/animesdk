#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyMapGradeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1687C1B0)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1687C030)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1687BD00)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1687BFD0)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1687C330)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1687BD80)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1687C370)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1687C550)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1687C750)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1687CA60)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1687C4B0)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1687C410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyMapGradeExcelTable_TypeDefinitionIndex = 11463;

	class AlleyMapGradeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyMapGradeExcelTable_TypeDefinitionIndex)->GetStaticField(0x246D0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyMapGradeExcelTable_TypeDefinitionIndex)->GetStaticField(0x246D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapGradeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapGradeRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyMapGradeExcelTable_TypeDefinitionIndex)->GetStaticField(0x246E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyMapGradeExcelTable_TypeDefinitionIndex)->GetStaticField(0x7750);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyMapGradeExcelTable_TypeDefinitionIndex)->GetStaticField(0x7751);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapGradeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapGradeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapGradeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapGradeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyMapGradeRow* GetData(::System::UInt32 GradeID)
		{
			return ((::RPG::GameCore::AlleyMapGradeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_GETDATA_OFFSET))(GradeID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyMapGradeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyMapGradeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
