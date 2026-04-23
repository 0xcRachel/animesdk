#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"

#define RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_METHOD_8_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x1660B670)
#define RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_METHOD_8_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x1660BB00)
#define RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1660BAC0)
#define RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1660BA00)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginOverlayCharaExtraData_TypeDefinitionIndex = 64539;

	class MonoEffectPluginOverlayCharaExtraData : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		static ::System::Int32* StaticGet_Field_8_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginOverlayCharaExtraData_TypeDefinitionIndex)->GetStaticField(0x10820);
		}
		::System::Boolean RootPos; // 0x220

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA__CCTOR_OFFSET))();
		}

		::System::Void Method_8_4857357D5C1BFCE8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_METHOD_8_4857357D5C1BFCE8_OFFSET))(this);
		}

		::System::Void Method_8_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINOVERLAYCHARAEXTRADATA_METHOD_8_D78B51BFDA4B8B32_OFFSET))(this);
		}
	};
}
