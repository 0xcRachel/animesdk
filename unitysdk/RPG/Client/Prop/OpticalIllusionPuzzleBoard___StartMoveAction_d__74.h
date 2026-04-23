#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionDire.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard; }
namespace RPG::Client::Prop { class OpticalIllusionPuzzleItem; }

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1038A760)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1038AAC0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1038AB20)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1038AAD0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1038A750)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74__CTOR_OFFSET UNITYSDK_OFFSET(0x10380FF0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleBoard___StartMoveAction_d__74_TypeDefinitionIndex = 72208;

	class OpticalIllusionPuzzleBoard___StartMoveAction_d__74 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::OpticalIllusionPuzzleItem* item; // 0x10
		::RPG::Client::Prop::OpticalIllusionPuzzleBoard* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Single distance; // 0x28
		::System::Single speed; // 0x2C
		::RPG::Client::Prop::OpticalIllusionDire dire; // 0x30
		::System::Int32 __1__state; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
