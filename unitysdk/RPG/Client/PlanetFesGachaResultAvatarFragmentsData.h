#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_C66F08F6BAF5805C_2;
class Class_1_C8A33C9C75E4FF8B_1;
namespace RPG::Client { class PlanetFesAvatarData; }

#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CHECKISSTARMAX_OFFSET UNITYSDK_OFFSET(0x9AD16B0)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9AD1330)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9AD1260)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GETCURRENTFRAGMENTNUMAFTERLEVELUP_OFFSET UNITYSDK_OFFSET(0x9AD1990)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GETFRAGMENTNUM_OFFSET UNITYSDK_OFFSET(0x9AD18E0)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GET_ISSKIPLEVELUP_OFFSET UNITYSDK_OFFSET(0x9AD1720)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GET_ISSTARMAX_OFFSET UNITYSDK_OFFSET(0x9AD1610)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GET_TRANSFERCOIN_OFFSET UNITYSDK_OFFSET(0x9AD18C0)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_SET_TRANSFERCOIN_OFFSET UNITYSDK_OFFSET(0x9AD18D0)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__CHECKISSKIPLEVELUP_OFFSET UNITYSDK_OFFSET(0x9AD1730)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9AD13C0)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9AD1300)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__INITFRAGMENTDATA_OFFSET UNITYSDK_OFFSET(0x9AD14A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGachaResultAvatarFragmentsData_TypeDefinitionIndex = 53056;

	class PlanetFesGachaResultAvatarFragmentsData : public ::System::Object
	{
	public:
		::System::Numerics::BigInteger _TransferCoin_k__BackingField; // 0x10
		::RPG::Client::PlanetFesAvatarData* _AvatarData; // 0x20
		::System::UInt32 TransferNum; // 0x28
		::System::Boolean IsTransfer; // 0x2C
		::System::Boolean IsLevelUp; // 0x2D
		::System::UInt32 AvatarID; // 0x30
		::System::UInt32 NextLevelTotalFragment; // 0x34
		::System::UInt32 AddFragmentsNum; // 0x38
		::System::UInt32 CurrentLevel; // 0x3C
		::System::UInt32 TransferItemID; // 0x40
		::System::UInt32 PreviousLevelTotalFragment; // 0x44
		::System::UInt32 AvatarRarity; // 0x48
		::System::UInt32 CurrentLevelTotalFragment; // 0x4C
		::System::UInt32 PreviousLevel; // 0x50
		::System::UInt32 CurrentFragmentsNum; // 0x54

		::System::Void _ctor(::Class_1_C8A33C9C75E4FF8B_1* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C8A33C9C75E4FF8B_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__CTOR_OFFSET))(this, item);
		}

		::System::Void _ctor_1(::Class_1_C8A33C9C75E4FF8B_1* item, ::Class_1_C66F08F6BAF5805C_2* transferItem)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C8A33C9C75E4FF8B_1*, ::Class_1_C66F08F6BAF5805C_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__CTOR_1_OFFSET))(this, item, transferItem);
		}

		static ::RPG::Client::PlanetFesGachaResultAvatarFragmentsData* Create(::Class_1_C8A33C9C75E4FF8B_1* item)
		{
			return ((::RPG::Client::PlanetFesGachaResultAvatarFragmentsData*(*)(::Class_1_C8A33C9C75E4FF8B_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CREATE_OFFSET))(item);
		}

		static ::RPG::Client::PlanetFesGachaResultAvatarFragmentsData* Create_1(::Class_1_C8A33C9C75E4FF8B_1* item, ::Class_1_C66F08F6BAF5805C_2* transferItem)
		{
			return ((::RPG::Client::PlanetFesGachaResultAvatarFragmentsData*(*)(::Class_1_C8A33C9C75E4FF8B_1*, ::Class_1_C66F08F6BAF5805C_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CREATE_1_OFFSET))(item, transferItem);
		}

		::System::Boolean get_IsStarMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GET_ISSTARMAX_OFFSET))(this);
		}

		::System::Boolean get_IsSkipLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GET_ISSKIPLEVELUP_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_TransferCoin()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GET_TRANSFERCOIN_OFFSET))(this);
		}

		::System::Void set_TransferCoin(::System::Numerics::BigInteger value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_SET_TRANSFERCOIN_OFFSET))(this, value);
		}

		::System::Boolean CheckIsStarMax(::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CHECKISSTARMAX_OFFSET))(this, level);
		}

		::System::UInt32 GetFragmentNum(::System::UInt32 level)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GETFRAGMENTNUM_OFFSET))(this, level);
		}

		::System::UInt32 GetCurrentFragmentNumAfterLevelUP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GETCURRENTFRAGMENTNUMAFTERLEVELUP_OFFSET))(this);
		}

		::System::Void _InitFragmentData(::Class_1_C8A33C9C75E4FF8B_1* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C8A33C9C75E4FF8B_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__INITFRAGMENTDATA_OFFSET))(this, item);
		}

		::System::Boolean _CheckIsSkipLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__CHECKISSKIPLEVELUP_OFFSET))(this);
		}
	};
}
