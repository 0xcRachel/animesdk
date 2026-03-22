#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_543;
class Class_1_4173305C1B9B6532_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_58FECF0C9E45347C_METHOD_1_35E8CC5FF5AAF7E7_OFFSET UNITYSDK_OFFSET(0x99774F0)
#define CLASS_1_58FECF0C9E45347C_METHOD_1_A7836646989A4215_OFFSET UNITYSDK_OFFSET(0x9977340)
#define CLASS_1_58FECF0C9E45347C_METHOD_1_BCFFC3752B21C56F_OFFSET UNITYSDK_OFFSET(0x9977700)
#define CLASS_1_58FECF0C9E45347C__CTOR_OFFSET UNITYSDK_OFFSET(0x9977860)

inline static constexpr unsigned int Class_1_58FECF0C9E45347C_TypeDefinitionIndex = 49694;

class Class_1_58FECF0C9E45347C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::Class_1_4173305C1B9B6532_1*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58FECF0C9E45347C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A7836646989A4215()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58FECF0C9E45347C_METHOD_1_A7836646989A4215_OFFSET))(this);
	}

	::System::Void Method_1_35E8CC5FF5AAF7E7(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_58FECF0C9E45347C_METHOD_1_35E8CC5FF5AAF7E7_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_543* Method_1_BCFFC3752B21C56F(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_543*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_58FECF0C9E45347C_METHOD_1_BCFFC3752B21C56F_OFFSET))(this, a1);
	}
};
