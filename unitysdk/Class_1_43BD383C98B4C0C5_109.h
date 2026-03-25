#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"

class Class_1_2533213D74484D5C;
class Class_1_43BD383C98B4C0C5_109_Class_3_50D343C44D28BEFB_5;
namespace RPG::Client { class EntityTimelineControlNode; }
namespace RPG::Client { class EntityTimelineControlTrackInfo; }
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_43BD383C98B4C0C5_109_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114543D0)
#define CLASS_1_43BD383C98B4C0C5_109__CTOR_OFFSET UNITYSDK_OFFSET(0x11454450)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_109_TypeDefinitionIndex = 49278;

class Class_1_43BD383C98B4C0C5_109 : public ::System::Object
{
public:
	::System::Action* Field_1_19; // 0x10
	::System::Action* Field_1_21; // 0x18
	::System::Action_1<::RPG::Client::EntityTimelineControlNode*>* Field_1_6; // 0x20
	::System::Action* Field_1_3; // 0x28
	::System::Action_1<::System::Single>* Field_1_13; // 0x30
	::System::Action* Field_1_1; // 0x38
	::System::Action_2<::System::Single, ::System::Single>* Field_1_23; // 0x40
	::System::Action_1<::System::Boolean>* Field_1_12; // 0x48
	::Class_1_2533213D74484D5C* Field_1_17; // 0x50
	::System::Action_1<::System::Boolean>* Field_1_4; // 0x58
	::System::Action* Field_1_22; // 0x60
	::RPG::Client::EntityTimelineControlTrackInfo* Field_1_16; // 0x68
	::Class_1_43BD383C98B4C0C5_109_Class_3_50D343C44D28BEFB_5* Field_1_10; // 0x70
	::System::Action* Field_1_5; // 0x78
	::System::Func_2<::RPG::Client::EntityTimelineControlNode*, ::System::Boolean>* Field_1_15; // 0x80
	::System::Action_1<::RPG::GameCore::TimeRewindState>* Field_1_9; // 0x88
	::System::Action* Field_1_2; // 0x90
	::System::Action_1<::System::Boolean>* Field_1_14; // 0x98
	::System::Action_2<::RPG::Client::EntityTimelineControlNode*, ::System::Boolean>* Field_1_8; // 0xA0
	::System::Action* Field_1_11; // 0xA8
	::RPG::GameCore::EntityTimeRewindComponent* Field_1_18; // 0xB0
	::RPG::GameCore::GameEntity* Field_1_0; // 0xB8
	::System::Action_1<::RPG::Client::EntityTimelineControlNode*>* Field_1_7; // 0xC0
	::System::Action* Field_1_20; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_109__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_109_DISPOSE_OFFSET))(this);
	}
};
