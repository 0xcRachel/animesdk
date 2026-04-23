#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_81F92B0B04671207;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCasterToTargetConfig; }
namespace RPG::Client { class CameraSomatoDynamicOffset; }
namespace RPG::Client { class CloseupShotData; }
namespace RPG::Client { class FightModuleConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5C16A1F7496735F4_METHOD_1_0B8EFE5D289B7D3F_OFFSET UNITYSDK_OFFSET(0xAD69210)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_31F1C58AB372DEB4_OFFSET UNITYSDK_OFFSET(0xAD67B90)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_3ABD0165571B5EF8_OFFSET UNITYSDK_OFFSET(0xAD68430)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_71DD74098CFB7065_OFFSET UNITYSDK_OFFSET(0xAD68FB0)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_7BF0BA6C204CED90_OFFSET UNITYSDK_OFFSET(0xAD67000)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_8240BDD4F62E3F20_OFFSET UNITYSDK_OFFSET(0xAD66640)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_95C211358C4AF964_OFFSET UNITYSDK_OFFSET(0xAD67800)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_B153DBF66F2B9EE2_OFFSET UNITYSDK_OFFSET(0xAD67E20)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xAD66520)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_B51668C48B36C071_1_OFFSET UNITYSDK_OFFSET(0xAD68710)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_B51668C48B36C071_OFFSET UNITYSDK_OFFSET(0xAD68520)
#define CLASS_1_5C16A1F7496735F4_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0xAD68900)
#define CLASS_1_5C16A1F7496735F4__CTOR_OFFSET UNITYSDK_OFFSET(0xAD66250)

inline static constexpr unsigned int Class_1_5C16A1F7496735F4_TypeDefinitionIndex = 64203;

class Class_1_5C16A1F7496735F4 : public ::System::Object
{
public:
	::Class_2_81F92B0B04671207* Field_1_20; // 0x10
	::RPG::Client::FightModuleConfig* Field_1_10; // 0x18
	::RPG::Client::CloseupShotData* Field_1_1; // 0x20
	::RPG::Client::CameraDataAndFlags* Field_1_0; // 0x28
	::RPG::Client::CameraFightStateCasterToTargetConfig* Field_1_9; // 0x30
	::System::Single Field_1_12; // 0x38
	::UnityEngine::Vector3 Field_1_8; // 0x3C
	::UnityEngine::Vector3 Field_1_21; // 0x48
	::UnityEngine::Vector3 Field_1_15; // 0x54
	::UnityEngine::Quaternion Field_1_5; // 0x60
	::UnityEngine::Quaternion Field_1_3; // 0x70
	::System::Single Field_1_19; // 0x80
	::UnityEngine::Quaternion Field_1_16; // 0x84
	::System::Single Field_1_6; // 0x94
	::System::Boolean Field_1_11; // 0x98
	::System::Boolean Field_1_13; // 0x99
	::UnityEngine::Vector3 Field_1_4; // 0x9C
	::UnityEngine::Vector3 Field_1_22; // 0xA8
	::UnityEngine::Vector3 Field_1_14; // 0xB4
	::System::Single Field_1_18; // 0xC0
	::UnityEngine::Vector3 Field_1_2; // 0xC4
	::RPG::MVector3 Field_1_17; // 0xD0
	::System::Single Field_1_7; // 0xDC

	::System::Void _ctor(::RPG::Client::CameraDataAndFlags* a1, ::RPG::Client::CloseupShotData* a2, ::System::Nullable_1<::UnityEngine::Vector3> a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CloseupShotData*, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_8240BDD4F62E3F20(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::System::Nullable_1<::UnityEngine::Quaternion> a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Nullable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_8240BDD4F62E3F20_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_95C211358C4AF964(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_95C211358C4AF964_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7BF0BA6C204CED90(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_7BF0BA6C204CED90_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B153DBF66F2B9EE2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_B153DBF66F2B9EE2_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_B9A97467188E4B69_OFFSET))(this);
	}

	::RPG::Client::CameraSomatoDynamicOffset* Method_1_0B8EFE5D289B7D3F(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Single& a2)
	{
		return ((::RPG::Client::CameraSomatoDynamicOffset*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_0B8EFE5D289B7D3F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_71DD74098CFB7065(::RPG::Client::CameraSomatoDynamicOffset* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraSomatoDynamicOffset*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_71DD74098CFB7065_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_31F1C58AB372DEB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_31F1C58AB372DEB4_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_B51668C48B36C071(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_B51668C48B36C071_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_B51668C48B36C071_1(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_B51668C48B36C071_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_3ABD0165571B5EF8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C16A1F7496735F4_METHOD_1_3ABD0165571B5EF8_OFFSET))(this);
	}
};
