#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D37A90)
#define SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D37AD0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER___C___CCTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x17D37AE0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ValueTaskAwaiter___c_TypeDefinitionIndex = 8772;

	class ValueTaskAwaiter___c : public ::System::Object
	{
	public:
		static ::System::Runtime::CompilerServices::ValueTaskAwaiter___c** StaticGet___9()
		{
			return (::System::Runtime::CompilerServices::ValueTaskAwaiter___c**)Il2CppClass::FromTypeDefinitionIndex(ValueTaskAwaiter___c_TypeDefinitionIndex)->GetStaticField(0x690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__9_0(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER___C___CCTOR_B__9_0_OFFSET))(this, state);
		}
	};
}
