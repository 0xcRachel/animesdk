#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARSERVANTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1763D6A0)
#define RPG_GAMECORE_AVATARSERVANTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1763F1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantRow_TypeDefinitionIndex = 12190;

	class AvatarServantRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x10
		::System::String* HPInherit; // 0x18
		::System::String* WaitingServantHeadIconPath; // 0x20
		::System::String* Config; // 0x28
		::System::String* ActionServantHeadIconPath; // 0x30
		::System::String* ManikinJsonPath; // 0x38
		::System::String* SpeedInherit; // 0x40
		::System::String* Prefab; // 0x48
		::System::String* ServantMiniIconPath; // 0x50
		::System::String* HeadIcon; // 0x58
		::System::String* HPBase; // 0x60
		::System::String* SpeedBase; // 0x68
		::System::String* ServantSideIconPath; // 0x70
		::System::String* UnCreateHeadIconPath; // 0x78
		::System::String* AIPath; // 0x80
		::System::String* UIServantModelPath; // 0x88
		::System::UInt32 HPSkill; // 0x90
		::System::UInt32 SpeedSkill; // 0x94
		::RPG::Client::TextID ServantName; // 0x98
		::System::UInt32 ServantID; // 0xA8
		::RPG::GameCore::FixPoint Aggro; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarServantRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarServantRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
