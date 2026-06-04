#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6FD410D66A5A40AF_GET_ATTACKADD_OFFSET UNITYSDK_OFFSET(0x66B7B0)
#define STRUCT_2_6FD410D66A5A40AF_GET_ATTACKBASE_OFFSET UNITYSDK_OFFSET(0x66AF90)
#define STRUCT_2_6FD410D66A5A40AF_GET_BASEAGGRO_OFFSET UNITYSDK_OFFSET(0x3760640)
#define STRUCT_2_6FD410D66A5A40AF_GET_CRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0x37605C0)
#define STRUCT_2_6FD410D66A5A40AF_GET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0x37174B0)
#define STRUCT_2_6FD410D66A5A40AF_GET_DEFENCEADD_OFFSET UNITYSDK_OFFSET(0x66C010)
#define STRUCT_2_6FD410D66A5A40AF_GET_DEFENCEBASE_OFFSET UNITYSDK_OFFSET(0x6676D0)
#define STRUCT_2_6FD410D66A5A40AF_GET_HPADD_OFFSET UNITYSDK_OFFSET(0xB24C10)
#define STRUCT_2_6FD410D66A5A40AF_GET_HPBASE_OFFSET UNITYSDK_OFFSET(0x2E78410)
#define STRUCT_2_6FD410D66A5A40AF_GET_MAXSP_OFFSET UNITYSDK_OFFSET(0x3760660)
#define STRUCT_2_6FD410D66A5A40AF_GET_MINIMUMFATIGUERATIO_OFFSET UNITYSDK_OFFSET(0x3760620)
#define STRUCT_2_6FD410D66A5A40AF_GET_RANKATTACKADD_OFFSET UNITYSDK_OFFSET(0x37604F0)
#define STRUCT_2_6FD410D66A5A40AF_GET_RANKATTACKBASE_OFFSET UNITYSDK_OFFSET(0x37604D0)
#define STRUCT_2_6FD410D66A5A40AF_GET_RANKCRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0x37605E0)
#define STRUCT_2_6FD410D66A5A40AF_GET_RANKCRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0x3760600)
#define STRUCT_2_6FD410D66A5A40AF_GET_RANKDEFENCEADD_OFFSET UNITYSDK_OFFSET(0x3760520)
#define STRUCT_2_6FD410D66A5A40AF_GET_RANKDEFENCEBASE_OFFSET UNITYSDK_OFFSET(0x72BD40)
#define STRUCT_2_6FD410D66A5A40AF_GET_RANKHPADD_OFFSET UNITYSDK_OFFSET(0x3760560)
#define STRUCT_2_6FD410D66A5A40AF_GET_RANKHPBASE_OFFSET UNITYSDK_OFFSET(0x3760540)
#define STRUCT_2_6FD410D66A5A40AF_GET_RANKSPEEDADD_OFFSET UNITYSDK_OFFSET(0x37605A0)
#define STRUCT_2_6FD410D66A5A40AF_GET_RANKSPEEDBASE_OFFSET UNITYSDK_OFFSET(0x3760580)
#define STRUCT_2_6FD410D66A5A40AF_GET_SPECIALMAXSP_OFFSET UNITYSDK_OFFSET(0x3760680)
#define STRUCT_2_6FD410D66A5A40AF_GET_SPEEDADD_OFFSET UNITYSDK_OFFSET(0xB24A90)
#define STRUCT_2_6FD410D66A5A40AF_GET_SPEEDBASE_OFFSET UNITYSDK_OFFSET(0x2E784E0)
#define STRUCT_2_6FD410D66A5A40AF_SET_ATTACKADD_OFFSET UNITYSDK_OFFSET(0x8BE040)
#define STRUCT_2_6FD410D66A5A40AF_SET_ATTACKBASE_OFFSET UNITYSDK_OFFSET(0x66AF20)
#define STRUCT_2_6FD410D66A5A40AF_SET_BASEAGGRO_OFFSET UNITYSDK_OFFSET(0x3760650)
#define STRUCT_2_6FD410D66A5A40AF_SET_CRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0x37605D0)
#define STRUCT_2_6FD410D66A5A40AF_SET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0x37174C0)
#define STRUCT_2_6FD410D66A5A40AF_SET_DEFENCEADD_OFFSET UNITYSDK_OFFSET(0x3742C50)
#define STRUCT_2_6FD410D66A5A40AF_SET_DEFENCEBASE_OFFSET UNITYSDK_OFFSET(0xFD2480)
#define STRUCT_2_6FD410D66A5A40AF_SET_HPADD_OFFSET UNITYSDK_OFFSET(0x37604A0)
#define STRUCT_2_6FD410D66A5A40AF_SET_HPBASE_OFFSET UNITYSDK_OFFSET(0x374E7A0)
#define STRUCT_2_6FD410D66A5A40AF_SET_MAXSP_OFFSET UNITYSDK_OFFSET(0x3760670)
#define STRUCT_2_6FD410D66A5A40AF_SET_MINIMUMFATIGUERATIO_OFFSET UNITYSDK_OFFSET(0x3760630)
#define STRUCT_2_6FD410D66A5A40AF_SET_RANKATTACKADD_OFFSET UNITYSDK_OFFSET(0x3760500)
#define STRUCT_2_6FD410D66A5A40AF_SET_RANKATTACKBASE_OFFSET UNITYSDK_OFFSET(0x37604E0)
#define STRUCT_2_6FD410D66A5A40AF_SET_RANKCRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0x37605F0)
#define STRUCT_2_6FD410D66A5A40AF_SET_RANKCRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0x3760610)
#define STRUCT_2_6FD410D66A5A40AF_SET_RANKDEFENCEADD_OFFSET UNITYSDK_OFFSET(0x3760530)
#define STRUCT_2_6FD410D66A5A40AF_SET_RANKDEFENCEBASE_OFFSET UNITYSDK_OFFSET(0x3760510)
#define STRUCT_2_6FD410D66A5A40AF_SET_RANKHPADD_OFFSET UNITYSDK_OFFSET(0x3760570)
#define STRUCT_2_6FD410D66A5A40AF_SET_RANKHPBASE_OFFSET UNITYSDK_OFFSET(0x3760550)
#define STRUCT_2_6FD410D66A5A40AF_SET_RANKSPEEDADD_OFFSET UNITYSDK_OFFSET(0x37605B0)
#define STRUCT_2_6FD410D66A5A40AF_SET_RANKSPEEDBASE_OFFSET UNITYSDK_OFFSET(0x3760590)
#define STRUCT_2_6FD410D66A5A40AF_SET_SPECIALMAXSP_OFFSET UNITYSDK_OFFSET(0x3760690)
#define STRUCT_2_6FD410D66A5A40AF_SET_SPEEDADD_OFFSET UNITYSDK_OFFSET(0x37604C0)
#define STRUCT_2_6FD410D66A5A40AF_SET_SPEEDBASE_OFFSET UNITYSDK_OFFSET(0x37604B0)

