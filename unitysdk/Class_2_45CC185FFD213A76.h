#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowDreamLandPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_45CC185FFD213A76_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10CA6810)
#define CLASS_2_45CC185FFD213A76_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x10CA68A0)
#define CLASS_2_45CC185FFD213A76_METHOD_2_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x10CA6B10)
#define CLASS_2_45CC185FFD213A76_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10CA6850)
#define CLASS_2_45CC185FFD213A76_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10CA6A60)
#define CLASS_2_45CC185FFD213A76_TICK_OFFSET UNITYSDK_OFFSET(0x10CA6AB0)
#define CLASS_2_45CC185FFD213A76__CTOR_OFFSET UNITYSDK_OFFSET(0x10CA6800)

inline static constexpr unsigned int Class_2_45CC185FFD213A76_TypeDefinitionIndex = 54055;

class Class_2_45CC185FFD213A76 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::LuaUIController* Field_2_2; // 0x18
	::RPG::GameCore::ShowDreamLandPage* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowDreamLandPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowDreamLandPage*))((::PBYTE)hIl2Cpp + CLASS_2_45CC185FFD213A76__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45CC185FFD213A76_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45CC185FFD213A76_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45CC185FFD213A76_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_45CC185FFD213A76_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45CC185FFD213A76_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45CC185FFD213A76_METHOD_2_CBDC22058B67F0FE_OFFSET))(this);
	}
};
