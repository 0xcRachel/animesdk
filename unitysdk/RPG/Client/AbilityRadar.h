#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_ABILITYRADAR_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x8ED1660)
#define RPG_CLIENT_ABILITYRADAR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8ED2710)
#define RPG_CLIENT_ABILITYRADAR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x8ED27A0)
#define RPG_CLIENT_ABILITYRADAR_SETABILITYVALUE_OFFSET UNITYSDK_OFFSET(0x8ED1F60)
#define RPG_CLIENT_ABILITYRADAR_START_OFFSET UNITYSDK_OFFSET(0x8ED27F0)
#define RPG_CLIENT_ABILITYRADAR_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x8ED2060)
#define RPG_CLIENT_ABILITYRADAR__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED2840)
#define RPG_CLIENT_ABILITYRADAR__INIT_OFFSET UNITYSDK_OFFSET(0x8ED1710)
#define RPG_CLIENT_ABILITYRADAR__REFRESHMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x8ED20B0)
#define RPG_CLIENT_ABILITYRADAR___IFIXBASEPROXY_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x8ED2950)
#define RPG_CLIENT_ABILITYRADAR___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8ED2970)
#define RPG_CLIENT_ABILITYRADAR___IFIXBASEPROXY_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x8ED29B0)
#define RPG_CLIENT_ABILITYRADAR___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0x8ED29C0)
#define RPG_CLIENT_ABILITYRADAR___IFIXBASEPROXY_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x8ED2960)

namespace RPG::Client
{
	inline static constexpr unsigned int AbilityRadar_TypeDefinitionIndex = 59403;

	class AbilityRadar : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		// static const ::System::Int32 _VERTEX_COUNT = 0x7; // 0x0
		::System::Single _InnerRadiusPortion; // 0xF0
		::Il2CppArray<::System::Single>* _AbilityValues; // 0xF8
		::Il2CppArray<::System::Single>* _ValueUVX; // 0x100
		::Il2CppArray<::System::Single>* _ValueUVY; // 0x108
		::System::Single _TotalDist; // 0x110
		::System::Single _StartDist; // 0x114
		::Il2CppArray<::System::Single>* _SinList; // 0x118
		::Il2CppArray<::System::Single>* _CosList; // 0x120
		::UnityEngine::Material* m_MaterialInstance; // 0x128
		::System::Int32 _ValueUVXId; // 0x130
		::System::Int32 _ValueUVYId; // 0x134
		::System::Int32 _InnerUVXId; // 0x138
		::System::Int32 _InnerUVYId; // 0x13C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Void SetAbilityValue(::System::Int32 abilityIdx, ::System::Single fillAmount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR_SETABILITYVALUE_OFFSET))(this, abilityIdx, fillAmount);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR_START_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR__INIT_OFFSET))(this);
		}

		::System::Void _RefreshMaterialProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR__REFRESHMATERIALPROPERTIES_OFFSET))(this);
		}

		::UnityEngine::Material* __iFixBaseProxy_get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR___IFIXBASEPROXY_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR___IFIXBASEPROXY_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR___IFIXBASEPROXY_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR___IFIXBASEPROXY_START_OFFSET))(this);
		}
	};
}
