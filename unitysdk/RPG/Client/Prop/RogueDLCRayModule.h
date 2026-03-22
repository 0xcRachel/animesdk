#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9CBC71DC5240DC00;
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ACTIVEPRESIGHT_OFFSET UNITYSDK_OFFSET(0x9CB48E0)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_DEACTIVEPRESIGHT_OFFSET UNITYSDK_OFFSET(0x9CB4980)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9CB5050)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_METHOD_5_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x9CB56A0)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_METHOD_5_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x9CB5350)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9CB5800)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ROTATETO_OFFSET UNITYSDK_OFFSET(0x9CB4A20)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_SETEMISSION_OFFSET UNITYSDK_OFFSET(0x9CB4F50)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_SETPRESIGHTSCALE_OFFSET UNITYSDK_OFFSET(0x9CB5270)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_UPDATE_OFFSET UNITYSDK_OFFSET(0x9CB5300)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x9CB58A0)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9CB5890)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RogueDLCRayModule_TypeDefinitionIndex = 62219;

	class RogueDLCRayModule : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_17()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCRayModule_TypeDefinitionIndex)->GetStaticField(0xF870);
		}
		static ::System::Int32* StaticGet_Field_5_18()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCRayModule_TypeDefinitionIndex)->GetStaticField(0xF874);
		}
		::System::Single RotateSpeed; // 0x18
		::System::Single ChangeEmissionSpeed; // 0x1C
		::UnityEngine::Animator* Field_5_2; // 0x20
		::System::Boolean Field_5_3; // 0x28
		::System::Single Field_5_4; // 0x2C
		::System::Single Field_5_5; // 0x30
		::UnityEngine::Vector3 Field_5_6; // 0x34
		::System::Int32 Field_5_7; // 0x40
		::UnityEngine::Transform* Field_5_8; // 0x48
		::UnityEngine::Vector3 Field_5_9; // 0x50
		::UnityEngine::MeshRenderer* Field_5_10; // 0x60
		::Class_1_9CBC71DC5240DC00* Field_5_11; // 0x68
		::System::Single Field_5_12; // 0x70
		::System::Single Field_5_13; // 0x74
		::System::Boolean Field_5_14; // 0x78
		::System::Single Field_5_15; // 0x7C
		::System::Single Field_5_16; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE__CCTOR_OFFSET))();
		}

		::System::Void ActivePresight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ACTIVEPRESIGHT_OFFSET))(this);
		}

		::System::Void DeactivePresight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_DEACTIVEPRESIGHT_OFFSET))(this);
		}

		::System::Void RotateTo(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ROTATETO_OFFSET))(this, a1);
		}

		::System::Void SetEmission(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_SETEMISSION_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_INIT_OFFSET))(this);
		}

		::System::Void SetPresightScale(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_SETPRESIGHTSCALE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_METHOD_5_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::System::Void Method_5_25DEA5C65A602671()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_METHOD_5_25DEA5C65A602671_OFFSET))(this);
		}
	};
}
