#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"

namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_METHOD_6_69225B22C8D30B3E_OFFSET UNITYSDK_OFFSET(0xA266DB0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_METHOD_6_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0xA266AC0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_METHOD_6_890F5FC885825F9E_OFFSET UNITYSDK_OFFSET(0xA266C10)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_METHOD_6_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xA266DA0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM__CTOR_OFFSET UNITYSDK_OFFSET(0xA266D00)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_Boom_TypeDefinitionIndex = 54560;

	class WolfBroGunPlayTarget_Boom : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::System::Single radius; // 0xD8
		::System::String* onBoomCustomString; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM__CTOR_OFFSET))(this);
		}

		::System::Void Method_6_6FE6E0587E8D1F5C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_METHOD_6_6FE6E0587E8D1F5C_OFFSET))(this);
		}

		::System::Void Method_6_890F5FC885825F9E(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_METHOD_6_890F5FC885825F9E_OFFSET))(this, a1);
		}

		::System::Void Method_6_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_METHOD_6_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::System::Void Method_6_69225B22C8D30B3E(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_METHOD_6_69225B22C8D30B3E_OFFSET))(this, P0);
		}
	};
}
