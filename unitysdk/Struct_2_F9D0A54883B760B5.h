#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_F9D0A54883B760B5_GET_AGGRO_OFFSET UNITYSDK_OFFSET(0x2E784E0)
#define STRUCT_2_F9D0A54883B760B5_GET_HPBASE_OFFSET UNITYSDK_OFFSET(0x66AF90)
#define STRUCT_2_F9D0A54883B760B5_GET_HPINHERIT_OFFSET UNITYSDK_OFFSET(0x66B7B0)
#define STRUCT_2_F9D0A54883B760B5_GET_HPSKILL_OFFSET UNITYSDK_OFFSET(0x6668A0)
#define STRUCT_2_F9D0A54883B760B5_GET_SPEEDBASE_OFFSET UNITYSDK_OFFSET(0x66C010)
#define STRUCT_2_F9D0A54883B760B5_GET_SPEEDINHERIT_OFFSET UNITYSDK_OFFSET(0x2E78410)
#define STRUCT_2_F9D0A54883B760B5_GET_SPEEDSKILL_OFFSET UNITYSDK_OFFSET(0xBC5260)
#define STRUCT_2_F9D0A54883B760B5_SET_AGGRO_OFFSET UNITYSDK_OFFSET(0x37604B0)
#define STRUCT_2_F9D0A54883B760B5_SET_HPBASE_OFFSET UNITYSDK_OFFSET(0x66AF20)
#define STRUCT_2_F9D0A54883B760B5_SET_HPINHERIT_OFFSET UNITYSDK_OFFSET(0x8BE040)
#define STRUCT_2_F9D0A54883B760B5_SET_HPSKILL_OFFSET UNITYSDK_OFFSET(0x3741A70)
#define STRUCT_2_F9D0A54883B760B5_SET_SPEEDBASE_OFFSET UNITYSDK_OFFSET(0x3742C50)
#define STRUCT_2_F9D0A54883B760B5_SET_SPEEDINHERIT_OFFSET UNITYSDK_OFFSET(0x374E7A0)
#define STRUCT_2_F9D0A54883B760B5_SET_SPEEDSKILL_OFFSET UNITYSDK_OFFSET(0x3793880)

inline static constexpr unsigned int Struct_2_F9D0A54883B760B5_TypeDefinitionIndex = 48594;

struct alignas(8) Struct_2_F9D0A54883B760B5
{
	::System::String* _HPBase_k__BackingField; // 0x10
	::System::String* _HPInherit_k__BackingField; // 0x18
	::System::UInt32 _HPSkill_k__BackingField; // 0x20
	::System::String* _SpeedBase_k__BackingField; // 0x28
	::System::String* _SpeedInherit_k__BackingField; // 0x30
	::System::UInt32 _SpeedSkill_k__BackingField; // 0x38
	::RPG::GameCore::FixPoint _Aggro_k__BackingField; // 0x40

	::System::String* get_HPBase()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_GET_HPBASE_OFFSET))(this);
	}

	::System::Void set_HPBase(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_SET_HPBASE_OFFSET))(this, a1);
	}

	::System::String* get_HPInherit()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_GET_HPINHERIT_OFFSET))(this);
	}

	::System::Void set_HPInherit(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_SET_HPINHERIT_OFFSET))(this, a1);
	}

	::System::UInt32 get_HPSkill()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_GET_HPSKILL_OFFSET))(this);
	}

	::System::Void set_HPSkill(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_SET_HPSKILL_OFFSET))(this, a1);
	}

	::System::String* get_SpeedBase()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_GET_SPEEDBASE_OFFSET))(this);
	}

	::System::Void set_SpeedBase(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_SET_SPEEDBASE_OFFSET))(this, a1);
	}

	::System::String* get_SpeedInherit()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_GET_SPEEDINHERIT_OFFSET))(this);
	}

	::System::Void set_SpeedInherit(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_SET_SPEEDINHERIT_OFFSET))(this, a1);
	}

	::System::UInt32 get_SpeedSkill()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_GET_SPEEDSKILL_OFFSET))(this);
	}

	::System::Void set_SpeedSkill(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_SET_SPEEDSKILL_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_Aggro()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_GET_AGGRO_OFFSET))(this);
	}

	::System::Void set_Aggro(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_SET_AGGRO_OFFSET))(this, a1);
	}
};
