#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_METHOD_8_88EB724A07E2A9A9_OFFSET UNITYSDK_OFFSET(0xBF76CD0)
#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_METHOD_8_CC15D6CD4D3CC816_OFFSET UNITYSDK_OFFSET(0xBF768E0)
#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_METHOD_8_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0xBF77120)
#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF76EA0)
#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE__CTOR_OFFSET UNITYSDK_OFFSET(0xBF76DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginAuraOutline_TypeDefinitionIndex = 64465;

	class MonoEffectPluginAuraOutline : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_Field_8_32()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x5D2F0);
		}
		static ::System::Int32* StaticGet_Field_8_27()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xFD20);
		}
		static ::System::Int32* StaticGet_Field_8_24()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xFD24);
		}
		static ::System::Int32* StaticGet_Field_8_20()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xFD28);
		}
		static ::System::Int32* StaticGet_Field_8_29()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xFD2C);
		}
		static ::System::Int32* StaticGet_Field_8_23()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xFD30);
		}
		static ::System::Int32* StaticGet_Field_8_31()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xFD34);
		}
		static ::System::Int32* StaticGet_Field_8_28()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xFD38);
		}
		static ::System::Int32* StaticGet_Field_8_30()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xFD3C);
		}
		static ::System::Int32* StaticGet_Field_8_26()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xFD40);
		}
		static ::System::Int32* StaticGet_Field_8_25()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xFD44);
		}
		static ::System::Int32* StaticGet_Field_8_21()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xFD48);
		}
		static ::System::Int32* StaticGet_Field_8_22()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xFD4C);
		}
		::System::Single AuraScrPosScale; // 0x220
		::System::Single OutlineAuraWidth; // 0x224
		::System::Single OutlineAuraOffset; // 0x228
		::UnityEngine::Color AuraColor1; // 0x22C
		::UnityEngine::Color AuraColor2; // 0x23C
		::UnityEngine::Vector4 AuraNoise_ST; // 0x24C
		::UnityEngine::Vector4 DisStep; // 0x25C
		::UnityEngine::Vector4 Smooth; // 0x26C
		::UnityEngine::Vector4 AuraSpeed; // 0x27C
		::UnityEngine::Vector4 Aurafresnel; // 0x28C
		::System::Boolean PartsSelection; // 0x29C
		::System::Boolean HideCharaParts; // 0x29D
		::System::Boolean ShowID0; // 0x29E
		::System::Boolean ShowID1; // 0x29F
		::System::Boolean ShowID2; // 0x2A0
		::System::Boolean ShowID3; // 0x2A1
		::System::Boolean ShowID4; // 0x2A2
		::System::Boolean ShowID5; // 0x2A3
		::System::Boolean ShowID6; // 0x2A4
		::System::Boolean ShowID7; // 0x2A5

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE__CCTOR_OFFSET))();
		}

		::System::Void Method_8_CC15D6CD4D3CC816()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_METHOD_8_CC15D6CD4D3CC816_OFFSET))(this);
		}

		::System::Int32 Method_8_88EB724A07E2A9A9(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_METHOD_8_88EB724A07E2A9A9_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_8_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_METHOD_8_D78B51BFDA4B8B32_OFFSET))(this);
		}
	};
}
