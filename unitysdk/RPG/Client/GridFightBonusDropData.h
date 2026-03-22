#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_2.h"
#include "unitysdk/System/Object.h"

class Class_1_961FA5C09972E05C;

#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9330200)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DROPID_OFFSET UNITYSDK_OFFSET(0x93302D0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DROPTYPE_OFFSET UNITYSDK_OFFSET(0x93302B0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_NUM_OFFSET UNITYSDK_OFFSET(0x93302F0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_DROPID_OFFSET UNITYSDK_OFFSET(0x93302E0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_DROPTYPE_OFFSET UNITYSDK_OFFSET(0x93302C0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_NUM_OFFSET UNITYSDK_OFFSET(0x9330300)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x93302A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusDropData_TypeDefinitionIndex = 51190;

	class GridFightBonusDropData : public ::System::Object
	{
	public:
		::System::UInt32 _Num_k__BackingField; // 0x10
		::Enum_3_F80BFD5B986D5503_2 _DropType_k__BackingField; // 0x14
		::System::UInt32 _DropId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightBonusDropData* Create(::Class_1_961FA5C09972E05C* dropInfo)
		{
			return ((::RPG::Client::GridFightBonusDropData*(*)(::Class_1_961FA5C09972E05C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_CREATE_OFFSET))(dropInfo);
		}

		::Enum_3_F80BFD5B986D5503_2 get_DropType()
		{
			return ((::Enum_3_F80BFD5B986D5503_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DROPTYPE_OFFSET))(this);
		}

		::System::Void set_DropType(::Enum_3_F80BFD5B986D5503_2 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_DROPTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_DropId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DROPID_OFFSET))(this);
		}

		::System::Void set_DropId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_DROPID_OFFSET))(this, value);
		}

		::System::UInt32 get_Num()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_NUM_OFFSET))(this);
		}

		::System::Void set_Num(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_NUM_OFFSET))(this, value);
		}
	};
}
