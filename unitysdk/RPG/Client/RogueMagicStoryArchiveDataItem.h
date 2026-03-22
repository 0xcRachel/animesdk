#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicStoryCategory.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueMagicContentDisplayRow; }
namespace RPG::GameCore { class RogueMagicStoryRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x9E1A2F0)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0x9E1B2B0)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0x9E1B050)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_ISHIDE_OFFSET UNITYSDK_OFFSET(0x9E1A930)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x9E1A990)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_LEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0x9E1AFE0)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9E1B1C0)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9E1B070)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_STORYIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9E1B240)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_UNLOCKDISPLAYTEXT_OFFSET UNITYSDK_OFFSET(0x9E1B450)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_PLAYSTORYREPLAY_OFFSET UNITYSDK_OFFSET(0x9E1ACF0)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0x9E1B060)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9E19FF0)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9E1ACE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicStoryArchiveDataItem_TypeDefinitionIndex = 53594;

	class RogueMagicStoryArchiveDataItem : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueMagicStoryRow* _Row; // 0x10
		::RPG::GameCore::RogueMagicContentDisplayRow* _DisplayRow; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM__CTOR_OFFSET))(this, id);
		}

		::System::Void _ctor_1(::System::UInt32 id, ::RPG::GameCore::RogueMagicStoryRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RogueMagicStoryRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM__CTOR_1_OFFSET))(this, id, row);
		}

		::System::Void PlayStoryReplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_PLAYSTORYREPLAY_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_ISUNLOCK_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicStoryRow* get_Row()
		{
			return ((::RPG::GameCore::RogueMagicStoryRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicStoryCategory get_Category()
		{
			return ((::RPG::GameCore::RogueMagicStoryCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_CATEGORY_OFFSET))(this);
		}

		::System::String* get_LevelGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_LEVELGRAPHPATH_OFFSET))(this);
		}

		::System::String* get_StoryImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_STORYIMAGEPATH_OFFSET))(this);
		}

		::System::Boolean get_IsHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_ISHIDE_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicContentDisplayRow* get_DisplayRow()
		{
			return ((::RPG::GameCore::RogueMagicContentDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_DISPLAYROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockDisplayText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVEDATAITEM_GET_UNLOCKDISPLAYTEXT_OFFSET))(this);
		}
	};
}
