#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionCheckerHandle; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_DISPOSE_OFFSET UNITYSDK_OFFSET(0x133A3B60)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_INIT_OFFSET UNITYSDK_OFFSET(0x133A3100)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x133A32B0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x133A3930)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_TRYSETHINTSEEN_OFFSET UNITYSDK_OFFSET(0x133A4870)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_VISITHINTTOSEECOMPOSEIDS_OFFSET UNITYSDK_OFFSET(0x133A4A10)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__AREHINTSDATACORRUPTED_OFFSET UNITYSDK_OFFSET(0x133A42C0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__CLEARLISTENERSOFHINTS_OFFSET UNITYSDK_OFFSET(0x133A3980)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__CTOR_OFFSET UNITYSDK_OFFSET(0x133A52B0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__HANDLEMONTHLYPERIODRENEWED_OFFSET UNITYSDK_OFFSET(0x133A3660)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__ISMONTHLYPERIODCHANGED_OFFSET UNITYSDK_OFFSET(0x133A3360)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__MARKHINTASTOSEEAFTERCHECKED_OFFSET UNITYSDK_OFFSET(0x133A4640)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__ONPLAYERDAILYREFRESHED_OFFSET UNITYSDK_OFFSET(0x133A3C30)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REBUILDHINTSIFDATACORRUPTED_OFFSET UNITYSDK_OFFSET(0x133A36C0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REBUILDHINTS_OFFSET UNITYSDK_OFFSET(0x133A3CE0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REMOVELISTENEROFHINT_OFFSET UNITYSDK_OFFSET(0x133A48E0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENEROFHINTTOCHECK_OFFSET UNITYSDK_OFFSET(0x133A4D10)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENEROFHINTTOSEE_OFFSET UNITYSDK_OFFSET(0x133A4FE0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENERSOFHINTS_OFFSET UNITYSDK_OFFSET(0x133A3770)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__TRYMARKHINTASSEEN_OFFSET UNITYSDK_OFFSET(0x133A4780)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemComposeLimitHintPart_TypeDefinitionIndex = 60529;

	class ItemComposeLimitHintPart : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _MonthlyHintComposeIDs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ConditionCheckerHandle*>* _ComposeConditionListeners; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnPlayerDailyRefreshed(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__ONPLAYERDAILYREFRESHED_OFFSET))(this, _);
		}

		::System::Boolean _IsMonthlyPeriodChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__ISMONTHLYPERIODCHANGED_OFFSET))(this);
		}

		::System::Void _HandleMonthlyPeriodRenewed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__HANDLEMONTHLYPERIODRENEWED_OFFSET))(this);
		}

		::System::Void _RebuildHints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REBUILDHINTS_OFFSET))(this);
		}

		::System::Void _RebuildHintsIfDataCorrupted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REBUILDHINTSIFDATACORRUPTED_OFFSET))(this);
		}

		::System::Boolean _AreHintsDataCorrupted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__AREHINTSDATACORRUPTED_OFFSET))(this);
		}

		::System::Void _MarkHintAsToSeeAfterChecked(::System::UInt32 composeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__MARKHINTASTOSEEAFTERCHECKED_OFFSET))(this, composeID);
		}

		::System::Boolean _TryMarkHintAsSeen(::System::UInt32 composeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__TRYMARKHINTASSEEN_OFFSET))(this, composeID);
		}

		::System::Void TrySetHintSeen(::System::UInt32 composeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_TRYSETHINTSEEN_OFFSET))(this, composeID);
		}

		::System::Void VisitHintToSeeComposeIDs(::System::Func_2<::System::UInt32, ::System::Boolean>* visit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_VISITHINTTOSEECOMPOSEIDS_OFFSET))(this, visit);
		}

		::System::Void _SetupListenersOfHints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENERSOFHINTS_OFFSET))(this);
		}

		::System::Void _SetupListenerOfHintToCheck(::System::UInt32 composeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENEROFHINTTOCHECK_OFFSET))(this, composeID);
		}

		::System::Void _SetupListenerOfHintToSee(::System::UInt32 composeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENEROFHINTTOSEE_OFFSET))(this, composeID);
		}

		::System::Void _RemoveListenerOfHint(::System::UInt32 composeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REMOVELISTENEROFHINT_OFFSET))(this, composeID);
		}

		::System::Void _ClearListenersOfHints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__CLEARLISTENERSOFHINTS_OFFSET))(this);
		}
	};
}
