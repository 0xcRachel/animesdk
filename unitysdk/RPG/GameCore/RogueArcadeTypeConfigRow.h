#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEARCADETYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1923E6F0)
#define RPG_GAMECORE_ROGUEARCADETYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1923EF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueArcadeTypeConfigRow_TypeDefinitionIndex = 13876;

	class RogueArcadeTypeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* PicPathList; // 0x10
		::RPG::Client::TextID ExitDesc; // 0x18
		::RPG::Client::TextID Desc; // 0x28
		::RPG::Client::TextID BriefName; // 0x38
		::RPG::Client::TextID DetailedName; // 0x48
		::System::UInt32 ArcadeID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADETYPECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueArcadeTypeConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueArcadeTypeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADETYPECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
