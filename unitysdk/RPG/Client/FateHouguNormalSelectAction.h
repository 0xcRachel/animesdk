#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateHouguSelectBgType.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_27;
namespace RPG::Client { class FateHouguDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_CONFIRMHOUGUSELECTION_OFFSET UNITYSDK_OFFSET(0x922CC90)
#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x922CC20)
#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0x922CE60)
#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_GET_BGTYPE_OFFSET UNITYSDK_OFFSET(0x922CEB0)
#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_GET_ISINBATTLE_OFFSET UNITYSDK_OFFSET(0x922CEA0)
#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_GET_SELECTHOUGUDATA_OFFSET UNITYSDK_OFFSET(0x922CE80)
#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0x922CE70)
#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_SET_SELECTHOUGUDATA_OFFSET UNITYSDK_OFFSET(0x922CE90)
#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0x922C8B0)
#define RPG_CLIENT_FATEHOUGUNORMALSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x922C5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHouguNormalSelectAction_TypeDefinitionIndex = 50866;

	class FateHouguNormalSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* _SelectHouguData_k__BackingField; // 0x10
		::System::UInt32 _ActionID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_6E708EAB438EC183_27* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_6E708EAB438EC183_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION__CTOR_OFFSET))(this, actionID, proto);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_DISPOSE_OFFSET))(this);
		}

		::System::Void ConfirmHouguSelection(::System::UInt32 houguID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_CONFIRMHOUGUSELECTION_OFFSET))(this, houguID);
		}

		::System::Void _Construct(::Class_1_6E708EAB438EC183_27* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION__CONSTRUCT_OFFSET))(this, proto);
		}

		::System::UInt32 get_ActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void set_ActionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_SET_ACTIONID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* get_SelectHouguData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_GET_SELECTHOUGUDATA_OFFSET))(this);
		}

		::System::Void set_SelectHouguData(::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_SET_SELECTHOUGUDATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsInBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_GET_ISINBATTLE_OFFSET))(this);
		}

		::RPG::Client::FateHouguSelectBgType get_BgType()
		{
			return ((::RPG::Client::FateHouguSelectBgType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUNORMALSELECTACTION_GET_BGTYPE_OFFSET))(this);
		}
	};
}
