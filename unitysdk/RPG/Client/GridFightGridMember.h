#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGridMemberType.h"
#include "unitysdk/RPG/Client/GridFightPlacementType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONBACK_OFFSET UNITYSDK_OFFSET(0x1754B200)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONBENCH_OFFSET UNITYSDK_OFFSET(0x1754F8C0)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONBOARD_OFFSET UNITYSDK_OFFSET(0x1754B170)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONFRONT_OFFSET UNITYSDK_OFFSET(0x1754C100)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONOVERCROWD_OFFSET UNITYSDK_OFFSET(0x1754F920)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_PLACEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x1754F980)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_PLACEMENT_OFFSET UNITYSDK_OFFSET(0x1754F870)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x1754F9D0)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1754F850)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x1754F9E0)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1754F860)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1754FA70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridMember_TypeDefinitionIndex = 59694;

	class GridFightGridMember : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::UInt32 _UniqueID_k__BackingField; // 0x18
		::System::UInt32 _PosIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_SET_UNIQUEID_OFFSET))(this, value);
		}

		::RPG::Client::GridFightPlacementType get_Placement()
		{
			return ((::RPG::Client::GridFightPlacementType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_PLACEMENT_OFFSET))(this);
		}

		::System::Boolean get_IsOnFront()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONFRONT_OFFSET))(this);
		}

		::System::Boolean get_IsOnBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONBACK_OFFSET))(this);
		}

		::System::Boolean get_IsOnBoard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONBOARD_OFFSET))(this);
		}

		::System::Boolean get_IsOnBench()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONBENCH_OFFSET))(this);
		}

		::System::Boolean get_IsOnOvercrowd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONOVERCROWD_OFFSET))(this);
		}

		::System::UInt32 get_PlacementIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_PLACEMENTINDEX_OFFSET))(this);
		}

		::System::UInt32 get_PosIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_POSINDEX_OFFSET))(this);
		}

		::System::Void set_PosIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_SET_POSINDEX_OFFSET))(this, value);
		}
	};
}
