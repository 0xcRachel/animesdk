#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5FEFAED860528596_42;
namespace RPG::Client { class RelicFilterPlanData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICFILTERPLANDATAGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x9D8BAE0)
#define RPG_CLIENT_RELICFILTERPLANDATAGROUP_GETCOUNT_OFFSET UNITYSDK_OFFSET(0x9D8BDD0)
#define RPG_CLIENT_RELICFILTERPLANDATAGROUP_GETRELICFILTERPLANDATA_OFFSET UNITYSDK_OFFSET(0x9D8BD40)
#define RPG_CLIENT_RELICFILTERPLANDATAGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x9D8BBB0)
#define RPG_CLIENT_RELICFILTERPLANDATAGROUP__SYNC_OFFSET UNITYSDK_OFFSET(0x9D8BC00)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicFilterPlanDataGroup_TypeDefinitionIndex = 53264;

	class RelicFilterPlanDataGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RelicFilterPlanData*>* _RelicFilterPlanData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATAGROUP__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicFilterPlanDataGroup* Create(::Class_1_5FEFAED860528596_42* serverData)
		{
			return ((::RPG::Client::RelicFilterPlanDataGroup*(*)(::Class_1_5FEFAED860528596_42*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATAGROUP_CREATE_OFFSET))(serverData);
		}

		::System::Void _Sync(::Class_1_5FEFAED860528596_42* serverData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_42*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATAGROUP__SYNC_OFFSET))(this, serverData);
		}

		::RPG::Client::RelicFilterPlanData* GetRelicFilterPlanData(::System::Int32 index)
		{
			return ((::RPG::Client::RelicFilterPlanData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATAGROUP_GETRELICFILTERPLANDATA_OFFSET))(this, index);
		}

		::System::Int32 GetCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATAGROUP_GETCOUNT_OFFSET))(this);
		}
	};
}
