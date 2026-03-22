#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_5EB756264B1E13D9_2;
class Class_1_C8A33C9C75E4FF8B_1;
class Class_1_EC79926A4E5993F7;
namespace RPG::Client { class PlanetFesAvatarData; }
namespace RPG::Client { class PlanetFesGachaResultAvatarFragmentsData; }
namespace RPG::Client { class PlanetFesGachaResultItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESGACHARESULTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9AD19E0)
#define RPG_CLIENT_PLANETFESGACHARESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9AD2720)
#define RPG_CLIENT_PLANETFESGACHARESULTDATA__SYNCAVATARITEMLIST_OFFSET UNITYSDK_OFFSET(0x9AD1D20)
#define RPG_CLIENT_PLANETFESGACHARESULTDATA__SYNCITEMLIST_OFFSET UNITYSDK_OFFSET(0x9AD2060)
#define RPG_CLIENT_PLANETFESGACHARESULTDATA__SYNCNEWAVATARLIST_OFFSET UNITYSDK_OFFSET(0x9AD1C70)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGachaResultData_TypeDefinitionIndex = 53053;

	class PlanetFesGachaResultData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarData*>* NewAvatarList; // 0x10
		::System::Numerics::BigInteger Coin; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesGachaResultItemData*>* ItemList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesGachaResultAvatarFragmentsData*>* AvatarFragmentsList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_EC79926A4E5993F7* result)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EC79926A4E5993F7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTDATA_SYNC_OFFSET))(this, result);
		}

		::System::Void _SyncItemList(::System::Collections::Generic::List_1<::Class_1_5EB756264B1E13D9_2*>* gachaResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5EB756264B1E13D9_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTDATA__SYNCITEMLIST_OFFSET))(this, gachaResult);
		}

		::System::Void _SyncNewAvatarList(::System::Collections::Generic::List_1<::System::UInt32>* idList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTDATA__SYNCNEWAVATARLIST_OFFSET))(this, idList);
		}

		::System::Void _SyncAvatarItemList(::System::Collections::Generic::List_1<::Class_1_C8A33C9C75E4FF8B_1*>* gachaResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_C8A33C9C75E4FF8B_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTDATA__SYNCAVATARITEMLIST_OFFSET))(this, gachaResult);
		}
	};
}
