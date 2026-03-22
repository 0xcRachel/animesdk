#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_F11A264FAF28E2C5.h"
#include "unitysdk/Class_2_82D5CF3CD743E581_PhotoGraphSwipeCameraState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_854A2C7905ADF31B;

#define CLASS_2_82D5CF3CD743E581_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B1A840)
#define CLASS_2_82D5CF3CD743E581_METHOD_2_23E21796AC557CEE_OFFSET UNITYSDK_OFFSET(0x10B1A910)
#define CLASS_2_82D5CF3CD743E581_METHOD_2_5BB3779CAA97BE71_OFFSET UNITYSDK_OFFSET(0x10B1A090)
#define CLASS_2_82D5CF3CD743E581_METHOD_2_723A6AD38C141A62_OFFSET UNITYSDK_OFFSET(0x10B1A380)
#define CLASS_2_82D5CF3CD743E581_METHOD_2_761B2D9D62313039_OFFSET UNITYSDK_OFFSET(0x10B1A120)
#define CLASS_2_82D5CF3CD743E581_METHOD_2_A703BEBEEBA84608_OFFSET UNITYSDK_OFFSET(0x10B19BA0)
#define CLASS_2_82D5CF3CD743E581__CTOR_OFFSET UNITYSDK_OFFSET(0x10B1A8B0)
#define CLASS_2_82D5CF3CD743E581___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B1A920)

inline static constexpr unsigned int Class_2_82D5CF3CD743E581_TypeDefinitionIndex = 55395;

class Class_2_82D5CF3CD743E581 : public ::Class_1_F11A264FAF28E2C5
{
public:
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_3; // 0x60
	::Class_1_854A2C7905ADF31B* Field_2_2; // 0x68
	::UnityEngine::Quaternion Field_2_4; // 0x70
	::System::Single Field_2_6; // 0x80
	::System::Single Field_2_5; // 0x84
	::UnityEngine::Vector2 Field_2_1; // 0x88
	::Class_2_82D5CF3CD743E581_PhotoGraphSwipeCameraState Field_2_7; // 0x90
	::UnityEngine::Vector2 Field_2_0; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82D5CF3CD743E581__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A703BEBEEBA84608(::Class_1_854A2C7905ADF31B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_854A2C7905ADF31B*))((::PBYTE)hIl2Cpp + CLASS_2_82D5CF3CD743E581_METHOD_2_A703BEBEEBA84608_OFFSET))(this, a1);
	}

	::System::Void Method_2_723A6AD38C141A62(::Cinemachine::CameraState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_2_82D5CF3CD743E581_METHOD_2_723A6AD38C141A62_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82D5CF3CD743E581_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_761B2D9D62313039(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_82D5CF3CD743E581_METHOD_2_761B2D9D62313039_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5BB3779CAA97BE71(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_82D5CF3CD743E581_METHOD_2_5BB3779CAA97BE71_OFFSET))(this, a1);
	}

	::System::Void Method_2_23E21796AC557CEE(::Cinemachine::CameraState& P0)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_2_82D5CF3CD743E581_METHOD_2_23E21796AC557CEE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82D5CF3CD743E581___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
