#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class EntityInEraFlipperSpotAreaListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_7FD9E7DFD63F7328_DISPOSE_OFFSET UNITYSDK_OFFSET(0x84263E0)
#define CLASS_2_7FD9E7DFD63F7328_METHOD_2_80B76CA3BC860A58_OFFSET UNITYSDK_OFFSET(0x84264A0)
#define CLASS_2_7FD9E7DFD63F7328_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8426200)
#define CLASS_2_7FD9E7DFD63F7328_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8426300)
#define CLASS_2_7FD9E7DFD63F7328_TICK_OFFSET UNITYSDK_OFFSET(0x8426650)
#define CLASS_2_7FD9E7DFD63F7328__CTOR_OFFSET UNITYSDK_OFFSET(0x8426170)

inline static constexpr unsigned int Class_2_7FD9E7DFD63F7328_TypeDefinitionIndex = 41667;

class Class_2_7FD9E7DFD63F7328 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::EntityInEraFlipperSpotAreaListener* Field_2_1; // 0x18
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::System::Boolean Field_2_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EntityInEraFlipperSpotAreaListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EntityInEraFlipperSpotAreaListener*))((::PBYTE)hIl2Cpp + CLASS_2_7FD9E7DFD63F7328__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FD9E7DFD63F7328_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FD9E7DFD63F7328_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FD9E7DFD63F7328_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_80B76CA3BC860A58(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7FD9E7DFD63F7328_METHOD_2_80B76CA3BC860A58_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7FD9E7DFD63F7328_TICK_OFFSET))(this, a1);
	}
};
