#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE16_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xF82FF50)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE16_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xF82FFA0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE16_INVOKE_OFFSET UNITYSDK_OFFSET(0xF82FB20)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE16__CTOR_OFFSET UNITYSDK_OFFSET(0xF82B1A0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE16_TypeDefinitionIndex = 39447;

	class InternalGlobals___GEN_DELEGATE16 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE16__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::GameCore::TurnBasedModifierEvent evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE16_INVOKE_OFFSET))(this, evt);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::TurnBasedModifierEvent evt, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE16_BEGININVOKE_OFFSET))(this, evt, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE16_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
