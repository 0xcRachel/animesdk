#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkConditionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraGalleryTalkRow; }

#define RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x8F27140)
#define RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_NUMBEREDTITLE_OFFSET UNITYSDK_OFFSET(0x8F26F80)
#define RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_SORT_OFFSET UNITYSDK_OFFSET(0x8F26C60)
#define RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x8F26F00)
#define RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET__ROW_OFFSET UNITYSDK_OFFSET(0x8F27150)
#define RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x8F25BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGalleryTalkGroupEntry_TypeDefinitionIndex = 50363;

	class ChimeraGalleryTalkGroupEntry : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraTalkConditionType _ConditionType_k__BackingField; // 0x10

		::System::Void _ctor(::RPG::GameCore::ChimeraTalkConditionType conditionType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraTalkConditionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY__CTOR_OFFSET))(this, conditionType);
		}

		::RPG::GameCore::ChimeraTalkConditionType get_ConditionType()
		{
			return ((::RPG::GameCore::ChimeraTalkConditionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_CONDITIONTYPE_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraGalleryTalkRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraGalleryTalkRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_NumberedTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_NUMBEREDTITLE_OFFSET))(this);
		}

		::System::Single get_Sort()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYTALKGROUPENTRY_GET_SORT_OFFSET))(this);
		}
	};
}
