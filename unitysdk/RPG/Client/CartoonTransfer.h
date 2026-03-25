#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_CARTOONTRANSFER_AWAKE_OFFSET UNITYSDK_OFFSET(0x92C6090)
#define RPG_CLIENT_CARTOONTRANSFER_PLAY_OFFSET UNITYSDK_OFFSET(0x92C6040)
#define RPG_CLIENT_CARTOONTRANSFER_SETCENTER_OFFSET UNITYSDK_OFFSET(0x92C5E10)
#define RPG_CLIENT_CARTOONTRANSFER_SETDURATION_OFFSET UNITYSDK_OFFSET(0x92C5F40)
#define RPG_CLIENT_CARTOONTRANSFER_SETFINISHACTION_OFFSET UNITYSDK_OFFSET(0x92C5FF0)
#define RPG_CLIENT_CARTOONTRANSFER_SETRADIUSCURVE_OFFSET UNITYSDK_OFFSET(0x92C5FA0)
#define RPG_CLIENT_CARTOONTRANSFER_UPDATE_OFFSET UNITYSDK_OFFSET(0x92C6140)
#define RPG_CLIENT_CARTOONTRANSFER__CCTOR_OFFSET UNITYSDK_OFFSET(0x92C6370)
#define RPG_CLIENT_CARTOONTRANSFER__CTOR_OFFSET UNITYSDK_OFFSET(0x92C6330)
#define RPG_CLIENT_CARTOONTRANSFER__END_OFFSET UNITYSDK_OFFSET(0x92C6210)
#define RPG_CLIENT_CARTOONTRANSFER__SETCENTERTOSHADER_OFFSET UNITYSDK_OFFSET(0x92C5E80)
#define RPG_CLIENT_CARTOONTRANSFER__SETRADIUSTOSHADER_OFFSET UNITYSDK_OFFSET(0x92C6270)

namespace RPG::Client
{
	inline static constexpr unsigned int CartoonTransfer_TypeDefinitionIndex = 59422;

	class CartoonTransfer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__Radius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CartoonTransfer_TypeDefinitionIndex)->GetStaticField(0xF370);
		}
		static ::System::Int32* StaticGet__Center()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CartoonTransfer_TypeDefinitionIndex)->GetStaticField(0xF374);
		}
		::System::Action* _FinishAction; // 0x18
		::System::Boolean _IsPlaying; // 0x20
		::System::Single _Elapsed; // 0x24
		::System::Single _Duration; // 0x28
		::UnityEngine::Material* _Material; // 0x30
		::UnityEngine::AnimationCurve* _Curve; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER__CCTOR_OFFSET))();
		}

		::System::Void SetCenter(::UnityEngine::Vector2 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER_SETCENTER_OFFSET))(this, pos);
		}

		::System::Void SetDuration(::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER_SETDURATION_OFFSET))(this, duration);
		}

		::System::Void SetRadiusCurve(::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER_SETRADIUSCURVE_OFFSET))(this, curve);
		}

		::System::Void SetFinishAction(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER_SETFINISHACTION_OFFSET))(this, action);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER_PLAY_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER_UPDATE_OFFSET))(this);
		}

		::System::Void _End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER__END_OFFSET))(this);
		}

		::System::Void _SetRadiusToShader(::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER__SETRADIUSTOSHADER_OFFSET))(this, radius);
		}

		::System::Void _SetCenterToShader(::UnityEngine::Vector2 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER__SETCENTERTOSHADER_OFFSET))(this, pos);
		}
	};
}
