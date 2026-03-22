#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDataPrereleaseComparer___O_TypeDefinitionIndex = 49676;

	class AvatarDataPrereleaseComparer___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>** StaticGet__0___IsAvatarGrowthTarget()
		{
			return (::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDataPrereleaseComparer___O_TypeDefinitionIndex)->GetStaticField(0x30E40);
		}
	};
}
