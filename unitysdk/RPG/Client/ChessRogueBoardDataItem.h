#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_56410FBEF89611C1_1;
class Class_1_C9EBDC5976BA7B94;
class Class_1_D495C41F8E3EB0F2;
class Class_1_E473F14F738B1BF5_3;
class Class_1_FA4F4A67B1C04320_153;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::Client { class ChessRogueModifierDataItem; }
namespace RPG::GameCore { class RogueDLCDifficultyRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_ADDBOARDEVENTMODIFIER_OFFSET UNITYSDK_OFFSET(0x8ED5100)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_CREATEBYJSON_OFFSET UNITYSDK_OFFSET(0x8ED41A0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_CREATEBYPROTO_OFFSET UNITYSDK_OFFSET(0x8ED3EE0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_CREATEBYSIZE_OFFSET UNITYSDK_OFFSET(0x8ED44F0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8ED4800)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETBELONGAREALAYERDIFFICULTYROW_OFFSET UNITYSDK_OFFSET(0x8ED51A0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETCELLDATAITEMCOLNUM_OFFSET UNITYSDK_OFFSET(0x8ED53E0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETCELLDATAITEM_OFFSET UNITYSDK_OFFSET(0x8ED3F50)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETCHESSROGUEDIFFICULTYROWANDCUTINDEX_OFFSET UNITYSDK_OFFSET(0x8ED52B0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETSTARTCOLNUM_OFFSET UNITYSDK_OFFSET(0x8ED5450)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_ALLOWEDSELECTCELLIDLIST_OFFSET UNITYSDK_OFFSET(0x8ED55D0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_BELONGAREAID_OFFSET UNITYSDK_OFFSET(0x8ED54F0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_BELONGAREALAYERID_OFFSET UNITYSDK_OFFSET(0x8ED5510)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_BOARDEVENTMODIFIERS_OFFSET UNITYSDK_OFFSET(0x8ED5630)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CELLDATALIST_OFFSET UNITYSDK_OFFSET(0x8ED5530)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CHESSBOARDHEIGHT_OFFSET UNITYSDK_OFFSET(0x8ED5570)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CHESSBOARDID_OFFSET UNITYSDK_OFFSET(0x8ED54B0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CHESSBOARDWIDTH_OFFSET UNITYSDK_OFFSET(0x8ED5550)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CURBOARDEVENTID_OFFSET UNITYSDK_OFFSET(0x8ED5610)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CURCELLDATAITEM_OFFSET UNITYSDK_OFFSET(0x8ED5650)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CURCELLID_OFFSET UNITYSDK_OFFSET(0x8ED54D0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_ENDCELLID_OFFSET UNITYSDK_OFFSET(0x8ED55B0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_HISTORYCELLIDLIST_OFFSET UNITYSDK_OFFSET(0x8ED55F0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_STARTCELLID_OFFSET UNITYSDK_OFFSET(0x8ED5590)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SETBELONGAREA_OFFSET UNITYSDK_OFFSET(0x8ED50A0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_ALLOWEDSELECTCELLIDLIST_OFFSET UNITYSDK_OFFSET(0x8ED55E0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_BELONGAREAID_OFFSET UNITYSDK_OFFSET(0x8ED5500)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_BELONGAREALAYERID_OFFSET UNITYSDK_OFFSET(0x8ED5520)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_BOARDEVENTMODIFIERS_OFFSET UNITYSDK_OFFSET(0x8ED5640)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CELLDATALIST_OFFSET UNITYSDK_OFFSET(0x8ED5540)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CHESSBOARDHEIGHT_OFFSET UNITYSDK_OFFSET(0x8ED5580)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CHESSBOARDID_OFFSET UNITYSDK_OFFSET(0x8ED54C0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CHESSBOARDWIDTH_OFFSET UNITYSDK_OFFSET(0x8ED5560)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CURBOARDEVENTID_OFFSET UNITYSDK_OFFSET(0x8ED5620)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CURCELLID_OFFSET UNITYSDK_OFFSET(0x8ED54E0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_ENDCELLID_OFFSET UNITYSDK_OFFSET(0x8ED55C0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_HISTORYCELLIDLIST_OFFSET UNITYSDK_OFFSET(0x8ED5600)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_STARTCELLID_OFFSET UNITYSDK_OFFSET(0x8ED55A0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCALLOWEDSELECTCELL_OFFSET UNITYSDK_OFFSET(0x8ED49F0)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCCURCELLID_OFFSET UNITYSDK_OFFSET(0x8ED5050)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCHISTORYCELLIDLIST_OFFSET UNITYSDK_OFFSET(0x8ED4B20)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCLAYOUT_OFFSET UNITYSDK_OFFSET(0x8ED4D30)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCTHEMEEVENT_OFFSET UNITYSDK_OFFSET(0x8ED4F00)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0x8ED4110)
#define RPG_CLIENT_CHESSROGUEBOARDDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED4100)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardDataItem_TypeDefinitionIndex = 53304;

	class ChessRogueBoardDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* _CellDataList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _HistoryCellIDList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* _BoardEventModifiers_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _AllowedSelectCellIDList_k__BackingField; // 0x28
		::System::UInt32 _CurCellID_k__BackingField; // 0x30
		::System::UInt32 _ChessBoardWidth_k__BackingField; // 0x34
		::System::UInt32 _BelongAreaID_k__BackingField; // 0x38
		::System::UInt32 _ChessBoardID_k__BackingField; // 0x3C
		::System::UInt32 _StartCellID_k__BackingField; // 0x40
		::System::UInt32 _BelongAreaLayerID_k__BackingField; // 0x44
		::System::UInt32 _ChessBoardHeight_k__BackingField; // 0x48
		::System::UInt32 _EndCellID_k__BackingField; // 0x4C
		::System::UInt32 _CurBoardEventID_k__BackingField; // 0x50

		::System::Void _ctor(::System::UInt32 chessBoardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM__CTOR_OFFSET))(this, chessBoardID);
		}

		static ::RPG::Client::ChessRogueBoardDataItem* CreateByProto(::Class_1_C9EBDC5976BA7B94* proto)
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::Class_1_C9EBDC5976BA7B94*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_CREATEBYPROTO_OFFSET))(proto);
		}

		static ::RPG::Client::ChessRogueBoardDataItem* CreateByJson(::System::UInt32 chessBoardID, ::System::String* jsonPath)
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_CREATEBYJSON_OFFSET))(chessBoardID, jsonPath);
		}

		static ::RPG::Client::ChessRogueBoardDataItem* CreateBySize(::System::UInt32 chessBoardID, ::System::UInt32 width, ::System::UInt32 height)
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_CREATEBYSIZE_OFFSET))(chessBoardID, width, height);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_C9EBDC5976BA7B94* protoBoard)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9EBDC5976BA7B94*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNC_OFFSET))(this, protoBoard);
		}

		::System::Void SyncCurCellID(::System::UInt32 curCellID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCCURCELLID_OFFSET))(this, curCellID);
		}

