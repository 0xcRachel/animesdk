#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ShowEnvBuffDialog; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E8F7E4B8272B89B0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0F54F0)
#define CLASS_2_E8F7E4B8272B89B0_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xE0F58A0)
#define CLASS_2_E8F7E4B8272B89B0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE0F4BD0)
#define CLASS_2_E8F7E4B8272B89B0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE0F54A0)
#define CLASS_2_E8F7E4B8272B89B0_TICK_OFFSET UNITYSDK_OFFSET(0xE0F5560)
#define CLASS_2_E8F7E4B8272B89B0__CTOR_OFFSET UNITYSDK_OFFSET(0xE0F4B40)

inline static constexpr unsigned int Class_2_E8F7E4B8272B89B0_TypeDefinitionIndex = 54059;

class Class_2_E8F7E4B8272B89B0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_5; // 0x18
	::RPG::Client::UIController* Field_2_6; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::RPG::GameCore::ShowEnvBuffDialog* Field_2_0; // 0x30
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_2_4; // 0x38
	::RPG::Client::TextID Field_2_3; // 0x40
	::System::Boolean Field_2_2; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEnvBuffDialog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEnvBuffDialog*))((::PBYTE)hIl2Cpp + CLASS_2_E8F7E4B8272B89B0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F7E4B8272B89B0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F7E4B8272B89B0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F7E4B8272B89B0_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8F7E4B8272B89B0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F7E4B8272B89B0_METHOD_2_1290EA767C459179_OFFSET))(this);
	}
};
