#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarDataLevelRaritySortType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCE710)
#define RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS___C__DISPLAYCLASS3_0__TRYSETLEVELRARITYSORTTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x8CCE890)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDataComparerExtensions___c__DisplayClass3_0_TypeDefinitionIndex = 49665;

	class AvatarDataComparerExtensions___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::AvatarDataLevelRaritySortType sortType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _TrySetLevelRaritySortType_b__0(::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>* match)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS___C__DISPLAYCLASS3_0__TRYSETLEVELRARITYSORTTYPE_B__0_OFFSET))(this, match);
		}
	};
}
