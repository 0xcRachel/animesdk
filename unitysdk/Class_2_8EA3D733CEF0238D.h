#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::Client::Prop { class WolfBroPuzzleBoard; }
namespace RPG::GameCore { class RestoreWolfBroPuzzleArchive; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8EA3D733CEF0238D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D3AA10)
#define CLASS_2_8EA3D733CEF0238D_METHOD_2_90ED9EE1B14DE0E1_OFFSET UNITYSDK_OFFSET(0x8D3ADA0)
#define CLASS_2_8EA3D733CEF0238D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D3A6D0)
#define CLASS_2_8EA3D733CEF0238D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8D3A8C0)
#define CLASS_2_8EA3D733CEF0238D_TICK_OFFSET UNITYSDK_OFFSET(0x8D3AB20)
#define CLASS_2_8EA3D733CEF0238D__CTOR_OFFSET UNITYSDK_OFFSET(0x8D3A5F0)

inline static constexpr unsigned int Class_2_8EA3D733CEF0238D_TypeDefinitionIndex = 46069;

class Class_2_8EA3D733CEF0238D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::Prop::WolfBroPuzzleBoard* Field_2_4; // 0x18
	::RPG::GameCore::RestoreWolfBroPuzzleArchive* Field_2_1; // 0x20
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x28
	::RPG::GameCore::TaskContext* Field_2_0; // 0x30
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RestoreWolfBroPuzzleArchive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RestoreWolfBroPuzzleArchive*))((::PBYTE)hIl2Cpp + CLASS_2_8EA3D733CEF0238D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EA3D733CEF0238D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EA3D733CEF0238D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EA3D733CEF0238D_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8EA3D733CEF0238D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_90ED9EE1B14DE0E1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8EA3D733CEF0238D_METHOD_2_90ED9EE1B14DE0E1_OFFSET))(this, a1);
	}
};
