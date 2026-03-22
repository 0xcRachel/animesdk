#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarDataLevelRaritySortType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_AVATARDATAPRERELEASECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x8CCFA30)
#define RPG_CLIENT_AVATARDATAPRERELEASECOMPARER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8CCFA20)
#define RPG_CLIENT_AVATARDATAPRERELEASECOMPARER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x8CCF500)
#define RPG_CLIENT_AVATARDATAPRERELEASECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCF4F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDataPrereleaseComparer_TypeDefinitionIndex = 49675;

	class AvatarDataPrereleaseComparer : public ::System::Object
	{
	public:
		::System::Comparison_1<::RPG::Client::AvatarData*>* _Compare; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATAPRERELEASECOMPARER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 sortType, ::System::Boolean isAscend, ::System::Boolean includeHighlights)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATAPRERELEASECOMPARER__CTOR_1_OFFSET))(this, sortType, isAscend, includeHighlights);
		}

		::System::Void _ctor_2(::RPG::Client::AvatarDataLevelRaritySortType sortType, ::System::Boolean isAscend, ::System::Boolean includeHighlights)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarDataLevelRaritySortType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATAPRERELEASECOMPARER__CTOR_2_OFFSET))(this, sortType, isAscend, includeHighlights);
		}

		::System::Int32 Compare(::RPG::Client::AvatarData* x, ::RPG::Client::AvatarData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATAPRERELEASECOMPARER_COMPARE_OFFSET))(this, x, y);
		}
	};
}
