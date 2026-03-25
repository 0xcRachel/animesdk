#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ParkourLevel; }
namespace RPG::GameCore { class ParkourLevelGroupRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PARKOURLEVELGROUP_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9F1BD60)
#define RPG_CLIENT_PARKOURLEVELGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x9F1BA30)
#define RPG_CLIENT_PARKOURLEVELGROUP_GETFINISHEDLEVELCOUNT_OFFSET UNITYSDK_OFFSET(0x9F1BB80)
#define RPG_CLIENT_PARKOURLEVELGROUP_GETLEVELBYINDEX_OFFSET UNITYSDK_OFFSET(0x9F1BC50)
#define RPG_CLIENT_PARKOURLEVELGROUP_GETUNLOCKEDBALLID_OFFSET UNITYSDK_OFFSET(0x9F1BCF0)
#define RPG_CLIENT_PARKOURLEVELGROUP_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9F1B580)
#define RPG_CLIENT_PARKOURLEVELGROUP_GET_HASUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9F1B700)
#define RPG_CLIENT_PARKOURLEVELGROUP_GET_ID_OFFSET UNITYSDK_OFFSET(0x9F1B3B0)
#define RPG_CLIENT_PARKOURLEVELGROUP_GET_ISFINALLEVELGROUP_OFFSET UNITYSDK_OFFSET(0x9F1B3D0)
#define RPG_CLIENT_PARKOURLEVELGROUP_GET_ISLONGTAILCHALLENGE_OFFSET UNITYSDK_OFFSET(0x9F1AB00)
#define RPG_CLIENT_PARKOURLEVELGROUP_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x9F1B830)
#define RPG_CLIENT_PARKOURLEVELGROUP_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9F1B5D0)
#define RPG_CLIENT_PARKOURLEVELGROUP_GET_RESPATH_OFFSET UNITYSDK_OFFSET(0x9F1B450)
#define RPG_CLIENT_PARKOURLEVELGROUP_ISFINISHEDALLLEVELS_OFFSET UNITYSDK_OFFSET(0x9F1B3F0)
#define RPG_CLIENT_PARKOURLEVELGROUP_ISUNLOCKALLLEVELS_OFFSET UNITYSDK_OFFSET(0x9F1BAB0)
#define RPG_CLIENT_PARKOURLEVELGROUP_MARKHASSEEN_OFFSET UNITYSDK_OFFSET(0x9F1BE50)
#define RPG_CLIENT_PARKOURLEVELGROUP__CHECKISLONGTAILNEW_OFFSET UNITYSDK_OFFSET(0x9F1B980)
#define RPG_CLIENT_PARKOURLEVELGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x9F1BAA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourLevelGroup_TypeDefinitionIndex = 50210;

	class ParkourLevelGroup : public ::System::Object
	{
	public:
		// static const ::System::UInt32 FinalLevelGroupID = 0x5; // 0x0
		::RPG::GameCore::ParkourLevelGroupRow* _Meta; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ParkourLevel*>* _Levels; // 0x18

		::System::Void _ctor(::RPG::GameCore::ParkourLevelGroupRow* meta, ::System::Collections::Generic::List_1<::RPG::Client::ParkourLevel*>* levels)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParkourLevelGroupRow*, ::System::Collections::Generic::List_1<::RPG::Client::ParkourLevel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP__CTOR_OFFSET))(this, meta, levels);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_IsFinalLevelGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GET_ISFINALLEVELGROUP_OFFSET))(this);
		}

		::System::Boolean get_IsLongTailChallenge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GET_ISLONGTAILCHALLENGE_OFFSET))(this);
		}

		::System::String* get_ResPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GET_RESPATH_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GET_COUNT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_HasUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GET_HASUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GET_ISNEW_OFFSET))(this);
		}

		static ::RPG::Client::ParkourLevelGroup* Create(::RPG::GameCore::ParkourLevelGroupRow* meta, ::System::Collections::Generic::List_1<::RPG::Client::ParkourLevel*>* levels)
		{
			return ((::RPG::Client::ParkourLevelGroup*(*)(::RPG::GameCore::ParkourLevelGroupRow*, ::System::Collections::Generic::List_1<::RPG::Client::ParkourLevel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_CREATE_OFFSET))(meta, levels);
		}

		::System::Boolean IsUnlockAllLevels()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_ISUNLOCKALLLEVELS_OFFSET))(this);
		}

		::System::Boolean IsFinishedAllLevels()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_ISFINISHEDALLLEVELS_OFFSET))(this);
		}

		::System::Int32 GetFinishedLevelCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GETFINISHEDLEVELCOUNT_OFFSET))(this);
		}

		::RPG::Client::ParkourLevel* GetLevelByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::ParkourLevel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GETLEVELBYINDEX_OFFSET))(this, index);
		}

		::System::UInt32 GetUnlockedBallID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GETUNLOCKEDBALLID_OFFSET))(this);
		}

		::System::Boolean Contains(::System::UInt32 levelID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_CONTAINS_OFFSET))(this, levelID);
		}

		::System::Void MarkHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_MARKHASSEEN_OFFSET))(this);
		}

		::System::Boolean _CheckIsLongTailNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP__CHECKISLONGTAILNEW_OFFSET))(this);
		}
	};
}
