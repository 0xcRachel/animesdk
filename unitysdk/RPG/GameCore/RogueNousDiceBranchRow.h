#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUENOUSDICEBRANCHROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A509890)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A50A500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDiceBranchRow_TypeDefinitionIndex = 14104;

	class RogueNousDiceBranchRow : public ::System::Object
	{
	public:
		::System::String* BranchIcon; // 0x10
		::System::String* BranchCorePrefab; // 0x18
		::Il2CppArray<::System::UInt32>* RecommendSurfaceList; // 0x20
		::System::String* SoundSuspensionStop; // 0x28
		::System::String* SoundRoll; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamValue3; // 0x38
		::System::String* BranchEditCorePrefab; // 0x40
		::Il2CppArray<::System::UInt32>* EffectExtraDesc; // 0x48
		::System::String* BranchPrefab; // 0x50
		::Il2CppArray<::System::UInt32>* PassiveEffectExtraDesc; // 0x58
		::System::String* DiceIcon; // 0x60
		::System::String* DiceLightColor; // 0x68
		::Il2CppArray<::System::UInt32>* DefaultCommonSurfaceList; // 0x70
		::Il2CppArray<::System::UInt32>* ExtraDesc; // 0x78
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamValue1; // 0x80
		::System::String* SoundReRoll; // 0x88
		::System::String* SoundSuspensionStart; // 0x90
		::Il2CppArray<::System::UInt32>* SuggestiveSurfaceList; // 0x98
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamValue2; // 0xA0
		::RPG::Client::TextID EffectDescParam1; // 0xA8
		::RPG::Client::TextID BranchName; // 0xB8
		::RPG::Client::TextID PassiveEffectDesc; // 0xC8
		::RPG::Client::TextID EffectDescParam3; // 0xD8
		::System::UInt32 BranchTag; // 0xE8
		::System::UInt32 BranchID; // 0xEC
		::RPG::Client::TextID BranchIntroduction; // 0xF0
		::RPG::Client::TextID StartingEffectDescToast; // 0x100
		::RPG::Client::TextID EffectDesc; // 0x110
		::RPG::Client::TextID EffectDescParam2; // 0x120
		::System::UInt32 UnlockID; // 0x130
		::System::UInt32 DefaultUltraSurface; // 0x134

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueNousDiceBranchRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousDiceBranchRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
