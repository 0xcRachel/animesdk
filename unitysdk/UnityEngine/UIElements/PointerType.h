#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_POINTERTYPE_GETPOINTERTYPE_OFFSET UNITYSDK_OFFSET(0x19F91E60)
#define UNITYENGINE_UIELEMENTS_POINTERTYPE_ISDIRECTMANIPULATIONDEVICE_OFFSET UNITYSDK_OFFSET(0x19F8F0E0)
#define UNITYENGINE_UIELEMENTS_POINTERTYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F91F00)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerType_TypeDefinitionIndex = 6230;

	class PointerType : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_mouse()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PointerType_TypeDefinitionIndex)->GetStaticField(0x2620);
		}
		static ::System::String** StaticGet_unknown()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PointerType_TypeDefinitionIndex)->GetStaticField(0x2628);
		}
		static ::System::String** StaticGet_pen()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PointerType_TypeDefinitionIndex)->GetStaticField(0x2630);
		}
		static ::System::String** StaticGet_touch()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PointerType_TypeDefinitionIndex)->GetStaticField(0x2638);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERTYPE__CCTOR_OFFSET))();
		}

		static ::System::String* GetPointerType(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERTYPE_GETPOINTERTYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsDirectManipulationDevice(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERTYPE_ISDIRECTMANIPULATIONDEVICE_OFFSET))(a1);
		}
	};
}
