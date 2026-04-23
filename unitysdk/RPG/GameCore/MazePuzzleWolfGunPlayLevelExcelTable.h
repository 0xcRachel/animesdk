#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GunPlayModeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazePuzzleWolfGunPlayLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19091060)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19090EB0)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19090B80)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19090E50)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19091270)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19090C00)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x190912B0)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19091490)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19091900)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19091CB0)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x190913F0)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19091350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleWolfGunPlayLevelExcelTable_TypeDefinitionIndex = 13341;

	class MazePuzzleWolfGunPlayLevelExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleWolfGunPlayLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x38B60);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleWolfGunPlayLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x38B68);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleWolfGunPlayLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x38B70);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleWolfGunPlayLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xAE20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleWolfGunPlayLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xAE21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow* GetData(::RPG::GameCore::GunPlayModeType GunMode, ::System::UInt32 GunLevel)
		{
			return ((::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*(*)(::RPG::GameCore::GunPlayModeType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_GETDATA_OFFSET))(GunMode, GunLevel);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
