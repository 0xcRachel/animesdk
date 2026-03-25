#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PerformanceRecallRow; }
namespace System { class String; }

#define CLASS_1_90269F040CBA17C9_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xEA89650)
#define CLASS_1_90269F040CBA17C9_GET_PERFORMANCEPATH_OFFSET UNITYSDK_OFFSET(0xEA89670)
#define CLASS_1_90269F040CBA17C9_GET_PERFORMANCETYPE_OFFSET UNITYSDK_OFFSET(0xEA89610)
#define CLASS_1_90269F040CBA17C9_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xEA89630)
#define CLASS_1_90269F040CBA17C9_GET_ROW_OFFSET UNITYSDK_OFFSET(0xEA895A0)
#define CLASS_1_90269F040CBA17C9_METHOD_1_018FF68C61BA285D_OFFSET UNITYSDK_OFFSET(0xEA89330)
#define CLASS_1_90269F040CBA17C9_METHOD_1_3175CE94BDA1B5BB_OFFSET UNITYSDK_OFFSET(0xEA89390)
#define CLASS_1_90269F040CBA17C9_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xEA895C0)
#define CLASS_1_90269F040CBA17C9_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xEA89660)
#define CLASS_1_90269F040CBA17C9_SET_PERFORMANCEPATH_OFFSET UNITYSDK_OFFSET(0xEA89680)
#define CLASS_1_90269F040CBA17C9_SET_PERFORMANCETYPE_OFFSET UNITYSDK_OFFSET(0xEA89620)
#define CLASS_1_90269F040CBA17C9_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0xEA89640)
#define CLASS_1_90269F040CBA17C9_SET_ROW_OFFSET UNITYSDK_OFFSET(0xEA895B0)
#define CLASS_1_90269F040CBA17C9__CTOR_OFFSET UNITYSDK_OFFSET(0xEA89590)

inline static constexpr unsigned int Class_1_90269F040CBA17C9_TypeDefinitionIndex = 54035;

class Class_1_90269F040CBA17C9 : public ::System::Object
{
public:
	::RPG::GameCore::PerformanceRecallRow* _Row_k__BackingField; // 0x10
	::System::String* _PerformancePath_k__BackingField; // 0x18
	::System::UInt32 _PlaneID_k__BackingField; // 0x20
	::RPG::GameCore::ELevelPerformanceType _PerformanceType_k__BackingField; // 0x24
	::System::UInt32 _FloorID_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90269F040CBA17C9__CTOR_OFFSET))(this);
	}

	static ::Class_1_90269F040CBA17C9* Method_1_018FF68C61BA285D(::System::UInt32 a1)
	{
		return ((::Class_1_90269F040CBA17C9*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_90269F040CBA17C9_METHOD_1_018FF68C61BA285D_OFFSET))(a1);
	}

	static ::Class_1_90269F040CBA17C9* Method_1_3175CE94BDA1B5BB(::RPG::GameCore::PerformanceRecallRow* a1)
	{
		return ((::Class_1_90269F040CBA17C9*(*)(::RPG::GameCore::PerformanceRecallRow*))((::PBYTE)hIl2Cpp + CLASS_1_90269F040CBA17C9_METHOD_1_3175CE94BDA1B5BB_OFFSET))(a1);
	}

	::RPG::GameCore::PerformanceRecallRow* get_Row()
	{
		return ((::RPG::GameCore::PerformanceRecallRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90269F040CBA17C9_GET_ROW_OFFSET))(this);
	}

	::System::Void set_Row(::RPG::GameCore::PerformanceRecallRow* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceRecallRow*))((::PBYTE)hIl2Cpp + CLASS_1_90269F040CBA17C9_SET_ROW_OFFSET))(this, value);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90269F040CBA17C9_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::RPG::GameCore::ELevelPerformanceType get_PerformanceType()
	{
		return ((::RPG::GameCore::ELevelPerformanceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90269F040CBA17C9_GET_PERFORMANCETYPE_OFFSET))(this);
	}

	::System::Void set_PerformanceType(::RPG::GameCore::ELevelPerformanceType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + CLASS_1_90269F040CBA17C9_SET_PERFORMANCETYPE_OFFSET))(this, value);
	}

	::System::UInt32 get_PlaneID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90269F040CBA17C9_GET_PLANEID_OFFSET))(this);
	}

	::System::Void set_PlaneID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_90269F040CBA17C9_SET_PLANEID_OFFSET))(this, value);
	}

	::System::UInt32 get_FloorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90269F040CBA17C9_GET_FLOORID_OFFSET))(this);
	}

	::System::Void set_FloorID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_90269F040CBA17C9_SET_FLOORID_OFFSET))(this, value);
	}

	::System::String* get_PerformancePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90269F040CBA17C9_GET_PERFORMANCEPATH_OFFSET))(this);
	}

	::System::Void set_PerformancePath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_90269F040CBA17C9_SET_PERFORMANCEPATH_OFFSET))(this, value);
	}
};
