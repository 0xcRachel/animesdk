#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MusicBeatSyncGroup.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_26B434242C80B353_CLEAR_OFFSET UNITYSDK_OFFSET(0x167FA910)
#define CLASS_1_26B434242C80B353_METHOD_1_021B21E85B05F692_OFFSET UNITYSDK_OFFSET(0x167FAAA0)
#define CLASS_1_26B434242C80B353_METHOD_1_1E3B200FE62F7C8E_OFFSET UNITYSDK_OFFSET(0x167FAA20)
#define CLASS_1_26B434242C80B353_METHOD_1_4C409DF5E54C7553_OFFSET UNITYSDK_OFFSET(0x167FAB60)
#define CLASS_1_26B434242C80B353_ONALLOC_OFFSET UNITYSDK_OFFSET(0x167FA980)
#define CLASS_1_26B434242C80B353_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x167FA9E0)
#define CLASS_1_26B434242C80B353__CTOR_OFFSET UNITYSDK_OFFSET(0x167FAE40)

inline static constexpr unsigned int Class_1_26B434242C80B353_TypeDefinitionIndex = 33429;

class Class_1_26B434242C80B353 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup, ::System::Int32>* Field_1_2; // 0x10
	::System::Action_1<::System::Single>* Field_1_0; // 0x18
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup, ::System::Int32>* Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::Boolean Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B434242C80B353__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B434242C80B353_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B434242C80B353_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B434242C80B353_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_1E3B200FE62F7C8E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_26B434242C80B353_METHOD_1_1E3B200FE62F7C8E_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_021B21E85B05F692(::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup))((::PBYTE)hIl2Cpp + CLASS_1_26B434242C80B353_METHOD_1_021B21E85B05F692_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C409DF5E54C7553()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B434242C80B353_METHOD_1_4C409DF5E54C7553_OFFSET))(this);
	}
};