inline static constexpr unsigned int Struct_2_6FD410D66A5A40AF_TypeDefinitionIndex = 48587;

struct alignas(8) Struct_2_6FD410D66A5A40AF
{
	::RPG::GameCore::FixPoint _AttackBase_k__BackingField; // 0x10
	::RPG::GameCore::FixPoint _AttackAdd_k__BackingField; // 0x18
	::RPG::GameCore::FixPoint _DefenceBase_k__BackingField; // 0x20
	::RPG::GameCore::FixPoint _DefenceAdd_k__BackingField; // 0x28
	::RPG::GameCore::FixPoint _HPBase_k__BackingField; // 0x30
	::RPG::GameCore::FixPoint _HPAdd_k__BackingField; // 0x38
	::RPG::GameCore::FixPoint _SpeedBase_k__BackingField; // 0x40
	::RPG::GameCore::FixPoint _SpeedAdd_k__BackingField; // 0x48
	::RPG::GameCore::FixPoint _RankAttackBase_k__BackingField; // 0x50
	::RPG::GameCore::FixPoint _RankAttackAdd_k__BackingField; // 0x58
	::RPG::GameCore::FixPoint _RankDefenceBase_k__BackingField; // 0x60
	::RPG::GameCore::FixPoint _RankDefenceAdd_k__BackingField; // 0x68
	::RPG::GameCore::FixPoint _RankHPBase_k__BackingField; // 0x70
	::RPG::GameCore::FixPoint _RankHPAdd_k__BackingField; // 0x78
	::RPG::GameCore::FixPoint _RankSpeedBase_k__BackingField; // 0x80
	::RPG::GameCore::FixPoint _RankSpeedAdd_k__BackingField; // 0x88
	::RPG::GameCore::FixPoint _CriticalChance_k__BackingField; // 0x90
	::RPG::GameCore::FixPoint _CriticalDamage_k__BackingField; // 0x98
	::RPG::GameCore::FixPoint _RankCriticalChance_k__BackingField; // 0xA0
	::RPG::GameCore::FixPoint _RankCriticalDamage_k__BackingField; // 0xA8
	::RPG::GameCore::FixPoint _MinimumFatigueRatio_k__BackingField; // 0xB0
	::RPG::GameCore::FixPoint _BaseAggro_k__BackingField; // 0xB8
	::RPG::GameCore::FixPoint _MaxSP_k__BackingField; // 0xC0
	::RPG::GameCore::FixPoint _SpecialMaxSP_k__BackingField; // 0xC8

