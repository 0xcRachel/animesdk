#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevelLinear; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE25_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF5FBD0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE25_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF5FC00)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE25_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF5F670)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE25__CTOR_OFFSET UNITYSDK_OFFSET(0xFF57B40)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE25_TypeDefinitionIndex = 40442;

	class InternalGlobals___GEN_DELEGATE25 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE25__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::RPG::Client::IRogueTournGameLevelLinear* level)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE25_INVOKE_OFFSET))(this, level);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevelLinear* level, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLinear*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE25_BEGININVOKE_OFFSET))(this, level, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE25_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
