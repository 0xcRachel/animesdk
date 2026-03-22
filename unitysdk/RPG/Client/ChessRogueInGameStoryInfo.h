#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_20;
class Class_1_3756699ADE3ED0BC_1;
class Class_1_61AB926B0DCFDD4A_2;
class Class_1_6CF32442E7A80121;
class Class_1_FA4F4A67B1C04320_170;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8ED79A0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GETRECOMMENDEDSUBSTORYID_OFFSET UNITYSDK_OFFSET(0x8EDF3B0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GETTRIGGEREDSUBSTORYID_OFFSET UNITYSDK_OFFSET(0x8EDF340)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_CURMAINSTORYID_OFFSET UNITYSDK_OFFSET(0x8EDF630)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_CURSUBSTORYID_OFFSET UNITYSDK_OFFSET(0x8EDF650)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_HASUNFINISHEDSUBSTORY_OFFSET UNITYSDK_OFFSET(0x8EDF670)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_RECOMMENDEDSUBSTORYIDS_OFFSET UNITYSDK_OFFSET(0x8EDF780)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_SUBSTORYSELECTEDOPTIONDIALOGUEEVENTIDS_OFFSET UNITYSDK_OFFSET(0x8EDF760)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_WAITINGSUBSTORYFINISHLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x8EDF6D0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_INIT_OFFSET UNITYSDK_OFFSET(0x8ED7600)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_CURMAINSTORYID_OFFSET UNITYSDK_OFFSET(0x8EDF640)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_CURSUBSTORYID_OFFSET UNITYSDK_OFFSET(0x8EDF660)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_SUBSTORYSELECTEDOPTIONDIALOGUEEVENTIDS_OFFSET UNITYSDK_OFFSET(0x8EDF770)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_1_OFFSET UNITYSDK_OFFSET(0x8ED9F50)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_2_OFFSET UNITYSDK_OFFSET(0x8EDF420)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_3_OFFSET UNITYSDK_OFFSET(0x8EDF490)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_4_OFFSET UNITYSDK_OFFSET(0x8EDF5A0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x8ED9D40)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED7430)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueInGameStoryInfo_TypeDefinitionIndex = 53352;

	class ChessRogueInGameStoryInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _TriggeredSubStoryIDs; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SubStorySelectedOptionDialogueEventIDs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _RecommendedSubStoryIDs; // 0x20
		::System::UInt32 _WaitingSubStoryFinishLayerIndex; // 0x28
		::System::UInt32 _CurSubStoryID_k__BackingField; // 0x2C
		::System::UInt32 _CurMainStoryID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 GetTriggeredSubStoryID(::System::Int32 layerIndex)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GETTRIGGEREDSUBSTORYID_OFFSET))(this, layerIndex);
		}

		::System::UInt32 GetRecommendedSubStoryID(::System::Int32 layerIndex)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GETRECOMMENDEDSUBSTORYID_OFFSET))(this, layerIndex);
		}

		::System::Void Sync(::Class_1_61AB926B0DCFDD4A_2* proto, ::System::UInt32 curLayerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_61AB926B0DCFDD4A_2*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_OFFSET))(this, proto, curLayerIndex);
		}

		::System::Void Sync_1(::Class_1_3756699ADE3ED0BC_1* proto, ::System::UInt32 curLayerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3756699ADE3ED0BC_1*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_1_OFFSET))(this, proto, curLayerIndex);
		}

		::System::Void Sync_2(::Class_1_FA4F4A67B1C04320_170* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_170*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_2_OFFSET))(this, proto);
		}

		::System::Void Sync_3(::Class_1_120319518E6F6581_20* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_3_OFFSET))(this, proto);
		}

		::System::Void Sync_4(::Class_1_6CF32442E7A80121* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_4_OFFSET))(this, proto);
		}

		::System::UInt32 get_CurMainStoryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_CURMAINSTORYID_OFFSET))(this);
		}

		::System::Void set_CurMainStoryID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_CURMAINSTORYID_OFFSET))(this, value);
		}

		::System::UInt32 get_CurSubStoryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_CURSUBSTORYID_OFFSET))(this);
		}

		::System::Void set_CurSubStoryID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_CURSUBSTORYID_OFFSET))(this, value);
		}

		::System::Boolean get_HasUnfinishedSubStory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_HASUNFINISHEDSUBSTORY_OFFSET))(this);
		}

		::System::UInt32 get_WaitingSubStoryFinishLayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_WAITINGSUBSTORYFINISHLAYERINDEX_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_SubStorySelectedOptionDialogueEventIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_SUBSTORYSELECTEDOPTIONDIALOGUEEVENTIDS_OFFSET))(this);
		}

		::System::Void set_SubStorySelectedOptionDialogueEventIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_SUBSTORYSELECTEDOPTIONDIALOGUEEVENTIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RecommendedSubStoryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_RECOMMENDEDSUBSTORYIDS_OFFSET))(this);
		}
	};
}
