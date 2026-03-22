#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger { class InfoEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_ADD_OFFSET UNITYSDK_OFFSET(0x17C42170)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_CREATEDEFAULTSET_OFFSET UNITYSDK_OFFSET(0x17C44AB0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_CREATEREPORT_OFFSET UNITYSDK_OFFSET(0x17C484D0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_GETCATEGORIES_OFFSET UNITYSDK_OFFSET(0x17C48240)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_GETCLOUDMANIFESTPRETTYNAME_OFFSET UNITYSDK_OFFSET(0x17C48CA0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_GETINFO_OFFSET UNITYSDK_OFFSET(0x17C48290)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x17C44A30)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int StandardSystemInformationService_TypeDefinitionIndex = 28860;

	class StandardSystemInformationService : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::IList_1<::SRDebugger::InfoEntry*>*>* _info; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* GetCategories()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_GETCATEGORIES_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::SRDebugger::InfoEntry*>* GetInfo(::System::String* category)
		{
			return ((::System::Collections::Generic::IList_1<::SRDebugger::InfoEntry*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_GETINFO_OFFSET))(this, category);
		}

		::System::Void Add(::SRDebugger::InfoEntry* info, ::System::String* category)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::InfoEntry*, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_ADD_OFFSET))(this, info, category);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>* CreateReport(::System::Boolean includePrivate)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_CREATEREPORT_OFFSET))(this, includePrivate);
		}

		::System::Void CreateDefaultSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_CREATEDEFAULTSET_OFFSET))(this);
		}

		static ::System::String* GetCloudManifestPrettyName(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_GETCLOUDMANIFESTPRETTYNAME_OFFSET))(name);
		}
	};
}
