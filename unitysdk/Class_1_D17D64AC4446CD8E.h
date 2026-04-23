#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/ClosureEvent_2.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9DD8A46984F1AFFD;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_D17D64AC4446CD8E_CLEAR_OFFSET UNITYSDK_OFFSET(0x184C02E0)
#define CLASS_1_D17D64AC4446CD8E_ONALLOC_OFFSET UNITYSDK_OFFSET(0x184C0350)
#define CLASS_1_D17D64AC4446CD8E_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x184C03E0)
#define CLASS_1_D17D64AC4446CD8E__CTOR_OFFSET UNITYSDK_OFFSET(0x184C0450)

inline static constexpr unsigned int Class_1_D17D64AC4446CD8E_TypeDefinitionIndex = 39335;

class Class_1_D17D64AC4446CD8E : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::Int32>* Field_1_3; // 0x10
	::RPG::GCFreeClosure::ClosureEvent_2<::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimLightningStateType> Field_1_2; // 0x18
	::RPG::GameCore::FiveDimLightningStateType Field_1_1; // 0x28
	::System::Single Field_1_0; // 0x2C
	::UnityEngine::Vector3 Field_1_8; // 0x30
	::System::Single Field_1_5; // 0x3C
	::UnityEngine::Vector3 Field_1_6; // 0x40
	::UnityEngine::Vector3 Field_1_7; // 0x4C
	::System::Single Field_1_9; // 0x58
	::System::Boolean Field_1_4; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17D64AC4446CD8E__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17D64AC4446CD8E_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17D64AC4446CD8E_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17D64AC4446CD8E_ONRECYCLE_OFFSET))(this);
	}
};
