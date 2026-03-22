#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6E5873B83DCA1F72.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DD2706738F86C698;
namespace RPG::GameCore { class FiveDimSimpleProjectileMoveConfig; }
namespace RPG::GameCore { class FiveDimSimpleProjectilePropSpawnerParam; }

#define CLASS_2_13DA1A2BB649AAB2_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x96B41B0)
#define CLASS_2_13DA1A2BB649AAB2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x96B47A0)
#define CLASS_2_13DA1A2BB649AAB2_METHOD_2_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x96B4380)
#define CLASS_2_13DA1A2BB649AAB2_METHOD_2_7854AA0B7A17DA18_OFFSET UNITYSDK_OFFSET(0x96B4270)
#define CLASS_2_13DA1A2BB649AAB2_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x96B4800)
#define CLASS_2_13DA1A2BB649AAB2_METHOD_2_95C9AD510C1DE020_OFFSET UNITYSDK_OFFSET(0x96B3EB0)
#define CLASS_2_13DA1A2BB649AAB2_METHOD_2_DA7DA462B9110AF1_OFFSET UNITYSDK_OFFSET(0x96B4650)
#define CLASS_2_13DA1A2BB649AAB2_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0x96B4730)
#define CLASS_2_13DA1A2BB649AAB2_METHOD_2_FCDA6C73F74BD98C_OFFSET UNITYSDK_OFFSET(0x96B4430)
#define CLASS_2_13DA1A2BB649AAB2__CTOR_OFFSET UNITYSDK_OFFSET(0x96B4710)

inline static constexpr unsigned int Class_2_13DA1A2BB649AAB2_TypeDefinitionIndex = 60759;

class Class_2_13DA1A2BB649AAB2 : public ::Class_1_6E5873B83DCA1F72
{
public:
	::RPG::GameCore::FiveDimSimpleProjectilePropSpawnerParam* Field_2_2; // 0x18
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13DA1A2BB649AAB2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_95C9AD510C1DE020(::Class_1_DD2706738F86C698* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD2706738F86C698*))((::PBYTE)hIl2Cpp + CLASS_2_13DA1A2BB649AAB2_METHOD_2_95C9AD510C1DE020_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13DA1A2BB649AAB2_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_7854AA0B7A17DA18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_13DA1A2BB649AAB2_METHOD_2_7854AA0B7A17DA18_OFFSET))(this, a1);
	}

	::System::Void Method_2_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13DA1A2BB649AAB2_METHOD_2_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Boolean Method_2_FCDA6C73F74BD98C(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_13DA1A2BB649AAB2_METHOD_2_FCDA6C73F74BD98C_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FiveDimSimpleProjectileMoveConfig* Method_2_DA7DA462B9110AF1()
	{
		return ((::RPG::GameCore::FiveDimSimpleProjectileMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13DA1A2BB649AAB2_METHOD_2_DA7DA462B9110AF1_OFFSET))(this);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_DD2706738F86C698* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD2706738F86C698*))((::PBYTE)hIl2Cpp + CLASS_2_13DA1A2BB649AAB2_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13DA1A2BB649AAB2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_13DA1A2BB649AAB2_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
