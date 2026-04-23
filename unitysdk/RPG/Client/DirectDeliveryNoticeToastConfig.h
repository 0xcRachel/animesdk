#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICETOASTCONFIG_GET_FUNCNAME_OFFSET UNITYSDK_OFFSET(0x17064A40)
#define RPG_CLIENT_DIRECTDELIVERYNOTICETOASTCONFIG_TRYDELAYNOTICE_OFFSET UNITYSDK_OFFSET(0x17064A80)
#define RPG_CLIENT_DIRECTDELIVERYNOTICETOASTCONFIG_TRYDELAYTOAST_OFFSET UNITYSDK_OFFSET(0x170628F0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICETOASTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170628A0)

namespace RPG::Client
{
	inline static constexpr unsigned int DirectDeliveryNoticeToastConfig_TypeDefinitionIndex = 58577;

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

		::System::Boolean TryDelayNotice(::System::Action* lateTrigger)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICETOASTCONFIG_TRYDELAYNOTICE_OFFSET))(this, lateTrigger);
		}

		::System::Boolean TryDelayToast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICETOASTCONFIG_TRYDELAYTOAST_OFFSET))(this);
		}
	};
}
