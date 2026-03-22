#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D3F97394EEAB34D6.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_1A92845FAFA5EC77;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collision; }

#define CLASS_2_CA05EA66F177F206_CLEAR_OFFSET UNITYSDK_OFFSET(0x162AD370)
#define CLASS_2_CA05EA66F177F206_METHOD_2_50D16A65A008CAAE_OFFSET UNITYSDK_OFFSET(0x162AD580)
#define CLASS_2_CA05EA66F177F206_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x162AD4D0)
#define CLASS_2_CA05EA66F177F206_ONALLOC_OFFSET UNITYSDK_OFFSET(0x162AD280)
#define CLASS_2_CA05EA66F177F206__CTOR_OFFSET UNITYSDK_OFFSET(0x162AD7F0)
#define CLASS_2_CA05EA66F177F206___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x162AD890)
#define CLASS_2_CA05EA66F177F206___IFIXBASEPROXY_ONALLOC_OFFSET UNITYSDK_OFFSET(0x162AD800)

inline static constexpr unsigned int Class_2_CA05EA66F177F206_TypeDefinitionIndex = 32628;

class Class_2_CA05EA66F177F206 : public ::Class_1_D3F97394EEAB34D6
{
public:
	::RPG::PoolHashSet_1<::System::Int32>* Field_2_11; // 0x338
	::RPG::PoolList_1<::UnityEngine::Collision*>* Field_2_7; // 0x340
	::UnityEngine::Vector3 Field_2_0; // 0x348
	::System::Boolean Field_2_1; // 0x354
	::System::Boolean Field_2_10; // 0x355
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_2_4; // 0x358
	::System::Single Field_2_8; // 0x38C
	::System::Single Field_2_6; // 0x390
	::System::Int32 Field_2_5; // 0x394
	::System::Single Field_2_9; // 0x398
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_2_2; // 0x39C
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_2_3; // 0x3D0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA05EA66F177F206__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA05EA66F177F206_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA05EA66F177F206_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA05EA66F177F206_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_50D16A65A008CAAE(::Class_3_1A92845FAFA5EC77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_CA05EA66F177F206_METHOD_2_50D16A65A008CAAE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA05EA66F177F206___IFIXBASEPROXY_ONALLOC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA05EA66F177F206___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
