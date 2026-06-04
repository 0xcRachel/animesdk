#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameCoreParamFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_07EDC543498380A3_OFFSET UNITYSDK_OFFSET(0x18FFFF10)
#define RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_1823EF15194CC2EB_OFFSET UNITYSDK_OFFSET(0x190001E0)
#define RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_7EBADACA5D1A9845_OFFSET UNITYSDK_OFFSET(0x18FFFFE0)
#define RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_859A893D65B28ACA_OFFSET UNITYSDK_OFFSET(0x19000160)
#define RPG_GAMECORE_BYCONTAINSPARAMFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x18FFFF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainsParamFlag_TypeDefinitionIndex = 22254;

	class ByContainsParamFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GameCoreParamFlag Flag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSPARAMFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_07EDC543498380A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainsParamFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainsParamFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_07EDC543498380A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7EBADACA5D1A9845(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainsParamFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainsParamFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_7EBADACA5D1A9845_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_859A893D65B28ACA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsParamFlag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsParamFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_859A893D65B28ACA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1823EF15194CC2EB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsParamFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsParamFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_1823EF15194CC2EB_OFFSET))(a1, a2);
		}
	};
}
