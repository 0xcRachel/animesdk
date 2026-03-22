#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_142.h"

class Class_1_6E708EAB438EC183_15;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA_GETADDEDMAZEBUFFIDS_OFFSET UNITYSDK_OFFSET(0x8ED3670)
#define RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA_GET_DECAYIDLIST_OFFSET UNITYSDK_OFFSET(0x8ED3790)
#define RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA_SET_DECAYIDLIST_OFFSET UNITYSDK_OFFSET(0x8ED37A0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED2720)
#define RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA__SYNCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x8ED3560)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardCellDecayData_TypeDefinitionIndex = 53299;

	class ChessRogueBoardCellDecayData : public ::Class_1_43BD383C98B4C0C5_142
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _DecayIDList_k__BackingField; // 0x10

		::System::Void _ctor(::Class_1_6E708EAB438EC183_15* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA__CTOR_OFFSET))(this, info);
		}

		::System::Void _SyncExtraInfo(::Class_1_6E708EAB438EC183_15* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA__SYNCEXTRAINFO_OFFSET))(this, info);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAddedMazeBuffIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA_GETADDEDMAZEBUFFIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DecayIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA_GET_DECAYIDLIST_OFFSET))(this);
		}

		::System::Void set_DecayIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLDECAYDATA_SET_DECAYIDLIST_OFFSET))(this, value);
		}
	};
}
