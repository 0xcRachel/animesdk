#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CatGroundType.h"
#include "unitysdk/RPG/GameCore/CakeValidAreaType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_902742FEC03162EB_GET_AREAPOSITION_OFFSET UNITYSDK_OFFSET(0xCD74BB0)
#define CLASS_1_902742FEC03162EB_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0xCD74B50)
#define CLASS_1_902742FEC03162EB_GET_POSE_OFFSET UNITYSDK_OFFSET(0xCD74B90)
#define CLASS_1_902742FEC03162EB_GET_SLOT_OFFSET UNITYSDK_OFFSET(0xCD74B70)
#define CLASS_1_902742FEC03162EB_SET_AREAPOSITION_OFFSET UNITYSDK_OFFSET(0xCD74BC0)
#define CLASS_1_902742FEC03162EB_SET_AREATYPE_OFFSET UNITYSDK_OFFSET(0xCD74B60)
#define CLASS_1_902742FEC03162EB_SET_POSE_OFFSET UNITYSDK_OFFSET(0xCD74BA0)
#define CLASS_1_902742FEC03162EB_SET_SLOT_OFFSET UNITYSDK_OFFSET(0xCD74B80)
#define CLASS_1_902742FEC03162EB__CTOR_OFFSET UNITYSDK_OFFSET(0xCD74BD0)

inline static constexpr unsigned int Class_1_902742FEC03162EB_TypeDefinitionIndex = 58023;

class Class_1_902742FEC03162EB : public ::System::Object
{
public:
	::RPG::Client::TrainCakeCatchExhibitController_CatGroundType _Pose_k__BackingField; // 0x10
	::RPG::GameCore::CakeValidAreaType _AreaType_k__BackingField; // 0x14
	::System::UInt32 _AreaPosition_k__BackingField; // 0x18
	::System::UInt32 _Slot_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_902742FEC03162EB__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::CakeValidAreaType get_AreaType()
	{
		return ((::RPG::GameCore::CakeValidAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_902742FEC03162EB_GET_AREATYPE_OFFSET))(this);
	}

	::System::Void set_AreaType(::RPG::GameCore::CakeValidAreaType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeValidAreaType))((::PBYTE)hIl2Cpp + CLASS_1_902742FEC03162EB_SET_AREATYPE_OFFSET))(this, value);
	}

	::System::UInt32 get_Slot()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_902742FEC03162EB_GET_SLOT_OFFSET))(this);
	}

	::System::Void set_Slot(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_902742FEC03162EB_SET_SLOT_OFFSET))(this, value);
	}

	::RPG::Client::TrainCakeCatchExhibitController_CatGroundType get_Pose()
	{
		return ((::RPG::Client::TrainCakeCatchExhibitController_CatGroundType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_902742FEC03162EB_GET_POSE_OFFSET))(this);
	}

	::System::Void set_Pose(::RPG::Client::TrainCakeCatchExhibitController_CatGroundType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + CLASS_1_902742FEC03162EB_SET_POSE_OFFSET))(this, value);
	}

	::System::UInt32 get_AreaPosition()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_902742FEC03162EB_GET_AREAPOSITION_OFFSET))(this);
	}

	::System::Void set_AreaPosition(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_902742FEC03162EB_SET_AREAPOSITION_OFFSET))(this, value);
	}
};
