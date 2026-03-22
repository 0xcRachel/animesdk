#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_FA4F4A67B1C04320_384;
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_GETSCRIPTPATH_OFFSET UNITYSDK_OFFSET(0x941E200)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x941E290)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0x941E270)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_SET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x941E2A0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_SET_TRAITID_OFFSET UNITYSDK_OFFSET(0x941E280)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0x941E1B0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x941E1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitChooseBaseAction_TypeDefinitionIndex = 51944;

	class GridFightTraitChooseBaseAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::UInt32 _TraitID_k__BackingField; // 0x18
		::System::UInt32 _EffectID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 traitID, ::System::UInt32 effectID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION__CTOR_OFFSET))(this, traitID, effectID);
		}

		::System::Void SyncHandleRsp(::Class_1_FA4F4A67B1C04320_384* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_384*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_SYNCHANDLERSP_OFFSET))(this, rsp);
		}

		::System::String* GetScriptPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_GETSCRIPTPATH_OFFSET))(this);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_GET_TRAITID_OFFSET))(this);
		}

		::System::Void set_TraitID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_SET_TRAITID_OFFSET))(this, value);
		}

		::System::UInt32 get_EffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_GET_EFFECTID_OFFSET))(this);
		}

		::System::Void set_EffectID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_SET_EFFECTID_OFFSET))(this, value);
		}
	};
}
