#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1401F660)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1401F690)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_0_OFFSET UNITYSDK_OFFSET(0x1401F6A0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_1_OFFSET UNITYSDK_OFFSET(0x1401F6B0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_2_OFFSET UNITYSDK_OFFSET(0x1401F6C0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_3_OFFSET UNITYSDK_OFFSET(0x1401F6D0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_4_OFFSET UNITYSDK_OFFSET(0x1401F6E0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_5_OFFSET UNITYSDK_OFFSET(0x1401F6F0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PathDeformBehavior___c_TypeDefinitionIndex = 65019;

	class Effect_PathDeformBehavior___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_3()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x699B0);
		}
		static ::RPG::Client::Effect_PathDeformBehavior___c** StaticGet___9()
		{
			return (::RPG::Client::Effect_PathDeformBehavior___c**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x699B8);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_4()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x699C0);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x699C8);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x699D0);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_2()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x699D8);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_5()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x699E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C__CTOR_OFFSET))(this);
		}

		::System::Single __GetRenderBound_b__9_0(::UnityEngine::Vector3 v)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_0_OFFSET))(this, v);
		}

		::System::Single __GetRenderBound_b__9_1(::UnityEngine::Vector3 v)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_1_OFFSET))(this, v);
		}

		::System::Single __GetRenderBound_b__9_2(::UnityEngine::Vector3 v)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_2_OFFSET))(this, v);
		}

		::System::Single __GetRenderBound_b__9_3(::UnityEngine::Vector3 v)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_3_OFFSET))(this, v);
		}

		::System::Single __GetRenderBound_b__9_4(::UnityEngine::Vector3 v)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_4_OFFSET))(this, v);
		}

		::System::Single __GetRenderBound_b__9_5(::UnityEngine::Vector3 v)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_5_OFFSET))(this, v);
		}
	};
}
