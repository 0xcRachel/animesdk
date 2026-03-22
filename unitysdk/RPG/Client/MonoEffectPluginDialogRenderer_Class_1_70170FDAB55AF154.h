#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::Client { class DialogRenderer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_70170FDAB55AF154_METHOD_1_58140335FC54620E_OFFSET UNITYSDK_OFFSET(0x97F4210)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_70170FDAB55AF154_METHOD_1_75868EEA7B5D2A4B_OFFSET UNITYSDK_OFFSET(0x97F49C0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_70170FDAB55AF154_METHOD_1_806D55EF449FEABC_OFFSET UNITYSDK_OFFSET(0x97F39C0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_70170FDAB55AF154__CCTOR_OFFSET UNITYSDK_OFFSET(0x97F51E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDialogRenderer_Class_1_70170FDAB55AF154_TypeDefinitionIndex = 55706;

	class MonoEffectPluginDialogRenderer_Class_1_70170FDAB55AF154 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::HashSet_1<::RPG::Client::DialogRenderer*>*>** StaticGet_Field_1_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::HashSet_1<::RPG::Client::DialogRenderer*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginDialogRenderer_Class_1_70170FDAB55AF154_TypeDefinitionIndex)->GetStaticField(0x390E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_70170FDAB55AF154__CCTOR_OFFSET))();
		}

		static ::System::Void Method_1_806D55EF449FEABC(::UnityEngine::GameObject* a1, ::RPG::Client::DialogRenderer* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::Client::DialogRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_70170FDAB55AF154_METHOD_1_806D55EF449FEABC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_1_58140335FC54620E(::UnityEngine::GameObject* a1, ::RPG::Client::DialogRenderer* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::Client::DialogRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_70170FDAB55AF154_METHOD_1_58140335FC54620E_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Bounds Method_1_75868EEA7B5D2A4B(::UnityEngine::GameObject* a1, ::UnityEngine::Bounds a2)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::GameObject*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_70170FDAB55AF154_METHOD_1_75868EEA7B5D2A4B_OFFSET))(a1, a2);
		}
	};
}
