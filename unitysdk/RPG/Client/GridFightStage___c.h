#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_335;
class Class_2_FD0167EB507B9435_2;
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightStageNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSTAGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x94031F0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9403230)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__102_0_OFFSET UNITYSDK_OFFSET(0x94036A0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__102_1_OFFSET UNITYSDK_OFFSET(0x9403710)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__104_0_OFFSET UNITYSDK_OFFSET(0x9403720)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__104_1_OFFSET UNITYSDK_OFFSET(0x94037A0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_DIFFICULTYMODIFYVALUE_B__42_1_OFFSET UNITYSDK_OFFSET(0x9403240)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTBATTENODE_B__88_0_OFFSET UNITYSDK_OFFSET(0x9403260)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTMONSTERNODE_B__90_0_OFFSET UNITYSDK_OFFSET(0x9403640)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_PROGRESS_B__94_0_OFFSET UNITYSDK_OFFSET(0x9403680)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStage___c_TypeDefinitionIndex = 51845;

	class GridFightStage___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>** StaticGet___9__94_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x8D00);
		}
		static ::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>** StaticGet___9__90_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x8D08);
		}
		static ::System::Func_2<::Class_1_FA4F4A67B1C04320_335*, ::RPG::Client::GridFightMonsterCampConfig*>** StaticGet___9__104_0()
		{
			return (::System::Func_2<::Class_1_FA4F4A67B1C04320_335*, ::RPG::Client::GridFightMonsterCampConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x8D10);
		}
		static ::RPG::Client::GridFightStage___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightStage___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x8D18);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>** StaticGet___9__104_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x8D20);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightMonsterAffixConfig*>** StaticGet___9__102_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightMonsterAffixConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x8D28);
		}
		static ::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>** StaticGet___9__88_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x8D30);
		}
		static ::System::Func_2<::Class_2_FD0167EB507B9435_2*, ::System::Int32>** StaticGet___9__42_1()
		{
			return (::System::Func_2<::Class_2_FD0167EB507B9435_2*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x8D38);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>** StaticGet___9__102_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x8D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _get_DifficultyModifyValue_b__42_1(::Class_2_FD0167EB507B9435_2* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_FD0167EB507B9435_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_DIFFICULTYMODIFYVALUE_B__42_1_OFFSET))(this, x);
		}

		::System::Boolean _get_LatestBatteNode_b__88_0(::RPG::Client::GridFightStageNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTBATTENODE_B__88_0_OFFSET))(this, node);
		}

		::System::Boolean _get_LatestMonsterNode_b__90_0(::RPG::Client::GridFightStageNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTMONSTERNODE_B__90_0_OFFSET))(this, node);
		}

		::System::Boolean _get_Progress_b__94_0(::RPG::Client::GridFightStageNode* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_PROGRESS_B__94_0_OFFSET))(this, x);
		}

		::RPG::Client::GridFightMonsterAffixConfig* _get_AffixDataList_b__102_0(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightMonsterAffixConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__102_0_OFFSET))(this, id);
		}

		::System::Boolean _get_AffixDataList_b__102_1(::RPG::Client::GridFightMonsterAffixConfig* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__102_1_OFFSET))(this, data);
		}

		::RPG::Client::GridFightMonsterCampConfig* _get_CampDataList_b__104_0(::Class_1_FA4F4A67B1C04320_335* info)
		{
			return ((::RPG::Client::GridFightMonsterCampConfig*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_335*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__104_0_OFFSET))(this, info);
		}

		::System::Boolean _get_CampDataList_b__104_1(::RPG::Client::GridFightMonsterCampConfig* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__104_1_OFFSET))(this, data);
		}
	};
}
