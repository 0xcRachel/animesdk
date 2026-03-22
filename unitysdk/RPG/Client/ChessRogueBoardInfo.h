#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C9EBDC5976BA7B94;
namespace RPG::Client { class ChessRogueBoardDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHESSROGUEBOARDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8ED57C0)
#define RPG_CLIENT_CHESSROGUEBOARDINFO_GETBOARDDATAITEMBYBELONG_OFFSET UNITYSDK_OFFSET(0x8ECFE90)
#define RPG_CLIENT_CHESSROGUEBOARDINFO_GETBOARDDATAITEMBYBOARDID_OFFSET UNITYSDK_OFFSET(0x8ED0FB0)
#define RPG_CLIENT_CHESSROGUEBOARDINFO_QUITCHESSROGUE_OFFSET UNITYSDK_OFFSET(0x8ED5D10)
#define RPG_CLIENT_CHESSROGUEBOARDINFO_SYNCBOARDITEM_OFFSET UNITYSDK_OFFSET(0x8ED5940)
#define RPG_CLIENT_CHESSROGUEBOARDINFO__ADDCHESSBOARDDATAITEM_OFFSET UNITYSDK_OFFSET(0x8ED5B60)
#define RPG_CLIENT_CHESSROGUEBOARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED57B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardInfo_TypeDefinitionIndex = 53306;

	class ChessRogueBoardInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueBoardDataItem*>* _ChessBoardDataItems; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncBoardItem(::Class_1_C9EBDC5976BA7B94* protoBoard, ::System::UInt32 belongAreaID, ::System::UInt32 belongAreaLayerID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9EBDC5976BA7B94*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDINFO_SYNCBOARDITEM_OFFSET))(this, protoBoard, belongAreaID, belongAreaLayerID);
		}

		::System::Void QuitChessRogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDINFO_QUITCHESSROGUE_OFFSET))(this);
		}

		::RPG::Client::ChessRogueBoardDataItem* GetBoardDataItemByBoardID(::System::UInt32 boardID)
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDINFO_GETBOARDDATAITEMBYBOARDID_OFFSET))(this, boardID);
		}

		::RPG::Client::ChessRogueBoardDataItem* GetBoardDataItemByBelong(::System::UInt32 belongAreaID, ::System::UInt32 belongAreaLayerID)
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDINFO_GETBOARDDATAITEMBYBELONG_OFFSET))(this, belongAreaID, belongAreaLayerID);
		}

		::RPG::Client::ChessRogueBoardDataItem* _AddChessBoardDataItem(::Class_1_C9EBDC5976BA7B94* protoBoard)
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::PVOID, ::Class_1_C9EBDC5976BA7B94*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDINFO__ADDCHESSBOARDDATAITEM_OFFSET))(this, protoBoard);
		}
	};
}
