#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICETOASTCONFIG_GET_FUNCNAME_OFFSET UNITYSDK_OFFSET(0x18CC6D60)
#define RPG_CLIENT_DIRECTDELIVERYNOTICETOASTCONFIG_TRYDELAYNOTICE_OFFSET UNITYSDK_OFFSET(0x18CC6DA0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICETOASTCONFIG_TRYDELAYTOAST_OFFSET UNITYSDK_OFFSET(0x18CC4A50)
#define RPG_CLIENT_DIRECTDELIVERYNOTICETOASTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC4A00)

namespace RPG::Client
{
	inline static constexpr unsigned int DirectDeliveryNoticeToastConfig_TypeDefinitionIndex = 59507;

	class DirectDeliveryNoticeToastConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICETOASTCONFIG__CTOR_OFFSET))(this);
		}

		::System::String* get_FuncName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICETOASTCONFIG_GET_FUNCNAME_OFFSET))(this);
		}

		::System::Boolean TryDelayNotice(::System::Action* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICETOASTCONFIG_TRYDELAYNOTICE_OFFSET))(this, a1);
		}

		::System::Boolean TryDelayToast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICETOASTCONFIG_TRYDELAYTOAST_OFFSET))(this);
		}
	};
}
