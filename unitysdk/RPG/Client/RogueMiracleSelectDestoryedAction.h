#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_68;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x9E25AA0)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0x9E25B30)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0x9E259C0)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x9E25980)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GET_SELECTMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0x9E259A0)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0x9E259D0)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x9E25990)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_SET_SELECTMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0x9E259B0)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x9E25AE0)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x9E259E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleSelectDestoryedAction_TypeDefinitionIndex = 53380;

	class RogueMiracleSelectDestoryedAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectMiracleIDs_k__BackingField; // 0x10
		::System::UInt32 _HintID_k__BackingField; // 0x18
		::System::UInt32 _RogueActionID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_735612C94F558EAE_68* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_735612C94F558EAE_68*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION__CTOR_OFFSET))(this, actionID, proto);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_SET_ROGUEACTIONID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectMiracleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GET_SELECTMIRACLEIDS_OFFSET))(this);
		}

		::System::Void set_SelectMiracleIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_SET_SELECTMIRACLEIDS_OFFSET))(this, value);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_SET_HINTID_OFFSET))(this, value);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GETUIPATH_OFFSET))(this);
		}
	};
}
