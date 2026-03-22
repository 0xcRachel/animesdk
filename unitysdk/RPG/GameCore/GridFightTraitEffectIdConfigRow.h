#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTTRAITEFFECTIDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B4E0E0)
#define RPG_GAMECORE_GRIDFIGHTTRAITEFFECTIDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16B4E340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitEffectIdConfigRow_TypeDefinitionIndex = 12441;

	class GridFightTraitEffectIdConfigRow : public ::System::Object
	{
	public:
		::System::String* TraitEffectIconPath; // 0x10
		::System::String* TraitEffectJson; // 0x18
		::RPG::GameCore::GridFightTraitEffectType TraitEffectType; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID TraitEffectDesc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITEFFECTIDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightTraitEffectIdConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitEffectIdConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITEFFECTIDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
