#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/Struct_2_52A902145F5BE51F_2.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }

#define CLASS_1_0A3B9FD0FE703FDC_CLEAR_OFFSET UNITYSDK_OFFSET(0x19046C50)
#define CLASS_1_0A3B9FD0FE703FDC_METHOD_1_40E490E2772D5D75_1_OFFSET UNITYSDK_OFFSET(0x1904DAC0)
#define CLASS_1_0A3B9FD0FE703FDC_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x1904D720)
#define CLASS_1_0A3B9FD0FE703FDC_METHOD_1_77FD543600E00498_1_OFFSET UNITYSDK_OFFSET(0x1904D8B0)
#define CLASS_1_0A3B9FD0FE703FDC_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x1904D510)
#define CLASS_1_0A3B9FD0FE703FDC_METHOD_1_C34AC80B04BCFF1B_OFFSET UNITYSDK_OFFSET(0x1904CFA0)
#define CLASS_1_0A3B9FD0FE703FDC_METHOD_1_C927A7859BE1D8A3_OFFSET UNITYSDK_OFFSET(0x1904DC50)
#define CLASS_1_0A3B9FD0FE703FDC_METHOD_1_F10A0D072D26C4BF_1_OFFSET UNITYSDK_OFFSET(0x1904D1D0)
#define CLASS_1_0A3B9FD0FE703FDC_METHOD_1_F10A0D072D26C4BF_2_OFFSET UNITYSDK_OFFSET(0x1904D370)
#define CLASS_1_0A3B9FD0FE703FDC_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x1904D030)
#define CLASS_1_0A3B9FD0FE703FDC_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1904DCC0)
#define CLASS_1_0A3B9FD0FE703FDC_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1904DD20)
#define CLASS_1_0A3B9FD0FE703FDC__CTOR_OFFSET UNITYSDK_OFFSET(0x19047330)

inline static constexpr unsigned int Class_1_0A3B9FD0FE703FDC_TypeDefinitionIndex = 40113;

class Class_1_0A3B9FD0FE703FDC : public ::System::Object
{
public:
	::RPG::PoolList_1<::UnityEngine::Collider*>* Field_1_0; // 0x10
	::RPG::PoolList_1<::UnityEngine::Collider*>* Field_1_1; // 0x18
	::UnityEngine::Collider* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::RPG::Client::LittleGame::FiveDim::PropMoveState Field_1_4; // 0x2C
	::UnityEngine::Vector3 Field_1_5; // 0x30
	::System::UInt32 Field_1_6; // 0x3C
	::System::Int32 Field_1_7; // 0x40
	::RPG::Client::LittleGame::FiveDim::PropMoveState Field_1_8; // 0x44
	::System::Single Field_1_9; // 0x48
	::System::Boolean Field_1_10; // 0x4C
	::System::Boolean Field_1_11; // 0x4D
	::System::Boolean Field_1_12; // 0x4E
	::System::Boolean Field_1_13; // 0x4F
	::Struct_2_52A902145F5BE51F_2 Field_1_14; // 0x50
	::UnityEngine::Vector3 Field_1_15; // 0x280
	::System::Single Field_1_16; // 0x28C
	::UnityEngine::Vector3 Field_1_17; // 0x290
	::Struct_2_EAC1BB0F093534A5 Field_1_18; // 0x29C
	::UnityEngine::Quaternion Field_1_19; // 0x304
	::UnityEngine::Vector3 Field_1_20; // 0x314
	::UnityEngine::Vector3 Field_1_21; // 0x320
	::UnityEngine::Vector3 Field_1_22; // 0x32C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A3B9FD0FE703FDC__CTOR_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_C34AC80B04BCFF1B()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A3B9FD0FE703FDC_METHOD_1_C34AC80B04BCFF1B_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A3B9FD0FE703FDC_METHOD_1_F10A0D072D26C4BF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A3B9FD0FE703FDC_METHOD_1_F10A0D072D26C4BF_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A3B9FD0FE703FDC_METHOD_1_F10A0D072D26C4BF_2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A3B9FD0FE703FDC_METHOD_1_77FD543600E00498_OFFSET))(this);
	}

	::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_0A3B9FD0FE703FDC_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A3B9FD0FE703FDC_METHOD_1_77FD543600E00498_1_OFFSET))(this);
	}

	::System::Void Method_1_40E490E2772D5D75_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_0A3B9FD0FE703FDC_METHOD_1_40E490E2772D5D75_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C927A7859BE1D8A3(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_0A3B9FD0FE703FDC_METHOD_1_C927A7859BE1D8A3_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A3B9FD0FE703FDC_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A3B9FD0FE703FDC_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A3B9FD0FE703FDC_ONRECYCLE_OFFSET))(this);
	}
};
