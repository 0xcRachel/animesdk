#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHMAINMONSTER_METHOD_4_38110B36D68DB2C3_OFFSET UNITYSDK_OFFSET(0x16FDDE70)
#define RPG_GAMECORE_TARGETFETCHMAINMONSTER_METHOD_4_658492D16D4E0975_OFFSET UNITYSDK_OFFSET(0x16FD7CC0)
#define RPG_GAMECORE_TARGETFETCHMAINMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD7C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchMainMonster_TypeDefinitionIndex = 21643;

	class TargetFetchMainMonster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAINMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_38110B36D68DB2C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchMainMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchMainMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAINMONSTER_METHOD_4_38110B36D68DB2C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_658492D16D4E0975(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchMainMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchMainMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAINMONSTER_METHOD_4_658492D16D4E0975_OFFSET))(a1, a2);
		}
	};
}
