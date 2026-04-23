#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A8A140)
#define RPG_GAMECORE_IDLELIVEEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A8A3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveEventRow_TypeDefinitionIndex = 11145;

	class IdleLiveEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AvatarList; // 0x10
		::System::String* FigurePath; // 0x18
		::System::UInt32 InitialAvatarLevel; // 0x20
		::System::UInt32 SentenceSectionID; // 0x24
		::System::Boolean ChangeTeam; // 0x28
		::System::UInt32 ID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveEventRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEVENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
