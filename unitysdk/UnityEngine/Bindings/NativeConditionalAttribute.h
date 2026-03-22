#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0x182A2DE0)
#define UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x182A2DF0)
#define UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x182A2E00)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeConditionalAttribute_TypeDefinitionIndex = 3689;

	class NativeConditionalAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Condition_k__BackingField; // 0x10
		::System::Boolean _Enabled_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* condition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE__CTOR_OFFSET))(this, condition);
		}

		::System::Void set_Condition(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE_SET_CONDITION_OFFSET))(this, value);
		}

		::System::Void set_Enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE_SET_ENABLED_OFFSET))(this, value);
		}
	};
}
