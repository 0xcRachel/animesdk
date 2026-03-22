#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
namespace RPG::GameCore { class BlockConfig; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGPointCloudGrassBlockData; }

#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS445_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10AA6470)
#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS445_0___ONPOINTCLOUDGRASSDATALOADED_B__0_OFFSET UNITYSDK_OFFSET(0x10AA6B60)

inline static constexpr unsigned int Class_1_303D5A33D1401D59___c__DisplayClass445_0_TypeDefinitionIndex = 58853;

class Class_1_303D5A33D1401D59___c__DisplayClass445_0 : public ::System::Object
{
public:
	::UnityEngine::GameObject* grassNode; // 0x10
	::UnityEngine::RPGPointCloudGrassBlockData* grassData; // 0x18
	::RPG::GameCore::BlockConfig* block; // 0x20
	::Class_1_303D5A33D1401D59* __4__this; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS445_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnPointCloudGrassDataLoaded_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS445_0___ONPOINTCLOUDGRASSDATALOADED_B__0_OFFSET))(this);
	}
};
