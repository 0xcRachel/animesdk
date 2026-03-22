#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_42;

#define RPG_CLIENT_RELICFILTERPLANICONDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9D8B590)
#define RPG_CLIENT_RELICFILTERPLANICONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9D8B3D0)
#define RPG_CLIENT_RELICFILTERPLANICONDATA_FILLTOSERVERDATA_OFFSET UNITYSDK_OFFSET(0x9D8BA80)
#define RPG_CLIENT_RELICFILTERPLANICONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D8BE20)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicFilterPlanIconData_TypeDefinitionIndex = 53267;

	class RelicFilterPlanIconData : public ::System::Object
	{
	public:
		::System::UInt32 IconId; // 0x10
		::System::Boolean IsAvatarIcon; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicFilterPlanIconData* Create()
		{
			return ((::RPG::Client::RelicFilterPlanIconData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONDATA_CREATE_OFFSET))();
		}

		static ::RPG::Client::RelicFilterPlanIconData* Create_1(::Class_1_4CF8088A158DCE25_42* serverData)
		{
			return ((::RPG::Client::RelicFilterPlanIconData*(*)(::Class_1_4CF8088A158DCE25_42*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONDATA_CREATE_1_OFFSET))(serverData);
		}

		::System::Void FillToServerData(::Class_1_4CF8088A158DCE25_42* serverData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_42*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONDATA_FILLTOSERVERDATA_OFFSET))(this, serverData);
		}
	};
}
