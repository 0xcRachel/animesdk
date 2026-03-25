#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonsterDropRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONSTERDROPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1745F520)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1745F370)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1745F040)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1745F310)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1745F730)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1745F0C0)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1745F770)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1745F950)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1745FB70)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1745FF20)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1745F8B0)
#define RPG_GAMECORE_MONSTERDROPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1745F810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterDropExcelTable_TypeDefinitionIndex = 12990;

	class MonsterDropExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterDropExcelTable_TypeDefinitionIndex)->GetStaticField(0x47640);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterDropExcelTable_TypeDefinitionIndex)->GetStaticField(0x47648);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterDropRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterDropRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterDropExcelTable_TypeDefinitionIndex)->GetStaticField(0x47650);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonsterDropExcelTable_TypeDefinitionIndex)->GetStaticField(0x12820);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonsterDropExcelTable_TypeDefinitionIndex)->GetStaticField(0x12821);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterDropRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterDropRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterDropRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterDropRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonsterDropRow* GetData(::System::UInt32 MonsterTemplateID, ::System::UInt32 WorldLevel)
		{
			return ((::RPG::GameCore::MonsterDropRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE_GETDATA_OFFSET))(MonsterTemplateID, WorldLevel);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonsterDropRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterDropRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
