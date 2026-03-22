#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_13;
namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace System { class Action; }

#define CLASS_1_16D8496CF1CB4F32_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10D8D890)
#define CLASS_1_16D8496CF1CB4F32_TICK_OFFSET UNITYSDK_OFFSET(0x10D8D940)
#define CLASS_1_16D8496CF1CB4F32__CTOR_OFFSET UNITYSDK_OFFSET(0x10D8D880)

inline static constexpr unsigned int Class_1_16D8496CF1CB4F32_TypeDefinitionIndex = 61612;

class Class_1_16D8496CF1CB4F32 : public ::System::Object
{
public:
	::RPG::Client::ChimeraDuelGameSessionChimera* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::ChimeraDuelGameSessionChimera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + CLASS_1_16D8496CF1CB4F32__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_13* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_13*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_16D8496CF1CB4F32_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_16D8496CF1CB4F32_TICK_OFFSET))(this, a1);
	}
};
