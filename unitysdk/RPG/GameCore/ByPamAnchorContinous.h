#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYPAMANCHORCONTINOUS_METHOD_4_2B1C9D3AD35BE951_OFFSET UNITYSDK_OFFSET(0x1693A160)
#define RPG_GAMECORE_BYPAMANCHORCONTINOUS_METHOD_4_B61411D24DA6E94B_OFFSET UNITYSDK_OFFSET(0x1693A230)
#define RPG_GAMECORE_BYPAMANCHORCONTINOUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1693A1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamAnchorContinous_TypeDefinitionIndex = 17773;

	class ByPamAnchorContinous : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMANCHORCONTINOUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2B1C9D3AD35BE951(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamAnchorContinous*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamAnchorContinous*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMANCHORCONTINOUS_METHOD_4_2B1C9D3AD35BE951_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B61411D24DA6E94B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamAnchorContinous* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamAnchorContinous*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMANCHORCONTINOUS_METHOD_4_B61411D24DA6E94B_OFFSET))(a1, a2);
		}
	};
}
