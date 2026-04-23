#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F8F1752DCDE35E35;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class AdvNpcFollowPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_536A92FD6E44D172_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEFC5C30)
#define CLASS_2_536A92FD6E44D172_METHOD_2_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0xEFC5DE0)
#define CLASS_2_536A92FD6E44D172_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0xEFC5FC0)
#define CLASS_2_536A92FD6E44D172_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xEFC5EB0)
#define CLASS_2_536A92FD6E44D172_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEFC5D30)
#define CLASS_2_536A92FD6E44D172_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEFC5F50)
#define CLASS_2_536A92FD6E44D172_TICK_OFFSET UNITYSDK_OFFSET(0xEFC5CB0)
#define CLASS_2_536A92FD6E44D172__CTOR_OFFSET UNITYSDK_OFFSET(0xEFC5830)

inline static constexpr unsigned int Class_2_536A92FD6E44D172_TypeDefinitionIndex = 48396;

class Class_2_536A92FD6E44D172 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::Client::CameraBlendCurve* Field_2_3; // 0x20
	::Class_1_F8F1752DCDE35E35* Field_2_2; // 0x28
	::RPG::GameCore::AdvNpcFollowPlayer* Field_2_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcFollowPlayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcFollowPlayer*))((::PBYTE)hIl2Cpp + CLASS_2_536A92FD6E44D172__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_536A92FD6E44D172_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_536A92FD6E44D172_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_536A92FD6E44D172_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_536A92FD6E44D172_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_AC1BFDB3D2FC0C79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_536A92FD6E44D172_METHOD_2_AC1BFDB3D2FC0C79_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_536A92FD6E44D172_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_536A92FD6E44D172_METHOD_2_B1936CE4DA97AA45_1_OFFSET))(this);
	}
};
