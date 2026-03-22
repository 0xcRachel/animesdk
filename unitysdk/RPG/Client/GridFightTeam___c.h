#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTEAM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x940FBC0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x940FC00)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETBACKROLES_B__57_0_OFFSET UNITYSDK_OFFSET(0x940FCC0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETBENCHROLES_B__59_0_OFFSET UNITYSDK_OFFSET(0x940FD40)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETFRONTROLES_B__56_0_OFFSET UNITYSDK_OFFSET(0x940FC60)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETMEMBERSBYTRAITID_B__28_0_OFFSET UNITYSDK_OFFSET(0x940FC40)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETONBOARDNPCS_B__63_0_OFFSET UNITYSDK_OFFSET(0x940FE00)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETONBOARDROLES_B__58_0_OFFSET UNITYSDK_OFFSET(0x940FD20)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETOVERCROWDROLES_B__60_0_OFFSET UNITYSDK_OFFSET(0x940FDA0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERCOUNT_B__79_0_OFFSET UNITYSDK_OFFSET(0x940FF90)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERS_B__25_0_OFFSET UNITYSDK_OFFSET(0x940FC10)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERS_B__25_1_OFFSET UNITYSDK_OFFSET(0x940FC30)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_BENCHMEMBERCOUNT_B__75_0_OFFSET UNITYSDK_OFFSET(0x940FED0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_FRONTROLECOUNT_B__81_0_OFFSET UNITYSDK_OFFSET(0x940FFB0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ISOVERCROWD_B__83_0_OFFSET UNITYSDK_OFFSET(0x9410010)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ONBOARDMEMBERCOUNT_B__71_0_OFFSET UNITYSDK_OFFSET(0x940FE20)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_OVERCROWDMEMBERCOUNT_B__77_0_OFFSET UNITYSDK_OFFSET(0x940FF30)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_UNLOCKEXPERTROLES_B__89_0_OFFSET UNITYSDK_OFFSET(0x9410080)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam___c_TypeDefinitionIndex = 51780;

	class GridFightTeam___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__57_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x9560);
		}
		static ::System::Func_2<::RPG::Client::GridFightNPC*, ::System::Boolean>** StaticGet___9__63_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightNPC*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x9568);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMember*>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMember*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x9570);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__71_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x9578);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMember*>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMember*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x9580);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__81_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x9588);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__60_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x9590);
		}
		static ::RPG::Client::GridFightTeam___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTeam___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x9598);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__56_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x95A0);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__59_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x95A8);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__75_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x95B0);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightRole*>** StaticGet___9__89_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x95B8);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__77_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x95C0);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__58_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x95C8);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x95D0);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__79_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x95D8);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__83_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x95E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightGridMember* _get_AllMembers_b__25_0(::RPG::Client::GridFightGridData* x)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERS_B__25_0_OFFSET))(this, x);
		}

		::System::Boolean _get_AllMembers_b__25_1(::RPG::Client::GridFightGridMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERS_B__25_1_OFFSET))(this, x);
		}

		::RPG::Client::GridFightGridMember* _GetMembersByTraitID_b__28_0(::RPG::Client::GridFightGridData* x)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETMEMBERSBYTRAITID_B__28_0_OFFSET))(this, x);
		}

		::System::Boolean _GetFrontRoles_b__56_0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETFRONTROLES_B__56_0_OFFSET))(this, x);
		}

		::System::Boolean _GetBackRoles_b__57_0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETBACKROLES_B__57_0_OFFSET))(this, x);
		}

		::System::Boolean _GetOnBoardRoles_b__58_0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETONBOARDROLES_B__58_0_OFFSET))(this, x);
		}

		::System::Boolean _GetBenchRoles_b__59_0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETBENCHROLES_B__59_0_OFFSET))(this, x);
		}

		::System::Boolean _GetOvercrowdRoles_b__60_0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETOVERCROWDROLES_B__60_0_OFFSET))(this, x);
		}

		::System::Boolean _GetOnBoardNPCs_b__63_0(::RPG::Client::GridFightNPC* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETONBOARDNPCS_B__63_0_OFFSET))(this, x);
		}

		::System::Boolean _get_OnBoardMemberCount_b__71_0(::RPG::Client::GridFightGridData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ONBOARDMEMBERCOUNT_B__71_0_OFFSET))(this, x);
		}

		::System::Boolean _get_BenchMemberCount_b__75_0(::RPG::Client::GridFightGridData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_BENCHMEMBERCOUNT_B__75_0_OFFSET))(this, x);
		}

		::System::Boolean _get_OvercrowdMemberCount_b__77_0(::RPG::Client::GridFightGridData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_OVERCROWDMEMBERCOUNT_B__77_0_OFFSET))(this, x);
		}

		::System::Boolean _get_AllMemberCount_b__79_0(::RPG::Client::GridFightGridData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERCOUNT_B__79_0_OFFSET))(this, x);
		}

		::System::Boolean _get_FrontRoleCount_b__81_0(::RPG::Client::GridFightGridData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_FRONTROLECOUNT_B__81_0_OFFSET))(this, x);
		}

		::System::Boolean _get_IsOvercrowd_b__83_0(::RPG::Client::GridFightGridData* grid)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ISOVERCROWD_B__83_0_OFFSET))(this, grid);
		}

		::RPG::Client::GridFightRole* _get_UnlockExpertRoles_b__89_0(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_UNLOCKEXPERTROLES_B__89_0_OFFSET))(this, x);
		}
	};
}
