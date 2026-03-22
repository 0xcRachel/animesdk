#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_3C58D309C7A040F5_14;
class Class_1_C9EBDC5976BA7B94;
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::Client { class ChessRogueBoardDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8ED37C0)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFOREBOARDDATAITEM_OFFSET UNITYSDK_OFFSET(0x8ED3AE0)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFORECELLDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0x8ED40A0)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFORECELLDATAITEM_OFFSET UNITYSDK_OFFSET(0x8ED3840)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETMODIFIEREFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x8ED3990)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_HASCELLCHANGE_OFFSET UNITYSDK_OFFSET(0x8ED3A30)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_HASMODIFIER_OFFSET UNITYSDK_OFFSET(0x8ED3930)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED37B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardChangeData_TypeDefinitionIndex = 53302;

	class ChessRogueBoardChangeData : public ::System::Object
	{
	public:
		::Class_1_C9EBDC5976BA7B94* _ChessBoard; // 0x10
		::Class_1_3C58D309C7A040F5_14* _ModifierInfo; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* _BeforeCellDataList; // 0x20

		::System::Void _ctor(::Class_1_3C58D309C7A040F5_14* modifierInfo, ::Class_1_C9EBDC5976BA7B94* chessBoard)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3C58D309C7A040F5_14*, ::Class_1_C9EBDC5976BA7B94*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA__CTOR_OFFSET))(this, modifierInfo, chessBoard);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChessRogueBoardCellDataItem* GetBeforeCellDataItem(::System::UInt32 cellID)
		{
			return ((::RPG::Client::ChessRogueBoardCellDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFORECELLDATAITEM_OFFSET))(this, cellID);
		}

		::System::Boolean HasModifier()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_HASMODIFIER_OFFSET))(this);
		}

		::RPG::GameCore::ModifierEffectType GetModifierEffectType()
		{
			return ((::RPG::GameCore::ModifierEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETMODIFIEREFFECTTYPE_OFFSET))(this);
		}

		::System::Boolean HasCellChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_HASCELLCHANGE_OFFSET))(this);
		}

		::RPG::Client::ChessRogueBoardDataItem* GetBeforeBoardDataItem()
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFOREBOARDDATAITEM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* GetBeforeCellDataItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFORECELLDATAITEMLIST_OFFSET))(this);
		}
	};
}
