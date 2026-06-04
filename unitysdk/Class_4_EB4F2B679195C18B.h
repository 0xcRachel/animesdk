#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0118F59C6619CAEE.h"

class Class_2_B66C1067C0468FBB;
class Class_4_40B36AEF5B3009C7;
namespace RPG::GameCore { class ChimeraDuelBranchNode; }
namespace RPG::GameCore { class ChimeraDuelCustomTalkNode; }
namespace RPG::GameCore { class ChimeraDuelModifierContainerNode; }
namespace RPG::GameCore { class ChimeraDuelNpcLeaveNode; }
namespace RPG::GameCore { class ChimeraDuelProbabilityNode; }
namespace RPG::GameCore { class ChimeraDuelProbilityComparePredicate; }
namespace RPG::GameCore { class ChimeraDuelRepeatNode; }
namespace RPG::GameCore { class ChimeraDuelReplaceSavedEntitiesNode; }
namespace RPG::GameCore { class ChimeraDuelSpawnAllyNpcHipplenMiniNode; }
namespace RPG::GameCore { class ChimeraDuelTalkNode; }

#define CLASS_4_EB4F2B679195C18B_METHOD_4_02476738ECDA77E4_OFFSET UNITYSDK_OFFSET(0x15727B50)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_0DF06BD57825EFD1_OFFSET UNITYSDK_OFFSET(0x15727390)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_124142D82AD70FE2_OFFSET UNITYSDK_OFFSET(0x15727AD0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_4A2F2968C3A06BC5_OFFSET UNITYSDK_OFFSET(0x15725900)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_4AA672AB367A804A_OFFSET UNITYSDK_OFFSET(0x157267E0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_8E9678543C58A677_OFFSET UNITYSDK_OFFSET(0x15726AD0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_9001389DE7382BB6_OFFSET UNITYSDK_OFFSET(0x15725DD0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_97A7B58FB122A982_OFFSET UNITYSDK_OFFSET(0x15726020)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_987CD5CA695F9787_OFFSET UNITYSDK_OFFSET(0x15727AE0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_A0DF566B6A49B088_OFFSET UNITYSDK_OFFSET(0x15727B20)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_B1DD4BB2C3755222_OFFSET UNITYSDK_OFFSET(0x15727B00)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_B630A3DE91C4343E_OFFSET UNITYSDK_OFFSET(0x157262C0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_C5B0B51A214B5AAF_OFFSET UNITYSDK_OFFSET(0x15727AF0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_D36CBE382715CC19_OFFSET UNITYSDK_OFFSET(0x15727B30)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_E5510850B848432C_OFFSET UNITYSDK_OFFSET(0x15726F90)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_EB3F6E9094E6EAAA_OFFSET UNITYSDK_OFFSET(0x15727B40)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_F5A694A06E665DB4_OFFSET UNITYSDK_OFFSET(0x157259D0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_FDEC41F7CDC2E7D0_OFFSET UNITYSDK_OFFSET(0x15727990)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_FEA2D4EA1C2C25E1_OFFSET UNITYSDK_OFFSET(0x15727B10)
#define CLASS_4_EB4F2B679195C18B__CTOR_OFFSET UNITYSDK_OFFSET(0x157258F0)

inline static constexpr unsigned int Class_4_EB4F2B679195C18B_TypeDefinitionIndex = 72142;

class Class_4_EB4F2B679195C18B : public ::Class_3_0118F59C6619CAEE
{
public:
	::Class_4_40B36AEF5B3009C7* Field_4_0; // 0x20

	::System::Void _ctor(::Class_4_40B36AEF5B3009C7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_40B36AEF5B3009C7*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_4A2F2968C3A06BC5(::RPG::GameCore::ChimeraDuelBranchNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_4A2F2968C3A06BC5_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_F5A694A06E665DB4(::RPG::GameCore::ChimeraDuelProbabilityNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelProbabilityNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_F5A694A06E665DB4_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_9001389DE7382BB6(::RPG::GameCore::ChimeraDuelProbilityComparePredicate* a1, ::Class_2_B66C1067C0468FBB* a2, ::System::Double a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelProbilityComparePredicate*, ::Class_2_B66C1067C0468FBB*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_9001389DE7382BB6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_4_97A7B58FB122A982(::RPG::GameCore::ChimeraDuelRepeatNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelRepeatNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_97A7B58FB122A982_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_B630A3DE91C4343E(::RPG::GameCore::ChimeraDuelModifierContainerNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_B630A3DE91C4343E_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_4AA672AB367A804A(::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_4AA672AB367A804A_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_8E9678543C58A677(::RPG::GameCore::ChimeraDuelTalkNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTalkNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_8E9678543C58A677_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_E5510850B848432C(::RPG::GameCore::ChimeraDuelCustomTalkNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelCustomTalkNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_E5510850B848432C_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_0DF06BD57825EFD1(::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_0DF06BD57825EFD1_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_FDEC41F7CDC2E7D0(::RPG::GameCore::ChimeraDuelNpcLeaveNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelNpcLeaveNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_FDEC41F7CDC2E7D0_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_124142D82AD70FE2(::RPG::GameCore::ChimeraDuelBranchNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_124142D82AD70FE2_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_987CD5CA695F9787(::RPG::GameCore::ChimeraDuelProbabilityNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelProbabilityNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_987CD5CA695F9787_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_C5B0B51A214B5AAF(::RPG::GameCore::ChimeraDuelRepeatNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelRepeatNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_C5B0B51A214B5AAF_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_B1DD4BB2C3755222(::RPG::GameCore::ChimeraDuelModifierContainerNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_B1DD4BB2C3755222_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_FEA2D4EA1C2C25E1(::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_FEA2D4EA1C2C25E1_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_A0DF566B6A49B088(::RPG::GameCore::ChimeraDuelTalkNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTalkNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_A0DF566B6A49B088_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_D36CBE382715CC19(::RPG::GameCore::ChimeraDuelCustomTalkNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelCustomTalkNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_D36CBE382715CC19_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_EB3F6E9094E6EAAA(::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_EB3F6E9094E6EAAA_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_02476738ECDA77E4(::RPG::GameCore::ChimeraDuelNpcLeaveNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelNpcLeaveNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_02476738ECDA77E4_OFFSET))(this, a1);
	}
};
