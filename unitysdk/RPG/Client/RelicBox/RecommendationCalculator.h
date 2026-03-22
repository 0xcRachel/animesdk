#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_CALCULATERANK_OFFSET UNITYSDK_OFFSET(0x9D85B40)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_CHANGEAVATAR_OFFSET UNITYSDK_OFFSET(0x9D85820)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x9D85790)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GETAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9D857E0)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GETRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x9D85A10)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GETSUBPROPERTYMATCHCOUNT_1_OFFSET UNITYSDK_OFFSET(0x9D85A50)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GETSUBPROPERTYMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0x9D859B0)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GET__AVATARID_OFFSET UNITYSDK_OFFSET(0x9D85910)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_ISMATCHMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0x9D85930)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_ISSPECIALRELICMAINTYPE_OFFSET UNITYSDK_OFFSET(0x9D85BA0)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9D857D0)

namespace RPG::Client::RelicBox
{
	inline static constexpr unsigned int RecommendationCalculator_TypeDefinitionIndex = 59455;

	class RecommendationCalculator : public ::System::Object
	{
	public:
		::RPG::Client::RelicRecommendData* _RecommendData; // 0x10
		::RPG::Client::RelicItemData* _RelicItemData; // 0x18
		::RPG::Client::AvatarData* _AvatarData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicBox::RecommendationCalculator* Create()
		{
			return ((::RPG::Client::RelicBox::RecommendationCalculator*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_CREATE_OFFSET))();
		}

		::RPG::Client::AvatarData* GetAvatarData()
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GETAVATARDATA_OFFSET))(this);
		}

		::System::Void ChangeAvatar(::System::UInt32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_CHANGEAVATAR_OFFSET))(this, avatarId);
		}

		::System::Boolean IsMatchMainProperty(::RPG::Client::RelicItemData* relic)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_ISMATCHMAINPROPERTY_OFFSET))(this, relic);
		}

		::System::UInt32 GetSubPropertyMatchCount(::RPG::Client::RelicItemData* relic)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GETSUBPROPERTYMATCHCOUNT_OFFSET))(this, relic);
		}

		::RPG::Client::RelicRecommendData* GetRecommendData()
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GETRECOMMENDDATA_OFFSET))(this);
		}

		::System::UInt32 GetSubPropertyMatchCount_1(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* relicDatas)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GETSUBPROPERTYMATCHCOUNT_1_OFFSET))(this, relicDatas);
		}

		::RPG::Client::RelicSmartSuit::RankType CalculateRank(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* relicDatas)
		{
			return ((::RPG::Client::RelicSmartSuit::RankType(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_CALCULATERANK_OFFSET))(this, relicDatas);
		}

		static ::System::Boolean IsSpecialRelicMainType(::System::UInt32 avatarID, ::RPG::Client::RelicItemData* relic)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_ISSPECIALRELICMAINTYPE_OFFSET))(avatarID, relic);
		}

		::System::UInt32 get__AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GET__AVATARID_OFFSET))(this);
		}
	};
}
