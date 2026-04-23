#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_D17272E82AE804C2_168;
class Class_1_D17272E82AE804C2_174;
class Class_1_F65FD1783A40C6D8;
namespace RPG::Client::ChenLingBattle { class PreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class ShopPreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class ShopRefreshInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_ENTERPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x17CBDDB0)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_EXITPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x17CBDF80)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_FINISHREFRESHSHOP_OFFSET UNITYSDK_OFFSET(0x17CBE830)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x17CBD630)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x17CBDC10)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_REQUESTBUYSHOPITEM_OFFSET UNITYSDK_OFFSET(0x17CBE880)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_REQUESTFINISHSHOP_OFFSET UNITYSDK_OFFSET(0x17CBEDB0)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_REQUESTREFRESHSHOP_OFFSET UNITYSDK_OFFSET(0x17CBE3D0)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_SENDREFRESHSHOPMESSAGE_OFFSET UNITYSDK_OFFSET(0x17CBE2B0)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBD620)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE__ONCHENLINGBUYSHOPITEMSCRSP_OFFSET UNITYSDK_OFFSET(0x17CBEA60)
#define RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE__ONCHENLINGREFRESHSHOPSCRSP_OFFSET UNITYSDK_OFFSET(0x17CBE5B0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SpecialShopPhase_TypeDefinitionIndex = 70086;

	class SpecialShopPhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::ChenLingBattle::ShopPreviewSnapshot* _PreviewSnapshot; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _RefreshCostList; // 0x20

		::System::Void _ctor(::Class_1_F65FD1783A40C6D8* phaseManager)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F65FD1783A40C6D8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE__CTOR_OFFSET))(this, phaseManager);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* param)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_ONENTER_OFFSET))(this, param);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_ONLEAVE_OFFSET))(this);
		}

		::System::Void EnterPreviewMode(::RPG::Client::ChenLingBattle::PreviewSnapshot* snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::PreviewSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_ENTERPREVIEWMODE_OFFSET))(this, snapshot);
		}

		::System::Void ExitPreviewMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_EXITPREVIEWMODE_OFFSET))(this);
		}

		::System::Void SendRefreshShopMessage(::RPG::Client::ChenLingBattle::ShopRefreshInfo* refreshInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ShopRefreshInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_SENDREFRESHSHOPMESSAGE_OFFSET))(this, refreshInfo);
		}

		::RPG::Client::Promises::IPromise* RequestRefreshShop()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_REQUESTREFRESHSHOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingRefreshShopScRsp(::Class_1_D17272E82AE804C2_168* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_168*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE__ONCHENLINGREFRESHSHOPSCRSP_OFFSET))(this, rsp);
		}

		::System::Void FinishRefreshShop(::RPG::Client::ChenLingBattle::ShopRefreshInfo* refreshInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ShopRefreshInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_FINISHREFRESHSHOP_OFFSET))(this, refreshInfo);
		}

		::RPG::Client::Promises::IPromise* RequestBuyShopItem(::System::UInt32 itemIndex)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_REQUESTBUYSHOPITEM_OFFSET))(this, itemIndex);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingBuyShopItemScRsp(::Class_1_D17272E82AE804C2_174* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_174*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE__ONCHENLINGBUYSHOPITEMSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* RequestFinishShop()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SPECIALSHOPPHASE_REQUESTFINISHSHOP_OFFSET))(this);
		}
	};
}
