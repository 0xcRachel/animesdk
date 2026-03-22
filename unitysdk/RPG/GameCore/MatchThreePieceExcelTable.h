#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreePieceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16C62ED0)
#define RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16C62D20)
#define RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16C629F0)
#define RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16C62CC0)
#define RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16C630A0)
#define RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16C62A70)
#define RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16C630E0)
#define RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C632C0)
#define RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16C634D0)
#define RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C63830)
#define RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16C63220)
#define RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16C63180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreePieceExcelTable_TypeDefinitionIndex = 10883;

	class MatchThreePieceExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreePieceExcelTable_TypeDefinitionIndex)->GetStaticField(0x36E50);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreePieceRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreePieceRow*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreePieceExcelTable_TypeDefinitionIndex)->GetStaticField(0x36E58);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreePieceExcelTable_TypeDefinitionIndex)->GetStaticField(0x36E60);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MatchThreePieceExcelTable_TypeDefinitionIndex)->GetStaticField(0xD4B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MatchThreePieceExcelTable_TypeDefinitionIndex)->GetStaticField(0xD4B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreePieceRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreePieceRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreePieceRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreePieceRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreePieceRow* GetData(::System::UInt32 PieceID)
		{
			return ((::RPG::GameCore::MatchThreePieceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE_GETDATA_OFFSET))(PieceID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MatchThreePieceRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreePieceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPIECEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
