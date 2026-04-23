#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class LiveRoomIconUiData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITSERVICE_STARTSERVICE_OFFSET UNITYSDK_OFFSET(0x1730FF80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x173104A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITSERVICE__FINDDEFAULTICONIDBYHEROAVATAR_OFFSET UNITYSDK_OFFSET(0x17310390)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int ShowLiveRoomIconEditService_TypeDefinitionIndex = 69425;

	class ShowLiveRoomIconEditService : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void StartService()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITSERVICE_STARTSERVICE_OFFSET))(this);
		}

		::System::UInt32 _FindDefaultIconIdByHeroAvatar(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::LiveRoomIconUiData*>* headIconUiDatas)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::LiveRoomIconUiData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITSERVICE__FINDDEFAULTICONIDBYHEROAVATAR_OFFSET))(this, headIconUiDatas);
		}
	};
}
