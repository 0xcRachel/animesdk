#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGridEffectType.h"
#include "unitysdk/RPG/Client/GridFightPlacementType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_138;
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGRIDDATA_ADDEFFECT_OFFSET UNITYSDK_OFFSET(0x1754F0A0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_CLEAREFFECTS_OFFSET UNITYSDK_OFFSET(0x1754F130)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GETEFFECTS_OFFSET UNITYSDK_OFFSET(0x1754F280)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GETEFFECT_OFFSET UNITYSDK_OFFSET(0x1754F1A0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GETFORGE_OFFSET UNITYSDK_OFFSET(0x1754F310)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GETNPC_OFFSET UNITYSDK_OFFSET(0x1754F380)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GETPROJECTION_OFFSET UNITYSDK_OFFSET(0x1754F3F0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GETROLE_OFFSET UNITYSDK_OFFSET(0x1754EF80)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_HASITEM_OFFSET UNITYSDK_OFFSET(0x1754F660)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONBACK_OFFSET UNITYSDK_OFFSET(0x1754F500)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONBENCH_OFFSET UNITYSDK_OFFSET(0x1754F550)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONBOARD_OFFSET UNITYSDK_OFFSET(0x1754EDC0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONFRONT_OFFSET UNITYSDK_OFFSET(0x1754F4B0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONOVERCROWD_OFFSET UNITYSDK_OFFSET(0x1754F5A0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x1754F670)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_PLACEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x1754F5F0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_PLACEMENT_OFFSET UNITYSDK_OFFSET(0x1754F460)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x1754F640)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_REMOVEMEMBER_OFFSET UNITYSDK_OFFSET(0x1754F2C0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_SETMEMBER_OFFSET UNITYSDK_OFFSET(0x1754F050)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_SET_MEMBER_OFFSET UNITYSDK_OFFSET(0x1754F680)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x1754F650)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1754EFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridData_TypeDefinitionIndex = 59680;

	class GridFightGridData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_138*>* _Effects; // 0x10
		::RPG::Client::GridFightGridMember* _Member_k__BackingField; // 0x18
		::System::UInt32 _PosIndex_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 posIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA__CTOR_OFFSET))(this, posIndex);
		}

		::System::Boolean SetMember(::RPG::Client::GridFightGridMember* member)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_SETMEMBER_OFFSET))(this, member);
		}

		::System::Void AddEffect(::Class_1_43BD383C98B4C0C5_138* effect)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_138*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_ADDEFFECT_OFFSET))(this, effect);
		}

		::System::Void ClearEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_CLEAREFFECTS_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_138* GetEffect(::RPG::Client::GridFightGridEffectType type)
		{
			return ((::Class_1_43BD383C98B4C0C5_138*(*)(::PVOID, ::RPG::Client::GridFightGridEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GETEFFECT_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_138*>* GetEffects()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_138*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GETEFFECTS_OFFSET))(this);
		}

		::RPG::Client::GridFightGridMember* RemoveMember()
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_REMOVEMEMBER_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GETROLE_OFFSET))(this);
		}

		::RPG::Client::GridFightForgeItemData* GetForge()
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GETFORGE_OFFSET))(this);
		}

		::RPG::Client::GridFightNPC* GetNPC()
		{
			return ((::RPG::Client::GridFightNPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GETNPC_OFFSET))(this);
		}

		::RPG::Client::GridFightProjection* GetProjection()
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GETPROJECTION_OFFSET))(this);
		}

		::RPG::Client::GridFightPlacementType get_Placement()
		{
			return ((::RPG::Client::GridFightPlacementType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_PLACEMENT_OFFSET))(this);
		}

		::System::Boolean get_IsOnFront()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONFRONT_OFFSET))(this);
		}

		::System::Boolean get_IsOnBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONBACK_OFFSET))(this);
		}

		::System::Boolean get_IsOnBoard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONBOARD_OFFSET))(this);
		}

		::System::Boolean get_IsOnBench()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONBENCH_OFFSET))(this);
		}

		::System::Boolean get_IsOnOvercrowd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONOVERCROWD_OFFSET))(this);
		}

		::System::UInt32 get_PlacementIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_PLACEMENTINDEX_OFFSET))(this);
		}

		::System::UInt32 get_PosIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_POSINDEX_OFFSET))(this);
		}

		::System::Void set_PosIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_SET_POSINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_HasItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_HASITEM_OFFSET))(this);
		}

		::RPG::Client::GridFightGridMember* get_Member()
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_MEMBER_OFFSET))(this);
		}

		::System::Void set_Member(::RPG::Client::GridFightGridMember* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_SET_MEMBER_OFFSET))(this, value);
		}
	};
}
