#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_23;
class Class_1_496DDD2F6FDC28F1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F8A780)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F8A7C0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_0_OFFSET UNITYSDK_OFFSET(0x15F8A7D0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_1_OFFSET UNITYSDK_OFFSET(0x15F8A8A0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_2_OFFSET UNITYSDK_OFFSET(0x15F8A980)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_3_OFFSET UNITYSDK_OFFSET(0x15F8A9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex = 58149;

	class ChallengeFriendRecommendLineupData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChallengeFriendRecommendLineupData___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengeFriendRecommendLineupData___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x5C590);
		}
		static ::System::Func_2<::Class_1_496DDD2F6FDC28F1*, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::Class_1_496DDD2F6FDC28F1*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x5C598);
		}
		static ::System::Func_2<::Class_1_496DDD2F6FDC28F1*, ::System::Boolean>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::Class_1_496DDD2F6FDC28F1*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x5C5A0);
		}
		static ::System::Func_2<::Class_1_496DDD2F6FDC28F1*, ::Class_1_21DCD4640D389503_23*>** StaticGet___9__29_2()
		{
			return (::System::Func_2<::Class_1_496DDD2F6FDC28F1*, ::Class_1_21DCD4640D389503_23*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x5C5A8);
		}
		static ::System::Func_2<::Class_1_496DDD2F6FDC28F1*, ::Class_1_21DCD4640D389503_23*>** StaticGet___9__29_3()
		{
			return (::System::Func_2<::Class_1_496DDD2F6FDC28F1*, ::Class_1_21DCD4640D389503_23*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x5C5B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __CreateRecommendChallengeLineupsInfo_b__29_0(::Class_1_496DDD2F6FDC28F1* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_496DDD2F6FDC28F1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_0_OFFSET))(this, data);
		}

		::System::Boolean __CreateRecommendChallengeLineupsInfo_b__29_1(::Class_1_496DDD2F6FDC28F1* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_496DDD2F6FDC28F1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_1_OFFSET))(this, data);
		}

		::Class_1_21DCD4640D389503_23* __CreateRecommendChallengeLineupsInfo_b__29_2(::Class_1_496DDD2F6FDC28F1* data)
		{
			return ((::Class_1_21DCD4640D389503_23*(*)(::PVOID, ::Class_1_496DDD2F6FDC28F1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_2_OFFSET))(this, data);
		}

		::Class_1_21DCD4640D389503_23* __CreateRecommendChallengeLineupsInfo_b__29_3(::Class_1_496DDD2F6FDC28F1* data)
		{
			return ((::Class_1_21DCD4640D389503_23*(*)(::PVOID, ::Class_1_496DDD2F6FDC28F1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_3_OFFSET))(this, data);
		}
	};
}
