#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournDifficultyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournDifficulty; }
namespace System { class String; }

#define CLASS_1_9DF928A610A934A4_COMPARETO_OFFSET UNITYSDK_OFFSET(0x10AF4120)
#define CLASS_1_9DF928A610A934A4_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x10AF4200)
#define CLASS_1_9DF928A610A934A4_GET_HASSUBLEVEL_OFFSET UNITYSDK_OFFSET(0x10AF4260)
#define CLASS_1_9DF928A610A934A4_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0x10AF4210)
#define CLASS_1_9DF928A610A934A4_GET_ROMANNUMBER_OFFSET UNITYSDK_OFFSET(0x10AF4220)
#define CLASS_1_9DF928A610A934A4_GET_SUBLEVELNUMBER_OFFSET UNITYSDK_OFFSET(0x10AF4270)
#define CLASS_1_9DF928A610A934A4_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x10AF40B0)
#define CLASS_1_9DF928A610A934A4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10AF41B0)
#define CLASS_1_9DF928A610A934A4__CTOR_OFFSET UNITYSDK_OFFSET(0x10AF40A0)
#define CLASS_1_9DF928A610A934A4___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10AF4280)

inline static constexpr unsigned int Class_1_9DF928A610A934A4_TypeDefinitionIndex = 62292;

class Class_1_9DF928A610A934A4 : public ::System::Object
{
public:
	static ::Class_1_9DF928A610A934A4** StaticGet_Field_1_0()
	{
		return (::Class_1_9DF928A610A934A4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DF928A610A934A4_TypeDefinitionIndex)->GetStaticField(0x5F790);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DF928A610A934A4__CTOR_OFFSET))(this);
	}

	static ::Class_1_9DF928A610A934A4* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_9DF928A610A934A4*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DF928A610A934A4_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::System::Int32 CompareTo(::RPG::Client::IRogueTournDifficulty* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + CLASS_1_9DF928A610A934A4_COMPARETO_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DF928A610A934A4_TOSTRING_OFFSET))(this);
	}

	::RPG::GameCore::RogueTournDifficultyType get_Difficulty()
	{
		return ((::RPG::GameCore::RogueTournDifficultyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DF928A610A934A4_GET_DIFFICULTY_OFFSET))(this);
	}

	::System::Boolean get_IsHard()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DF928A610A934A4_GET_ISHARD_OFFSET))(this);
	}

	::RPG::Client::TextID get_RomanNumber()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DF928A610A934A4_GET_ROMANNUMBER_OFFSET))(this);
	}

	::System::Boolean get_HasSubLevel()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DF928A610A934A4_GET_HASSUBLEVEL_OFFSET))(this);
	}

	::System::UInt32 get_SubLevelNumber()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DF928A610A934A4_GET_SUBLEVELNUMBER_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DF928A610A934A4___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
