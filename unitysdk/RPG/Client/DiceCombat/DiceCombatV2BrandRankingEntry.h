#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_GET_PERCENT_OFFSET UNITYSDK_OFFSET(0x17A41480)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_METHOD_5_479759059E440327_OFFSET UNITYSDK_OFFSET(0x17A418C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_METHOD_5_AC088C028EF9B921_OFFSET UNITYSDK_OFFSET(0x17A41790)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_METHOD_5_AF176EACAE42721E_OFFSET UNITYSDK_OFFSET(0x17A414A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_METHOD_5_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0x17A416A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_SET_PERCENT_OFFSET UNITYSDK_OFFSET(0x17A41490)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17A41960)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BrandRankingEntry_TypeDefinitionIndex = 69966;

	class DiceCombatV2BrandRankingEntry : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LocalizedText* _RankText; // 0x18
		::UnityEngine::UI::Slider* _RankSlider; // 0x20
		::UnityEngine::UI::Slider* _RankHorizontalSlider; // 0x28
		::RPG::Client::UIValueChangeAnimation* _RankSliderAnimation; // 0x30
		::RPG::Client::LocalizedText* _PercentText; // 0x38
		::UnityEngine::UI::Slider* _PercentSlider; // 0x40
		::System::Single _Percent_k__BackingField; // 0x48
		::System::Int32 Field_5_7; // 0x4C
		::System::Boolean Field_5_8; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Single get_Percent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_GET_PERCENT_OFFSET))(this);
		}

		::System::Void set_Percent(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_SET_PERCENT_OFFSET))(this, value);
		}

		::System::Void Method_5_AF176EACAE42721E(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_METHOD_5_AF176EACAE42721E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_ED34DCC6F6541B09(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_METHOD_5_ED34DCC6F6541B09_OFFSET))(this, a1);
		}

		::System::Void Method_5_AC088C028EF9B921(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_METHOD_5_AC088C028EF9B921_OFFSET))(this, a1);
		}

		::System::Void Method_5_479759059E440327(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_METHOD_5_479759059E440327_OFFSET))(this, a1);
		}
	};
}
