#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ENTITAS_ENTITASSTRINGEXTENSION_ADDCOMPONENTSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A63A140)
#define ENTITAS_ENTITASSTRINGEXTENSION_ADDCONTEXTSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A639EB0)
#define ENTITAS_ENTITASSTRINGEXTENSION_ADDENTITYSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A63A060)
#define ENTITAS_ENTITASSTRINGEXTENSION_ADDLISTENERSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A63A440)
#define ENTITAS_ENTITASSTRINGEXTENSION_ADDMATCHERSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A63A300)
#define ENTITAS_ENTITASSTRINGEXTENSION_ADDSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A639F00)
#define ENTITAS_ENTITASSTRINGEXTENSION_ADDSYSTEMSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A63A220)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASCOMPONENTSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A63A1F0)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASCONTEXTSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A63A010)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASENTITYSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A63A110)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASLISTENERSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A63A530)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASMATCHERSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A63A3F0)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A63A040)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASSYSTEMSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A63A2D0)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVECOMPONENTSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A63A190)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVECONTEXTSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A639F50)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVEENTITYSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A63A0B0)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVELISTENERSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A63A4B0)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVEMATCHERSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A63A370)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVESUFFIX_OFFSET UNITYSDK_OFFSET(0x1A639FB0)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVESYSTEMSUFFIX_OFFSET UNITYSDK_OFFSET(0x1A63A270)

namespace Entitas
{
	inline static constexpr unsigned int EntitasStringExtension_TypeDefinitionIndex = 9847;

	class EntitasStringExtension : public ::System::Object
	{
	public:
		// static const ::System::String* CONTEXT_SUFFIX; // 0x0
		// static const ::System::String* ENTITY_SUFFIX; // 0x0
		// static const ::System::String* COMPONENT_SUFFIX; // 0x0
		// static const ::System::String* SYSTEM_SUFFIX; // 0x0
		// static const ::System::String* MATCHER_SUFFIX; // 0x0
		// static const ::System::String* LISTENER_SUFFIX; // 0x0

		static ::System::String* AddContextSuffix(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_ADDCONTEXTSUFFIX_OFFSET))(str);
		}

		static ::System::String* RemoveContextSuffix(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_REMOVECONTEXTSUFFIX_OFFSET))(str);
		}

		static ::System::Boolean HasContextSuffix(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_HASCONTEXTSUFFIX_OFFSET))(str);
		}

		static ::System::String* AddEntitySuffix(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_ADDENTITYSUFFIX_OFFSET))(str);
		}

		static ::System::String* RemoveEntitySuffix(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_REMOVEENTITYSUFFIX_OFFSET))(str);
		}

		static ::System::Boolean HasEntitySuffix(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_HASENTITYSUFFIX_OFFSET))(str);
		}

		static ::System::String* AddComponentSuffix(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_ADDCOMPONENTSUFFIX_OFFSET))(str);
		}

		static ::System::String* RemoveComponentSuffix(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_REMOVECOMPONENTSUFFIX_OFFSET))(str);
		}

		static ::System::Boolean HasComponentSuffix(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_HASCOMPONENTSUFFIX_OFFSET))(str);
		}

		static ::System::String* AddSystemSuffix(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_ADDSYSTEMSUFFIX_OFFSET))(str);
		}

		static ::System::String* RemoveSystemSuffix(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_REMOVESYSTEMSUFFIX_OFFSET))(str);
		}

		static ::System::Boolean HasSystemSuffix(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_HASSYSTEMSUFFIX_OFFSET))(str);
		}

		static ::System::String* AddMatcherSuffix(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_ADDMATCHERSUFFIX_OFFSET))(str);
		}

		static ::System::String* RemoveMatcherSuffix(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_REMOVEMATCHERSUFFIX_OFFSET))(str);
		}

		static ::System::Boolean HasMatcherSuffix(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_HASMATCHERSUFFIX_OFFSET))(str);
		}

		static ::System::String* AddListenerSuffix(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_ADDLISTENERSUFFIX_OFFSET))(str);
		}

		static ::System::String* RemoveListenerSuffix(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_REMOVELISTENERSUFFIX_OFFSET))(str);
		}

		static ::System::Boolean HasListenerSuffix(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_HASLISTENERSUFFIX_OFFSET))(str);
		}

		static ::System::String* addSuffix(::System::String* str, ::System::String* suffix)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_ADDSUFFIX_OFFSET))(str, suffix);
		}

		static ::System::String* removeSuffix(::System::String* str, ::System::String* suffix)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_REMOVESUFFIX_OFFSET))(str, suffix);
		}

		static ::System::Boolean hasSuffix(::System::String* str, ::System::String* suffix)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_HASSUFFIX_OFFSET))(str, suffix);
		}
	};
}
