#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"

#define RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_METHOD_8_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0x97C0B10)
#define RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_METHOD_8_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x97C1060)
#define RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x97C1010)
#define RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x97C0EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginAlchemizeOverlay_TypeDefinitionIndex = 55646;

	class MonoEffectPluginAlchemizeOverlay : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		static ::System::Int32* StaticGet_Field_8_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAlchemizeOverlay_TypeDefinitionIndex)->GetStaticField(0xD710);
		}
		static ::System::Int32* StaticGet_Field_8_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAlchemizeOverlay_TypeDefinitionIndex)->GetStaticField(0xD714);
		}
		::System::Boolean EnableGradientColor; // 0x218
		::System::Single GradientRange; // 0x21C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY__CCTOR_OFFSET))();
		}

		::System::Void Method_8_1AD3CAF2B0982C3F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_METHOD_8_1AD3CAF2B0982C3F_OFFSET))(this);
		}

		::System::Void Method_8_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_METHOD_8_D78B51BFDA4B8B32_OFFSET))(this);
		}
	};
}
