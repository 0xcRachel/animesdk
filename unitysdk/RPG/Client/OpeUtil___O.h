#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int OpeUtil___O_TypeDefinitionIndex = 46882;

	class OpeUtil___O : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet__0____OnUseCDKey()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil___O_TypeDefinitionIndex)->GetStaticField(0x444C0);
		}
	};
}
