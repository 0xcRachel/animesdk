#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEAVATARDATAHIGHLIGHTCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x91CF020)
#define RPG_CLIENT_FATEAVATARDATAHIGHLIGHTCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x91CEEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateAvatarDataHighlightComparer_TypeDefinitionIndex = 50805;

	class FateAvatarDataHighlightComparer : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _SpecialAvatarID2Order; // 0x10

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* orderedTrialAvatars)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAVATARDATAHIGHLIGHTCOMPARER__CTOR_OFFSET))(this, orderedTrialAvatars);
		}

		::System::Int32 Compare(::RPG::Client::AvatarData* a, ::RPG::Client::AvatarData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAVATARDATAHIGHLIGHTCOMPARER_COMPARE_OFFSET))(this, a, b);
		}
	};
}
