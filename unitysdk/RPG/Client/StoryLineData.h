#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_465;
class Class_1_1AF243935D06EF67;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class StoryLineConfigRow; }
namespace RPG::GameCore { class StoryLineUIDataRow; }
namespace RPG::GameCore { class StroyLineTrialAvatarDataRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STORYLINEDATA_CANSWITCH_OFFSET UNITYSDK_OFFSET(0x9FD38A0)
#define RPG_CLIENT_STORYLINEDATA_CREATEBRANCHLINE_OFFSET UNITYSDK_OFFSET(0x9FD2ED0)
#define RPG_CLIENT_STORYLINEDATA_CREATEMAINLINE_OFFSET UNITYSDK_OFFSET(0x9FD2D90)
#define RPG_CLIENT_STORYLINEDATA_GETALLFLOORIDS_OFFSET UNITYSDK_OFFSET(0x9FD4010)
#define RPG_CLIENT_STORYLINEDATA_GETCONTENTID_OFFSET UNITYSDK_OFFSET(0x9FD4170)
#define RPG_CLIENT_STORYLINEDATA_GETSTORYLINEFLOOR_OFFSET UNITYSDK_OFFSET(0x9FD3F60)
#define RPG_CLIENT_STORYLINEDATA_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x9FD3D40)
#define RPG_CLIENT_STORYLINEDATA_GET_CHRONICLEICONPATH_OFFSET UNITYSDK_OFFSET(0x9FD2B90)
#define RPG_CLIENT_STORYLINEDATA_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x9FD2A90)
#define RPG_CLIENT_STORYLINEDATA_GET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0x9FD2A30)
#define RPG_CLIENT_STORYLINEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9FD2910)
#define RPG_CLIENT_STORYLINEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9FD28E0)
#define RPG_CLIENT_STORYLINEDATA_GET_ISMAINLINE_OFFSET UNITYSDK_OFFSET(0x9FD2900)
#define RPG_CLIENT_STORYLINEDATA_GET_ISSKIPJOINLINEUP_OFFSET UNITYSDK_OFFSET(0x9FD2BF0)
#define RPG_CLIENT_STORYLINEDATA_GET_LARGEFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x9FD29D0)
#define RPG_CLIENT_STORYLINEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9FD2AF0)
#define RPG_CLIENT_STORYLINEDATA_GET_PORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x9FD2970)
#define RPG_CLIENT_STORYLINEDATA_ISFLOORUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9FD3EF0)
#define RPG_CLIENT_STORYLINEDATA_ONACTIVATED_OFFSET UNITYSDK_OFFSET(0x9FD31C0)
#define RPG_CLIENT_STORYLINEDATA_ONDEACTIVATED_OFFSET UNITYSDK_OFFSET(0x9FD3180)
#define RPG_CLIENT_STORYLINEDATA_ONGETHEROBASICTYPEINFO_OFFSET UNITYSDK_OFFSET(0x9FD3410)
#define RPG_CLIENT_STORYLINEDATA_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x9FD3560)
#define RPG_CLIENT_STORYLINEDATA_SETMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0x9FD33C0)
#define RPG_CLIENT_STORYLINEDATA_SETTRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9FD3990)
#define RPG_CLIENT_STORYLINEDATA_SETUNLOCKBYSERVER_OFFSET UNITYSDK_OFFSET(0x9FD3CF0)
#define RPG_CLIENT_STORYLINEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9FD28F0)
#define RPG_CLIENT_STORYLINEDATA__CREATETRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x9FD32C0)
#define RPG_CLIENT_STORYLINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FD2D10)
#define RPG_CLIENT_STORYLINEDATA__GETSTORYLINETRIALAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9FD2CA0)
#define RPG_CLIENT_STORYLINEDATA__GETSTORYLINEUIDATAROW_OFFSET UNITYSDK_OFFSET(0x9FD3460)
#define RPG_CLIENT_STORYLINEDATA__INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9FD2E80)
#define RPG_CLIENT_STORYLINEDATA__INITSTORYLINEFLOORDATA_OFFSET UNITYSDK_OFFSET(0x9FD2FF0)
#define RPG_CLIENT_STORYLINEDATA__ISITEMVISIBLE_OFFSET UNITYSDK_OFFSET(0x9FD4290)
#define RPG_CLIENT_STORYLINEDATA__PREPAREFLOORDATA_OFFSET UNITYSDK_OFFSET(0x9FD3780)

namespace RPG::Client
{
	inline static constexpr unsigned int StoryLineData_TypeDefinitionIndex = 53930;

