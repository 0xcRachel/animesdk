#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/MVector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ShowWayPoint; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_5698DB5BFF18D2B6_METHOD_3_D78D83021665E94E_OFFSET UNITYSDK_OFFSET(0xB8FCAD0)
#define CLASS_3_5698DB5BFF18D2B6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8FC9C0)
#define CLASS_3_5698DB5BFF18D2B6__CTOR_OFFSET UNITYSDK_OFFSET(0xB8FC990)

inline static constexpr unsigned int Class_3_5698DB5BFF18D2B6_TypeDefinitionIndex = 46314;

class Class_3_5698DB5BFF18D2B6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowWayPoint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowWayPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowWayPoint*))((::PBYTE)hIl2Cpp + CLASS_3_5698DB5BFF18D2B6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5698DB5BFF18D2B6_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Void Method_3_D78D83021665E94E(::RPG::GameCore::GameEntity* a1, ::UnityEngine::GameObject* a2, ::RPG::MVector3 a3, ::System::String* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7, ::System::String* a8)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*, ::RPG::MVector3, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_5698DB5BFF18D2B6_METHOD_3_D78D83021665E94E_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}
};
