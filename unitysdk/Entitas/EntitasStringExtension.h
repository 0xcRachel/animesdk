#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ENTITAS_ENTITASSTRINGEXTENSION_ADDCOMPONENTSUFFIX_OFFSET UNITYSDK_OFFSET(0x113185C0)
#define ENTITAS_ENTITASSTRINGEXTENSION_ADDCONTEXTSUFFIX_OFFSET UNITYSDK_OFFSET(0x11318330)
#define ENTITAS_ENTITASSTRINGEXTENSION_ADDENTITYSUFFIX_OFFSET UNITYSDK_OFFSET(0x113184E0)
#define ENTITAS_ENTITASSTRINGEXTENSION_ADDLISTENERSUFFIX_OFFSET UNITYSDK_OFFSET(0x113188C0)
#define ENTITAS_ENTITASSTRINGEXTENSION_ADDMATCHERSUFFIX_OFFSET UNITYSDK_OFFSET(0x11318780)
#define ENTITAS_ENTITASSTRINGEXTENSION_ADDSUFFIX_OFFSET UNITYSDK_OFFSET(0x11318380)
#define ENTITAS_ENTITASSTRINGEXTENSION_ADDSYSTEMSUFFIX_OFFSET UNITYSDK_OFFSET(0x113186A0)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASCOMPONENTSUFFIX_OFFSET UNITYSDK_OFFSET(0x11318670)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASCONTEXTSUFFIX_OFFSET UNITYSDK_OFFSET(0x11318490)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASENTITYSUFFIX_OFFSET UNITYSDK_OFFSET(0x11318590)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASLISTENERSUFFIX_OFFSET UNITYSDK_OFFSET(0x113189B0)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASMATCHERSUFFIX_OFFSET UNITYSDK_OFFSET(0x11318870)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASSUFFIX_OFFSET UNITYSDK_OFFSET(0x113184C0)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASSYSTEMSUFFIX_OFFSET UNITYSDK_OFFSET(0x11318750)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVECOMPONENTSUFFIX_OFFSET UNITYSDK_OFFSET(0x11318610)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVECONTEXTSUFFIX_OFFSET UNITYSDK_OFFSET(0x113183D0)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVEENTITYSUFFIX_OFFSET UNITYSDK_OFFSET(0x11318530)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVELISTENERSUFFIX_OFFSET UNITYSDK_OFFSET(0x11318930)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVEMATCHERSUFFIX_OFFSET UNITYSDK_OFFSET(0x113187F0)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVESUFFIX_OFFSET UNITYSDK_OFFSET(0x11318430)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVESYSTEMSUFFIX_OFFSET UNITYSDK_OFFSET(0x113186F0)

namespace Entitas
{
	inline static constexpr unsigned int EntitasStringExtension_TypeDefinitionIndex = 9247;

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
