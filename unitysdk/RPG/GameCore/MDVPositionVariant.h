#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTag; }

#define RPG_GAMECORE_MDVPOSITIONVARIANT_METHOD_2_97449C712096B6B7_OFFSET UNITYSDK_OFFSET(0x16C21940)
#define RPG_GAMECORE_MDVPOSITIONVARIANT__CTOR_OFFSET UNITYSDK_OFFSET(0x16C21AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MDVPositionVariant_TypeDefinitionIndex = 17103;

	class MDVPositionVariant : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 DeltaPos; // 0x10
		::RPG::MVector3 DeltaEuler; // 0x1C
		::RPG::MVector3 DeltaScale; // 0x28
		::RPG::GameCore::HoyoTag* Tag; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MDVPOSITIONVARIANT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_97449C712096B6B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MDVPositionVariant*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MDVPositionVariant*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MDVPOSITIONVARIANT_METHOD_2_97449C712096B6B7_OFFSET))(a1, a2);
		}
	};
}
