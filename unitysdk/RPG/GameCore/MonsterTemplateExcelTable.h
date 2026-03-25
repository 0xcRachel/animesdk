#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonsterTemplateRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x174663A0)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17469520)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x174691F0)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x174694C0)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x174696A0)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17469270)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x174696E0)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x174698C0)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1746A680)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1746A9A0)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17469820)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17469780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterTemplateExcelTable_TypeDefinitionIndex = 12973;

	class MonsterTemplateExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterTemplateExcelTable_TypeDefinitionIndex)->GetStaticField(0x47910);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterTemplateExcelTable_TypeDefinitionIndex)->GetStaticField(0x47918);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterTemplateRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterTemplateRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterTemplateExcelTable_TypeDefinitionIndex)->GetStaticField(0x47920);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonsterTemplateExcelTable_TypeDefinitionIndex)->GetStaticField(0x12960);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonsterTemplateExcelTable_TypeDefinitionIndex)->GetStaticField(0x12961);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterTemplateRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterTemplateRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterTemplateRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterTemplateRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonsterTemplateRow* GetData(::System::UInt32 MonsterTemplateID)
		{
			return ((::RPG::GameCore::MonsterTemplateRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_GETDATA_OFFSET))(MonsterTemplateID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonsterTemplateRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterTemplateRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
