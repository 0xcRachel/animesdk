#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_391;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_ADDENVIRONMENTINFOS_1_OFFSET UNITYSDK_OFFSET(0x11D356E0)
#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_ADDENVIRONMENTINFOS_OFFSET UNITYSDK_OFFSET(0x11D35640)
#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_CLEARINFOS_OFFSET UNITYSDK_OFFSET(0x11D357A0)
#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_GET_ENVIRONMENTINFOS_OFFSET UNITYSDK_OFFSET(0x11D35810)
#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_SET_ENVIRONMENTINFOS_OFFSET UNITYSDK_OFFSET(0x11D35820)
#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0x11D35830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePauseEnvironmentInfos_TypeDefinitionIndex = 49407;

	class BattlePauseEnvironmentInfos : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_391*>* _EnvironmentInfos_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS__CTOR_OFFSET))(this);
		}

		::System::Void AddEnvironmentInfos(::Class_0_16E4307DCC419505_391* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_391*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_ADDENVIRONMENTINFOS_OFFSET))(this, info);
		}

		::System::Void AddEnvironmentInfos_1(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_391*>* infos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_391*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_ADDENVIRONMENTINFOS_1_OFFSET))(this, infos);
		}

		::System::Void ClearInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_CLEARINFOS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_391*>* get_EnvironmentInfos()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_391*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_GET_ENVIRONMENTINFOS_OFFSET))(this);
		}

		::System::Void set_EnvironmentInfos(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_391*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_391*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTINFOS_SET_ENVIRONMENTINFOS_OFFSET))(this, value);
		}
	};
}
