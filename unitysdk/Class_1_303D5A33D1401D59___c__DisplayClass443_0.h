#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
namespace RPG::GameCore { class BlockConfig; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGDensityMapGrassBlockData; }

#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS443_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10AA6150)
#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS443_0___ONDENSITYMAPGRASSDATALOADED_B__0_OFFSET UNITYSDK_OFFSET(0x10AA6A20)

inline static constexpr unsigned int Class_1_303D5A33D1401D59___c__DisplayClass443_0_TypeDefinitionIndex = 58852;

class Class_1_303D5A33D1401D59___c__DisplayClass443_0 : public ::System::Object
{
public:
	::Class_1_303D5A33D1401D59* __4__this; // 0x10
	::UnityEngine::GameObject* grassNode; // 0x18
	::UnityEngine::RPGDensityMapGrassBlockData* grassData; // 0x20
	::RPG::GameCore::BlockConfig* block; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS443_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnDensityMapGrassDataLoaded_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS443_0___ONDENSITYMAPGRASSDATALOADED_B__0_OFFSET))(this);
	}
};
