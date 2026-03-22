#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_75;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEBONUSSELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x9DD8290)
#define RPG_CLIENT_ROGUEBONUSSELECTACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0x9DD8320)
#define RPG_CLIENT_ROGUEBONUSSELECTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x9DD81B0)
#define RPG_CLIENT_ROGUEBONUSSELECTACTION_GET_SELECTBONUSIDS_OFFSET UNITYSDK_OFFSET(0x9DD81C0)
#define RPG_CLIENT_ROGUEBONUSSELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x9DD82D0)
#define RPG_CLIENT_ROGUEBONUSSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD81D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBonusSelectAction_TypeDefinitionIndex = 53360;

	class RogueBonusSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectBonusIDs_k__BackingField; // 0x10
		::System::UInt32 _RogueActionID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 rogueActionID, ::Class_1_6E708EAB438EC183_75* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_6E708EAB438EC183_75*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBONUSSELECTACTION__CTOR_OFFSET))(this, rogueActionID, proto);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBONUSSELECTACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectBonusIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBONUSSELECTACTION_GET_SELECTBONUSIDS_OFFSET))(this);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBONUSSELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBONUSSELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBONUSSELECTACTION_GETUIPATH_OFFSET))(this);
		}
	};
}
