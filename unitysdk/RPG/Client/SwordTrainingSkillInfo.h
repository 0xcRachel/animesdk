#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingSameRankSkill.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_54;
class Class_1_CA604A479B70DDEA;
namespace RPG::Client { class SwordTrainingAvatarData; }
namespace RPG::Client { class SwordTrainingSkillData; }
namespace RPG::Client { class SwordTrainingSkillTypeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGSKILLINFO_CREATESKILLTREESEQUENCE_OFFSET UNITYSDK_OFFSET(0xA008A00)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FFDAD0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_FETCHSAMERANKSKILLLIST_OFFSET UNITYSDK_OFFSET(0xA0098B0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_GETCOLLECTSKILLID_OFFSET UNITYSDK_OFFSET(0xA00A2B0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_GETLEARNEDSKILLLIST_OFFSET UNITYSDK_OFFSET(0xA005C50)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_GETSKILLDATA_OFFSET UNITYSDK_OFFSET(0xA006FC0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_GETSKILLPROPERTYMODIFER_OFFSET UNITYSDK_OFFSET(0xA0086A0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_GETSKILLTYPEDATA_OFFSET UNITYSDK_OFFSET(0xA008430)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_GETUNLOCKSKILLTYPEDATA_OFFSET UNITYSDK_OFFSET(0xA008510)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_HASSKILLCANLEARN_OFFSET UNITYSDK_OFFSET(0xA009160)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9FFDDD0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_ISNEWSKILLMETCONDITION_OFFSET UNITYSDK_OFFSET(0xA0092B0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_ISRANKHASSKILLCANLEARN_OFFSET UNITYSDK_OFFSET(0xA008F80)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_ISSKILLCANLEARN_OFFSET UNITYSDK_OFFSET(0xA008C90)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_SETCOLLECTSKILLID_OFFSET UNITYSDK_OFFSET(0xA008650)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_SYNCLEARNSKILL_OFFSET UNITYSDK_OFFSET(0xA008870)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_SYNCSKILLDATA_OFFSET UNITYSDK_OFFSET(0x9FFFF50)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9FFDDC0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO__INITSKILLDATALIST_OFFSET UNITYSDK_OFFSET(0xA0079B0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO__INITSKILLDATAPRESKILL_OFFSET UNITYSDK_OFFSET(0xA007D40)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO__INITSKILLTYPEDATALIST_OFFSET UNITYSDK_OFFSET(0xA007B50)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO__ONINITFINISH_OFFSET UNITYSDK_OFFSET(0xA007CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingSkillInfo_TypeDefinitionIndex = 49173;

	class SwordTrainingSkillInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSameRankSkill>* _SameRankSkillList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>* _PrevConditionMetSkillDataList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>* _ConditionFinishSkillDataList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillTypeData*>* SkillTypeDataList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>* SkillDataList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>* _LearnedSkillDataList; // 0x38
		::RPG::Client::SwordTrainingAvatarData* SwordTrainingAvatarData; // 0x40
		::System::UInt32 _CollectSkillID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_INIT_OFFSET))(this);
		}

		::System::Void _OnInitFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO__ONINITFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::SwordTrainingSkillData* GetSkillData(::System::UInt32 skillID)
		{
			return ((::RPG::Client::SwordTrainingSkillData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_GETSKILLDATA_OFFSET))(this, skillID);
		}

		::RPG::Client::SwordTrainingSkillTypeData* GetSkillTypeData(::System::UInt32 skillTypeID)
		{
			return ((::RPG::Client::SwordTrainingSkillTypeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_GETSKILLTYPEDATA_OFFSET))(this, skillTypeID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillTypeData*>* GetUnlockSkillTypeData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillTypeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_GETUNLOCKSKILLTYPEDATA_OFFSET))(this);
		}

		::System::Void SyncSkillData(::Class_1_99BD961747420BEB_54* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_54*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_SYNCSKILLDATA_OFFSET))(this, info);
		}

		::System::Void SyncLearnSkill(::System::UInt32 skillID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_SYNCLEARNSKILL_OFFSET))(this, skillID);
		}

		::Class_1_CA604A479B70DDEA* GetSkillPropertyModifer()
		{
			return ((::Class_1_CA604A479B70DDEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_GETSKILLPROPERTYMODIFER_OFFSET))(this);
		}

		::System::Void CreateSkillTreeSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_CREATESKILLTREESEQUENCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>* GetLearnedSkillList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_GETLEARNEDSKILLLIST_OFFSET))(this);
		}

		::System::Boolean IsSkillCanLearn(::RPG::Client::SwordTrainingSkillData* skillData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_ISSKILLCANLEARN_OFFSET))(this, skillData);
		}

		::System::Boolean IsRankHasSkillCanLearn(::System::UInt32 rank)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_ISRANKHASSKILLCANLEARN_OFFSET))(this, rank);
		}

		::System::Boolean HasSkillCanLearn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_HASSKILLCANLEARN_OFFSET))(this);
		}

		::System::Boolean IsNewSkillMetCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_ISNEWSKILLMETCONDITION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSameRankSkill>* FetchSameRankSkillList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSameRankSkill>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_FETCHSAMERANKSKILLLIST_OFFSET))(this);
		}

		::System::UInt32 GetCollectSkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_GETCOLLECTSKILLID_OFFSET))(this);
		}

		::System::Void SetCollectSkillID(::System::UInt32 skillID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_SETCOLLECTSKILLID_OFFSET))(this, skillID);
		}

		::System::Void _InitSkillDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO__INITSKILLDATALIST_OFFSET))(this);
		}

		::System::Void _InitSkillTypeDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO__INITSKILLTYPEDATALIST_OFFSET))(this);
		}

		::System::Void _InitSkillDataPreSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO__INITSKILLDATAPRESKILL_OFFSET))(this);
		}
	};
}
