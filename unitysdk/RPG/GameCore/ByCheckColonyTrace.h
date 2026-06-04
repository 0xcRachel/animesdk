#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_256B269B2CD0EDAA_OFFSET UNITYSDK_OFFSET(0x195F76C0)
#define RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_723FDA3A5B10AD11_OFFSET UNITYSDK_OFFSET(0x195F74A0)
#define RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_78D3808F89F82113_OFFSET UNITYSDK_OFFSET(0x195F73D0)
#define RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_C92EDA721FA93FCB_OFFSET UNITYSDK_OFFSET(0x195F7640)
#define RPG_GAMECORE_BYCHECKCOLONYTRACE__CTOR_OFFSET UNITYSDK_OFFSET(0x195F7450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckColonyTrace_TypeDefinitionIndex = 20647;

	class ByCheckColonyTrace : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ColonyID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYTRACE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_78D3808F89F82113(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckColonyTrace*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckColonyTrace*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_78D3808F89F82113_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_723FDA3A5B10AD11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckColonyTrace* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckColonyTrace*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_723FDA3A5B10AD11_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C92EDA721FA93FCB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyTrace*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyTrace*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_C92EDA721FA93FCB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_256B269B2CD0EDAA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyTrace* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyTrace*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_256B269B2CD0EDAA_OFFSET))(a1, a2);
		}
	};
}
