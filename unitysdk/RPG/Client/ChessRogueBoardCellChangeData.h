#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_1.h"
#include "unitysdk/System/Object.h"

class Class_1_9592B34F41301777_1;
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_CLONEBEFORECELLDATAITEM_OFFSET UNITYSDK_OFFSET(0x8ED1860)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8ED17F0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GETBEFORECELLDATAITEM_OFFSET UNITYSDK_OFFSET(0x8ED1E50)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_BEFORECELLDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0x8ED1F80)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_CELLIDLIST_OFFSET UNITYSDK_OFFSET(0x8ED1F60)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_MODIFIERSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x8ED1F40)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_MERGE_OFFSET UNITYSDK_OFFSET(0x8ED1BD0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_BEFORECELLDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0x8ED1F90)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_CELLIDLIST_OFFSET UNITYSDK_OFFSET(0x8ED1F70)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_MODIFIERSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x8ED1F50)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED16A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardCellChangeData_TypeDefinitionIndex = 53292;

	class ChessRogueBoardCellChangeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CellIDList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* _BeforeCellDataItemList_k__BackingField; // 0x18
		::Enum_3_01618AD0437C8486_1 _ModifierSourceType_k__BackingField; // 0x20

		::System::Void _ctor(::Class_1_9592B34F41301777_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9592B34F41301777_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA__CTOR_OFFSET))(this, proto);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void CloneBeforeCellDataItem(::RPG::Client::ChessRogueBoardCellDataItem* beforeCellDataItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_CLONEBEFORECELLDATAITEM_OFFSET))(this, beforeCellDataItem);
		}

		::System::Void Merge(::RPG::Client::ChessRogueBoardCellChangeData* cellChangeData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellChangeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_MERGE_OFFSET))(this, cellChangeData);
		}

		::RPG::Client::ChessRogueBoardCellDataItem* GetBeforeCellDataItem(::System::UInt32 cellID)
		{
			return ((::RPG::Client::ChessRogueBoardCellDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GETBEFORECELLDATAITEM_OFFSET))(this, cellID);
		}

		::Enum_3_01618AD0437C8486_1 get_ModifierSourceType()
		{
			return ((::Enum_3_01618AD0437C8486_1(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_MODIFIERSOURCETYPE_OFFSET))(this);
		}

		::System::Void set_ModifierSourceType(::Enum_3_01618AD0437C8486_1 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_MODIFIERSOURCETYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CellIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_CELLIDLIST_OFFSET))(this);
		}

		::System::Void set_CellIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_CELLIDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* get_BeforeCellDataItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_BEFORECELLDATAITEMLIST_OFFSET))(this);
		}

		::System::Void set_BeforeCellDataItemList(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_BEFORECELLDATAITEMLIST_OFFSET))(this, value);
		}
	};
}
