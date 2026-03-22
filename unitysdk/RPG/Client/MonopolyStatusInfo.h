#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_49;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYSTATUSINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98A2780)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_GET_TRIGGEREDOPTIONLIST_OFFSET UNITYSDK_OFFSET(0x98A2BD0)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_INIT_OFFSET UNITYSDK_OFFSET(0x98A2700)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_ISOPTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x98A2B70)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_SET_TRIGGEREDOPTIONLIST_OFFSET UNITYSDK_OFFSET(0x98A2BE0)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x98A27F0)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_UNINIT_OFFSET UNITYSDK_OFFSET(0x98A2740)
#define RPG_CLIENT_MONOPOLYSTATUSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x98A2BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyStatusInfo_TypeDefinitionIndex = 52770;

	class MonopolyStatusInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _TriggeredOptionList_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_UNINIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_735612C94F558EAE_49* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_49*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_SYNC_OFFSET))(this, ntf);
		}

		::System::Boolean IsOptionTriggered(::System::UInt32 optionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_ISOPTIONTRIGGERED_OFFSET))(this, optionID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TriggeredOptionList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_GET_TRIGGEREDOPTIONLIST_OFFSET))(this);
		}

		::System::Void set_TriggeredOptionList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_SET_TRIGGEREDOPTIONLIST_OFFSET))(this, value);
		}
	};
}
