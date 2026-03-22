#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CA604A479B70DDEA;
class Class_1_FA4F4A67B1C04320_63;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class AetherMonsterAvatarData; }
namespace RPG::Client { class AetherMonsterAvatarSkillSingleSlotData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_GETAETHERSKILLCORESLOTINDEX_OFFSET UNITYSDK_OFFSET(0x8C39CA0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_GETPROPERTYMODIFIER_OFFSET UNITYSDK_OFFSET(0x8C3A3B0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_GET_AETHERMONSTERAVATARSKILLSINGLESLOTDICT_OFFSET UNITYSDK_OFFSET(0x8C3C440)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_ISANYCOREEQUIPPED_OFFSET UNITYSDK_OFFSET(0x8C39BD0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_SET_AETHERMONSTERAVATARSKILLSINGLESLOTDICT_OFFSET UNITYSDK_OFFSET(0x8C3C450)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x8C3A170)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8C37690)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA__GETUNLOCKPROMOTION_OFFSET UNITYSDK_OFFSET(0x8C3C360)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherMonsterAvatarSkillSlotData_TypeDefinitionIndex = 49406;

	class AetherMonsterAvatarSkillSlotData : public ::System::Object
	{
	public:
		::RPG::Client::AetherMonsterAvatarData* _AetherMonsterAvatarData; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AetherMonsterAvatarSkillSingleSlotData*>* _AetherMonsterAvatarSkillSingleSlotDict_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::AetherMonsterAvatarData* aetherMonsterAvatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherMonsterAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA__CTOR_OFFSET))(this, aetherMonsterAvatarData);
		}

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_63*>* passiveSkillItemList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_63*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_SYNC_OFFSET))(this, passiveSkillItemList);
		}

		::Class_1_CA604A479B70DDEA* GetPropertyModifier()
		{
			return ((::Class_1_CA604A479B70DDEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_GETPROPERTYMODIFIER_OFFSET))(this);
		}

		::System::Boolean IsAnyCoreEquipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_ISANYCOREEQUIPPED_OFFSET))(this);
		}

		::System::UInt32 GetAetherSkillCoreSlotIndex(::System::UInt32 skillCoreID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_GETAETHERSKILLCORESLOTINDEX_OFFSET))(this, skillCoreID);
		}

		::System::UInt32 _GetUnlockPromotion(::System::Int32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA__GETUNLOCKPROMOTION_OFFSET))(this, index);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AetherMonsterAvatarSkillSingleSlotData*>* get_AetherMonsterAvatarSkillSingleSlotDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AetherMonsterAvatarSkillSingleSlotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_GET_AETHERMONSTERAVATARSKILLSINGLESLOTDICT_OFFSET))(this);
		}

		::System::Void set_AetherMonsterAvatarSkillSingleSlotDict(::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AetherMonsterAvatarSkillSingleSlotData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AetherMonsterAvatarSkillSingleSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_SET_AETHERMONSTERAVATARSKILLSINGLESLOTDICT_OFFSET))(this, value);
		}
	};
}
