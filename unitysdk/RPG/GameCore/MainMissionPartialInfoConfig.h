#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_MAINMISSIONPARTIALINFOCONFIG_METHOD_2_1429B03F01407020_OFFSET UNITYSDK_OFFSET(0x19C1D970)
#define RPG_GAMECORE_MAINMISSIONPARTIALINFOCONFIG_METHOD_2_EF8BEC93D522876D_OFFSET UNITYSDK_OFFSET(0x19C1DA70)
#define RPG_GAMECORE_MAINMISSIONPARTIALINFOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C1DA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionPartialInfoConfig_TypeDefinitionIndex = 18070;

	class MainMissionPartialInfoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SubMissionInfoConfig*>* SubMissionList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPARTIALINFOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1429B03F01407020(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MainMissionPartialInfoConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MainMissionPartialInfoConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPARTIALINFOCONFIG_METHOD_2_1429B03F01407020_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_EF8BEC93D522876D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MainMissionPartialInfoConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MainMissionPartialInfoConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPARTIALINFOCONFIG_METHOD_2_EF8BEC93D522876D_OFFSET))(a1, a2);
		}
	};
}
