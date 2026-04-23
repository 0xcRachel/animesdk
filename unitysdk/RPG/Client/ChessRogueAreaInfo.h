#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_22;
class Class_1_075C34D03AFA1215_23;
class Class_1_075C34D03AFA1215_24;
class Class_1_2E57B88467AF63C8_3;
class Class_1_FBCD4FF549575A07;
namespace RPG::Client { class ChessRogueAreaDataItem; }
namespace RPG::Client { class ChessRogueAreaLayerDataItem; }
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::GameCore { class RogueDLCBlockTypeRow; }
namespace RPG::GameCore { class RogueDLCLayerRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEAREAINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B3C530)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETACCESSIBLEAREADATALIST_OFFSET UNITYSDK_OFFSET(0x17B3E120)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETAREADATAITEM_OFFSET UNITYSDK_OFFSET(0x17B3C1F0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCHESSROGUEACCESSIBLEAREADATALIST_OFFSET UNITYSDK_OFFSET(0x17B3D720)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCURAREADATAITEM_OFFSET UNITYSDK_OFFSET(0x17B3C260)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCURAREALAYERDATAITEM_OFFSET UNITYSDK_OFFSET(0x17B3C300)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCURBLOCKTYPEROW_OFFSET UNITYSDK_OFFSET(0x17B3E5B0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCURCELLDATAITEM_OFFSET UNITYSDK_OFFSET(0x17B3E290)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCURCHESSBOARDID_OFFSET UNITYSDK_OFFSET(0x17B3C030)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCURROOMID_OFFSET UNITYSDK_OFFSET(0x17B3E630)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETFORMALCHESSROGUEAREADATAITEM_OFFSET UNITYSDK_OFFSET(0x17B3D880)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETFORMALCHESSROGUENOUSAREADATAITEM_OFFSET UNITYSDK_OFFSET(0x17B3EA20)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETLAYERBYINDEX_OFFSET UNITYSDK_OFFSET(0x17B3E690)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETROGUENOUSACCESSIBLEAREADATALIST_OFFSET UNITYSDK_OFFSET(0x17B3DD20)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETUNFINISHEDTUTORIALID_OFFSET UNITYSDK_OFFSET(0x17B3D9E0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_AREADATAITEMDIC_OFFSET UNITYSDK_OFFSET(0x17B3EDB0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x17B3EE90)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREADATAITEM_OFFSET UNITYSDK_OFFSET(0x17B3E960)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREAID_OFFSET UNITYSDK_OFFSET(0x17B3EDD0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREALAYERDATAITEM_OFFSET UNITYSDK_OFFSET(0x17B3EEB0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREALAYERID_OFFSET UNITYSDK_OFFSET(0x17B3EDF0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREALAYERINDEX_OFFSET UNITYSDK_OFFSET(0x17B3EE30)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CUREXTENDDIFFICULTYCOMPINFO_OFFSET UNITYSDK_OFFSET(0x17B3EE50)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURRECORDAREA_OFFSET UNITYSDK_OFFSET(0x17B3D170)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURRECORDCHESSROGUEAREA_OFFSET UNITYSDK_OFFSET(0x17B3F0C0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURRECORDROGUENOUSAREA_OFFSET UNITYSDK_OFFSET(0x17B3F1A0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_HASINPROCESSAREA_OFFSET UNITYSDK_OFFSET(0x17B3F0A0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_HASINPROCESSCHESSROGUEAREA_OFFSET UNITYSDK_OFFSET(0x17B3F130)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_HASINPROCESSROGUENOUSAREA_OFFSET UNITYSDK_OFFSET(0x17B3F210)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_ISINAEONROOM_OFFSET UNITYSDK_OFFSET(0x17B3EE10)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_UNLOCKEDEXTENDDIFFICULTYCOMPINFO_OFFSET UNITYSDK_OFFSET(0x17B3EE70)
#define RPG_CLIENT_CHESSROGUEAREAINFO_INIT_OFFSET UNITYSDK_OFFSET(0x17B3C360)
#define RPG_CLIENT_CHESSROGUEAREAINFO_ISTUTORIALALLFINISHED_OFFSET UNITYSDK_OFFSET(0x17B3EB70)
#define RPG_CLIENT_CHESSROGUEAREAINFO_RESETCURAREASTATUS_OFFSET UNITYSDK_OFFSET(0x17B3D0E0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_AREADATAITEMDIC_OFFSET UNITYSDK_OFFSET(0x17B3EDC0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x17B3EEA0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURAREAID_OFFSET UNITYSDK_OFFSET(0x17B3EDE0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURAREALAYERID_OFFSET UNITYSDK_OFFSET(0x17B3EE00)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURAREALAYERINDEX_OFFSET UNITYSDK_OFFSET(0x17B3EE40)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_CUREXTENDDIFFICULTYCOMPINFO_OFFSET UNITYSDK_OFFSET(0x17B3EE60)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_ISINAEONROOM_OFFSET UNITYSDK_OFFSET(0x17B3EE20)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_UNLOCKEDEXTENDDIFFICULTYCOMPINFO_OFFSET UNITYSDK_OFFSET(0x17B3EE80)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCHESSROGUELEVELINFO_OFFSET UNITYSDK_OFFSET(0x17B3C6B0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCURACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x17B3CBB0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCURAREAID_OFFSET UNITYSDK_OFFSET(0x17B3C8E0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCUREXTENDDIFFICULTYCOMPINFO_OFFSET UNITYSDK_OFFSET(0x17B3D400)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCURLAYERID_OFFSET UNITYSDK_OFFSET(0x17B3C930)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCGAMEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x17B3CC00)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCISINAEONROOM_OFFSET UNITYSDK_OFFSET(0x17B3D090)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCUNLOCKEDAREA_OFFSET UNITYSDK_OFFSET(0x17B3D250)
#define RPG_CLIENT_CHESSROGUEAREAINFO__ADDAREADATAITEM_OFFSET UNITYSDK_OFFSET(0x17B3EC90)
#define RPG_CLIENT_CHESSROGUEAREAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17B3F280)
#define RPG_CLIENT_CHESSROGUEAREAINFO__GETUNFINISHEDROGUENOUSAREAGUIDEAREA_OFFSET UNITYSDK_OFFSET(0x17B3DF00)
#define RPG_CLIENT_CHESSROGUEAREAINFO__INITALLAREADATAITEMSBYEXCEL_OFFSET UNITYSDK_OFFSET(0x17B3C3B0)
#define RPG_CLIENT_CHESSROGUEAREAINFO__SYNCAREAINFO_OFFSET UNITYSDK_OFFSET(0x17B3CC70)
#define RPG_CLIENT_CHESSROGUEAREAINFO__SYNCCURLAYERSTATUS_OFFSET UNITYSDK_OFFSET(0x17B3C990)
#define RPG_CLIENT_CHESSROGUEAREAINFO__SYNCORADDAREAITEM_OFFSET UNITYSDK_OFFSET(0x17B3C7F0)
#define RPG_CLIENT_CHESSROGUEAREAINFO__SYNCUNLOCKEDDIFFICULTYCOMPINFO_OFFSET UNITYSDK_OFFSET(0x17B3CD70)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAreaInfo_TypeDefinitionIndex = 61614;

	class ChessRogueAreaInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAreaDataItem*>* _AreaDataItemDic_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedExtendDifficultyCompInfo_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _CurExtendDifficultyCompInfo_k__BackingField; // 0x20
		::System::Boolean _IsInAeonRoom_k__BackingField; // 0x28
		::System::Int32 _CurActionPoint_k__BackingField; // 0x2C
		::System::UInt32 _CurAreaLayerID_k__BackingField; // 0x30
		::System::UInt32 _CurAreaLayerIndex_k__BackingField; // 0x34
		::System::UInt32 _CurAreaID_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetCurChessBoardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCURCHESSBOARDID_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAreaDataItem* GetAreaDataItem(::System::UInt32 areaID)
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETAREADATAITEM_OFFSET))(this, areaID);
		}

		::RPG::Client::ChessRogueAreaDataItem* GetCurAreaDataItem()
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCURAREADATAITEM_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAreaLayerDataItem* GetCurAreaLayerDataItem()
		{
			return ((::RPG::Client::ChessRogueAreaLayerDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCURAREALAYERDATAITEM_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncChessRogueLevelInfo(::Class_1_2E57B88467AF63C8_3* protoChessRogueLevelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCHESSROGUELEVELINFO_OFFSET))(this, protoChessRogueLevelInfo);
		}

		::System::Void SyncGamePlayInfo(::Class_1_FBCD4FF549575A07* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCGAMEPLAYINFO_OFFSET))(this, info);
		}

		::System::Void SyncCurAreaID(::System::UInt32 curAreaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCURAREAID_OFFSET))(this, curAreaID);
		}

		::System::Void SyncCurLayerID(::System::UInt32 curAreaLayerID, ::System::UInt32 curAreaLayerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCURLAYERID_OFFSET))(this, curAreaLayerID, curAreaLayerIndex);
		}

		::System::Void SyncIsInAeonRoom(::System::Boolean isInAeonRoom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCISINAEONROOM_OFFSET))(this, isInAeonRoom);
		}

		::System::Void SyncCurActionPoint(::System::Int32 actionPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCURACTIONPOINT_OFFSET))(this, actionPoint);
		}

		::System::Void ResetCurAreaStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_RESETCURAREASTATUS_OFFSET))(this);
		}

		::System::Void SyncUnlockedArea(::Class_1_075C34D03AFA1215_24* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCUNLOCKEDAREA_OFFSET))(this, ntf);
		}

		::System::Void SyncCurExtendDifficultyCompInfo(::Class_1_075C34D03AFA1215_22* difficultyCompInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCUREXTENDDIFFICULTYCOMPINFO_OFFSET))(this, difficultyCompInfo);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>* GetChessRogueAccessibleAreaDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCHESSROGUEACCESSIBLEAREADATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>* GetRogueNousAccessibleAreaDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETROGUENOUSACCESSIBLEAREADATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>* GetAccessibleAreaDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETACCESSIBLEAREADATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>* GetFormalChessRogueAreaDataItem()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETFORMALCHESSROGUEAREADATAITEM_OFFSET))(this);
		}

		::RPG::Client::ChessRogueBoardCellDataItem* GetCurCellDataItem()
		{
			return ((::RPG::Client::ChessRogueBoardCellDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCURCELLDATAITEM_OFFSET))(this);
		}

		::RPG::GameCore::RogueDLCBlockTypeRow* GetCurBlockTypeRow()
		{
			return ((::RPG::GameCore::RogueDLCBlockTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCURBLOCKTYPEROW_OFFSET))(this);
		}

		::System::UInt32 GetCurRoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCURROOMID_OFFSET))(this);
		}

		::RPG::GameCore::RogueDLCLayerRow* GetLayerByIndex(::System::Int32 index)
		{
			return ((::RPG::GameCore::RogueDLCLayerRow*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETLAYERBYINDEX_OFFSET))(this, index);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>* GetFormalChessRogueNousAreaDataItem()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETFORMALCHESSROGUENOUSAREADATAITEM_OFFSET))(this);
		}

		::System::Boolean IsTutorialAllFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_ISTUTORIALALLFINISHED_OFFSET))(this);
		}

		::System::UInt32 GetUnFinishedTutorialID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETUNFINISHEDTUTORIALID_OFFSET))(this);
		}

		::System::Void _InitAllAreaDataItemsByExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__INITALLAREADATAITEMSBYEXCEL_OFFSET))(this);
		}

		::System::Void _SyncOrAddAreaItem(::Class_1_2E57B88467AF63C8_3* protoChessRogueLevelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__SYNCORADDAREAITEM_OFFSET))(this, protoChessRogueLevelInfo);
		}

		::System::Void _SyncAreaInfo(::Class_1_FBCD4FF549575A07* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__SYNCAREAINFO_OFFSET))(this, info);
		}

		::System::Void _SyncUnlockedDifficultyCompInfo(::Class_1_075C34D03AFA1215_23* difficultyCompInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__SYNCUNLOCKEDDIFFICULTYCOMPINFO_OFFSET))(this, difficultyCompInfo);
		}

		::System::Void _SyncCurLayerStatus(::Class_1_2E57B88467AF63C8_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__SYNCCURLAYERSTATUS_OFFSET))(this, proto);
		}

		::System::Void _AddAreaDataItem(::RPG::Client::ChessRogueAreaDataItem* dataItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueAreaDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__ADDAREADATAITEM_OFFSET))(this, dataItem);
		}

		::RPG::Client::ChessRogueAreaDataItem* _GetUnFinishedRogueNousAreaGuideArea()
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__GETUNFINISHEDROGUENOUSAREAGUIDEAREA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAreaDataItem*>* get_AreaDataItemDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_AREADATAITEMDIC_OFFSET))(this);
		}

		::System::Void set_AreaDataItemDic(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAreaDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAreaDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_AREADATAITEMDIC_OFFSET))(this, value);
		}

		::System::UInt32 get_CurAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREAID_OFFSET))(this);
		}

		::System::Void set_CurAreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURAREAID_OFFSET))(this, value);
		}

		::System::UInt32 get_CurAreaLayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREALAYERID_OFFSET))(this);
		}

		::System::Void set_CurAreaLayerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURAREALAYERID_OFFSET))(this, value);
		}

		::System::Boolean get_IsInAeonRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_ISINAEONROOM_OFFSET))(this);
		}

		::System::Void set_IsInAeonRoom(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_ISINAEONROOM_OFFSET))(this, value);
		}

		::System::UInt32 get_CurAreaLayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREALAYERINDEX_OFFSET))(this);
		}

		::System::Void set_CurAreaLayerIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURAREALAYERINDEX_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CurExtendDifficultyCompInfo()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CUREXTENDDIFFICULTYCOMPINFO_OFFSET))(this);
		}

		::System::Void set_CurExtendDifficultyCompInfo(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_CUREXTENDDIFFICULTYCOMPINFO_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockedExtendDifficultyCompInfo()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_UNLOCKEDEXTENDDIFFICULTYCOMPINFO_OFFSET))(this);
		}

		::System::Void set_UnlockedExtendDifficultyCompInfo(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_UNLOCKEDEXTENDDIFFICULTYCOMPINFO_OFFSET))(this, value);
		}

		::System::Int32 get_CurActionPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURACTIONPOINT_OFFSET))(this);
		}

		::System::Void set_CurActionPoint(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURACTIONPOINT_OFFSET))(this, value);
		}

		::RPG::Client::ChessRogueAreaLayerDataItem* get_CurAreaLayerDataItem()
		{
			return ((::RPG::Client::ChessRogueAreaLayerDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREALAYERDATAITEM_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAreaDataItem* get_CurAreaDataItem()
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREADATAITEM_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAreaDataItem* get_CurRecordArea()
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURRECORDAREA_OFFSET))(this);
		}

		::System::Boolean get_HasInProcessArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_HASINPROCESSAREA_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAreaDataItem* get_CurRecordChessRogueArea()
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURRECORDCHESSROGUEAREA_OFFSET))(this);
		}

		::System::Boolean get_HasInProcessChessRogueArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_HASINPROCESSCHESSROGUEAREA_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAreaDataItem* get_CurRecordRogueNousArea()
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURRECORDROGUENOUSAREA_OFFSET))(this);
		}

		::System::Boolean get_HasInProcessRogueNousArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_HASINPROCESSROGUENOUSAREA_OFFSET))(this);
		}
	};
}
