#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_1_945ACFB1FEBC7A2C_5;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System { class String; }

#define CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWASSETLOADINGMATCHER_OFFSET UNITYSDK_OFFSET(0x17C73A20)
#define CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWASSETMATCHER_OFFSET UNITYSDK_OFFSET(0x17C73960)
#define CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWBRIDGEMATCHER_OFFSET UNITYSDK_OFFSET(0x17C73AE0)
#define CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWLOADCALLBACKMATCHER_OFFSET UNITYSDK_OFFSET(0x17C73BA0)
#define CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWUNLOADCALLBACKMATCHER_OFFSET UNITYSDK_OFFSET(0x17C73C60)
#define CLASS_2_43D1AA62A6D00FFF_GETGRAPHNAVAGENTCURVEMATCHER_OFFSET UNITYSDK_OFFSET(0x17C73F60)
#define CLASS_2_43D1AA62A6D00FFF_GETGRAPHNAVAGENTMATCHER_OFFSET UNITYSDK_OFFSET(0x17C73D20)
#define CLASS_2_43D1AA62A6D00FFF_GETGRAPHNAVAGENTMOVEMATCHER_OFFSET UNITYSDK_OFFSET(0x17C73EA0)
#define CLASS_2_43D1AA62A6D00FFF_GETGRAPHNAVAGENTSTARTMOVEMATCHER_OFFSET UNITYSDK_OFFSET(0x17C73DE0)
#define CLASS_2_43D1AA62A6D00FFF_GETRVOAGENTMATCHER_OFFSET UNITYSDK_OFFSET(0x17C740E0)
#define CLASS_2_43D1AA62A6D00FFF_GETSMARTOBJECTAGENTMATCHER_OFFSET UNITYSDK_OFFSET(0x17C741A0)
#define CLASS_2_43D1AA62A6D00FFF_GETSMARTOBJECTMATCHER_OFFSET UNITYSDK_OFFSET(0x17C74260)
#define CLASS_2_43D1AA62A6D00FFF_GETSTATETREEMATCHER_OFFSET UNITYSDK_OFFSET(0x17C738A0)
#define CLASS_2_43D1AA62A6D00FFF_GETTRANSFORMMATCHER_OFFSET UNITYSDK_OFFSET(0x17C74020)
#define CLASS_2_43D1AA62A6D00FFF_METHOD_2_6DF5D6BA733343EC_OFFSET UNITYSDK_OFFSET(0x17C745D0)
#define CLASS_2_43D1AA62A6D00FFF_METHOD_2_7183C790EA8096D2_OFFSET UNITYSDK_OFFSET(0x17C74640)
#define CLASS_2_43D1AA62A6D00FFF_METHOD_2_C4FB87A683D48212_OFFSET UNITYSDK_OFFSET(0x17C74320)
#define CLASS_2_43D1AA62A6D00FFF_METHOD_2_D2E216E2152E42E3_OFFSET UNITYSDK_OFFSET(0x17C744C0)
#define CLASS_2_43D1AA62A6D00FFF_METHOD_2_E14A7FCF78650419_OFFSET UNITYSDK_OFFSET(0x17C74440)
#define CLASS_2_43D1AA62A6D00FFF_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17C744A0)
#define CLASS_2_43D1AA62A6D00FFF__CTOR_OFFSET UNITYSDK_OFFSET(0x17C746A0)

inline static constexpr unsigned int Class_2_43D1AA62A6D00FFF_TypeDefinitionIndex = 38195;

class Class_2_43D1AA62A6D00FFF : public ::Entitas::Context_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF__CTOR_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetStateTreeMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETSTATETREEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGenericViewAssetMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWASSETMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGenericViewAssetLoadingMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWASSETLOADINGMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGenericViewBridgeMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWBRIDGEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGenericViewLoadCallbackMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWLOADCALLBACKMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGenericViewUnloadCallbackMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWUNLOADCALLBACKMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGraphNavAgentMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETGRAPHNAVAGENTMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGraphNavAgentStartMoveMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETGRAPHNAVAGENTSTARTMOVEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGraphNavAgentMoveMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETGRAPHNAVAGENTMOVEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGraphNavAgentCurveMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETGRAPHNAVAGENTCURVEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetTransformMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETTRANSFORMMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetRVOAgentMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETRVOAGENTMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetSmartObjectAgentMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETSMARTOBJECTAGENTMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetSmartObjectMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETSMARTOBJECTMATCHER_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_2_C4FB87A683D48212()
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_METHOD_2_C4FB87A683D48212_OFFSET))(this);
	}

	::Class_1_945ACFB1FEBC7A2C_5* Method_2_E14A7FCF78650419()
	{
		return ((::Class_1_945ACFB1FEBC7A2C_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_METHOD_2_E14A7FCF78650419_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_2_D2E216E2152E42E3(::System::String* a1)
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_METHOD_2_D2E216E2152E42E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_6DF5D6BA733343EC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_METHOD_2_6DF5D6BA733343EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_7183C790EA8096D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_METHOD_2_7183C790EA8096D2_OFFSET))(this);
	}
};
