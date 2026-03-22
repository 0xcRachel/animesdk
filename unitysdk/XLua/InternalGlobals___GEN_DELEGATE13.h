#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UseAbilityOption.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_304;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE13_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xF82EDD0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE13_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xF82EE00)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE13_INVOKE_OFFSET UNITYSDK_OFFSET(0xF82E690)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE13__CTOR_OFFSET UNITYSDK_OFFSET(0xF82B140)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE13_TypeDefinitionIndex = 39444;

	class InternalGlobals___GEN_DELEGATE13 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE13__CTOR_OFFSET))(this, object, method);
		}

		::RPG::GameCore::UseAbilityOption Invoke(::Class_0_16E4307DCC419505_304* pAbility)
		{
			return ((::RPG::GameCore::UseAbilityOption(*)(::PVOID, ::Class_0_16E4307DCC419505_304*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE13_INVOKE_OFFSET))(this, pAbility);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_304* pAbility, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_304*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE13_BEGININVOKE_OFFSET))(this, pAbility, callback, object);
		}

		::RPG::GameCore::UseAbilityOption EndInvoke(::System::IAsyncResult* result)
		{
			return ((::RPG::GameCore::UseAbilityOption(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE13_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
