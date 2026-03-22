#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A48F3719AA1CF200_6;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitEntityArtLoad; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F4A08C9C0F5EB4C6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFE5BEC0)
#define CLASS_2_F4A08C9C0F5EB4C6_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0xFE5C210)
#define CLASS_2_F4A08C9C0F5EB4C6_METHOD_2_B37E1EEE95BB5119_OFFSET UNITYSDK_OFFSET(0xFE5C260)
#define CLASS_2_F4A08C9C0F5EB4C6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFE5C0D0)
#define CLASS_2_F4A08C9C0F5EB4C6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xFE5BFE0)
#define CLASS_2_F4A08C9C0F5EB4C6_TICK_OFFSET UNITYSDK_OFFSET(0xFE5C1B0)
#define CLASS_2_F4A08C9C0F5EB4C6__CTOR_OFFSET UNITYSDK_OFFSET(0xFE5BE70)

inline static constexpr unsigned int Class_2_F4A08C9C0F5EB4C6_TypeDefinitionIndex = 46478;

class Class_2_F4A08C9C0F5EB4C6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x18
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::RPG::GameCore::WaitEntityArtLoad* Field_2_0; // 0x30
	::RPG::GameCore::GameEntity* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitEntityArtLoad* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitEntityArtLoad*))((::PBYTE)hIl2Cpp + CLASS_2_F4A08C9C0F5EB4C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4A08C9C0F5EB4C6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4A08C9C0F5EB4C6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4A08C9C0F5EB4C6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F4A08C9C0F5EB4C6_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_6*))((::PBYTE)hIl2Cpp + CLASS_2_F4A08C9C0F5EB4C6_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_B37E1EEE95BB5119(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F4A08C9C0F5EB4C6_METHOD_2_B37E1EEE95BB5119_OFFSET))(this, a1);
	}
};
