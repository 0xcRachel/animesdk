#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDataEducationHighlightComparer___O_TypeDefinitionIndex = 49673;

	class AvatarDataEducationHighlightComparer___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>** StaticGet__0____IsEnhanced()
		{
			return (::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDataEducationHighlightComparer___O_TypeDefinitionIndex)->GetStaticField(0x30DF0);
		}
		static ::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>** StaticGet__1___IsAvatarGrowthTarget()
		{
			return (::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDataEducationHighlightComparer___O_TypeDefinitionIndex)->GetStaticField(0x30DF8);
		}
	};
}
