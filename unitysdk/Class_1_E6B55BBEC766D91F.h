#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimGarbageBinBakedMoveConfig; }
namespace UnityEngine { class BoxCollider; }

#define CLASS_1_E6B55BBEC766D91F_METHOD_1_62E7E0A7A69942ED_OFFSET UNITYSDK_OFFSET(0x8F55A10)

inline static constexpr unsigned int Class_1_E6B55BBEC766D91F_TypeDefinitionIndex = 60849;

class Class_1_E6B55BBEC766D91F : public ::System::Object
{
public:
	static ::System::Void Method_1_62E7E0A7A69942ED(::UnityEngine::BoxCollider* a1, ::System::Boolean a2, ::RPG::GameCore::FiveDimGarbageBinBakedMoveConfig* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::UnityEngine::BoxCollider*, ::System::Boolean, ::RPG::GameCore::FiveDimGarbageBinBakedMoveConfig*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6B55BBEC766D91F_METHOD_1_62E7E0A7A69942ED_OFFSET))(a1, a2, a3, a4);
	}
};