	::RPG::GameCore::FixPoint get_AttackBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_ATTACKBASE_OFFSET))(this);
	}

	::System::Void set_AttackBase(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_ATTACKBASE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_AttackAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_ATTACKADD_OFFSET))(this);
	}

	::System::Void set_AttackAdd(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_ATTACKADD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_DefenceBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_DEFENCEBASE_OFFSET))(this);
	}

	::System::Void set_DefenceBase(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_DEFENCEBASE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_DefenceAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_DEFENCEADD_OFFSET))(this);
	}

	::System::Void set_DefenceAdd(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_DEFENCEADD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_HPBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_HPBASE_OFFSET))(this);
	}

	::System::Void set_HPBase(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_HPBASE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_HPAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_HPADD_OFFSET))(this);
	}

	::System::Void set_HPAdd(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_HPADD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_SpeedBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_SPEEDBASE_OFFSET))(this);
	}

	::System::Void set_SpeedBase(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_SPEEDBASE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_SpeedAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_SPEEDADD_OFFSET))(this);
	}

	::System::Void set_SpeedAdd(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_SPEEDADD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_RankAttackBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_RANKATTACKBASE_OFFSET))(this);
	}

	::System::Void set_RankAttackBase(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_RANKATTACKBASE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_RankAttackAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_RANKATTACKADD_OFFSET))(this);
	}

	::System::Void set_RankAttackAdd(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_RANKATTACKADD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_RankDefenceBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_RANKDEFENCEBASE_OFFSET))(this);
	}

	::System::Void set_RankDefenceBase(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_RANKDEFENCEBASE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_RankDefenceAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_RANKDEFENCEADD_OFFSET))(this);
	}

	::System::Void set_RankDefenceAdd(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_RANKDEFENCEADD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_RankHPBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_RANKHPBASE_OFFSET))(this);
	}

	::System::Void set_RankHPBase(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_RANKHPBASE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_RankHPAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_RANKHPADD_OFFSET))(this);
	}

	::System::Void set_RankHPAdd(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_RANKHPADD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_RankSpeedBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_RANKSPEEDBASE_OFFSET))(this);
	}

	::System::Void set_RankSpeedBase(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_RANKSPEEDBASE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_RankSpeedAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_RANKSPEEDADD_OFFSET))(this);
	}

	::System::Void set_RankSpeedAdd(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_RANKSPEEDADD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_CriticalChance()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_CRITICALCHANCE_OFFSET))(this);
	}

	::System::Void set_CriticalChance(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_CRITICALCHANCE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_CriticalDamage()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_CRITICALDAMAGE_OFFSET))(this);
	}

	::System::Void set_CriticalDamage(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_CRITICALDAMAGE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_RankCriticalChance()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_RANKCRITICALCHANCE_OFFSET))(this);
	}

	::System::Void set_RankCriticalChance(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_RANKCRITICALCHANCE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_RankCriticalDamage()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_RANKCRITICALDAMAGE_OFFSET))(this);
	}

	::System::Void set_RankCriticalDamage(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_RANKCRITICALDAMAGE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MinimumFatigueRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_MINIMUMFATIGUERATIO_OFFSET))(this);
	}

	::System::Void set_MinimumFatigueRatio(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_MINIMUMFATIGUERATIO_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_BaseAggro()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_BASEAGGRO_OFFSET))(this);
	}

	::System::Void set_BaseAggro(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_BASEAGGRO_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MaxSP()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_MAXSP_OFFSET))(this);
	}

	::System::Void set_MaxSP(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_MAXSP_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_SpecialMaxSP()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_GET_SPECIALMAXSP_OFFSET))(this);
	}

	::System::Void set_SpecialMaxSP(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_6FD410D66A5A40AF_SET_SPECIALMAXSP_OFFSET))(this, a1);
	}
};
