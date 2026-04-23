#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueHandbookTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19966DF0)
#define RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19966C40)
#define RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19966910)
#define RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19966BE0)
#define RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19966FC0)
#define RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19966990)
#define RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19967000)
#define RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x199671E0)
#define RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19967490)
#define RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x199677F0)
#define RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19967140)
#define RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x199670A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHandbookTypeExcelTable_TypeDefinitionIndex = 14032;

	class RogueHandbookTypeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D940);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D948);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandbookTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandbookTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D950);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x8DE0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x8DE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandbookTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandbookTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandbookTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandbookTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueHandbookTypeRow* GetData(::System::UInt32 HandBookType)
		{
			return ((::RPG::GameCore::RogueHandbookTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE_GETDATA_OFFSET))(HandBookType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueHandbookTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueHandbookTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKTYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
