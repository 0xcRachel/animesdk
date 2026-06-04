#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x133DAD60)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x133DADA0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPOSE_B__2_0_OFFSET UNITYSDK_OFFSET(0x133DADB0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleBoard___c_TypeDefinitionIndex = 73224;

	class OpticalIllusionPuzzleBoard___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Prop::OpticalIllusionPuzzleBoard___c** StaticGet___9()
		{
			return (::RPG::Client::Prop::OpticalIllusionPuzzleBoard___c**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x179D0);
		}
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x179D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__CTOR_OFFSET))(this);
		}

		::System::Void _Dispose_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPOSE_B__2_0_OFFSET))(this);
		}
	};
}
