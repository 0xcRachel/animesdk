#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE11_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xF82E090)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE11_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xF82E0E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE11_INVOKE_OFFSET UNITYSDK_OFFSET(0xF82DC60)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE11__CTOR_OFFSET UNITYSDK_OFFSET(0xF82B100)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE11_TypeDefinitionIndex = 39442;

	class InternalGlobals___GEN_DELEGATE11 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE11__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::GameCore::AliveState state)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE11_INVOKE_OFFSET))(this, state);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::AliveState state, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::AliveState, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE11_BEGININVOKE_OFFSET))(this, state, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE11_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
