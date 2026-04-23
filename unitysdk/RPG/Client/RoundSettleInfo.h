#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3AD2528CD53B1639_3;
namespace RPG::Client { class ChenLingDamageSettleInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROUNDSETTLEINFO_GET_COINCOUNT_OFFSET UNITYSDK_OFFSET(0x15BAFD50)
#define RPG_CLIENT_ROUNDSETTLEINFO_GET_HP_OFFSET UNITYSDK_OFFSET(0x15BAFD90)
#define RPG_CLIENT_ROUNDSETTLEINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x15BAFD70)
#define RPG_CLIENT_ROUNDSETTLEINFO_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x15BAFDB0)
#define RPG_CLIENT_ROUNDSETTLEINFO_GET_SOLIDERDAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0x15BAFDD0)
#define RPG_CLIENT_ROUNDSETTLEINFO_SET_COINCOUNT_OFFSET UNITYSDK_OFFSET(0x15BAFD60)
#define RPG_CLIENT_ROUNDSETTLEINFO_SET_HP_OFFSET UNITYSDK_OFFSET(0x15BAFDA0)
#define RPG_CLIENT_ROUNDSETTLEINFO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x15BAFD80)
#define RPG_CLIENT_ROUNDSETTLEINFO_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0x15BAFDC0)
#define RPG_CLIENT_ROUNDSETTLEINFO_SET_SOLIDERDAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0x15BAFDE0)
#define RPG_CLIENT_ROUNDSETTLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15BAF910)

namespace RPG::Client
{
	inline static constexpr unsigned int RoundSettleInfo_TypeDefinitionIndex = 56664;

	class RoundSettleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* _SoliderDamageInfos_k__BackingField; // 0x10
		::System::UInt32 _MaxHp_k__BackingField; // 0x18
		::System::Boolean _IsWin_k__BackingField; // 0x1C
		::System::UInt32 _Hp_k__BackingField; // 0x20
		::System::UInt32 _CoinCount_k__BackingField; // 0x24

		::System::Void _ctor(::Class_1_3AD2528CD53B1639_3* rsp, ::System::UInt32 maxHp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO__CTOR_OFFSET))(this, rsp, maxHp);
		}

		::System::UInt32 get_CoinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_GET_COINCOUNT_OFFSET))(this);
		}

		::System::Void set_CoinCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_SET_COINCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_SET_ISWIN_OFFSET))(this, value);
		}

		::System::UInt32 get_Hp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_GET_HP_OFFSET))(this);
		}

		::System::Void set_Hp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_SET_HP_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxHp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_SET_MAXHP_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* get_SoliderDamageInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_GET_SOLIDERDAMAGEINFOS_OFFSET))(this);
		}

		::System::Void set_SoliderDamageInfos(::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_SET_SOLIDERDAMAGEINFOS_OFFSET))(this, value);
		}
	};
}
