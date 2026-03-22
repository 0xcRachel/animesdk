#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimMapSurfaceConfig; }

#define CLASS_1_51553107642C877A_GET_POSITIONINFACE_OFFSET UNITYSDK_OFFSET(0x9EA5660)
#define CLASS_1_51553107642C877A_GET_SURFACEID_OFFSET UNITYSDK_OFFSET(0x9EA5640)
#define CLASS_1_51553107642C877A_METHOD_1_4EC38B34F0D76336_OFFSET UNITYSDK_OFFSET(0x9EA55C0)
#define CLASS_1_51553107642C877A_SET_POSITIONINFACE_OFFSET UNITYSDK_OFFSET(0x9EA5670)
#define CLASS_1_51553107642C877A_SET_SURFACEID_OFFSET UNITYSDK_OFFSET(0x9EA5650)
#define CLASS_1_51553107642C877A__CTOR_OFFSET UNITYSDK_OFFSET(0x9EA5630)

inline static constexpr unsigned int Class_1_51553107642C877A_TypeDefinitionIndex = 59636;

class Class_1_51553107642C877A : public ::System::Object
{
public:
	::System::UInt32 _SurfaceID_k__BackingField; // 0x10
	::RPG::MVector2 _PositionInFace_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51553107642C877A__CTOR_OFFSET))(this);
	}

	static ::Class_1_51553107642C877A* Method_1_4EC38B34F0D76336(::RPG::GameCore::FiveDimMapSurfaceConfig* a1)
	{
		return ((::Class_1_51553107642C877A*(*)(::RPG::GameCore::FiveDimMapSurfaceConfig*))((::PBYTE)hIl2Cpp + CLASS_1_51553107642C877A_METHOD_1_4EC38B34F0D76336_OFFSET))(a1);
	}

	::System::UInt32 get_SurfaceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51553107642C877A_GET_SURFACEID_OFFSET))(this);
	}

	::System::Void set_SurfaceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_51553107642C877A_SET_SURFACEID_OFFSET))(this, value);
	}

	::RPG::MVector2 get_PositionInFace()
	{
		return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51553107642C877A_GET_POSITIONINFACE_OFFSET))(this);
	}

	::System::Void set_PositionInFace(::RPG::MVector2 value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_51553107642C877A_SET_POSITIONINFACE_OFFSET))(this, value);
	}
};
