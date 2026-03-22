#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetTextJoinValue; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_591C6A1BF4E2866D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111B67C0)
#define CLASS_2_591C6A1BF4E2866D_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x111B6830)
#define CLASS_2_591C6A1BF4E2866D_METHOD_2_60466F559594E331_OFFSET UNITYSDK_OFFSET(0x111B65B0)
#define CLASS_2_591C6A1BF4E2866D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x111B63E0)
#define CLASS_2_591C6A1BF4E2866D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x111B6320)
#define CLASS_2_591C6A1BF4E2866D_TICK_OFFSET UNITYSDK_OFFSET(0x111B6380)
#define CLASS_2_591C6A1BF4E2866D__CTOR_OFFSET UNITYSDK_OFFSET(0x111B6300)

inline static constexpr unsigned int Class_2_591C6A1BF4E2866D_TypeDefinitionIndex = 42069;

class Class_2_591C6A1BF4E2866D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::RPG::GameCore::SetTextJoinValue* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTextJoinValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTextJoinValue*))((::PBYTE)hIl2Cpp + CLASS_2_591C6A1BF4E2866D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_591C6A1BF4E2866D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_591C6A1BF4E2866D_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_591C6A1BF4E2866D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_591C6A1BF4E2866D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_591C6A1BF4E2866D_METHOD_2_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_60466F559594E331(::RPG::GameCore::TextJoinConfigRow* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_591C6A1BF4E2866D_METHOD_2_60466F559594E331_OFFSET))(this, a1, a2);
	}
};
