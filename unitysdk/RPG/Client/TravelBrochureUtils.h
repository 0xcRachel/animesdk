#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PasterConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAVELBROCHUREUTILS_GETDIARYIMAGEPASTERIDSEXCLUDEOTHERGENDERPASTER_OFFSET UNITYSDK_OFFSET(0xA109E60)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_GETDIARYPASTERCOUNT_OFFSET UNITYSDK_OFFSET(0xA109D80)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_GETDIARYUNLOCKEDPASTERCOUNT_OFFSET UNITYSDK_OFFSET(0xA10A140)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_GETLOCKEDPASTERCOUNT_OFFSET UNITYSDK_OFFSET(0xA10A400)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_GETPASTERPASTEDDIARYID_OFFSET UNITYSDK_OFFSET(0xA109B20)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_HASPASTERDIARYUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA109010)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_HASTRAVELBROCHUREIDINPASTER_OFFSET UNITYSDK_OFFSET(0xA109D10)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_ISDIARYNEW_OFFSET UNITYSDK_OFFSET(0xA109600)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_ISDIARYUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA109520)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_ISPASTERNEW_OFFSET UNITYSDK_OFFSET(0xA1063B0)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_ISPASTERPASTED_OFFSET UNITYSDK_OFFSET(0xA109CC0)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_ISPASTERUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA1098E0)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_RECORDDIARYSEEN_OFFSET UNITYSDK_OFFSET(0xA1097D0)
#define RPG_CLIENT_TRAVELBROCHUREUTILS_RECORDPASTERSEEN_OFFSET UNITYSDK_OFFSET(0xA109A10)

namespace RPG::Client
{
	inline static constexpr unsigned int TravelBrochureUtils_TypeDefinitionIndex = 54102;

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
