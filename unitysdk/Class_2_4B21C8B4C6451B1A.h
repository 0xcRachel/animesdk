#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AutoReleaseReferenceState.h"
#include "unitysdk/System/Collections/Generic/HashSet_1.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_4B21C8B4C6451B1A_GET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x9BD3CC0)
#define CLASS_2_4B21C8B4C6451B1A_METHOD_2_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x9BD3D90)
#define CLASS_2_4B21C8B4C6451B1A_ONALLOC_OFFSET UNITYSDK_OFFSET(0x9BD3CE0)
#define CLASS_2_4B21C8B4C6451B1A_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x9BD3D40)
#define CLASS_2_4B21C8B4C6451B1A_SET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x9BD3CD0)
#define CLASS_2_4B21C8B4C6451B1A__CTOR_OFFSET UNITYSDK_OFFSET(0x9BD3DE0)

inline static constexpr unsigned int Class_2_4B21C8B4C6451B1A_TypeDefinitionIndex = 46773;

class Class_2_4B21C8B4C6451B1A : public ::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>
{
public:
	::RPG::AutoReleaseReferenceState _ReferenceState_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B21C8B4C6451B1A__CTOR_OFFSET))(this);
	}

	::RPG::AutoReleaseReferenceState get_ReferenceState()
	{
		return ((::RPG::AutoReleaseReferenceState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B21C8B4C6451B1A_GET_REFERENCESTATE_OFFSET))(this);
	}

	::System::Void set_ReferenceState(::RPG::AutoReleaseReferenceState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AutoReleaseReferenceState))((::PBYTE)hIl2Cpp + CLASS_2_4B21C8B4C6451B1A_SET_REFERENCESTATE_OFFSET))(this, value);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B21C8B4C6451B1A_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B21C8B4C6451B1A_ONRECYCLE_OFFSET))(this);
	}

	::Class_2_4B21C8B4C6451B1A* Method_2_457717A0CF438A7C()
	{
		return ((::Class_2_4B21C8B4C6451B1A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B21C8B4C6451B1A_METHOD_2_457717A0CF438A7C_OFFSET))(this);
	}
};
