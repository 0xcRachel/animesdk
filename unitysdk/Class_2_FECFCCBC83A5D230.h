#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_37D832480CB327E1;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropMoveTo; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_FECFCCBC83A5D230_DISPOSE_OFFSET UNITYSDK_OFFSET(0x132E72C0)
#define CLASS_2_FECFCCBC83A5D230_METHOD_2_12621FA4C7C3BFC8_OFFSET UNITYSDK_OFFSET(0x132E8470)
#define CLASS_2_FECFCCBC83A5D230_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x132E89D0)
#define CLASS_2_FECFCCBC83A5D230_METHOD_2_AA7E7D1E175DAB81_OFFSET UNITYSDK_OFFSET(0x132E8AF0)
#define CLASS_2_FECFCCBC83A5D230_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x132E88A0)
#define CLASS_2_FECFCCBC83A5D230_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x132E7460)
#define CLASS_2_FECFCCBC83A5D230_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x132E7360)
#define CLASS_2_FECFCCBC83A5D230_TICK_OFFSET UNITYSDK_OFFSET(0x132E7400)
#define CLASS_2_FECFCCBC83A5D230__CTOR_OFFSET UNITYSDK_OFFSET(0x132E72B0)

inline static constexpr unsigned int Class_2_FECFCCBC83A5D230_TypeDefinitionIndex = 54527;

class Class_2_FECFCCBC83A5D230 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropMoveTo* Field_2_0; // 0x18
	::RPG::GameCore::TransformComponent* Field_2_1; // 0x20
	::Class_2_37D832480CB327E1* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::RPG::GameCore::GameEntity* Field_2_4; // 0x38
	::UnityEngine::Quaternion Field_2_5; // 0x40
	::UnityEngine::Vector3 Field_2_6; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropMoveTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropMoveTo*))((::PBYTE)hIl2Cpp + CLASS_2_FECFCCBC83A5D230__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FECFCCBC83A5D230_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FECFCCBC83A5D230_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FECFCCBC83A5D230_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FECFCCBC83A5D230_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FECFCCBC83A5D230_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FECFCCBC83A5D230_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_AA7E7D1E175DAB81(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FECFCCBC83A5D230_METHOD_2_AA7E7D1E175DAB81_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_12621FA4C7C3BFC8(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_FECFCCBC83A5D230_METHOD_2_12621FA4C7C3BFC8_OFFSET))(this, a1, a2, a3);
	}
};