		::System::Void SetBelongArea(::System::UInt32 areaID, ::System::UInt32 areaLayerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SETBELONGAREA_OFFSET))(this, areaID, areaLayerID);
		}

		::System::Void SyncLayout(::Class_1_56410FBEF89611C1_1* protoBoardLayout)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_56410FBEF89611C1_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCLAYOUT_OFFSET))(this, protoBoardLayout);
		}

		::System::Void SyncThemeEvent(::Class_1_E473F14F738B1BF5_3* protoTheme)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E473F14F738B1BF5_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCTHEMEEVENT_OFFSET))(this, protoTheme);
		}

		::System::Void SyncAllowedSelectCell(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* allowedSelectCellList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCALLOWEDSELECTCELL_OFFSET))(this, allowedSelectCellList);
		}

		::System::Void SyncHistoryCellIDList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_153*>* historyCellIDList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_153*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SYNCHISTORYCELLIDLIST_OFFSET))(this, historyCellIDList);
		}

		::System::Void AddBoardEventModifier(::Class_1_D495C41F8E3EB0F2* protoModifier)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D495C41F8E3EB0F2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_ADDBOARDEVENTMODIFIER_OFFSET))(this, protoModifier);
		}

		::RPG::GameCore::RogueDLCDifficultyRow* GetBelongAreaLayerDifficultyRow()
		{
			return ((::RPG::GameCore::RogueDLCDifficultyRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETBELONGAREALAYERDIFFICULTYROW_OFFSET))(this);
		}

		::System::Tuple_2<::RPG::GameCore::RogueDLCDifficultyRow*, ::System::Int32>* GetChessRogueDifficultyRowAndCutIndex(::RPG::Client::ChessRogueBoardCellDataItem* cellDataItem)
		{
			return ((::System::Tuple_2<::RPG::GameCore::RogueDLCDifficultyRow*, ::System::Int32>*(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETCHESSROGUEDIFFICULTYROWANDCUTINDEX_OFFSET))(this, cellDataItem);
		}

		::RPG::Client::ChessRogueBoardCellDataItem* GetCellDataItem(::System::UInt32 cellID)
		{
			return ((::RPG::Client::ChessRogueBoardCellDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETCELLDATAITEM_OFFSET))(this, cellID);
		}

		::System::UInt32 GetCellDataItemColNum(::RPG::Client::ChessRogueBoardCellDataItem* cellDataItem)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETCELLDATAITEMCOLNUM_OFFSET))(this, cellDataItem);
		}

		::System::UInt32 GetStartColNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GETSTARTCOLNUM_OFFSET))(this);
		}

		::System::UInt32 get_ChessBoardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CHESSBOARDID_OFFSET))(this);
		}

		::System::Void set_ChessBoardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CHESSBOARDID_OFFSET))(this, value);
		}

		::System::UInt32 get_CurCellID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CURCELLID_OFFSET))(this);
		}

		::System::Void set_CurCellID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CURCELLID_OFFSET))(this, value);
		}

		::System::UInt32 get_BelongAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_BELONGAREAID_OFFSET))(this);
		}

		::System::Void set_BelongAreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_BELONGAREAID_OFFSET))(this, value);
		}

		::System::UInt32 get_BelongAreaLayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_BELONGAREALAYERID_OFFSET))(this);
		}

		::System::Void set_BelongAreaLayerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_BELONGAREALAYERID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* get_CellDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CELLDATALIST_OFFSET))(this);
		}

		::System::Void set_CellDataList(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CELLDATALIST_OFFSET))(this, value);
		}

		::System::UInt32 get_ChessBoardWidth()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CHESSBOARDWIDTH_OFFSET))(this);
		}

		::System::Void set_ChessBoardWidth(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CHESSBOARDWIDTH_OFFSET))(this, value);
		}

		::System::UInt32 get_ChessBoardHeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CHESSBOARDHEIGHT_OFFSET))(this);
		}

		::System::Void set_ChessBoardHeight(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CHESSBOARDHEIGHT_OFFSET))(this, value);
		}

		::System::UInt32 get_StartCellID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_STARTCELLID_OFFSET))(this);
		}

		::System::Void set_StartCellID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_STARTCELLID_OFFSET))(this, value);
		}

		::System::UInt32 get_EndCellID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_ENDCELLID_OFFSET))(this);
		}

		::System::Void set_EndCellID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_ENDCELLID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AllowedSelectCellIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_ALLOWEDSELECTCELLIDLIST_OFFSET))(this);
		}

		::System::Void set_AllowedSelectCellIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_ALLOWEDSELECTCELLIDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_HistoryCellIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_HISTORYCELLIDLIST_OFFSET))(this);
		}

		::System::Void set_HistoryCellIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_HISTORYCELLIDLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_CurBoardEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CURBOARDEVENTID_OFFSET))(this);
		}

		::System::Void set_CurBoardEventID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_CURBOARDEVENTID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* get_BoardEventModifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_BOARDEVENTMODIFIERS_OFFSET))(this);
		}

		::System::Void set_BoardEventModifiers(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_SET_BOARDEVENTMODIFIERS_OFFSET))(this, value);
		}

		::RPG::Client::ChessRogueBoardCellDataItem* get_CurCellDataItem()
		{
			return ((::RPG::Client::ChessRogueBoardCellDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDDATAITEM_GET_CURCELLDATAITEM_OFFSET))(this);
		}
	};
}
