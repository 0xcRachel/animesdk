#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA788A90)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_CURFINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0xA788B80)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_CURRANK_OFFSET UNITYSDK_OFFSET(0xA788BC0)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0xA788B40)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_MAXFINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0xA788BA0)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_TARGETRANK_OFFSET UNITYSDK_OFFSET(0xA788BE0)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_TEAMID_OFFSET UNITYSDK_OFFSET(0xA788B60)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_CURFINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0xA788B90)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_CURRANK_OFFSET UNITYSDK_OFFSET(0xA788BD0)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0xA788B50)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_MAXFINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0xA788BB0)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_TARGETRANK_OFFSET UNITYSDK_OFFSET(0xA788BF0)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_TEAMID_OFFSET UNITYSDK_OFFSET(0xA788B70)
#define RPG_CLIENT_VIRTUALRANKCHIMERATEAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA788A60)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualRankChimeraTeam_TypeDefinitionIndex = 59384;

	class VirtualRankChimeraTeam : public ::System::Object
	{
	public:
		::System::Single _CurFinishWorkCnt_k__BackingField; // 0x10
		::System::UInt32 _CurRank_k__BackingField; // 0x14
		::System::UInt32 _TargetRank_k__BackingField; // 0x18
		::System::UInt32 _MaxFinishWorkCnt_k__BackingField; // 0x1C
		::System::Int32 _ItemIndex_k__BackingField; // 0x20
		::System::UInt32 _TeamID_k__BackingField; // 0x24

		::System::Void _ctor(::System::Int32 itemIndex, ::System::UInt32 teamID, ::System::Single curFinishWorkCnt, ::System::UInt32 maxFinishWorkCnt, ::System::UInt32 rank, ::System::UInt32 targetRank)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM__CTOR_OFFSET))(this, itemIndex, teamID, curFinishWorkCnt, maxFinishWorkCnt, rank, targetRank);
		}

		::System::Int32 CompareTo(::RPG::Client::VirtualRankChimeraTeam* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::VirtualRankChimeraTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_COMPARETO_OFFSET))(this, other);
		}

		::System::Int32 get_ItemIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_ITEMINDEX_OFFSET))(this);
		}

		::System::Void set_ItemIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_ITEMINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_TeamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_TEAMID_OFFSET))(this);
		}

		::System::Void set_TeamID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_TEAMID_OFFSET))(this, value);
		}

		::System::Single get_CurFinishWorkCnt()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_CURFINISHWORKCNT_OFFSET))(this);
		}

		::System::Void set_CurFinishWorkCnt(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_CURFINISHWORKCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxFinishWorkCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_MAXFINISHWORKCNT_OFFSET))(this);
		}

		::System::Void set_MaxFinishWorkCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_MAXFINISHWORKCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_CurRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_CURRANK_OFFSET))(this);
		}

		::System::Void set_CurRank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_CURRANK_OFFSET))(this, value);
		}

		::System::UInt32 get_TargetRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_GET_TARGETRANK_OFFSET))(this);
		}

		::System::Void set_TargetRank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALRANKCHIMERATEAM_SET_TARGETRANK_OFFSET))(this, value);
		}
	};
}
