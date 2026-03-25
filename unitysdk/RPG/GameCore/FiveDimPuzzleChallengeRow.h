#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPUZZLECHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1721A690)
#define RPG_GAMECORE_FIVEDIMPUZZLECHALLENGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1721AD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPuzzleChallengeRow_TypeDefinitionIndex = 12902;

	class FiveDimPuzzleChallengeRow : public ::System::Object
	{
	public:
		::System::String* PuzzleStateGP; // 0x10
		::System::String* UIActiveGP; // 0x18
		::Il2CppArray<::System::UInt32>* RelatedMissionIDList; // 0x20
		::Il2CppArray<::System::String*>* ProgressGPList; // 0x28
		::RPG::Client::TextID ActiveNameText; // 0x30
		::RPG::Client::TextID FinishDescText; // 0x40
		::System::UInt32 FloorID; // 0x50
		::System::UInt32 PuzzleID; // 0x54
		::RPG::Client::TextID NameText; // 0x58
		::System::Int16 ProgressLimit; // 0x68
		::System::UInt32 GroupID; // 0x6C
		::System::UInt32 InstanceID; // 0x70
		::RPG::Client::TextID ActiveDescText; // 0x78
		::RPG::Client::TextID FinishNameText; // 0x88
		::RPG::Client::TextID DescText; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUZZLECHALLENGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FiveDimPuzzleChallengeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPuzzleChallengeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUZZLECHALLENGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
