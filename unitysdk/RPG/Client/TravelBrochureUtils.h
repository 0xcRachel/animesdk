#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PasterConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAVELBROCHUREUTILS_GETDIARYIMAGEPASTERIDSEXCLUDEOTHERGENDERPASTER_OFFSET UNITYSDK_OFFSET(0x168388C0)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_GETDIARYPASTERCOUNT_OFFSET UNITYSDK_OFFSET(0x168387E0)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_GETDIARYUNLOCKEDPASTERCOUNT_OFFSET UNITYSDK_OFFSET(0x16838BA0)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_GETLOCKEDPASTERCOUNT_OFFSET UNITYSDK_OFFSET(0x16838E60)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_GETPASTERPASTEDDIARYID_OFFSET UNITYSDK_OFFSET(0x16838580)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_HASPASTERDIARYUNLOCKED_OFFSET UNITYSDK_OFFSET(0x16837A40)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_HASTRAVELBROCHUREIDINPASTER_OFFSET UNITYSDK_OFFSET(0x16838770)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_ISDIARYNEW_OFFSET UNITYSDK_OFFSET(0x16838060)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_ISDIARYUNLOCKED_OFFSET UNITYSDK_OFFSET(0x16837F80)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_ISPASTERNEW_OFFSET UNITYSDK_OFFSET(0x16834DE0)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_ISPASTERPASTED_OFFSET UNITYSDK_OFFSET(0x16838720)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_ISPASTERUNLOCKED_OFFSET UNITYSDK_OFFSET(0x16838340)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_RECORDDIARYSEEN_OFFSET UNITYSDK_OFFSET(0x16838230)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_RECORDPASTERSEEN_OFFSET UNITYSDK_OFFSET(0x16838470)

namespace RPG::Client
{
	inline static constexpr unsigned int TravelBrochureUtils_TypeDefinitionIndex = 62863;

	class TravelBrochureUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsDiaryUnlocked(::System::UInt32 diaryID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_ISDIARYUNLOCKED_OFFSET))(diaryID);
		}

		static ::System::Boolean IsDiaryNew(::System::UInt32 diaryID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_ISDIARYNEW_OFFSET))(diaryID);
		}

		static ::System::Void RecordDiarySeen(::System::UInt32 diaryID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_RECORDDIARYSEEN_OFFSET))(diaryID);
		}

		static ::System::Boolean IsPasterUnlocked(::System::UInt32 pasterID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_ISPASTERUNLOCKED_OFFSET))(pasterID);
		}

		static ::System::Boolean IsPasterNew(::System::UInt32 pasterID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_ISPASTERNEW_OFFSET))(pasterID);
		}

		static ::System::Void RecordPasterSeen(::System::UInt32 pasterID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_RECORDPASTERSEEN_OFFSET))(pasterID);
		}

		static ::System::UInt32 GetPasterPastedDiaryID(::System::UInt32 pasterID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_GETPASTERPASTEDDIARYID_OFFSET))(pasterID);
		}

		static ::System::Boolean IsPasterPasted(::System::UInt32 pasterID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_ISPASTERPASTED_OFFSET))(pasterID);
		}

		static ::System::Boolean HasPasterDiaryUnlocked(::System::UInt32 pasterID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_HASPASTERDIARYUNLOCKED_OFFSET))(pasterID);
		}

		static ::System::Boolean HasTravelBrochureIDInPaster(::RPG::GameCore::PasterConfigRow* row, ::System::UInt32 travelBrochureID)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PasterConfigRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_HASTRAVELBROCHUREIDINPASTER_OFFSET))(row, travelBrochureID);
		}

		static ::System::Int32 GetDiaryPasterCount(::System::UInt32 diaryID)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_GETDIARYPASTERCOUNT_OFFSET))(diaryID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetDiaryImagePasterIDsExcludeOtherGenderPaster(::System::UInt32 diaryID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_GETDIARYIMAGEPASTERIDSEXCLUDEOTHERGENDERPASTER_OFFSET))(diaryID);
		}

		static ::System::Int32 GetDiaryUnlockedPasterCount(::System::UInt32 diaryID)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_GETDIARYUNLOCKEDPASTERCOUNT_OFFSET))(diaryID);
		}

		static ::System::Int32 GetLockedPasterCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREUTILS_GETLOCKEDPASTERCOUNT_OFFSET))();
		}
	};
}
