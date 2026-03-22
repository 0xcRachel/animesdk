#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFILTERALIVESTATE_METHOD_3_444A32EB8298F365_OFFSET UNITYSDK_OFFSET(0x16FE0550)
#define RPG_GAMECORE_TARGETFILTERALIVESTATE_METHOD_3_A09B881C660D7ADA_OFFSET UNITYSDK_OFFSET(0x16FE05C0)
#define RPG_GAMECORE_TARGETFILTERALIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE05A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFilterAliveState_TypeDefinitionIndex = 21620;

	class TargetFilterAliveState : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::AliveStateMask Mask; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERALIVESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_444A32EB8298F365(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFilterAliveState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFilterAliveState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERALIVESTATE_METHOD_3_444A32EB8298F365_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A09B881C660D7ADA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFilterAliveState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFilterAliveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERALIVESTATE_METHOD_3_A09B881C660D7ADA_OFFSET))(a1, a2);
		}
	};
}
