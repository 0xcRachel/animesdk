#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkPopDirection.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraTalkContent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_GET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0x158175E0)
#define RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x158175A0)
#define RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_GET_ISCHIMERA_OFFSET UNITYSDK_OFFSET(0x158175C0)
#define RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_GET_VOICEEVTSTR_OFFSET UNITYSDK_OFFSET(0x15817600)
#define RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_SET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0x158175F0)
#define RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x158175B0)
#define RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_SET_ISCHIMERA_OFFSET UNITYSDK_OFFSET(0x158175D0)
#define RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_SET_VOICEEVTSTR_OFFSET UNITYSDK_OFFSET(0x15817610)
#define RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x15817620)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBubbleTalkParam_TypeDefinitionIndex = 71902;

	class ChimeraBubbleTalkParam : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* _VoiceEvtStr_k__BackingField; // 0x18
		::UnityEngine::Transform* AttachPoint; // 0x20
		::System::Single ShowTime; // 0x28
		::System::Boolean _IsChimera_k__BackingField; // 0x2C
		::RPG::Client::TextID Content; // 0x30
		::RPG::GameCore::ChimeraTalkPopDirection _Direction_k__BackingField; // 0x40
		::System::UInt32 _ChimeraID_k__BackingField; // 0x44

		::System::Void _ctor(::UnityEngine::Transform* tf, ::RPG::GameCore::ChimeraTalkContent* content, ::System::Single time, ::RPG::GameCore::ChimeraTalkPopDirection direction, ::System::UInt32 chimeraID)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::ChimeraTalkContent*, ::System::Single, ::RPG::GameCore::ChimeraTalkPopDirection, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM__CTOR_OFFSET))(this, tf, content, time, direction, chimeraID);
		}

		::RPG::GameCore::ChimeraTalkPopDirection get_Direction()
		{
			return ((::RPG::GameCore::ChimeraTalkPopDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_Direction(::RPG::GameCore::ChimeraTalkPopDirection value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraTalkPopDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_SET_DIRECTION_OFFSET))(this, value);
		}

		::System::Boolean get_IsChimera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_GET_ISCHIMERA_OFFSET))(this);
		}

		::System::Void set_IsChimera(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_SET_ISCHIMERA_OFFSET))(this, value);
		}

		::System::UInt32 get_ChimeraID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_GET_CHIMERAID_OFFSET))(this);
		}

		::System::Void set_ChimeraID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_SET_CHIMERAID_OFFSET))(this, value);
		}

		::System::String* get_VoiceEvtStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_GET_VOICEEVTSTR_OFFSET))(this);
		}

		::System::Void set_VoiceEvtStr(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_SET_VOICEEVTSTR_OFFSET))(this, value);
		}
	};
}
