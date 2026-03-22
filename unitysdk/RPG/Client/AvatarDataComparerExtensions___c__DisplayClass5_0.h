#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCE830)
#define RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS___C__DISPLAYCLASS5_0__TRYSETLEVELRARITYISASCEND_B__0_OFFSET UNITYSDK_OFFSET(0x8CCE8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDataComparerExtensions___c__DisplayClass5_0_TypeDefinitionIndex = 49666;

	class AvatarDataComparerExtensions___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Boolean isAscend; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _TrySetLevelRarityIsAscend_b__0(::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>* match)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS___C__DISPLAYCLASS5_0__TRYSETLEVELRARITYISASCEND_B__0_OFFSET))(this, match);
		}
	};
}
