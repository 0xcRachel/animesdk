#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_FireStimulus; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C7638D12E51C83D6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10F40130)
#define CLASS_3_C7638D12E51C83D6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10F40180)
#define CLASS_3_C7638D12E51C83D6_TICK_OFFSET UNITYSDK_OFFSET(0x10F401D0)
#define CLASS_3_C7638D12E51C83D6__CTOR_OFFSET UNITYSDK_OFFSET(0x10F40100)
#define CLASS_3_C7638D12E51C83D6___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10F404B0)

inline static constexpr unsigned int Class_3_C7638D12E51C83D6_TypeDefinitionIndex = 41213;

class Class_3_C7638D12E51C83D6 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_FireStimulus*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_FireStimulus* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_FireStimulus*))((::PBYTE)hIl2Cpp + CLASS_3_C7638D12E51C83D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7638D12E51C83D6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7638D12E51C83D6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C7638D12E51C83D6_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C7638D12E51C83D6___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
