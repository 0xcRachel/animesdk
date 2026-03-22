#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace System { class String; }

#define ENTITAS_COLLECTOREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x113162D0)

namespace Entitas
{
	inline static constexpr unsigned int CollectorException_TypeDefinitionIndex = 9203;

	class CollectorException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::System::String* message, ::System::String* hint)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_COLLECTOREXCEPTION__CTOR_OFFSET))(this, message, hint);
		}
	};
}
