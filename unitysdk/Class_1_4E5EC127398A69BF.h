#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class LevelNPCInfoOverride; }

#define CLASS_1_4E5EC127398A69BF_METHOD_1_2DB6924C227C38EA_1_OFFSET UNITYSDK_OFFSET(0x132EAA80)
#define CLASS_1_4E5EC127398A69BF_METHOD_1_2DB6924C227C38EA_2_OFFSET UNITYSDK_OFFSET(0x132EAAF0)
#define CLASS_1_4E5EC127398A69BF_METHOD_1_2DB6924C227C38EA_OFFSET UNITYSDK_OFFSET(0x132EAA10)
#define CLASS_1_4E5EC127398A69BF_METHOD_1_68F248EF2D2D5377_OFFSET UNITYSDK_OFFSET(0x132EA3F0)
#define CLASS_1_4E5EC127398A69BF_METHOD_1_B28F34508E032617_OFFSET UNITYSDK_OFFSET(0x132EAB60)
#define CLASS_1_4E5EC127398A69BF_METHOD_1_E739070A8AF1BA8C_OFFSET UNITYSDK_OFFSET(0x132EA290)

inline static constexpr unsigned int Class_1_4E5EC127398A69BF_TypeDefinitionIndex = 52748;

class Class_1_4E5EC127398A69BF : public ::System::Object
{
public:
	static ::System::Void Method_1_E739070A8AF1BA8C(::RPG::GameCore::LevelNPCInfoOverride* a1, ::RPG::Client::MapNpcDef* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::LevelNPCInfoOverride*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_4E5EC127398A69BF_METHOD_1_E739070A8AF1BA8C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_68F248EF2D2D5377(::RPG::GameCore::LevelNPCInfoOverride* a1, ::RPG::Client::MapNpcDef* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::LevelNPCInfoOverride*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_4E5EC127398A69BF_METHOD_1_68F248EF2D2D5377_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2DB6924C227C38EA(::RPG::GameCore::LevelNPCInfoOverride* a1, ::RPG::Client::MapNpcDef* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::LevelNPCInfoOverride*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_4E5EC127398A69BF_METHOD_1_2DB6924C227C38EA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2DB6924C227C38EA_1(::RPG::GameCore::LevelNPCInfoOverride* a1, ::RPG::Client::MapNpcDef* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::LevelNPCInfoOverride*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_4E5EC127398A69BF_METHOD_1_2DB6924C227C38EA_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2DB6924C227C38EA_2(::RPG::GameCore::LevelNPCInfoOverride* a1, ::RPG::Client::MapNpcDef* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::LevelNPCInfoOverride*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_4E5EC127398A69BF_METHOD_1_2DB6924C227C38EA_2_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::LevelNPCInfoOverride* Method_1_B28F34508E032617(::RPG::Client::MapNpcDef* a1)
	{
		return ((::RPG::GameCore::LevelNPCInfoOverride*(*)(::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_4E5EC127398A69BF_METHOD_1_B28F34508E032617_OFFSET))(a1);
	}
};
