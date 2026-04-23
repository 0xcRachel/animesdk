#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTDIVISIONLEVELSHOWROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1956B400)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONLEVELSHOWROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1956B7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDivisionLevelShowRow_TypeDefinitionIndex = 12876;

	class GridFightDivisionLevelShowRow : public ::System::Object
	{
	public:
		::System::String* DivisionIcon; // 0x10
		::System::String* DivisionShowPic; // 0x18
		::System::UInt32 DivisionLevel; // 0x20
		::System::UInt32 DivisionSPRewardQuest; // 0x24
		::RPG::Client::TextID DivisionNameWithNum; // 0x28
		::RPG::Client::TextID DivisionAbbr; // 0x38
		::RPG::Client::TextID DivisionName; // 0x48
		::System::UInt32 SeasonID; // 0x58
		::System::UInt32 DivisionRewardQuest; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONLEVELSHOWROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightDivisionLevelShowRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightDivisionLevelShowRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONLEVELSHOWROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
