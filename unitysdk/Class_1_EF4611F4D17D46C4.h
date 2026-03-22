#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/FightServerLogLevel.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_EF4611F4D17D46C4_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15F02450)
#define CLASS_1_EF4611F4D17D46C4_METHOD_1_42FBF539980C2E97_OFFSET UNITYSDK_OFFSET(0x15F02540)
#define CLASS_1_EF4611F4D17D46C4_METHOD_1_D353C50B72352C1C_OFFSET UNITYSDK_OFFSET(0x15F02490)
#define CLASS_1_EF4611F4D17D46C4__CTOR_OFFSET UNITYSDK_OFFSET(0x15F02440)

inline static constexpr unsigned int Class_1_EF4611F4D17D46C4_TypeDefinitionIndex = 27869;

class Class_1_EF4611F4D17D46C4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF4611F4D17D46C4__CTOR_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF4611F4D17D46C4_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_D353C50B72352C1C(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2, ::RPG::LogTag a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_1_EF4611F4D17D46C4_METHOD_1_D353C50B72352C1C_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_42FBF539980C2E97(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2, ::RPG::LogTag a3)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_1_EF4611F4D17D46C4_METHOD_1_42FBF539980C2E97_OFFSET))(a1, a2, a3);
	}
};
