#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarDataLevelRaritySortType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class AvatarDataCompositeComparer; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS_TRYSETLEVELRARITYISASCEND_OFFSET UNITYSDK_OFFSET(0x8CCE770)
#define RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS_TRYSETLEVELRARITYSORTTYPE_1_OFFSET UNITYSDK_OFFSET(0x8CCE720)
#define RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS_TRYSETLEVELRARITYSORTTYPE_OFFSET UNITYSDK_OFFSET(0x8CCE650)
#define RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS_TRYSETPINNED_OFFSET UNITYSDK_OFFSET(0x8CCE570)
#define RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS_TRYVISITCOMPARERSWITHTYPE_1_OFFSET UNITYSDK_OFFSET(0x8CCE0E0)
#define RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS_TRYVISITCOMPARERSWITHTYPE_OFFSET UNITYSDK_OFFSET(0x8CCDFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDataComparerExtensions_TypeDefinitionIndex = 49663;

	class AvatarDataComparerExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean TryVisitComparersWithType(::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>* comparer, ::System::Type* type, ::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*>* visit)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*, ::System::Type*, ::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS_TRYVISITCOMPARERSWITHTYPE_OFFSET))(comparer, type, visit);
		}

		static ::System::Boolean TryVisitComparersWithType_1(::RPG::Client::AvatarDataCompositeComparer* comparer, ::System::Type* type, ::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*>* visit)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarDataCompositeComparer*, ::System::Type*, ::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS_TRYVISITCOMPARERSWITHTYPE_1_OFFSET))(comparer, type, visit);
		}

		static ::System::Boolean TrySetPinned(::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>* comparer, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::AvatarData*>* pinned)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS_TRYSETPINNED_OFFSET))(comparer, pinned);
		}

		static ::System::Boolean TrySetLevelRaritySortType(::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>* comparer, ::RPG::Client::AvatarDataLevelRaritySortType sortType)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*, ::RPG::Client::AvatarDataLevelRaritySortType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS_TRYSETLEVELRARITYSORTTYPE_OFFSET))(comparer, sortType);
		}

		static ::System::Boolean TrySetLevelRaritySortType_1(::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>* comparer, ::System::Int32 sortType)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS_TRYSETLEVELRARITYSORTTYPE_1_OFFSET))(comparer, sortType);
		}

		static ::System::Boolean TrySetLevelRarityIsAscend(::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>* comparer, ::System::Boolean isAscend)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPAREREXTENSIONS_TRYSETLEVELRARITYISASCEND_OFFSET))(comparer, isAscend);
		}
	};
}
