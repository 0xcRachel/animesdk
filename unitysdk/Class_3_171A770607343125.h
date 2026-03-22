#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialStatisticsType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_41BA3D4F4FF43007;
class Class_3_DB3E6B1E38F4E9E7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_171A770607343125_METHOD_3_46802F98B8BAD0CE_OFFSET UNITYSDK_OFFSET(0x8601790)
#define CLASS_3_171A770607343125_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8601470)
#define CLASS_3_171A770607343125__CTOR_OFFSET UNITYSDK_OFFSET(0x8601440)

inline static constexpr unsigned int Class_3_171A770607343125_TypeDefinitionIndex = 43577;

class Class_3_171A770607343125 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DB3E6B1E38F4E9E7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DB3E6B1E38F4E9E7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DB3E6B1E38F4E9E7*))((::PBYTE)hIl2Cpp + CLASS_3_171A770607343125__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_171A770607343125_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_46802F98B8BAD0CE(::Class_1_41BA3D4F4FF43007* a1, ::RPG::GameCore::AvatarSpecialStatisticsType a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_41BA3D4F4FF43007*, ::RPG::GameCore::AvatarSpecialStatisticsType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_171A770607343125_METHOD_3_46802F98B8BAD0CE_OFFSET))(this, a1, a2, a3);
	}
};
