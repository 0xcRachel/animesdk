#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalConsentDetailsDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalConsentDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalConsentSentDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalDenyDialog; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_CHECKISAGEGATEPAYERROR_OFFSET UNITYSDK_OFFSET(0x17410950)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_CLOSEALL_OFFSET UNITYSDK_OFFSET(0x17411050)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_GETREPORTBODY_OFFSET UNITYSDK_OFFSET(0x17411740)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x17410820)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x174108A0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_PARENTCONSENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x17412740)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_PARENTCONSENTDENYCALLBACK_OFFSET UNITYSDK_OFFSET(0x17412BD0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_REQUESTPARENTCONSENT_OFFSET UNITYSDK_OFFSET(0x174125F0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x17410A80)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SENDPARENTEMAIL_OFFSET UNITYSDK_OFFSET(0x17412500)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTCONSENTDETAILS_OFFSET UNITYSDK_OFFSET(0x17411C90)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTCONSENTPENDING_OFFSET UNITYSDK_OFFSET(0x17411800)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTCONSENTREQUIRED_OFFSET UNITYSDK_OFFSET(0x174112B0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTDENY_1_OFFSET UNITYSDK_OFFSET(0x17410EE0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTDENY_OFFSET UNITYSDK_OFFSET(0x17412070)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_TRYLOADTICKET_OFFSET UNITYSDK_OFFSET(0x17410E40)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_TRYPARSEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x17410AA0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_TRYUPDATETICKET_OFFSET UNITYSDK_OFFSET(0x17412FC0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17410890)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTDETAILS_B__21_0_OFFSET UNITYSDK_OFFSET(0x17413A90)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTPENDING_B__20_0_OFFSET UNITYSDK_OFFSET(0x17413780)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTPENDING_B__20_1_OFFSET UNITYSDK_OFFSET(0x174138C0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTPENDING_B__20_2_OFFSET UNITYSDK_OFFSET(0x17413850)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_0_OFFSET UNITYSDK_OFFSET(0x174131C0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_1_OFFSET UNITYSDK_OFFSET(0x174135A0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_2_OFFSET UNITYSDK_OFFSET(0x17413710)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_4_OFFSET UNITYSDK_OFFSET(0x174134E0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__22_0_OFFSET UNITYSDK_OFFSET(0x17413B30)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__22_1_OFFSET UNITYSDK_OFFSET(0x17413C10)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__22_2_OFFSET UNITYSDK_OFFSET(0x17413B90)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__23_0_OFFSET UNITYSDK_OFFSET(0x17413DE0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int AgeGatePayManager_TypeDefinitionIndex = 7500;

	class AgeGatePayManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::AgeGatePayManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PC::OS::AgeGatePayManager**)Il2CppClass::FromTypeDefinitionIndex(AgeGatePayManager_TypeDefinitionIndex)->GetStaticField(0x11BA0);
		}
		::System::String* hintMessage; // 0x10
		::System::String* payload; // 0x18
		::System::Action_1<::System::String*>* onCancel; // 0x20
		::System::String* ticket; // 0x28
		::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentDialog* parentalConsentRequiredDialog; // 0x30
		::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentSentDialog* parentalConsentPendingDialog; // 0x38
		::System::Action* onFail; // 0x40
		::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentDetailsDialog* parentConsenDetailsDialog; // 0x48
		::MiHoYo::SDK::UI::OS::IWinAgeGateParentalDenyDialog* parentDenyDialog; // 0x50
		::System::Int32 defaultCoolDown; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::AgeGatePayManager* get_Instance()
		{
			return ((::MiHoYo::SDK::PC::OS::AgeGatePayManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::String* get_RSAKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_GET_RSAKEY_OFFSET))();
		}

		::System::Boolean CheckIsAgeGatePayError(::System::Int32 retCode, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_CHECKISAGEGATEPAYERROR_OFFSET))(this, retCode, headers);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_RESET_OFFSET))(this);
		}

		::System::Void TryParsePayload(::System::Int32 retCode, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::String* message, ::System::Action_1<::System::String*>* cancelCallback, ::System::Action* failedCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_TRYPARSEPAYLOAD_OFFSET))(this, retCode, headers, message, cancelCallback, failedCallback);
		}

		::System::Void CloseAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_CLOSEALL_OFFSET))(this);
		}

		::System::Void ShowParentConsentRequired()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTCONSENTREQUIRED_OFFSET))(this);
		}

		::System::Void ShowParentConsentPending(::System::String* email, ::System::Int32 cooldown)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTCONSENTPENDING_OFFSET))(this, email, cooldown);
		}

		::System::Void ShowParentConsentDetails()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTCONSENTDETAILS_OFFSET))(this);
		}

		::System::Void ShowParentDeny(::System::String* email, ::System::Int32 cooldown)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTDENY_OFFSET))(this, email, cooldown);
		}

		::System::Void ShowParentDeny_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTDENY_1_OFFSET))(this);
		}

		::System::Void SendParentEmail(::System::Action* successCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SENDPARENTEMAIL_OFFSET))(this, successCallback);
		}

		::System::Void RequestParentConsent(::System::Int32 cooldown, ::System::Action* successCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_REQUESTPARENTCONSENT_OFFSET))(this, cooldown, successCallback);
		}

		::System::Void ParentConsentCallback(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_PARENTCONSENTCALLBACK_OFFSET))(this, response);
		}

		::System::Void ParentConsentDenyCallback(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_PARENTCONSENTDENYCALLBACK_OFFSET))(this, response);
		}

		::System::Void TryLoadTicket(::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_TRYLOADTICKET_OFFSET))(this, callback);
		}

		::System::Void TryUpdateTicket(::System::String* email, ::System::Action_1<::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_TRYUPDATETICKET_OFFSET))(this, email, callback);
		}

		::MiHoYo::SDK::JSONObject* GetReportBody()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_GETREPORTBODY_OFFSET))(this);
		}

		::System::Void _ShowParentConsentRequired_b__19_0(::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_0_OFFSET))(this, email);
		}

		::System::Void _ShowParentConsentRequired_b__19_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_4_OFFSET))(this);
		}

		::System::Void _ShowParentConsentRequired_b__19_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_1_OFFSET))(this);
		}

		::System::Void _ShowParentConsentRequired_b__19_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_2_OFFSET))(this);
		}

		::System::Void _ShowParentConsentPending_b__20_0(::System::String* currentEmail)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTPENDING_B__20_0_OFFSET))(this, currentEmail);
		}

		::System::Void _ShowParentConsentPending_b__20_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTPENDING_B__20_2_OFFSET))(this);
		}

		::System::Void _ShowParentConsentPending_b__20_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTPENDING_B__20_1_OFFSET))(this);
		}

		::System::Void _ShowParentConsentDetails_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTDETAILS_B__21_0_OFFSET))(this);
		}

		::System::Void _ShowParentDeny_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__22_0_OFFSET))(this);
		}

		::System::Void _ShowParentDeny_b__22_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__22_2_OFFSET))(this);
		}

		::System::Void _ShowParentDeny_b__22_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__22_1_OFFSET))(this);
		}

		::System::Void _ShowParentDeny_b__23_0(::MiHoYo::SDK::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__23_0_OFFSET))(this, result);
		}
	};
}
