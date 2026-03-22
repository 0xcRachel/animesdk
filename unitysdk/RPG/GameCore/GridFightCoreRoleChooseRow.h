#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightTraitSrcType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCOREROLECHOOSEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B1DE60)
#define RPG_GAMECORE_GRIDFIGHTCOREROLECHOOSEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16B1E0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCoreRoleChooseRow_TypeDefinitionIndex = 12456;

	class GridFightCoreRoleChooseRow : public ::System::Object
	{
	public:
		::System::UInt32 SubTraitID; // 0x10
		::System::UInt32 Parameter; // 0x14
		::System::UInt32 TraitID; // 0x18
		::RPG::GameCore::GridFightTraitSrcType Type; // 0x1C
		::RPG::Client::TextID ChooseDesc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCOREROLECHOOSEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightCoreRoleChooseRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCoreRoleChooseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCOREROLECHOOSEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
