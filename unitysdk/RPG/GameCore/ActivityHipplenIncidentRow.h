#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_B1429A4347DAE014;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENINCIDENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F110C0)
#define RPG_GAMECORE_ACTIVITYHIPPLENINCIDENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F11350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenIncidentRow_TypeDefinitionIndex = 10844;

	class ActivityHipplenIncidentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_B1429A4347DAE014*>* EffectList; // 0x10
		::Il2CppArray<::System::Single>* ExpectedRatioProbability; // 0x18
		::Il2CppArray<::System::UInt32>* ExpectedBasicList; // 0x20
		::System::String* PerformanceJsonConfigPath; // 0x28
		::System::UInt32 ID; // 0x30
		::RPG::GameCore::HipplenIncidentType Type; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINCIDENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHipplenIncidentRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenIncidentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINCIDENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
