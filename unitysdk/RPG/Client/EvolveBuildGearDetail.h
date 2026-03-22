#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildGearLevelData; }
namespace RPG::Client { class EvolveBuildGearResonanceEffectInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0x9192250)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_CREATEFROMGEARID_OFFSET UNITYSDK_OFFSET(0x9192330)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_CREATELOCKED_OFFSET UNITYSDK_OFFSET(0x91922C0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_CREATE_OFFSET UNITYSDK_OFFSET(0x91921A0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GETMIXDESC_OFFSET UNITYSDK_OFFSET(0x9192710)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_CANSHOWMIX_OFFSET UNITYSDK_OFFSET(0x91929E0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_EMPTYGEARTYPE_OFFSET UNITYSDK_OFFSET(0x91929A0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_FIRSTGEARDETAIL_OFFSET UNITYSDK_OFFSET(0x9192920)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_GEARDETAIL_OFFSET UNITYSDK_OFFSET(0x9192900)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_ISEMPTYWEAPON_OFFSET UNITYSDK_OFFSET(0x9192990)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9192980)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x91929C0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_MIXGEARDETAIL_OFFSET UNITYSDK_OFFSET(0x9192960)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_RESONANCEEFFECTINFOS_OFFSET UNITYSDK_OFFSET(0x9192A40)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_SECONDGEARDETAIL_OFFSET UNITYSDK_OFFSET(0x9192940)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SETFORBIDMIX_OFFSET UNITYSDK_OFFSET(0x91926C0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SETRESONANCEEFFECTINFOS_OFFSET UNITYSDK_OFFSET(0x91928B0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_EMPTYGEARTYPE_OFFSET UNITYSDK_OFFSET(0x91929B0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_FIRSTGEARDETAIL_OFFSET UNITYSDK_OFFSET(0x9192930)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_GEARDETAIL_OFFSET UNITYSDK_OFFSET(0x9192910)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x91929D0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_MIXGEARDETAIL_OFFSET UNITYSDK_OFFSET(0x9192970)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_RESONANCEEFFECTINFOS_OFFSET UNITYSDK_OFFSET(0x9192A50)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_SECONDGEARDETAIL_OFFSET UNITYSDK_OFFSET(0x9192950)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x9192240)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildGearDetail_TypeDefinitionIndex = 50685;

	class EvolveBuildGearDetail : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearResonanceEffectInfo*>* _ResonanceEffectInfos_k__BackingField; // 0x10
		::RPG::Client::EvolveBuildGearLevelData* _SecondGearDetail_k__BackingField; // 0x18
		::RPG::Client::EvolveBuildGearLevelData* _GearDetail_k__BackingField; // 0x20
		::RPG::Client::EvolveBuildGearLevelData* _MixGearDetail_k__BackingField; // 0x28
		::RPG::Client::EvolveBuildGearLevelData* _FirstGearDetail_k__BackingField; // 0x30
		::RPG::GameCore::EvolveGearType _EmptyGearType_k__BackingField; // 0x38
		::System::Boolean _IsUnlock_k__BackingField; // 0x3C
		::System::Boolean _IsForbidMix; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildGearDetail* Create(::RPG::Client::EvolveBuildGearLevelData* gearDetail, ::RPG::Client::EvolveBuildGearLevelData* firstGearDetail, ::RPG::Client::EvolveBuildGearLevelData* secondGearDetail, ::RPG::Client::EvolveBuildGearLevelData* mixGearDetail)
		{
			return ((::RPG::Client::EvolveBuildGearDetail*(*)(::RPG::Client::EvolveBuildGearLevelData*, ::RPG::Client::EvolveBuildGearLevelData*, ::RPG::Client::EvolveBuildGearLevelData*, ::RPG::Client::EvolveBuildGearLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_CREATE_OFFSET))(gearDetail, firstGearDetail, secondGearDetail, mixGearDetail);
		}

		static ::RPG::Client::EvolveBuildGearDetail* CreateEmpty(::RPG::GameCore::EvolveGearType gearType)
		{
			return ((::RPG::Client::EvolveBuildGearDetail*(*)(::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_CREATEEMPTY_OFFSET))(gearType);
		}

		static ::RPG::Client::EvolveBuildGearDetail* CreateLocked(::RPG::GameCore::EvolveGearType gearType)
		{
			return ((::RPG::Client::EvolveBuildGearDetail*(*)(::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_CREATELOCKED_OFFSET))(gearType);
		}

		static ::RPG::Client::EvolveBuildGearDetail* CreateFromGearID(::System::UInt32 gearID)
		{
			return ((::RPG::Client::EvolveBuildGearDetail*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_CREATEFROMGEARID_OFFSET))(gearID);
		}

		::System::Void SetForbidMix(::System::Boolean forbidMix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SETFORBIDMIX_OFFSET))(this, forbidMix);
		}

		::RPG::Client::TextID GetMixDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GETMIXDESC_OFFSET))(this);
		}

		::System::Void SetResonanceEffectInfos(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearResonanceEffectInfo*>* resonanceEffectInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearResonanceEffectInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SETRESONANCEEFFECTINFOS_OFFSET))(this, resonanceEffectInfos);
		}

		::RPG::Client::EvolveBuildGearLevelData* get_GearDetail()
		{
			return ((::RPG::Client::EvolveBuildGearLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_GEARDETAIL_OFFSET))(this);
		}

		::System::Void set_GearDetail(::RPG::Client::EvolveBuildGearLevelData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildGearLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_GEARDETAIL_OFFSET))(this, value);
		}

		::RPG::Client::EvolveBuildGearLevelData* get_FirstGearDetail()
		{
			return ((::RPG::Client::EvolveBuildGearLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_FIRSTGEARDETAIL_OFFSET))(this);
		}

		::System::Void set_FirstGearDetail(::RPG::Client::EvolveBuildGearLevelData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildGearLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_FIRSTGEARDETAIL_OFFSET))(this, value);
		}

		::RPG::Client::EvolveBuildGearLevelData* get_SecondGearDetail()
		{
			return ((::RPG::Client::EvolveBuildGearLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_SECONDGEARDETAIL_OFFSET))(this);
		}

		::System::Void set_SecondGearDetail(::RPG::Client::EvolveBuildGearLevelData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildGearLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_SECONDGEARDETAIL_OFFSET))(this, value);
		}

		::RPG::Client::EvolveBuildGearLevelData* get_MixGearDetail()
		{
			return ((::RPG::Client::EvolveBuildGearLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_MIXGEARDETAIL_OFFSET))(this);
		}

		::System::Void set_MixGearDetail(::RPG::Client::EvolveBuildGearLevelData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildGearLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_MIXGEARDETAIL_OFFSET))(this, value);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_IsEmptyWeapon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_ISEMPTYWEAPON_OFFSET))(this);
		}

		::RPG::GameCore::EvolveGearType get_EmptyGearType()
		{
			return ((::RPG::GameCore::EvolveGearType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_EMPTYGEARTYPE_OFFSET))(this);
		}

		::System::Void set_EmptyGearType(::RPG::GameCore::EvolveGearType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_EMPTYGEARTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_ISUNLOCK_OFFSET))(this, value);
		}

		::System::Boolean get_CanShowMix()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_CANSHOWMIX_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearResonanceEffectInfo*>* get_ResonanceEffectInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearResonanceEffectInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_RESONANCEEFFECTINFOS_OFFSET))(this);
		}

		::System::Void set_ResonanceEffectInfos(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearResonanceEffectInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearResonanceEffectInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_RESONANCEEFFECTINFOS_OFFSET))(this, value);
		}
	};
}
