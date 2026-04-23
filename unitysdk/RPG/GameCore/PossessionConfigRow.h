#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_POSSESSIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19368F10)
#define RPG_GAMECORE_POSSESSIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x193691D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PossessionConfigRow_TypeDefinitionIndex = 13757;

	class PossessionConfigRow : public ::System::Object
	{
	public:
		::System::String* PossessionName; // 0x10
		::Il2CppArray<::System::Single>* LocalRotation; // 0x18
		::System::String* AttachPoint; // 0x20
		::Il2CppArray<::System::Single>* LocalPosition; // 0x28
		::System::String* PossessionPrefabPath; // 0x30
		::Il2CppArray<::System::Single>* LocalScale; // 0x38
		::System::Boolean IsEffect; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POSSESSIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PossessionConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PossessionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POSSESSIONCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
