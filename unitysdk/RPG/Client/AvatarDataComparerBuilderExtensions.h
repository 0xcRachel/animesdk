#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarDataLevelRaritySortType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class AvatarDataComparerBuilder; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_AVATARDATACOMPARERBUILDEREXTENSIONS_ORDERBYDAMAGETYPEANDID_OFFSET UNITYSDK_OFFSET(0x8CCDD80)
#define RPG_CLIENT_AVATARDATACOMPARERBUILDEREXTENSIONS_ORDERBYDEFAULTHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x8CCDC40)
#define RPG_CLIENT_AVATARDATACOMPARERBUILDEREXTENSIONS_ORDERBYLEVELRARITY_OFFSET UNITYSDK_OFFSET(0x8CCDB70)
#define RPG_CLIENT_AVATARDATACOMPARERBUILDEREXTENSIONS_ORDERBYPINNING_OFFSET UNITYSDK_OFFSET(0x8CCDAB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDataComparerBuilderExtensions_TypeDefinitionIndex = 49660;

	class AvatarDataComparerBuilderExtensions : public ::System::Object
	{
	public:
		static ::RPG::Client::AvatarDataComparerBuilder* OrderByPinning(::RPG::Client::AvatarDataComparerBuilder* builder, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::AvatarData*>* pinned)
		{
			return ((::RPG::Client::AvatarDataComparerBuilder*(*)(::RPG::Client::AvatarDataComparerBuilder*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDEREXTENSIONS_ORDERBYPINNING_OFFSET))(builder, pinned);
		}

		static ::RPG::Client::AvatarDataComparerBuilder* OrderByLevelRarity(::RPG::Client::AvatarDataComparerBuilder* builder, ::RPG::Client::AvatarDataLevelRaritySortType sortType, ::System::Boolean isAscend)
		{
			return ((::RPG::Client::AvatarDataComparerBuilder*(*)(::RPG::Client::AvatarDataComparerBuilder*, ::RPG::Client::AvatarDataLevelRaritySortType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDEREXTENSIONS_ORDERBYLEVELRARITY_OFFSET))(builder, sortType, isAscend);
		}

		static ::RPG::Client::AvatarDataComparerBuilder* OrderByDefaultHighlight(::RPG::Client::AvatarDataComparerBuilder* builder)
		{
			return ((::RPG::Client::AvatarDataComparerBuilder*(*)(::RPG::Client::AvatarDataComparerBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDEREXTENSIONS_ORDERBYDEFAULTHIGHLIGHT_OFFSET))(builder);
		}

		static ::RPG::Client::AvatarDataComparerBuilder* OrderByDamageTypeAndID(::RPG::Client::AvatarDataComparerBuilder* builder)
		{
			return ((::RPG::Client::AvatarDataComparerBuilder*(*)(::RPG::Client::AvatarDataComparerBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDEREXTENSIONS_ORDERBYDAMAGETYPEANDID_OFFSET))(builder);
		}
	};
}
