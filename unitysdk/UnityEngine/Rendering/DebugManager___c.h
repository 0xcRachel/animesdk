#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Rendering { class DebugManager; }

#define UNITYENGINE_RENDERING_DEBUGMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x180C6540)
#define UNITYENGINE_RENDERING_DEBUGMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x180C6570)
#define UNITYENGINE_RENDERING_DEBUGMANAGER___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x180C65A0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER___C___CTOR_B__51_0_OFFSET UNITYSDK_OFFSET(0x180C6580)
#define UNITYENGINE_RENDERING_DEBUGMANAGER___C___CTOR_B__51_1_OFFSET UNITYSDK_OFFSET(0x180C6590)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugManager___c_TypeDefinitionIndex = 27068;

	class DebugManager___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__51_0()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DebugManager___c_TypeDefinitionIndex)->GetStaticField(0x258C0);
		}
		static ::UnityEngine::Rendering::DebugManager___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::DebugManager___c**)Il2CppClass::FromTypeDefinitionIndex(DebugManager___c_TypeDefinitionIndex)->GetStaticField(0x258C8);
		}
		static ::System::Action** StaticGet___9__51_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DebugManager___c_TypeDefinitionIndex)->GetStaticField(0x258D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__51_0(::System::Boolean _p0_)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER___C___CTOR_B__51_0_OFFSET))(this, _p0_);
		}

		::System::Void __ctor_b__51_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER___C___CTOR_B__51_1_OFFSET))(this);
		}

		::UnityEngine::Rendering::DebugManager* __cctor_b__68_0()
		{
			return ((::UnityEngine::Rendering::DebugManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER___C___CCTOR_B__68_0_OFFSET))(this);
		}
	};
}
