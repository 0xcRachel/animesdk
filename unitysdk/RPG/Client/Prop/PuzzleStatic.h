#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PuzzleFunc.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_PUZZLESTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x9CAEEA0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PuzzleStatic_TypeDefinitionIndex = 62046;

	class PuzzleStatic : public ::System::Object
	{
	public:
		static ::RPG::GameCore::PuzzleFunc* StaticGet_CurPuzzleFunc()
		{
			return (::RPG::GameCore::PuzzleFunc*)Il2CppClass::FromTypeDefinitionIndex(PuzzleStatic_TypeDefinitionIndex)->GetStaticField(0xA2A0);
		}
		static ::System::UInt32* StaticGet_ProbeResetNum()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PuzzleStatic_TypeDefinitionIndex)->GetStaticField(0xA2A4);
		}
		static ::System::UInt32* StaticGet_InfoItemID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PuzzleStatic_TypeDefinitionIndex)->GetStaticField(0xA2A8);
		}
		static ::System::UInt32* StaticGet_ProbeResetNumCounter()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PuzzleStatic_TypeDefinitionIndex)->GetStaticField(0xA2AC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLESTATIC__CCTOR_OFFSET))();
		}
	};
}
