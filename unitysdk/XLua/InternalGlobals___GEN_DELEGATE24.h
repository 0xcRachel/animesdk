#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_2_15E317187C4E8254;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE24_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xF834D00)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE24_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xF834DA0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE24_INVOKE_OFFSET UNITYSDK_OFFSET(0xF834490)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE24__CTOR_OFFSET UNITYSDK_OFFSET(0xF82B2A0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE24_TypeDefinitionIndex = 39455;

	class InternalGlobals___GEN_DELEGATE24 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE24__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::Class_2_15E317187C4E8254* entity, ::RPG::GameCore::CakeRaceProperty property, ::System::Int32 defaultValue)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_15E317187C4E8254*, ::RPG::GameCore::CakeRaceProperty, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE24_INVOKE_OFFSET))(this, entity, property, defaultValue);
		}

		::System::IAsyncResult* BeginInvoke(::Class_2_15E317187C4E8254* entity, ::RPG::GameCore::CakeRaceProperty property, ::System::Int32 defaultValue, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_2_15E317187C4E8254*, ::RPG::GameCore::CakeRaceProperty, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE24_BEGININVOKE_OFFSET))(this, entity, property, defaultValue, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE24_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
