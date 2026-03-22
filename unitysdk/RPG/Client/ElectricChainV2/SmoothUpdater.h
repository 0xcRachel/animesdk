#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/RandomUpdater.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER_GET__WEIGHT_OFFSET UNITYSDK_OFFSET(0x90F9360)
#define RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x90F93B0)
#define RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER_METHOD_2_48F45D5AF72CEB75_OFFSET UNITYSDK_OFFSET(0x90F94C0)
#define RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0x90F96F0)
#define RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER___INITIALIZE_B__0_0_OFFSET UNITYSDK_OFFSET(0x90F97A0)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int SmoothUpdater_TypeDefinitionIndex = 58589;

	class SmoothUpdater : public ::RPG::Client::ElectricChainV2::RandomUpdater
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _lastRandomGroup; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER_METHOD_2_1290EA767C459179_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_48F45D5AF72CEB75(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER_METHOD_2_48F45D5AF72CEB75_OFFSET))(this, a1);
		}

		::System::Single get__weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER_GET__WEIGHT_OFFSET))(this);
		}

		::System::Void __Initialize_b__0_0(::UnityEngine::Vector3 i)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SMOOTHUPDATER___INITIALIZE_B__0_0_OFFSET))(this, i);
		}
	};
}
