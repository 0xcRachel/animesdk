#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_1E757A2B47554F74_OFFSET UNITYSDK_OFFSET(0x16FD3C70)
#define RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_78E73CB0EE652A63_OFFSET UNITYSDK_OFFSET(0x16FDBA00)
#define RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD3C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAllCustomUnselectable_TypeDefinitionIndex = 21652;

	class TargetFetchAllCustomUnselectable : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceEntity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_78E73CB0EE652A63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_78E73CB0EE652A63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1E757A2B47554F74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_1E757A2B47554F74_OFFSET))(a1, a2);
		}
	};
}
