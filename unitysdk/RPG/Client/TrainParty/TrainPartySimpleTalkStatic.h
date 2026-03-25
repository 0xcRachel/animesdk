#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKSTATIC_GET_ENTITYROOT_OFFSET UNITYSDK_OFFSET(0xA61A2A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKSTATIC_SET_ENTITYROOT_OFFSET UNITYSDK_OFFSET(0xA61A350)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartySimpleTalkStatic_TypeDefinitionIndex = 61107;

	class TrainPartySimpleTalkStatic : public ::System::Object
	{
	public:
		static ::UnityEngine::Transform** StaticGet__EntityRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(TrainPartySimpleTalkStatic_TypeDefinitionIndex)->GetStaticField(0x46260);
		}

		static ::UnityEngine::Transform* get_EntityRoot()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKSTATIC_GET_ENTITYROOT_OFFSET))();
		}

		static ::System::Void set_EntityRoot(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKSTATIC_SET_ENTITYROOT_OFFSET))(value);
		}
	};
}
