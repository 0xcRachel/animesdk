#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class RotatePillarPuzzleFragment; }

#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA148A50)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA149620)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA149680)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA149630)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA148A40)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12__CTOR_OFFSET UNITYSDK_OFFSET(0xA148470)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RotatePillarPuzzleFragment__DoRotateAction_d__12_TypeDefinitionIndex = 64258;

	class RotatePillarPuzzleFragment__DoRotateAction_d__12 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::RotatePillarPuzzleFragment* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 nowDegree; // 0x20
		::System::Single _closeWait_5__8; // 0x24
		::System::Int32 cnt; // 0x28
		::System::Boolean _childRotate_5__5; // 0x2C
		::System::Boolean needPlaySound; // 0x2D
		::System::Single _clock_5__7; // 0x30
		::System::Nullable_1<::System::Single> forceTime; // 0x34
		::System::Int32 __1__state; // 0x3C
		::System::Single _st_5__6; // 0x40
		::System::Single _totalTime_5__4; // 0x44
		::System::Int32 targetDegree; // 0x48
		::System::Single _fElapsedTimeInSec_5__9; // 0x4C
		::System::Int32 _rotDeg_5__3; // 0x50
		::System::Int32 _sgn_5__2; // 0x54

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
