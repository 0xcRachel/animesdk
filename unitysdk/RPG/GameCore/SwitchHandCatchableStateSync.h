#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SWITCHHANDCATCHABLESTATESYNC_METHOD_3_59182387F5AE454D_OFFSET UNITYSDK_OFFSET(0x18D89E00)
#define RPG_GAMECORE_SWITCHHANDCATCHABLESTATESYNC_METHOD_3_F140AE5A7F71F2EB_OFFSET UNITYSDK_OFFSET(0x18D89E80)
#define RPG_GAMECORE_SWITCHHANDCATCHABLESTATESYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x18D89E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandCatchableStateSync_TypeDefinitionIndex = 19949;

	class SwitchHandCatchableStateSync : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCATCHABLESTATESYNC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_59182387F5AE454D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandCatchableStateSync*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandCatchableStateSync*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCATCHABLESTATESYNC_METHOD_3_59182387F5AE454D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F140AE5A7F71F2EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandCatchableStateSync* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandCatchableStateSync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCATCHABLESTATESYNC_METHOD_3_F140AE5A7F71F2EB_OFFSET))(a1, a2);
		}
	};
}
