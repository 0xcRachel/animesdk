#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GrounderIKThreadSolver.h"
#include "unitysdk/Struct_2_05A67A9E2D5889AA.h"
#include "unitysdk/Struct_2_1E36AD6D9A5F486C.h"
#include "unitysdk/Struct_2_27B4F39C0F819C48.h"
#include "unitysdk/Struct_2_9C2AD9A3E720F0F7.h"
#include "unitysdk/Struct_2_9FC3BF6B16C6AFE6.h"
#include "unitysdk/Struct_2_F15D3B4A9D0D9701.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_43BD383C98B4C0C5_145_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E93920)
#define CLASS_1_43BD383C98B4C0C5_145__CTOR_OFFSET UNITYSDK_OFFSET(0x9E93910)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_145_TypeDefinitionIndex = 54335;

class Class_1_43BD383C98B4C0C5_145 : public ::System::Object
{
public:
	::Struct_2_F15D3B4A9D0D9701 Field_1_15; // 0x10
	::Struct_2_9C2AD9A3E720F0F7 Field_1_5; // 0x48
	::Struct_2_05A67A9E2D5889AA Field_1_12; // 0x70
	::Struct_2_27B4F39C0F819C48 Field_1_9; // 0x278
	::Struct_2_9FC3BF6B16C6AFE6 Field_1_14; // 0x2B0
	::RPG::GameCore::GameEntity* Field_1_0; // 0x350
	::Struct_2_1E36AD6D9A5F486C Field_1_7; // 0x358
	::RootMotion::FinalIK::GrounderIKThreadSolver Field_1_3; // 0x598
	::System::Boolean Field_1_10; // 0x5D0
	::System::Boolean Field_1_11; // 0x5D1
	::System::Boolean Field_1_6; // 0x5D2
	::System::Boolean Field_1_8; // 0x5D3
	::System::Boolean Field_1_1; // 0x5D4
	::System::Boolean Field_1_13; // 0x5D5
	::System::Boolean Field_1_2; // 0x5D6
	::System::Boolean Field_1_4; // 0x5D7

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_145__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_145_DISPOSE_OFFSET))(this);
	}
};
