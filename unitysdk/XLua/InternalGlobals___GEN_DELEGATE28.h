#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE28_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xF836A50)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE28_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xF836AC0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE28_INVOKE_OFFSET UNITYSDK_OFFSET(0xF836620)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE28__CTOR_OFFSET UNITYSDK_OFFSET(0xF82B320)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE28_TypeDefinitionIndex = 39459;

	class InternalGlobals___GEN_DELEGATE28 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE28__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::GameCore::CakeRaceCellType cellType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE28_INVOKE_OFFSET))(this, cellType);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::CakeRaceCellType cellType, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE28_BEGININVOKE_OFFSET))(this, cellType, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE28_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