	class StoryLineData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 MAIN_LINE_ID = 0x0; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _TrialAvatarIDs; // 0x10
		::RPG::GameCore::StoryLineUIDataRow* _UIDataRow; // 0x18
		::Class_0_16E4307DCC419505_465* _UnlockChecker; // 0x20
		::RPG::GameCore::StoryLineConfigRow* _StoryLineRow; // 0x28
		::System::Collections::Generic::List_1<::Class_1_1AF243935D06EF67*>* _StoryLineFloors; // 0x30
		::RPG::GameCore::StroyLineTrialAvatarDataRow* _TrialAvatarData; // 0x38
		::System::Boolean _Activated; // 0x40
		::System::Boolean _MissionDataReady; // 0x41
		::System::Boolean _UnlockByServer; // 0x42
		::System::UInt32 _ID_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean get_IsMainLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_ISMAINLINE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_PortraitPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_PORTRAITPATH_OFFSET))(this);
		}

		::System::String* get_LargeFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_LARGEFIGUREPATH_OFFSET))(this);
		}

		::System::String* get_FigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_FIGUREPATH_OFFSET))(this);
		}

		::System::String* get_Color()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_COLOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_ChronicleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_CHRONICLEICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsSkipJoinLineup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_ISSKIPJOINLINEUP_OFFSET))(this);
		}

		static ::RPG::Client::StoryLineData* CreateMainLine()
		{
			return ((::RPG::Client::StoryLineData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_CREATEMAINLINE_OFFSET))();
		}

		static ::RPG::Client::StoryLineData* CreateBranchLine(::RPG::GameCore::StoryLineConfigRow* row)
		{
			return ((::RPG::Client::StoryLineData*(*)(::RPG::GameCore::StoryLineConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_CREATEBRANCHLINE_OFFSET))(row);
		}

		::System::Void OnDeactivated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_ONDEACTIVATED_OFFSET))(this);
		}

		::System::Void OnActivated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_ONACTIVATED_OFFSET))(this);
		}

		::System::Void SetMissionDataReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_SETMISSIONDATAREADY_OFFSET))(this, value);
		}

		::System::Void OnGetHeroBasicTypeInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_ONGETHEROBASICTYPEINFO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_PREPAREDATA_OFFSET))(this);
		}

		::System::Boolean CanSwitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_CANSWITCH_OFFSET))(this);
		}

		::System::Void SetTrialAvatarIDs(::System::Collections::Generic::IList_1<::System::UInt32>* ids)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_SETTRIALAVATARIDS_OFFSET))(this, ids);
		}

		::System::Void SetUnlockByServer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_SETUNLOCKBYSERVER_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GETTRIALAVATARS_OFFSET))(this);
		}

		::System::Boolean IsFloorUnlocked(::System::UInt32 floorID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_ISFLOORUNLOCKED_OFFSET))(this, floorID);
		}

		::Class_1_1AF243935D06EF67* GetStoryLineFloor(::System::UInt32 floorID)
		{
			return ((::Class_1_1AF243935D06EF67*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GETSTORYLINEFLOOR_OFFSET))(this, floorID);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* GetAllFloorIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GETALLFLOORIDS_OFFSET))(this);
		}

		::System::UInt32 GetContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GETCONTENTID_OFFSET))(this);
		}

		::System::Void _Initialize(::System::UInt32 storyLineID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__INITIALIZE_OFFSET))(this, storyLineID);
		}

		::RPG::GameCore::StoryLineUIDataRow* _GetStoryLineUIDataRow()
		{
			return ((::RPG::GameCore::StoryLineUIDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__GETSTORYLINEUIDATAROW_OFFSET))(this);
		}

		::RPG::GameCore::StroyLineTrialAvatarDataRow* _GetStoryLineTrialAvatarData()
		{
			return ((::RPG::GameCore::StroyLineTrialAvatarDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__GETSTORYLINETRIALAVATARDATA_OFFSET))(this);
		}

		::System::Void _CreateTrialAvatars()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__CREATETRIALAVATARS_OFFSET))(this);
		}

		::System::Boolean _IsItemVisible(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__ISITEMVISIBLE_OFFSET))(this, itemID);
		}

		::System::Void _InitStoryLineFloorData(::System::UInt32 storyLineID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__INITSTORYLINEFLOORDATA_OFFSET))(this, storyLineID);
		}

		::RPG::Client::Promises::IPromise* _PrepareFloorData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__PREPAREFLOORDATA_OFFSET))(this);
		}
	};
}
