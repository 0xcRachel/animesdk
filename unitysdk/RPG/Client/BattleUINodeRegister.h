#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_0ACFF577E95C5EAF;
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEUINODEREGISTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x8DDC110)
#define RPG_CLIENT_BATTLEUINODEREGISTER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x8DDC500)
#define RPG_CLIENT_BATTLEUINODEREGISTER_METHOD_5_1F0134B562731ABF_OFFSET UNITYSDK_OFFSET(0x8DDC770)
#define RPG_CLIENT_BATTLEUINODEREGISTER_METHOD_5_404A2BFC62302041_OFFSET UNITYSDK_OFFSET(0x8DDC5F0)
#define RPG_CLIENT_BATTLEUINODEREGISTER_METHOD_5_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x8DDC1C0)
#define RPG_CLIENT_BATTLEUINODEREGISTER_METHOD_5_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x8DDC3E0)
#define RPG_CLIENT_BATTLEUINODEREGISTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8DDC270)
#define RPG_CLIENT_BATTLEUINODEREGISTER_SPAWNED_OFFSET UNITYSDK_OFFSET(0x8DDC4B0)
#define RPG_CLIENT_BATTLEUINODEREGISTER__CTOR_OFFSET UNITYSDK_OFFSET(0x8DDC7C0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleUINodeRegister_TypeDefinitionIndex = 57598;

	class BattleUINodeRegister : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* UniqueName; // 0x18
		::Class_1_0ACFF577E95C5EAF* Field_5_1; // 0x20
		::System::Boolean Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_DESPAWNED_OFFSET))(this);
		}

		::System::Void Method_5_775B6D644F07B554()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_METHOD_5_775B6D644F07B554_OFFSET))(this);
		}

		::System::Void Method_5_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_METHOD_5_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void Method_5_1F0134B562731ABF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_METHOD_5_1F0134B562731ABF_OFFSET))(this, a1);
		}

		::Class_1_0ACFF577E95C5EAF* Method_5_404A2BFC62302041()
		{
			return ((::Class_1_0ACFF577E95C5EAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUINODEREGISTER_METHOD_5_404A2BFC62302041_OFFSET))(this);
		}
	};
}
