#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace System { template <typename T> class Comparison_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDataComparerBuilderExtensions___O_TypeDefinitionIndex = 49661;

	class AvatarDataComparerBuilderExtensions___O : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::AvatarData*>** StaticGet__0___CompareByDefaultHighlight()
		{
			return (::System::Comparison_1<::RPG::Client::AvatarData*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDataComparerBuilderExtensions___O_TypeDefinitionIndex)->GetStaticField(0x30D10);
		}
	};
}
