#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE8_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xF839F10)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE8_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xF839F60)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE8_INVOKE_OFFSET UNITYSDK_OFFSET(0xF839AE0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE8__CTOR_OFFSET UNITYSDK_OFFSET(0xF82B0A0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE8_TypeDefinitionIndex = 39439;

	class InternalGlobals___GEN_DELEGATE8 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE8__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::GameCore::AliveState state)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE8_INVOKE_OFFSET))(this, state);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::AliveState state, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::AliveState, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE8_BEGININVOKE_OFFSET))(this, state, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE8_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
