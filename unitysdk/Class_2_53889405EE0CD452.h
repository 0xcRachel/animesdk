#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AutoReleaseReferenceState.h"
#include "unitysdk/System/Collections/Generic/HashSet_1.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_53889405EE0CD452_GET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x148BC3B0)
#define CLASS_2_53889405EE0CD452_METHOD_2_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x148BC480)
#define CLASS_2_53889405EE0CD452_ONALLOC_OFFSET UNITYSDK_OFFSET(0x148BC3D0)
#define CLASS_2_53889405EE0CD452_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x148BC430)
#define CLASS_2_53889405EE0CD452_SET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x148BC3C0)
#define CLASS_2_53889405EE0CD452__CTOR_OFFSET UNITYSDK_OFFSET(0x148BC4D0)

inline static constexpr unsigned int Class_2_53889405EE0CD452_TypeDefinitionIndex = 55320;

class Class_2_53889405EE0CD452 : public ::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>
{
public:
	::RPG::AutoReleaseReferenceState _ReferenceState_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53889405EE0CD452__CTOR_OFFSET))(this);
	}

	::RPG::AutoReleaseReferenceState get_ReferenceState()
	{
		return ((::RPG::AutoReleaseReferenceState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53889405EE0CD452_GET_REFERENCESTATE_OFFSET))(this);
	}

	::System::Void set_ReferenceState(::RPG::AutoReleaseReferenceState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AutoReleaseReferenceState))((::PBYTE)hIl2Cpp + CLASS_2_53889405EE0CD452_SET_REFERENCESTATE_OFFSET))(this, a1);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53889405EE0CD452_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53889405EE0CD452_ONRECYCLE_OFFSET))(this);
	}

	::Class_2_53889405EE0CD452* Method_2_457717A0CF438A7C()
	{
		return ((::Class_2_53889405EE0CD452*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53889405EE0CD452_METHOD_2_457717A0CF438A7C_OFFSET))(this);
	}
};
