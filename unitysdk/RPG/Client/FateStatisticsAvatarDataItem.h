#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_66C20D6C355B068E_1;
namespace RPG::Client { class IAvatarInfoProvider; }

#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_CREATEFROMPROTO_OFFSET UNITYSDK_OFFSET(0x17923620)
#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x179236A0)
#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_GET_ISUPGRADEDINHISTORY_OFFSET UNITYSDK_OFFSET(0x17923910)
#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_GET_LEVELINHISTORY_OFFSET UNITYSDK_OFFSET(0x17923930)
#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_SET_ISUPGRADEDINHISTORY_OFFSET UNITYSDK_OFFSET(0x17923920)
#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_SET_LEVELINHISTORY_OFFSET UNITYSDK_OFFSET(0x17923940)
#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17923550)

namespace RPG::Client
{
	inline static constexpr unsigned int FateStatisticsAvatarDataItem_TypeDefinitionIndex = 58993;

	class FateStatisticsAvatarDataItem : public ::System::Object
	{
	public:
		::RPG::Client::IAvatarInfoProvider* _AvatarData; // 0x10
		::System::UInt32 _LevelInHistory_k__BackingField; // 0x18
		::System::Boolean _IsUpgradedInHistory_k__BackingField; // 0x1C

		::System::Void _ctor(::Class_1_66C20D6C355B068E_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_66C20D6C355B068E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSAVATARDATAITEM__CTOR_OFFSET))(this, proto);
		}

		static ::RPG::Client::FateStatisticsAvatarDataItem* CreateFromProto(::Class_1_66C20D6C355B068E_1* proto)
		{
			return ((::RPG::Client::FateStatisticsAvatarDataItem*(*)(::Class_1_66C20D6C355B068E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_CREATEFROMPROTO_OFFSET))(proto);
		}

		::RPG::Client::IAvatarInfoProvider* get_AvatarData()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_GET_AVATARDATA_OFFSET))(this);
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
