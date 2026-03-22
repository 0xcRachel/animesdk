#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_C14C025AFA60DCA2;
class Class_2_F32ED1E027A7668B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_Side_LookAtTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1BB328B6B92BA738_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD881720)
#define CLASS_3_1BB328B6B92BA738_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD881860)
#define CLASS_3_1BB328B6B92BA738_TICK_OFFSET UNITYSDK_OFFSET(0xD881770)
#define CLASS_3_1BB328B6B92BA738__CTOR_OFFSET UNITYSDK_OFFSET(0xD881690)
#define CLASS_3_1BB328B6B92BA738___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xD8818D0)

inline static constexpr unsigned int Class_3_1BB328B6B92BA738_TypeDefinitionIndex = 41217;

class Class_3_1BB328B6B92BA738 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_LookAtTarget*>
{
public:
	::Class_2_F32ED1E027A7668B* Field_3_0; // 0x28
	::RPG::GameCore::GameEntity* Field_3_2; // 0x30
	::Class_2_C14C025AFA60DCA2* Field_3_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_LookAtTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_LookAtTarget*))((::PBYTE)hIl2Cpp + CLASS_3_1BB328B6B92BA738__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1BB328B6B92BA738_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1BB328B6B92BA738_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1BB328B6B92BA738_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1BB328B6B92BA738___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
