#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ConfigManager; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONFIGMANAGER___C__DISPLAYCLASS104_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15728A70)
#define MIHOYO_SDK_CONFIGMANAGER___C__DISPLAYCLASS104_0__REQUESTLOGINABTEST_B__0_OFFSET UNITYSDK_OFFSET(0x1572DBD0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager___c__DisplayClass104_0_TypeDefinitionIndex = 7082;

	class ConfigManager___c__DisplayClass104_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::MiHoYo::SDK::ConfigManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER___C__DISPLAYCLASS104_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestLoginABTest_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER___C__DISPLAYCLASS104_0__REQUESTLOGINABTEST_B__0_OFFSET))(this, response);
		}
	};
}
