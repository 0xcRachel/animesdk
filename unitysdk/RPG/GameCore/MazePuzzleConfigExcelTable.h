#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PuzzleFunc.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazePuzzleConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x173DA290)
#define RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x173DA0E0)
#define RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x173D9DB0)
#define RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x173DA080)
#define RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x173DA420)
#define RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x173D9E30)
#define RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x173DA460)
#define RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x173DA640)
#define RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x173DA880)
#define RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x173DAB90)
#define RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x173DA5A0)
#define RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x173DA500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleConfigExcelTable_TypeDefinitionIndex = 13295;

	class MazePuzzleConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x45860);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x45868);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x45870);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x11EE0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x11EE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MazePuzzleConfigRow* GetData(::RPG::GameCore::PuzzleFunc PuzzleFuncType)
		{
			return ((::RPG::GameCore::MazePuzzleConfigRow*(*)(::RPG::GameCore::PuzzleFunc))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE_GETDATA_OFFSET))(PuzzleFuncType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazePuzzleConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazePuzzleConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
