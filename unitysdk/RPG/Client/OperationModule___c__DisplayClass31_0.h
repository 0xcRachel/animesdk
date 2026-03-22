#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9100C4ECB2108214;
namespace System { class String; }

#define RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9A21560)
#define RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS31_0__SETUPHTTPAUTHKEYPROMISED_B__0_OFFSET UNITYSDK_OFFSET(0x9A220D0)

namespace RPG::Client
{
	inline static constexpr unsigned int OperationModule___c__DisplayClass31_0_TypeDefinitionIndex = 52874;

	class OperationModule___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::String* signType; // 0x10
		::System::String* appID; // 0x18
		::Class_1_9100C4ECB2108214* req; // 0x20
		::System::String* authKeyVer; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::Class_1_9100C4ECB2108214* _SetupHttpAuthKeyPromised_b__0(::System::String* authKey)
		{
			return ((::Class_1_9100C4ECB2108214*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS31_0__SETUPHTTPAUTHKEYPROMISED_B__0_OFFSET))(this, authKey);
		}
	};
}
