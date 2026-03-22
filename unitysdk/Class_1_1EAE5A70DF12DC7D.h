#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_13;
namespace RPG::Client { class ChimeraDuelGameShopStallData; }
namespace System { class Action; }

#define CLASS_1_1EAE5A70DF12DC7D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10355100)
#define CLASS_1_1EAE5A70DF12DC7D_TICK_OFFSET UNITYSDK_OFFSET(0x10355180)
#define CLASS_1_1EAE5A70DF12DC7D__CTOR_OFFSET UNITYSDK_OFFSET(0x103550F0)

inline static constexpr unsigned int Class_1_1EAE5A70DF12DC7D_TypeDefinitionIndex = 61613;

class Class_1_1EAE5A70DF12DC7D : public ::System::Object
{
public:
	::RPG::Client::ChimeraDuelGameShopStallData* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::ChimeraDuelGameShopStallData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameShopStallData*))((::PBYTE)hIl2Cpp + CLASS_1_1EAE5A70DF12DC7D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_13* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_13*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1EAE5A70DF12DC7D_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1EAE5A70DF12DC7D_TICK_OFFSET))(this, a1);
	}
};
