#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueRoomTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16EB8190)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16EB7FE0)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16EB7CB0)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16EB7F80)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16EB8360)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16EB7D30)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16EB83A0)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EB8580)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16EB89C0)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EB8D20)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16EB84E0)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16EB8440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueRoomTypeExcelTable_TypeDefinitionIndex = 13370;

	class RogueRoomTypeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueRoomTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3E40);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueRoomTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3E48);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueRoomTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3E50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueRoomTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x10D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueRoomTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x10D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueRoomTypeRow* GetData(::System::UInt32 RogueRoomType)
		{
			return ((::RPG::GameCore::RogueRoomTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_GETDATA_OFFSET))(RogueRoomType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueRoomTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueRoomTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
