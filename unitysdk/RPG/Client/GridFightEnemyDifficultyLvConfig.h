#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYLVCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x9348920)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYLVCONFIG__CREATEINTERVAL_OFFSET UNITYSDK_OFFSET(0x93489A0)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYLVCONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9348AF0)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYLVCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9348990)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEnemyDifficultyLvConfig_TypeDefinitionIndex = 51270;

	class GridFightEnemyDifficultyLvConfig : public ::System::Object
	{
	public:
		static ::System::Func_3<::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightEnemyDifficultyLvConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_3<::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightEnemyDifficultyLvConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEnemyDifficultyLvConfig_TypeDefinitionIndex)->GetStaticField(0x444A0);
		}
		::RPG::GameCore::FixPoint HPRatio; // 0x10
		::System::UInt32 EnemyDifficultyLevel; // 0x18
		::System::UInt32 ChapterID; // 0x1C
		::RPG::GameCore::FixPoint DefenceRatio; // 0x20
		::RPG::GameCore::FixPoint SpeedRatio; // 0x28
		::RPG::GameCore::FixPoint StanceRatio; // 0x30
		::RPG::GameCore::FixPoint AttackRatio; // 0x38

		::System::Void _ctor(::System::UInt32 level, ::System::UInt32 chapterID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYLVCONFIG__CTOR_OFFSET))(this, level, chapterID);
		}

		::System::Void _ctor_1(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> tuple)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYLVCONFIG__CTOR_1_OFFSET))(this, tuple);
		}

		static ::RPG::Client::GridFightEnemyDifficultyLvConfig* GetConfig(::System::UInt32 level, ::System::UInt32 chapterID)
		{
			return ((::RPG::Client::GridFightEnemyDifficultyLvConfig*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYLVCONFIG_GETCONFIG_OFFSET))(level, chapterID);
		}

		::System::Void _CreateInterval(::System::UInt32 level, ::System::UInt32 chapterID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYLVCONFIG__CREATEINTERVAL_OFFSET))(this, level, chapterID);
		}
	};
}
