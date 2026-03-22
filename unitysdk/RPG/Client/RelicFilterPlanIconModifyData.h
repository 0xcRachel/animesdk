#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1CCC2A2977D8F5A;
namespace RPG::Client { class RelicFilterPlanIconData; }

#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9D8BEA0)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_GET_ICON_OFFSET UNITYSDK_OFFSET(0x9D8BE60)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x9D8BE40)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_GET_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9D8BE80)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_SET_ICON_OFFSET UNITYSDK_OFFSET(0x9D8BE70)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x9D8BE50)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_SET_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9D8BE90)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D8BE30)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicFilterPlanIconModifyData_TypeDefinitionIndex = 53270;

	class RelicFilterPlanIconModifyData : public ::System::Object
	{
	public:
		::RPG::Client::RelicFilterPlanIconData* _Icon_k__BackingField; // 0x10
		::System::UInt32 _SlotIndex_k__BackingField; // 0x18
		::System::Int64 _UpdateTimestamp_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_SlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void set_SlotIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_SET_SLOTINDEX_OFFSET))(this, value);
		}

		::RPG::Client::RelicFilterPlanIconData* get_Icon()
		{
			return ((::RPG::Client::RelicFilterPlanIconData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_GET_ICON_OFFSET))(this);
		}

		::System::Void set_Icon(::RPG::Client::RelicFilterPlanIconData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicFilterPlanIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_SET_ICON_OFFSET))(this, value);
		}

		::System::Int64 get_UpdateTimestamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_GET_UPDATETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_UpdateTimestamp(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_SET_UPDATETIMESTAMP_OFFSET))(this, value);
		}

		static ::RPG::Client::RelicFilterPlanIconModifyData* Create(::Class_1_B1CCC2A2977D8F5A* serverData)
		{
			return ((::RPG::Client::RelicFilterPlanIconModifyData*(*)(::Class_1_B1CCC2A2977D8F5A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_CREATE_OFFSET))(serverData);
		}
	};
}
