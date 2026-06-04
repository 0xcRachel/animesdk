#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_METHOD_4_0F0B7820A6538D5E_OFFSET UNITYSDK_OFFSET(0x195F31B0)
#define RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_METHOD_4_26B844E6F6CB7485_OFFSET UNITYSDK_OFFSET(0x195F3070)
#define RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_METHOD_4_EAB380450B53ED6F_OFFSET UNITYSDK_OFFSET(0x195F2FA0)
#define RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_METHOD_4_FE7989CED75C5C66_OFFSET UNITYSDK_OFFSET(0x195F3230)
#define RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x195F3020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByBattleMissionTalkFinish_TypeDefinitionIndex = 22507;

	class ByBattleMissionTalkFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EAB380450B53ED6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByBattleMissionTalkFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByBattleMissionTalkFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_METHOD_4_EAB380450B53ED6F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_26B844E6F6CB7485(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByBattleMissionTalkFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByBattleMissionTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_METHOD_4_26B844E6F6CB7485_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0F0B7820A6538D5E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleMissionTalkFinish*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleMissionTalkFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_METHOD_4_0F0B7820A6538D5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FE7989CED75C5C66(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleMissionTalkFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleMissionTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_METHOD_4_FE7989CED75C5C66_OFFSET))(a1, a2);
		}
	};
}
