#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKSTATIC_GET_ENTITYROOT_OFFSET UNITYSDK_OFFSET(0x185A0D50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKSTATIC_SET_ENTITYROOT_OFFSET UNITYSDK_OFFSET(0x185A0DE0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartySimpleTalkStatic_TypeDefinitionIndex = 69406;

	class TrainPartySimpleTalkStatic : public ::System::Object
	{
	public:
		static ::UnityEngine::Transform** StaticGet__EntityRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(TrainPartySimpleTalkStatic_TypeDefinitionIndex)->GetStaticField(0x52300);
		}

		static ::UnityEngine::Transform* get_EntityRoot()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKSTATIC_GET_ENTITYROOT_OFFSET))();
		}

		static ::System::Void set_EntityRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKSTATIC_SET_ENTITYROOT_OFFSET))(a1);
		}
	};
}
