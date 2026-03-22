#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_105C447813563BDD;
class Class_1_5FEFAED860528596_17;
class Class_1_D495C41F8E3EB0F2;
class Class_1_E7C4009BCC22497A_5;
namespace RPG::Client { class ChessRogueAeonDataItem; }
namespace RPG::Client { class ChessRogueModifierDataItem; }
namespace RPG::Client { class RogueAeonBuffInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEAEONINFO_ADDAEONMODIFIER_OFFSET UNITYSDK_OFFSET(0x8ECBC00)
#define RPG_CLIENT_CHESSROGUEAEONINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8ECB5A0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GETCHESSROGUEAEONSORTEDDATA_OFFSET UNITYSDK_OFFSET(0x8ECBD00)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_AEONBUFFINFO_OFFSET UNITYSDK_OFFSET(0x8ECBF00)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_AEONMODIFIERS_OFFSET UNITYSDK_OFFSET(0x8ECBEE0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_CHESSROGUEAEONDATADICT_OFFSET UNITYSDK_OFFSET(0x8ECBE60)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_CURAEONMODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x8ECBEC0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTABLEAEONIDLIST_OFFSET UNITYSDK_OFFSET(0x8ECBE80)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTEDAEONDATA_OFFSET UNITYSDK_OFFSET(0x8ECBFE0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTEDAEONID_OFFSET UNITYSDK_OFFSET(0x8ECBEA0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_INIT_OFFSET UNITYSDK_OFFSET(0x8ECB380)
#define RPG_CLIENT_CHESSROGUEAEONINFO_RESETPARAMS_OFFSET UNITYSDK_OFFSET(0x8ECBB50)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_AEONMODIFIERS_OFFSET UNITYSDK_OFFSET(0x8ECBEF0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_CHESSROGUEAEONDATADICT_OFFSET UNITYSDK_OFFSET(0x8ECBE70)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_CURAEONMODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x8ECBED0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_SELECTABLEAEONIDLIST_OFFSET UNITYSDK_OFFSET(0x8ECBE90)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_SELECTEDAEONID_OFFSET UNITYSDK_OFFSET(0x8ECBEB0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SYNCCHESSROGUEAEONINFO_OFFSET UNITYSDK_OFFSET(0x8ECB8C0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SYNCCHESSROGUEAEONMODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x8ECBBA0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SYNCROGUENOUSBRANCH_OFFSET UNITYSDK_OFFSET(0x8ECBCB0)
#define RPG_CLIENT_CHESSROGUEAEONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8ECC060)
#define RPG_CLIENT_CHESSROGUEAEONINFO__INITCHESSROGUEAEONDATAS_OFFSET UNITYSDK_OFFSET(0x8ECB3D0)
#define RPG_CLIENT_CHESSROGUEAEONINFO__REFRESHAEONMODIFIERS_OFFSET UNITYSDK_OFFSET(0x8ECBA10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAeonInfo_TypeDefinitionIndex = 53279;

	class ChessRogueAeonInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* _AeonModifiers_k__BackingField; // 0x10
		::RPG::Client::RogueAeonBuffInfo* _AeonBuffInfo; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>* _ChessRogueAeonDataDict_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectableAeonIDList_k__BackingField; // 0x28
		::System::Int32 _CurAeonModifierValue_k__BackingField; // 0x30
		::System::UInt32 _SelectedAeonID_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncChessRogueAeonInfo(::Class_1_5FEFAED860528596_17* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SYNCCHESSROGUEAEONINFO_OFFSET))(this, proto);
		}

		::System::Void ResetParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_RESETPARAMS_OFFSET))(this);
		}

		::System::Void SyncChessRogueAeonModifierValue(::System::UInt32 aeonID, ::System::Int32 aeonModifierValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SYNCCHESSROGUEAEONMODIFIERVALUE_OFFSET))(this, aeonID, aeonModifierValue);
		}

		::System::Void AddAeonModifier(::Class_1_D495C41F8E3EB0F2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D495C41F8E3EB0F2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_ADDAEONMODIFIER_OFFSET))(this, proto);
		}

		::System::Void SyncRogueNousBranch(::Class_1_105C447813563BDD* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_105C447813563BDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SYNCROGUENOUSBRANCH_OFFSET))(this, info);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAeonDataItem*>* GetChessRogueAeonSortedData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAeonDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GETCHESSROGUEAEONSORTEDDATA_OFFSET))(this);
		}

		::System::Void _InitChessRogueAeonDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO__INITCHESSROGUEAEONDATAS_OFFSET))(this);
		}

		::System::Void _RefreshAeonModifiers(::Class_1_E7C4009BCC22497A_5* protoMofiModifiers)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO__REFRESHAEONMODIFIERS_OFFSET))(this, protoMofiModifiers);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>* get_ChessRogueAeonDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_CHESSROGUEAEONDATADICT_OFFSET))(this);
		}

		::System::Void set_ChessRogueAeonDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_CHESSROGUEAEONDATADICT_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectableAeonIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTABLEAEONIDLIST_OFFSET))(this);
		}

		::System::Void set_SelectableAeonIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_SELECTABLEAEONIDLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_SelectedAeonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTEDAEONID_OFFSET))(this);
		}

		::System::Void set_SelectedAeonID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_SELECTEDAEONID_OFFSET))(this, value);
		}

		::System::Int32 get_CurAeonModifierValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_CURAEONMODIFIERVALUE_OFFSET))(this);
		}

		::System::Void set_CurAeonModifierValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_CURAEONMODIFIERVALUE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* get_AeonModifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_AEONMODIFIERS_OFFSET))(this);
		}

		::System::Void set_AeonModifiers(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_AEONMODIFIERS_OFFSET))(this, value);
		}

		::RPG::Client::RogueAeonBuffInfo* get_AeonBuffInfo()
		{
			return ((::RPG::Client::RogueAeonBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_AEONBUFFINFO_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAeonDataItem* get_SelectedAeonData()
		{
			return ((::RPG::Client::ChessRogueAeonDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTEDAEONDATA_OFFSET))(this);
		}
	};
}
