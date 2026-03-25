#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NPCMonsterDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17480A30)
#define RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17480880)
#define RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17480550)
#define RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17480820)
#define RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17480BB0)
#define RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x174805D0)
#define RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17480BF0)
#define RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17480DD0)
#define RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x174811B0)
#define RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x174814C0)
#define RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17480D30)
#define RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17480C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCMonsterDataExcelTable_TypeDefinitionIndex = 13082;

	class NPCMonsterDataExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NPCMonsterDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x12E00);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(NPCMonsterDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x12E08);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCMonsterDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCMonsterDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(NPCMonsterDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x12E10);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(NPCMonsterDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x65A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCMonsterDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x65A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCMonsterDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCMonsterDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCMonsterDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCMonsterDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::NPCMonsterDataRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::NPCMonsterDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::NPCMonsterDataRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::NPCMonsterDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERDATAEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
