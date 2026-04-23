#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NativeStringRef.h"

namespace System { class String; }

#define UNITYENGINE_SCRIPTING_SCRIPTINGSTRINGHELPER_MODIFYSTRINGBYNATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F232B0)
#define UNITYENGINE_SCRIPTING_SCRIPTINGSTRINGHELPER_MODIFYSTRINGBYNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x18F23290)
#define UNITYENGINE_SCRIPTING_SCRIPTINGSTRINGHELPER_MODIFYSTRING_OFFSET UNITYSDK_OFFSET(0x18F23220)

namespace UnityEngine::Scripting
{
	inline static constexpr unsigned int ScriptingStringHelper_TypeDefinitionIndex = 4312;

	class ScriptingStringHelper : public ::System::Object
	{
	public:
		static ::System::Boolean ModifyString(::System::String* source, ::UnityEngine::NativeStringRef str)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::NativeStringRef))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_SCRIPTINGSTRINGHELPER_MODIFYSTRING_OFFSET))(source, str);
		}

		static ::System::Boolean ModifyStringByNativeString(::System::String* source, ::UnityEngine::NativeStringRef str)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::NativeStringRef))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_SCRIPTINGSTRINGHELPER_MODIFYSTRINGBYNATIVESTRING_OFFSET))(source, str);
		}

		static ::System::Boolean ModifyStringByNativeString_Injected(::System::String* source, ::UnityEngine::NativeStringRef& str)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_SCRIPTINGSTRINGHELPER_MODIFYSTRINGBYNATIVESTRING_INJECTED_OFFSET))(source, str);
		}
	};
}
