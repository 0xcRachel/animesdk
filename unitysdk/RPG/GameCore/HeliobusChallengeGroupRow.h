#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172AFA00)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172B0040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusChallengeGroupRow_TypeDefinitionIndex = 12597;

	class HeliobusChallengeGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChallengeStageList; // 0x10
		::RPG::Client::TextID ChallengeGroupName; // 0x18
		::System::UInt32 ChallengeGroupID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeliobusChallengeGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusChallengeGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
