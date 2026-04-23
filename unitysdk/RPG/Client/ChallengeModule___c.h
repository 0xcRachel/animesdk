#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeGroupData; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FA03A0)
#define RPG_CLIENT_CHALLENGEMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA03D0)
#define RPG_CLIENT_CHALLENGEMODULE___C__GETAVAILABLEBOSSGROUPDATA_B__2_0_OFFSET UNITYSDK_OFFSET(0x15FA03E0)
#define RPG_CLIENT_CHALLENGEMODULE___C__GETAVAILABLESTORYGROUPDATA_B__51_0_OFFSET UNITYSDK_OFFSET(0x15FA0610)
#define RPG_CLIENT_CHALLENGEMODULE___C__GETINSCHEDULEGROUPDATASBYTYPE_B__75_0_OFFSET UNITYSDK_OFFSET(0x15FA0800)
#define RPG_CLIENT_CHALLENGEMODULE___C__GETINSCHEDULEGROUPDATAS_B__74_0_OFFSET UNITYSDK_OFFSET(0x15FA07C0)
#define RPG_CLIENT_CHALLENGEMODULE___C__GETNONESCHEDULECHALLENGEGROUPDATA_B__18_0_OFFSET UNITYSDK_OFFSET(0x15FA0590)
#define RPG_CLIENT_CHALLENGEMODULE___C__HASBOSSREWARDNOTTAKEN_B__8_0_OFFSET UNITYSDK_OFFSET(0x15FA0570)
#define RPG_CLIENT_CHALLENGEMODULE___C__HASMEMORYREWARDNOTTAKEN_B__24_0_OFFSET UNITYSDK_OFFSET(0x15FA05C0)
#define RPG_CLIENT_CHALLENGEMODULE___C__HASNEWBOSSCHALLENGEGROUP_B__7_0_OFFSET UNITYSDK_OFFSET(0x15FA0420)
#define RPG_CLIENT_CHALLENGEMODULE___C__HASNEWSTORYCHALLENGEGROUP_B__55_0_OFFSET UNITYSDK_OFFSET(0x15FA0650)
#define RPG_CLIENT_CHALLENGEMODULE___C__HASSTORYREWARDNOTTAKEN_B__56_0_OFFSET UNITYSDK_OFFSET(0x15FA07A0)
#define RPG_CLIENT_CHALLENGEMODULE___C___CONTINUECHALLENGE_B__117_0_OFFSET UNITYSDK_OFFSET(0x15FA0840)
#define RPG_CLIENT_CHALLENGEMODULE___C___CONTINUECHALLENGE_B__117_1_OFFSET UNITYSDK_OFFSET(0x15FA08B0)
#define RPG_CLIENT_CHALLENGEMODULE___C___CONTINUECHALLENGE_B__117_2_OFFSET UNITYSDK_OFFSET(0x15FA0920)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeModule___c_TypeDefinitionIndex = 58122;

	class ChallengeModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::UInt32>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5C730);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__55_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5C738);
		}
		static ::System::Action** StaticGet___9__117_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5C740);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5C748);
		}
		static ::RPG::Client::ChallengeModule___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengeModule___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5C750);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5C758);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5C760);
		}
		static ::System::Action** StaticGet___9__117_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5C768);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5C770);
		}
		static ::System::Action** StaticGet___9__117_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5C778);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5C780);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__75_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5C788);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__74_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5C790);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__56_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5C798);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAvailableBossGroupData_b__2_0(::RPG::Client::ChallengeGroupData* groupData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__GETAVAILABLEBOSSGROUPDATA_B__2_0_OFFSET))(this, groupData);
		}

		::System::Boolean _HasNewBossChallengeGroup_b__7_0(::RPG::Client::ChallengeGroupData* group)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__HASNEWBOSSCHALLENGEGROUP_B__7_0_OFFSET))(this, group);
		}

		::System::Boolean _HasBossRewardNotTaken_b__8_0(::RPG::Client::ChallengeGroupData* groupData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__HASBOSSREWARDNOTTAKEN_B__8_0_OFFSET))(this, groupData);
		}

		::System::UInt32 _GetNoneScheduleChallengeGroupData_b__18_0(::RPG::Client::ChallengeGroupData* item)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__GETNONESCHEDULECHALLENGEGROUPDATA_B__18_0_OFFSET))(this, item);
		}

		::System::Boolean _HasMemoryRewardNotTaken_b__24_0(::RPG::Client::ChallengeGroupData* groupData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__HASMEMORYREWARDNOTTAKEN_B__24_0_OFFSET))(this, groupData);
		}

		::System::Boolean _GetAvailableStoryGroupData_b__51_0(::RPG::Client::ChallengeGroupData* groupData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__GETAVAILABLESTORYGROUPDATA_B__51_0_OFFSET))(this, groupData);
		}

		::System::Boolean _HasNewStoryChallengeGroup_b__55_0(::RPG::Client::ChallengeGroupData* group)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__HASNEWSTORYCHALLENGEGROUP_B__55_0_OFFSET))(this, group);
		}

		::System::Boolean _HasStoryRewardNotTaken_b__56_0(::RPG::Client::ChallengeGroupData* groupData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__HASSTORYREWARDNOTTAKEN_B__56_0_OFFSET))(this, groupData);
		}

		::System::Boolean _GetInScheduleGroupDatas_b__74_0(::RPG::Client::ChallengeGroupData* groupData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__GETINSCHEDULEGROUPDATAS_B__74_0_OFFSET))(this, groupData);
		}

		::System::Boolean _GetInScheduleGroupDatasByType_b__75_0(::RPG::Client::ChallengeGroupData* groupData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__GETINSCHEDULEGROUPDATASBYTYPE_B__75_0_OFFSET))(this, groupData);
		}

		::System::Void __ContinueChallenge_b__117_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C___CONTINUECHALLENGE_B__117_0_OFFSET))(this);
		}

		::System::Void __ContinueChallenge_b__117_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C___CONTINUECHALLENGE_B__117_1_OFFSET))(this);
		}

		::System::Void __ContinueChallenge_b__117_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C___CONTINUECHALLENGE_B__117_2_OFFSET))(this);
		}
	};
}
