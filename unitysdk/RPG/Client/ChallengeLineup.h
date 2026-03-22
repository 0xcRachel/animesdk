#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D8EAED2BCF3F4D39_8;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGELINEUP_GETBUFFID_OFFSET UNITYSDK_OFFSET(0x8E73570)
#define RPG_CLIENT_CHALLENGELINEUP_GETLINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0x8E735E0)
#define RPG_CLIENT_CHALLENGELINEUP_UPDATEBYCHALLENGERECOMMENDLINEUPINFO_OFFSET UNITYSDK_OFFSET(0x8E72E50)
#define RPG_CLIENT_CHALLENGELINEUP__CTOR_OFFSET UNITYSDK_OFFSET(0x8E72CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeLineup_TypeDefinitionIndex = 50087;

	class ChallengeLineup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _BuffIDs; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* _AvatarIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUP__CTOR_OFFSET))(this);
		}

		::System::Void UpdateByChallengeRecommendLineupInfo(::Class_1_D8EAED2BCF3F4D39_8* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUP_UPDATEBYCHALLENGERECOMMENDLINEUPINFO_OFFSET))(this, info);
		}

		::System::UInt32 GetBuffID(::System::Int32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUP_GETBUFFID_OFFSET))(this, index);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarIDs(::System::Int32 index)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUP_GETLINEUPAVATARIDS_OFFSET))(this, index);
		}
	};
}
