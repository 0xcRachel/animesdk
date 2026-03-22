#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_3_DAB36A51E2EA1CD6;
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UIPARTICLECLIPPABLE_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA1F4EA0)
#define RPG_CLIENT_UIPARTICLECLIPPABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA1F4EF0)
#define RPG_CLIENT_UIPARTICLECLIPPABLE___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA1F4F10)

namespace RPG::Client
{
	inline static constexpr unsigned int UIParticleClippable_TypeDefinitionIndex = 56617;

	class UIParticleClippable : public ::RPG::Client::TAMonoPlugin_1<::Class_3_DAB36A51E2EA1CD6*>
	{
	public:
		::UnityEngine::RectTransform* Rect; // 0x30
		::System::Boolean UpdateAlways; // 0x38
		::System::Boolean IncludeInactiveRenderers; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARTICLECLIPPABLE__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARTICLECLIPPABLE_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARTICLECLIPPABLE___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
