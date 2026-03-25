#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VCameraChangeDataState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace System { class String; }

#define CLASS_1_C33A6A0F83B7A2E0_GET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0x11829300)
#define CLASS_1_C33A6A0F83B7A2E0_GET_STATE_OFFSET UNITYSDK_OFFSET(0x11829290)
#define CLASS_1_C33A6A0F83B7A2E0_GET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0x118292C0)
#define CLASS_1_C33A6A0F83B7A2E0_GET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0x118292E0)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x11828F30)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x11829160)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_2685B6183E614529_2_OFFSET UNITYSDK_OFFSET(0x118291C0)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_2685B6183E614529_3_OFFSET UNITYSDK_OFFSET(0x11828EC0)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x11829100)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_549390661C81F7F4_OFFSET UNITYSDK_OFFSET(0x118285E0)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_5E5FAAAE21B44BAE_1_OFFSET UNITYSDK_OFFSET(0x11828A60)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x11828C90)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_6F9C2FDD9C04B44A_OFFSET UNITYSDK_OFFSET(0x11828730)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_A94BDDEF9937CE59_OFFSET UNITYSDK_OFFSET(0x11828860)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_B03D6532FCBFB0EE_OFFSET UNITYSDK_OFFSET(0x11829000)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x118290B0)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x118286E0)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x11829220)
#define CLASS_1_C33A6A0F83B7A2E0_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x118292B0)
#define CLASS_1_C33A6A0F83B7A2E0_SET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0x11829310)
#define CLASS_1_C33A6A0F83B7A2E0_SET_STATE_OFFSET UNITYSDK_OFFSET(0x118292A0)
#define CLASS_1_C33A6A0F83B7A2E0_SET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0x118292D0)
#define CLASS_1_C33A6A0F83B7A2E0_SET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0x118292F0)
#define CLASS_1_C33A6A0F83B7A2E0__CTOR_OFFSET UNITYSDK_OFFSET(0x118285D0)

inline static constexpr unsigned int Class_1_C33A6A0F83B7A2E0_TypeDefinitionIndex = 56842;

class Class_1_C33A6A0F83B7A2E0 : public ::System::Object
{
public:
	::RPG::Client::CameraBlendCurve* Field_1_9; // 0x10
	::RPG::Client::CameraBlendCurve* Field_1_8; // 0x18
	::UnityEngine::Matrix4x4 Field_1_7; // 0x20
	::RPG::Client::VCameraChangeDataState _State_k__BackingField; // 0x60
	::System::Single _KeepDuration_k__BackingField; // 0x64
	::System::Single _TransitOutTime_k__BackingField; // 0x68
	::UnityEngine::Matrix4x4 Field_1_5; // 0x6C
	::UnityEngine::Matrix4x4 Field_1_6; // 0xAC
	::System::Single _TransitInTime_k__BackingField; // 0xEC
	::System::Single Field_1_4; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_549390661C81F7F4(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_549390661C81F7F4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_6F9C2FDD9C04B44A(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Matrix4x4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_6F9C2FDD9C04B44A_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Matrix4x4 Method_1_A94BDDEF9937CE59(::System::Single a1)
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_A94BDDEF9937CE59_OFFSET))(this, a1);
	}

	::System::Void Method_1_B03D6532FCBFB0EE(::UnityEngine::Matrix4x4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_B03D6532FCBFB0EE_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_2685B6183E614529_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_5E5FAAAE21B44BAE_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_2685B6183E614529_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_0E142E3463F30350_OFFSET))(this);
	}

	::RPG::Client::VCameraChangeDataState get_State()
	{
		return ((::RPG::Client::VCameraChangeDataState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::VCameraChangeDataState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::VCameraChangeDataState))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_SET_STATE_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single get_TransitInTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_GET_TRANSITINTIME_OFFSET))(this);
	}

	::System::Void set_TransitInTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_SET_TRANSITINTIME_OFFSET))(this, value);
	}

	::System::Single get_TransitOutTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_GET_TRANSITOUTTIME_OFFSET))(this);
	}

	::System::Void set_TransitOutTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_SET_TRANSITOUTTIME_OFFSET))(this, value);
	}

	::System::Single get_KeepDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_GET_KEEPDURATION_OFFSET))(this);
	}

	::System::Void set_KeepDuration(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C33A6A0F83B7A2E0_SET_KEEPDURATION_OFFSET))(this, value);
	}
};
