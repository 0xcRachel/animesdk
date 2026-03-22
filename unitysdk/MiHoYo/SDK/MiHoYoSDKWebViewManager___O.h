#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager___O_TypeDefinitionIndex = 36368;

	class MiHoYoSDKWebViewManager___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___OnShutDown()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKWebViewManager___O_TypeDefinitionIndex)->GetStaticField(0x41AF0);
		}
	};
}
