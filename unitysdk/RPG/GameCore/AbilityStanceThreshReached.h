#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ABILITYSTANCETHRESHREACHED_CLEAR_OFFSET UNITYSDK_OFFSET(0x12B06970)
#define RPG_GAMECORE_ABILITYSTANCETHRESHREACHED_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x12B06A10)
#define RPG_GAMECORE_ABILITYSTANCETHRESHREACHED_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x12B069C0)
#define RPG_GAMECORE_ABILITYSTANCETHRESHREACHED_INIT_OFFSET UNITYSDK_OFFSET(0x12B068E0)
#define RPG_GAMECORE_ABILITYSTANCETHRESHREACHED__CTOR_OFFSET UNITYSDK_OFFSET(0x12B06A60)
#define RPG_GAMECORE_ABILITYSTANCETHRESHREACHED___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x12B06A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityStanceThreshReached_TypeDefinitionIndex = 52833;

	class AbilityStanceThreshReached : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* DefenderEntity; // 0x18
		::RPG::GameCore::GameEntity* AttackerEntity; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* LockHPKeys; // 0x28
		::RPG::GameCore::FixPoint Threshold; // 0x30
		::System::Int32 SumStanceCount; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCETHRESHREACHED__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityStanceThreshReached* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Int32 a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::RPG::GameCore::AbilityStanceThreshReached*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCETHRESHREACHED_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCETHRESHREACHED_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCETHRESHREACHED_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCETHRESHREACHED_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCETHRESHREACHED___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
