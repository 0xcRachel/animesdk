#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C5CF3D1814B4A2;
class Class_1_52DCEE691286F89A_2;
namespace RPG::Client { class RelicFilterPlanIconData; }
namespace RPG::Client { class RelicFilterPlanSettingsData; }
namespace System { class String; }

#define RPG_CLIENT_RELICFILTERPLANDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA2AC440)
#define RPG_CLIENT_RELICFILTERPLANDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA2AC1D0)
#define RPG_CLIENT_RELICFILTERPLANDATA_FILLTOSERVERDATA_OFFSET UNITYSDK_OFFSET(0xA2AC750)
#define RPG_CLIENT_RELICFILTERPLANDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA2AC340)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicFilterPlanData_TypeDefinitionIndex = 54406;

	class RelicFilterPlanData : public ::System::Object
	{
	public:
		::RPG::Client::RelicFilterPlanIconData* Icon; // 0x10
		::System::String* Name; // 0x18
		::RPG::Client::RelicFilterPlanSettingsData* Settings; // 0x20
		::System::UInt32 SlotIndex; // 0x28
		::System::Int64 UpdateTimestamp; // 0x30
		::System::UInt32 AvatarIdOnCreate; // 0x38
		::System::Boolean IsMarked; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicFilterPlanData* Create()
		{
			return ((::RPG::Client::RelicFilterPlanData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA_CREATE_OFFSET))();
		}

		static ::RPG::Client::RelicFilterPlanData* Create_1(::Class_1_52DCEE691286F89A_2* severData)
		{
			return ((::RPG::Client::RelicFilterPlanData*(*)(::Class_1_52DCEE691286F89A_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA_CREATE_1_OFFSET))(severData);
		}

		::System::Void FillToServerData(::Class_1_21C5CF3D1814B4A2* req)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C5CF3D1814B4A2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA_FILLTOSERVERDATA_OFFSET))(this, req);
		}
	};
}
