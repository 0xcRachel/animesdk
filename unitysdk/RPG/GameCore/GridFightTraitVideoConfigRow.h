#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTTRAITVIDEOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B91990)
#define RPG_GAMECORE_GRIDFIGHTTRAITVIDEOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B91B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitVideoConfigRow_TypeDefinitionIndex = 12969;

	class GridFightTraitVideoConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 VideoID; // 0x10
		::System::UInt32 TraitID; // 0x14
		::RPG::Client::TextID Description; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITVIDEOCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightTraitVideoConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitVideoConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITVIDEOCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
