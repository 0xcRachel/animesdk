#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::GameCore { class ProjectileCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_PROJECTILECURVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D52C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ProjectileCurveConfig_TypeDefinitionIndex = 42765;

	class ProjectileCurveConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ProjectileCurve*>* SpeedCurve; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILECURVECONFIG__CTOR_OFFSET))(this);
		}
	};
}
