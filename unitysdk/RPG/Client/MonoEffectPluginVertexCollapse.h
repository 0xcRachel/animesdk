#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x11675230)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x11675470)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x11675180)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x11674730)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x116751F0)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x11674A80)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x11674A00)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x11674780)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x116754F0)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x11675460)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11675350)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE__CTOR_OFFSET UNITYSDK_OFFSET(0x11675300)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginVertexCollapse_TypeDefinitionIndex = 64545;

	class MonoEffectPluginVertexCollapse : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		static ::System::Int32* StaticGet_Field_8_22()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0xFA70);
		}
		static ::System::Int32* StaticGet_Field_8_21()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0xFA74);
		}
		static ::System::Int32* StaticGet_Field_8_17()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0xFA78);
		}
		static ::System::Int32* StaticGet_Field_8_18()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0xFA7C);
		}
		static ::System::Int32* StaticGet_Field_8_25()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0xFA80);
		}
		static ::System::Int32* StaticGet_Field_8_26()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0xFA84);
		}
		static ::System::Int32* StaticGet_Field_8_23()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0xFA88);
		}
		static ::System::Int32* StaticGet_Field_8_20()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0xFA8C);
		}
		static ::System::Int32* StaticGet_Field_8_27()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0xFA90);
		}
		static ::System::Int32* StaticGet_Field_8_19()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0xFA94);
		}
		static ::System::Int32* StaticGet_Field_8_24()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0xFA98);
		}
		static ::System::Int32* StaticGet_Field_8_28()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0xFA9C);
		}
		::UnityEngine::Color Color; // 0x170
		::UnityEngine::Texture2D* ColorRamp; // 0x180
		::System::Single HueShift; // 0x188
		::System::Single Saturation; // 0x18C
		::System::Single Brightness; // 0x190
		::System::Single Contrast; // 0x194
		::UnityEngine::Transform* CollapsePoint; // 0x198
		::UnityEngine::Vector3 CollapsePointOffset; // 0x1A0
		::UnityEngine::Texture2D* CollapseNoise; // 0x1B0
		::UnityEngine::Vector2 CollapseNoiseTurbulence; // 0x1B8
		::System::Single CollapseNoiseIntensity; // 0x1C0
		::System::Single CollapseRatio; // 0x1C4
		::UnityEngine::Vector2 CollapseRatioRange; // 0x1C8
		::System::Single CollapseSpeed; // 0x1D0
		::System::Single CollapseTrace; // 0x1D4
		::System::Boolean CalculateBoundsCenter; // 0x1D8
		::Il2CppArray<::UnityEngine::Renderer*>* Field_8_16; // 0x1E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE__CCTOR_OFFSET))();
		}

		::System::Void Method_8_99D60EF23C904C6D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_99D60EF23C904C6D_OFFSET))(this);
		}

		::System::Void Method_8_DAEB67F34AF80609()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_DAEB67F34AF80609_OFFSET))(this);
		}

		::System::Void Method_8_775B6D644F07B554()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_775B6D644F07B554_OFFSET))(this);
		}

		::System::Void Method_8_DDA8A2337932DF10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_DDA8A2337932DF10_OFFSET))(this);
		}

		::System::Void Method_8_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_508D4DD02D3DB74E_OFFSET))(this);
		}

		::System::Void Method_8_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_8_D9EF75A2D048B8A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_D9EF75A2D048B8A1_OFFSET))(this);
		}

		::System::Void Method_8_F5447CD65612575D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_F5447CD65612575D_OFFSET))(this);
		}

		::System::Void Method_8_749948B663FCCCEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_749948B663FCCCEF_OFFSET))(this);
		}

		::System::Void Method_8_F4ADC37B63F4E9EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_F4ADC37B63F4E9EF_OFFSET))(this);
		}
	};
}
