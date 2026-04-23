#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIProfiler_Key.h"
#include "unitysdk/RPG/Client/UIProfiler_SampleType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIProfiler_SampleData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_UIPROFILER_ASYNCSHOWUI_OFFSET UNITYSDK_OFFSET(0x1596D130)
#define RPG_CLIENT_UIPROFILER_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0x1596CA60)
#define RPG_CLIENT_UIPROFILER_CLOSEUI_OFFSET UNITYSDK_OFFSET(0x1596D2D0)
#define RPG_CLIENT_UIPROFILER_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x1596CDB0)
#define RPG_CLIENT_UIPROFILER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1596D3A0)
#define RPG_CLIENT_UIPROFILER__CTOR_OFFSET UNITYSDK_OFFSET(0x1596D390)

namespace RPG::Client
{
	inline static constexpr unsigned int UIProfiler_TypeDefinitionIndex = 67384;

	class UIProfiler : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::UIProfiler_Key, ::RPG::Client::UIProfiler_SampleData*>** StaticGet__SampleDataMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::UIProfiler_Key, ::RPG::Client::UIProfiler_SampleData*>**)Il2CppClass::FromTypeDefinitionIndex(UIProfiler_TypeDefinitionIndex)->GetStaticField(0x5B620);
		}
		static ::RPG::Client::UIController** StaticGet__Controller()
		{
			return (::RPG::Client::UIController**)Il2CppClass::FromTypeDefinitionIndex(UIProfiler_TypeDefinitionIndex)->GetStaticField(0x5B628);
		}
		static ::System::Boolean* StaticGet_Enable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIProfiler_TypeDefinitionIndex)->GetStaticField(0xF860);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER__CCTOR_OFFSET))();
		}

		static ::System::Void BeginSample(::RPG::Client::UIProfiler_SampleType sampleType, ::System::String* name)
		{
			return ((::System::Void(*)(::RPG::Client::UIProfiler_SampleType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_BEGINSAMPLE_OFFSET))(sampleType, name);
		}

		static ::System::Void EndSample(::RPG::Client::UIProfiler_SampleType sampleType, ::System::String* name)
		{
			return ((::System::Void(*)(::RPG::Client::UIProfiler_SampleType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_ENDSAMPLE_OFFSET))(sampleType, name);
		}

		static ::System::Void AsyncShowUI(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_ASYNCSHOWUI_OFFSET))(path);
		}

		static ::System::Void CloseUI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_CLOSEUI_OFFSET))();
		}
	};
}
