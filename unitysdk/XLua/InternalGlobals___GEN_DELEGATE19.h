#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_5045AA363287E230;
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE19_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xF8319A0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE19_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xF8319E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE19_INVOKE_OFFSET UNITYSDK_OFFSET(0xF831180)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE19__CTOR_OFFSET UNITYSDK_OFFSET(0xF82B200)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE19_TypeDefinitionIndex = 39450;

	class InternalGlobals___GEN_DELEGATE19 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE19__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Class_1_5045AA363287E230* pBattleRelicModule, ::RPG::GameCore::TurnBasedAbilityComponent* pTurnBasedAbilityComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5045AA363287E230*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE19_INVOKE_OFFSET))(this, pBattleRelicModule, pTurnBasedAbilityComponent);
		}

		::System::IAsyncResult* BeginInvoke(::Class_1_5045AA363287E230* pBattleRelicModule, ::RPG::GameCore::TurnBasedAbilityComponent* pTurnBasedAbilityComponent, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_5045AA363287E230*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE19_BEGININVOKE_OFFSET))(this, pBattleRelicModule, pTurnBasedAbilityComponent, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE19_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
