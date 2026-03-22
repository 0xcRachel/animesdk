#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_173.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"

class Class_1_F9FBCC956DFCF137_13;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelNpcLeaveNode; }

#define CLASS_2_51C91B76FE3F65C1_METHOD_2_12CE8CAD6749278D_OFFSET UNITYSDK_OFFSET(0x11026490)
#define CLASS_2_51C91B76FE3F65C1__CTOR_OFFSET UNITYSDK_OFFSET(0x11026560)

inline static constexpr unsigned int Class_2_51C91B76FE3F65C1_TypeDefinitionIndex = 61233;

class Class_2_51C91B76FE3F65C1 : public ::Class_1_43BD383C98B4C0C5_173
{
public:
	::RPG::GameCore::ChimeraDuelNpcLeaveNode* Field_2_1; // 0x10
	::RPG::GameCore::ChimeraDuelTeamType Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51C91B76FE3F65C1__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_12CE8CAD6749278D(::Class_1_F9FBCC956DFCF137_13* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_13*))((::PBYTE)hIl2Cpp + CLASS_2_51C91B76FE3F65C1_METHOD_2_12CE8CAD6749278D_OFFSET))(this, a1);
	}
};
