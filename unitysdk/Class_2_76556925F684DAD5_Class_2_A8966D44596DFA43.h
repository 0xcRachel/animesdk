#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_76556925F684DAD5_Class_1_7378FCB590CC7F2E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F7445212B44E5397_Class_2_F5A9AC62CB261A91;
class Class_2_5583FD8A3512B20B;
class Class_2_76556925F684DAD5;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw; }

#define CLASS_2_76556925F684DAD5_CLASS_2_A8966D44596DFA43_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8F4170)
#define CLASS_2_76556925F684DAD5_CLASS_2_A8966D44596DFA43_GET_THROWDIRECTION_OFFSET UNITYSDK_OFFSET(0xB8F4150)
#define CLASS_2_76556925F684DAD5_CLASS_2_A8966D44596DFA43_METHOD_2_0C3DD803FA1B1F2B_OFFSET UNITYSDK_OFFSET(0xB8F41E0)
#define CLASS_2_76556925F684DAD5_CLASS_2_A8966D44596DFA43__CTOR_OFFSET UNITYSDK_OFFSET(0xB8F4060)
#define CLASS_2_76556925F684DAD5_CLASS_2_A8966D44596DFA43___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8F4280)

inline static constexpr unsigned int Class_2_76556925F684DAD5_Class_2_A8966D44596DFA43_TypeDefinitionIndex = 55084;

class Class_2_76556925F684DAD5_Class_2_A8966D44596DFA43 : public ::Class_2_76556925F684DAD5_Class_1_7378FCB590CC7F2E
{
public:
	::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw* Field_2_0; // 0x10
	::UnityEngine::Vector3 _ThrowDirection_k__BackingField; // 0x18

	::System::Void _ctor(::Class_2_76556925F684DAD5* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_76556925F684DAD5*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw*))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_CLASS_2_A8966D44596DFA43__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 get_ThrowDirection()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_CLASS_2_A8966D44596DFA43_GET_THROWDIRECTION_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_CLASS_2_A8966D44596DFA43_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_0C3DD803FA1B1F2B(::Class_2_5583FD8A3512B20B* a1, ::Class_1_F7445212B44E5397_Class_2_F5A9AC62CB261A91* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5583FD8A3512B20B*, ::Class_1_F7445212B44E5397_Class_2_F5A9AC62CB261A91*))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_CLASS_2_A8966D44596DFA43_METHOD_2_0C3DD803FA1B1F2B_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_CLASS_2_A8966D44596DFA43___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
