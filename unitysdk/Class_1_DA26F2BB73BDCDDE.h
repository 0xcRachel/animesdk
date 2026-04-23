#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_31;
namespace RPG::GameCore { class ChenLingBattleAnimEventConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_1_DA26F2BB73BDCDDE__CTOR_OFFSET UNITYSDK_OFFSET(0x18F7B130)

inline static constexpr unsigned int Class_1_DA26F2BB73BDCDDE_TypeDefinitionIndex = 39487;

class Class_1_DA26F2BB73BDCDDE : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::ChenLingBattleAnimEventConfig*>* Field_1_4; // 0x18
	::Class_1_43BD383C98B4C0C5_31* Field_1_5; // 0x20
	::UnityEngine::Animator* Field_1_0; // 0x28
	::System::Single Field_1_2; // 0x30
	::System::Single Field_1_3; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA26F2BB73BDCDDE__CTOR_OFFSET))(this);
	}
};
