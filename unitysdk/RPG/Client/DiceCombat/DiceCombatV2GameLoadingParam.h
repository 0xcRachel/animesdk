#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMELOADINGPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x17A499B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMELOADINGPARAM_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x17A49A30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMELOADINGPARAM_SET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x17A49A40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMELOADINGPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x17A499A0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2GameLoadingParam_TypeDefinitionIndex = 69959;

	class DiceCombatV2GameLoadingParam : public ::System::Object
	{
	public:
		::System::Action* _Callback_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMELOADINGPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2GameLoadingParam* Create(::System::Action* callback)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2GameLoadingParam*(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMELOADINGPARAM_CREATE_OFFSET))(callback);
		}

		::System::Action* get_Callback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMELOADINGPARAM_GET_CALLBACK_OFFSET))(this);
		}

		::System::Void set_Callback(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMELOADINGPARAM_SET_CALLBACK_OFFSET))(this, value);
		}
	};
}
