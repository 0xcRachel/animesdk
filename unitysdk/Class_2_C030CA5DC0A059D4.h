#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6E5873B83DCA1F72.h"
#include "unitysdk/RPG/GameCore/FiveDimGrenadierAttackType.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleProjectileMoveType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DD2706738F86C698;
class Class_2_9DD8A46984F1AFFD;
namespace RPG::GameCore { class FiveDimGrenadierBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimGrenadierMoveConfig; }
namespace RPG::GameCore { class FiveDimGrenadierProjectileConfig; }
namespace RPG::GameCore { class FiveDimGrenadierPropSpawnerParam; }

#define CLASS_2_C030CA5DC0A059D4_METHOD_2_06BC84897057E48F_OFFSET UNITYSDK_OFFSET(0x10F3CF90)
#define CLASS_2_C030CA5DC0A059D4_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10F3C800)
#define CLASS_2_C030CA5DC0A059D4_METHOD_2_43361AC706081BBD_OFFSET UNITYSDK_OFFSET(0x10F3DB90)
#define CLASS_2_C030CA5DC0A059D4_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10F3DCE0)
#define CLASS_2_C030CA5DC0A059D4_METHOD_2_5F59867914726945_OFFSET UNITYSDK_OFFSET(0x10F3D990)
#define CLASS_2_C030CA5DC0A059D4_METHOD_2_665AD685E4B4AECF_OFFSET UNITYSDK_OFFSET(0x10F3CA80)
#define CLASS_2_C030CA5DC0A059D4_METHOD_2_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x10F3C9D0)
#define CLASS_2_C030CA5DC0A059D4_METHOD_2_7854AA0B7A17DA18_OFFSET UNITYSDK_OFFSET(0x10F3C8C0)
#define CLASS_2_C030CA5DC0A059D4_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x10F3DD40)
#define CLASS_2_C030CA5DC0A059D4_METHOD_2_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x10F3CC60)
#define CLASS_2_C030CA5DC0A059D4_METHOD_2_C0E99D83C9CCEB1A_OFFSET UNITYSDK_OFFSET(0x10F3DAD0)
#define CLASS_2_C030CA5DC0A059D4_METHOD_2_C85D93508ECC42CF_OFFSET UNITYSDK_OFFSET(0x10F3D940)
#define CLASS_2_C030CA5DC0A059D4_METHOD_2_D19EB92850536C95_OFFSET UNITYSDK_OFFSET(0x10F3C1E0)
#define CLASS_2_C030CA5DC0A059D4_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0x10F3DC70)
#define CLASS_2_C030CA5DC0A059D4_METHOD_2_EC1065B102446B76_OFFSET UNITYSDK_OFFSET(0x10F3CED0)
#define CLASS_2_C030CA5DC0A059D4_METHOD_2_FCDA6C73F74BD98C_OFFSET UNITYSDK_OFFSET(0x10F3CCB0)
#define CLASS_2_C030CA5DC0A059D4__CTOR_OFFSET UNITYSDK_OFFSET(0x10F3DC50)

inline static constexpr unsigned int Class_2_C030CA5DC0A059D4_TypeDefinitionIndex = 60755;

class Class_2_C030CA5DC0A059D4 : public ::Class_1_6E5873B83DCA1F72
{
public:
	::RPG::GameCore::FiveDimGrenadierPropSpawnerParam* Field_2_10; // 0x18
	::Il2CppArray<::RPG::GameCore::FiveDimGrenadierProjectileConfig*>* Field_2_8; // 0x20
	::RPG::GameCore::FiveDimGrenadierAttackType Field_2_4; // 0x28
	::System::Single Field_2_1; // 0x2C
	::System::Single Field_2_3; // 0x30
	::System::Single Field_2_9; // 0x34
	::System::Single Field_2_2; // 0x38
	::System::Single Field_2_6; // 0x3C
	::RPG::GameCore::FiveDimSimpleProjectileMoveType Field_2_5; // 0x40
	::System::Single Field_2_7; // 0x44
	::System::Single Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C030CA5DC0A059D4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D19EB92850536C95(::Class_1_DD2706738F86C698* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD2706738F86C698*))((::PBYTE)hIl2Cpp + CLASS_2_C030CA5DC0A059D4_METHOD_2_D19EB92850536C95_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C030CA5DC0A059D4_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_7854AA0B7A17DA18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C030CA5DC0A059D4_METHOD_2_7854AA0B7A17DA18_OFFSET))(this, a1);
	}

	::System::Void Method_2_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C030CA5DC0A059D4_METHOD_2_66CC9828DB1F478F_OFFSET))(this);
	}

	::Class_2_9DD8A46984F1AFFD* Method_2_665AD685E4B4AECF()
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C030CA5DC0A059D4_METHOD_2_665AD685E4B4AECF_OFFSET))(this);
	}

	::System::Boolean Method_2_FCDA6C73F74BD98C(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_C030CA5DC0A059D4_METHOD_2_FCDA6C73F74BD98C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_EC1065B102446B76(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C030CA5DC0A059D4_METHOD_2_EC1065B102446B76_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_06BC84897057E48F(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C030CA5DC0A059D4_METHOD_2_06BC84897057E48F_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C030CA5DC0A059D4_METHOD_2_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_5F59867914726945()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C030CA5DC0A059D4_METHOD_2_5F59867914726945_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimOrthoDirection Method_2_C85D93508ECC42CF()
	{
		return ((::RPG::GameCore::FiveDimOrthoDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C030CA5DC0A059D4_METHOD_2_C85D93508ECC42CF_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimGrenadierMoveConfig* Method_2_43361AC706081BBD()
	{
		return ((::RPG::GameCore::FiveDimGrenadierMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C030CA5DC0A059D4_METHOD_2_43361AC706081BBD_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimGrenadierBakedMoveConfig* Method_2_C0E99D83C9CCEB1A()
	{
		return ((::RPG::GameCore::FiveDimGrenadierBakedMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C030CA5DC0A059D4_METHOD_2_C0E99D83C9CCEB1A_OFFSET))(this);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_DD2706738F86C698* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD2706738F86C698*))((::PBYTE)hIl2Cpp + CLASS_2_C030CA5DC0A059D4_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C030CA5DC0A059D4_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C030CA5DC0A059D4_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
