#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/PropType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPAREPROPTYPE_METHOD_4_63BC89304B73BEF5_OFFSET UNITYSDK_OFFSET(0x16917170)
#define RPG_GAMECORE_BYCOMPAREPROPTYPE_METHOD_4_B2475DA4C673BD29_OFFSET UNITYSDK_OFFSET(0x16917240)
#define RPG_GAMECORE_BYCOMPAREPROPTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x169171F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropType_TypeDefinitionIndex = 18085;

	class ByComparePropType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::PropType>* Types; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_63BC89304B73BEF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPTYPE_METHOD_4_63BC89304B73BEF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B2475DA4C673BD29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPTYPE_METHOD_4_B2475DA4C673BD29_OFFSET))(a1, a2);
		}
	};
}
