#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B33C6EDD7227DE6C;
namespace RPG::Client { class AvatarData; }

#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_CREATEFROMPROTO_OFFSET UNITYSDK_OFFSET(0x92369B0)
#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x9236A30)
#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_GET_ISUPGRADEDINHISTORY_OFFSET UNITYSDK_OFFSET(0x9236D60)
#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_GET_LEVELINHISTORY_OFFSET UNITYSDK_OFFSET(0x9236D80)
#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_SET_ISUPGRADEDINHISTORY_OFFSET UNITYSDK_OFFSET(0x9236D70)
#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_SET_LEVELINHISTORY_OFFSET UNITYSDK_OFFSET(0x9236D90)
#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x92368E0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateStatisticsAvatarDataItem_TypeDefinitionIndex = 50909;

	class FateStatisticsAvatarDataItem : public ::System::Object
	{
	public:
		::RPG::Client::AvatarData* _AvatarData; // 0x10
		::System::Boolean _IsUpgradedInHistory_k__BackingField; // 0x18
		::System::UInt32 _LevelInHistory_k__BackingField; // 0x1C

		::System::Void _ctor(::Class_1_B33C6EDD7227DE6C* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B33C6EDD7227DE6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSAVATARDATAITEM__CTOR_OFFSET))(this, proto);
		}

		static ::RPG::Client::FateStatisticsAvatarDataItem* CreateFromProto(::Class_1_B33C6EDD7227DE6C* proto)
		{
			return ((::RPG::Client::FateStatisticsAvatarDataItem*(*)(::Class_1_B33C6EDD7227DE6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_CREATEFROMPROTO_OFFSET))(proto);
		}

		::RPG::Client::AvatarData* get_AvatarData()
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_GET_AVATARDATA_OFFSET))(this);
		}

		::System::Boolean get_IsUpgradedInHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_GET_ISUPGRADEDINHISTORY_OFFSET))(this);
		}

		::System::Void set_IsUpgradedInHistory(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_SET_ISUPGRADEDINHISTORY_OFFSET))(this, value);
		}

		::System::UInt32 get_LevelInHistory()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_GET_LEVELINHISTORY_OFFSET))(this);
		}

		::System::Void set_LevelInHistory(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_SET_LEVELINHISTORY_OFFSET))(this, value);
		}
	};
}
