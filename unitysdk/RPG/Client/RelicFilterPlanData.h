#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_039C79C5129FC60B;
class Class_1_21DCD4640D389503_26;
namespace RPG::Client { class RelicFilterPlanIconData; }
namespace RPG::Client { class RelicFilterPlanSettingsData; }
namespace System { class String; }

#define RPG_CLIENT_RELICFILTERPLANDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9D8B4C0)
#define RPG_CLIENT_RELICFILTERPLANDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9D8B250)
#define RPG_CLIENT_RELICFILTERPLANDATA_FILLTOSERVERDATA_OFFSET UNITYSDK_OFFSET(0x9D8B7D0)
#define RPG_CLIENT_RELICFILTERPLANDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D8B3C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicFilterPlanData_TypeDefinitionIndex = 53265;

	class RelicFilterPlanData : public ::System::Object
	{
	public:
		::RPG::Client::RelicFilterPlanSettingsData* Settings; // 0x10
		::RPG::Client::RelicFilterPlanIconData* Icon; // 0x18
		::System::String* Name; // 0x20
		::System::UInt32 AvatarIdOnCreate; // 0x28
		::System::Boolean IsMarked; // 0x2C
		::System::Int64 UpdateTimestamp; // 0x30
		::System::UInt32 SlotIndex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicFilterPlanData* Create()
		{
			return ((::RPG::Client::RelicFilterPlanData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA_CREATE_OFFSET))();
		}

		static ::RPG::Client::RelicFilterPlanData* Create_1(::Class_1_21DCD4640D389503_26* severData)
		{
			return ((::RPG::Client::RelicFilterPlanData*(*)(::Class_1_21DCD4640D389503_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA_CREATE_1_OFFSET))(severData);
		}

		::System::Void FillToServerData(::Class_1_039C79C5129FC60B* req)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_039C79C5129FC60B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA_FILLTOSERVERDATA_OFFSET))(this, req);
		}
	};
}
