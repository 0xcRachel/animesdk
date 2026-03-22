#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class EOSManager; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x159E4C60)
#define MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__PAY_B__0_OFFSET UNITYSDK_OFFSET(0x159E6210)
#define MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__PAY_B__1_OFFSET UNITYSDK_OFFSET(0x159E6500)
#define MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__PAY_B__2_OFFSET UNITYSDK_OFFSET(0x159E6A50)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int EOSManager___c__DisplayClass12_0_TypeDefinitionIndex = 7802;

	class EOSManager___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::MiHoYo::SDK::AccountModel* accountModel; // 0x18
		::System::Action_3<::System::Int32, ::System::String*, ::System::String*>* __9__1; // 0x20
		::System::String* payTrace; // 0x28
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__2; // 0x30
		::System::String* goodsId; // 0x38
		::MiHoYo::SDK::Win::EOSManager* __4__this; // 0x40
		::MiHoYo::SDK::JSONNode* payInfo; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__0(::System::Boolean canPay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__PAY_B__0_OFFSET))(this, canPay);
		}

		::System::Void _Pay_b__1(::System::Int32 ret, ::System::String* accountId, ::System::String* accessToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__PAY_B__1_OFFSET))(this, ret, accountId, accessToken);
		}

		::System::Void _Pay_b__2(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS12_0__PAY_B__2_OFFSET))(this, response);
		}
	};
}
