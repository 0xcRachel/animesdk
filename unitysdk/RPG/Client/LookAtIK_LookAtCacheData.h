#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LookAtTargetData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LookAtIK; }
namespace RPG::Client { class LookAtTargetConstraint; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x9A75320)
#define RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A75610)
#define RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9A6C560)

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtIK_LookAtCacheData_TypeDefinitionIndex = 55900;

	class LookAtIK_LookAtCacheData : public ::System::Object
	{
	public:
		::RPG::Client::LookAtTargetConstraint* LookAtConstraint; // 0x10
		::RPG::Client::LookAtTargetData LookAtData; // 0x18
		::UnityEngine::Transform* LookAtTarget; // 0xA0
		::System::Single OverrideLookAtFadeInTime; // 0xA8
		::System::Single Speed; // 0xAC
		::System::Single LeftRightFilterIntensity; // 0xB0
		::System::Single OverrideLookAtSpeed; // 0xB4
		::UnityEngine::Vector3 PrevTracePos; // 0xB8
		::System::Single FadeOutTime; // 0xC4
		::System::Single StopSpeed; // 0xC8
		::System::Single OverrideLookAtFadeOutTime; // 0xCC
		::System::Single LookAtToTargetSpeed; // 0xD0
		::System::Single FadeInTime; // 0xD4
		::System::Single UpDownFilterIntensity; // 0xD8

		::System::Void _ctor(::RPG::Client::LookAtIK* ik)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtIK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA__CTOR_OFFSET))(this, ik);
		}

		::System::Void CopyTo(::UnityEngine::MonoBehaviour* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_COPYTO_OFFSET))(this, data);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_DISPOSE_OFFSET))(this);
		}
	};
}
