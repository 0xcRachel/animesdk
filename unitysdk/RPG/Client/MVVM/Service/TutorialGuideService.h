#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_23.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MVVM::Model { class ITutorialGuideCollection; }
namespace RPG::Client::MVVM::Model { class TutorialGuideGroupData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MVVM_SERVICE_TUTORIALGUIDESERVICE_CREATEGUIDEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x95C1360)
#define RPG_CLIENT_MVVM_SERVICE_TUTORIALGUIDESERVICE_CREATE_OFFSET UNITYSDK_OFFSET(0x95C0F10)
#define RPG_CLIENT_MVVM_SERVICE_TUTORIALGUIDESERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95C1000)
#define RPG_CLIENT_MVVM_SERVICE_TUTORIALGUIDESERVICE_GETGUIDECOLLECTION_OFFSET UNITYSDK_OFFSET(0x95C1080)
#define RPG_CLIENT_MVVM_SERVICE_TUTORIALGUIDESERVICE_GETGUIDEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x95C1270)
#define RPG_CLIENT_MVVM_SERVICE_TUTORIALGUIDESERVICE_INIT_OFFSET UNITYSDK_OFFSET(0x95C0F60)
#define RPG_CLIENT_MVVM_SERVICE_TUTORIALGUIDESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x95C0F50)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int TutorialGuideService_TypeDefinitionIndex = 59300;

	class TutorialGuideService : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::ITutorialGuideCollection*>* _GuideCollectionList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_TUTORIALGUIDESERVICE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MVVM::Service::TutorialGuideService* Create()
		{
			return ((::RPG::Client::MVVM::Service::TutorialGuideService*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_TUTORIALGUIDESERVICE_CREATE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_TUTORIALGUIDESERVICE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_TUTORIALGUIDESERVICE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::ITutorialGuideCollection* GetGuideCollection(::Enum_3_ED790DAC948A65A9_23 guideType)
		{
			return ((::RPG::Client::MVVM::Model::ITutorialGuideCollection*(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_23))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_TUTORIALGUIDESERVICE_GETGUIDECOLLECTION_OFFSET))(this, guideType);
		}

		::RPG::Client::MVVM::Model::TutorialGuideGroupData* GetGuideGroupData(::Enum_3_ED790DAC948A65A9_23 guideType, ::System::UInt32 guideGroupID)
		{
			return ((::RPG::Client::MVVM::Model::TutorialGuideGroupData*(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_23, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_TUTORIALGUIDESERVICE_GETGUIDEGROUPDATA_OFFSET))(this, guideType, guideGroupID);
		}

		::RPG::Client::MVVM::Model::TutorialGuideGroupData* CreateGuideGroupData(::Enum_3_ED790DAC948A65A9_23 guideType, ::System::UInt32 guideGroupID)
		{
			return ((::RPG::Client::MVVM::Model::TutorialGuideGroupData*(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_23, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_TUTORIALGUIDESERVICE_CREATEGUIDEGROUPDATA_OFFSET))(this, guideType, guideGroupID);
		}
	};
}
