#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceTitleRow; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_0F2A3888FE30E133___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1484A7A0)
#define CLASS_2_0F2A3888FE30E133___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1484A7E0)
#define CLASS_2_0F2A3888FE30E133___C__LOADTITLECONFIG_B__14_0_OFFSET UNITYSDK_OFFSET(0x1484A7F0)

inline static constexpr unsigned int Class_2_0F2A3888FE30E133___c_TypeDefinitionIndex = 34616;

class Class_2_0F2A3888FE30E133___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::GameCore::CakeRaceTitleRow*>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::CakeRaceTitleRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0F2A3888FE30E133___c_TypeDefinitionIndex)->GetStaticField(0x54F50);
	}
	static ::Class_2_0F2A3888FE30E133___c** StaticGet___9()
	{
		return (::Class_2_0F2A3888FE30E133___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0F2A3888FE30E133___c_TypeDefinitionIndex)->GetStaticField(0x54F58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0F2A3888FE30E133___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F2A3888FE30E133___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _LoadTitleConfig_b__14_0(::RPG::GameCore::CakeRaceTitleRow* lhs, ::RPG::GameCore::CakeRaceTitleRow* rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CakeRaceTitleRow*, ::RPG::GameCore::CakeRaceTitleRow*))((::PBYTE)hIl2Cpp + CLASS_2_0F2A3888FE30E133___C__LOADTITLECONFIG_B__14_0_OFFSET))(this, lhs, rhs);
	}
};
