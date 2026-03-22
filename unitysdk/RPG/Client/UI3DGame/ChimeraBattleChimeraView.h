#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleAnimationType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_7AF1D57CA4301272;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0xA17A020)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA179F80)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_GETUNITYOBJECT_OFFSET UNITYSDK_OFFSET(0xA179FD0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA17A060)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xA17A790)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_METHOD_5_51CFFE2AF748ECD7_1_OFFSET UNITYSDK_OFFSET(0xA17ACD0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_METHOD_5_51CFFE2AF748ECD7_2_OFFSET UNITYSDK_OFFSET(0xA17A9D0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_METHOD_5_51CFFE2AF748ECD7_3_OFFSET UNITYSDK_OFFSET(0xA17A850)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xA17AB50)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_METHOD_5_E4865A0578743351_OFFSET UNITYSDK_OFFSET(0xA17A410)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_PERFORMLEAVE_OFFSET UNITYSDK_OFFSET(0xA17A200)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_PLAYBACK_OFFSET UNITYSDK_OFFSET(0xA17AE50)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_PLAY_OFFSET UNITYSDK_OFFSET(0xA17A4F0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xA17A100)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0xA17A1A0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0xA17AF10)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA17AF00)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int ChimeraBattleChimeraView_TypeDefinitionIndex = 60046;

	class ChimeraBattleChimeraView : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattleChimeraView_TypeDefinitionIndex)->GetStaticField(0xB780);
		}
		static ::System::Int32* StaticGet_Field_5_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattleChimeraView_TypeDefinitionIndex)->GetStaticField(0xB784);
		}
		static ::System::Int32* StaticGet_Field_5_9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattleChimeraView_TypeDefinitionIndex)->GetStaticField(0xB788);
		}
		static ::System::Int32* StaticGet_Field_5_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattleChimeraView_TypeDefinitionIndex)->GetStaticField(0xB78C);
		}
		static ::System::Int32* StaticGet_Field_5_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattleChimeraView_TypeDefinitionIndex)->GetStaticField(0xB790);
		}
		static ::System::Int32* StaticGet_Field_5_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattleChimeraView_TypeDefinitionIndex)->GetStaticField(0xB794);
		}
		static ::System::Int32* StaticGet_Field_5_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattleChimeraView_TypeDefinitionIndex)->GetStaticField(0xB798);
		}
		static ::System::Int32* StaticGet_Field_5_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattleChimeraView_TypeDefinitionIndex)->GetStaticField(0xB79C);
		}
		static ::System::Int32* StaticGet_Field_5_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattleChimeraView_TypeDefinitionIndex)->GetStaticField(0xB7A0);
		}
		::Class_2_7AF1D57CA4301272* Field_5_0; // 0x18
		::RPG::Client::RPGAnimationEvent* AnimEvent; // 0x20
		::UnityEngine::Animator* Animator; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW__CCTOR_OFFSET))();
		}

		::UnityEngine::Transform* GetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_GETTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetUnityObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_GETUNITYOBJECT_OFFSET))(this);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_GETENTITY_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void PerformLeave(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_PERFORMLEAVE_OFFSET))(this, a1);
		}

		::System::Void Play(::RPG::GameCore::ChimeraBattleAnimationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleAnimationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_PLAY_OFFSET))(this, a1);
		}

		::System::Void Method_5_E4865A0578743351()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_METHOD_5_E4865A0578743351_OFFSET))(this);
		}

		::System::Void Method_5_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_METHOD_5_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Void Method_5_51CFFE2AF748ECD7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_METHOD_5_51CFFE2AF748ECD7_1_OFFSET))(this);
		}

		::System::Void Method_5_51CFFE2AF748ECD7_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_METHOD_5_51CFFE2AF748ECD7_2_OFFSET))(this);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_5_51CFFE2AF748ECD7_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_METHOD_5_51CFFE2AF748ECD7_3_OFFSET))(this);
		}

		::System::Void PlayBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_PLAYBACK_OFFSET))(this);
		}
	};
}
