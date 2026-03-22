#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEffectPreloadConfig; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMUSICDIRECTORCOMPONENTCONFIG_METHOD_3_6672D69C57EB7D1E_OFFSET UNITYSDK_OFFSET(0x16AC9E80)
#define RPG_GAMECORE_FIVEDIMMUSICDIRECTORCOMPONENTCONFIG_METHOD_3_CBEBD7B44E885E9B_OFFSET UNITYSDK_OFFSET(0x16AC9E10)
#define RPG_GAMECORE_FIVEDIMMUSICDIRECTORCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16AC9E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMusicDirectorComponentConfig_TypeDefinitionIndex = 16871;

	class FiveDimMusicDirectorComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::String* ConfigPath; // 0x10
		::System::Boolean StartOnPlayerEnter; // 0x18
		::System::Boolean ResumeUIMenuBGMOnStop; // 0x19
		::RPG::GameCore::LittleGameEvent* OnMusicStart; // 0x20
		::RPG::GameCore::LittleGameEvent* OnMusicStop; // 0x28
		::RPG::GameCore::LittleGameEvent* OnMusicFinish; // 0x30
		::RPG::GameCore::LittleGameEvent* OnMusicPause; // 0x38
		::RPG::GameCore::LittleGameEvent* OnMusicResume; // 0x40
		::Il2CppArray<::RPG::GameCore::FiveDimEffectPreloadConfig*>* EffectPreloadConfigList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICDIRECTORCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CBEBD7B44E885E9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMusicDirectorComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMusicDirectorComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICDIRECTORCOMPONENTCONFIG_METHOD_3_CBEBD7B44E885E9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6672D69C57EB7D1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMusicDirectorComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMusicDirectorComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICDIRECTORCOMPONENTCONFIG_METHOD_3_6672D69C57EB7D1E_OFFSET))(a1, a2);
		}
	};
}
