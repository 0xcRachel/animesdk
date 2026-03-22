#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE20_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xF832940)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE20_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xF8329A0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE20_INVOKE_OFFSET UNITYSDK_OFFSET(0xF832190)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE20__CTOR_OFFSET UNITYSDK_OFFSET(0xF82B220)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE20_TypeDefinitionIndex = 39451;

	class InternalGlobals___GEN_DELEGATE20 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE20__CTOR_OFFSET))(this, object, method);
		}

		::RPG::GameCore::GameEntity* Invoke(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* list, ::System::UInt32 runtimeID)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE20_INVOKE_OFFSET))(this, list, runtimeID);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* list, ::System::UInt32 runtimeID, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE20_BEGININVOKE_OFFSET))(this, list, runtimeID, callback, object);
		}

		::RPG::GameCore::GameEntity* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE20_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
