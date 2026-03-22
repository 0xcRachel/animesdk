#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingPropertySource.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_CA604A479B70DDEA;
namespace RPG::Client { class SwordTrainingAvatarData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

#define CLASS_1_BA9DF8A4AB4EB338_GET__SWORDTRAININGAVATARDATA_OFFSET UNITYSDK_OFFSET(0x83F8C90)
#define CLASS_1_BA9DF8A4AB4EB338_METHOD_1_02E519773547FCC9_OFFSET UNITYSDK_OFFSET(0x83F7010)
#define CLASS_1_BA9DF8A4AB4EB338_METHOD_1_4B9EF9E1C8F4E6C6_OFFSET UNITYSDK_OFFSET(0x83F70A0)
#define CLASS_1_BA9DF8A4AB4EB338_METHOD_1_50B6F060C330D3F5_OFFSET UNITYSDK_OFFSET(0x83F7830)
#define CLASS_1_BA9DF8A4AB4EB338_METHOD_1_5FBBE62CD3378223_OFFSET UNITYSDK_OFFSET(0x83F78E0)
#define CLASS_1_BA9DF8A4AB4EB338_METHOD_1_A7D9B9490F19A328_OFFSET UNITYSDK_OFFSET(0x83F7E70)
#define CLASS_1_BA9DF8A4AB4EB338_METHOD_1_E63B2D192A140C14_OFFSET UNITYSDK_OFFSET(0x83F7DA0)
#define CLASS_1_BA9DF8A4AB4EB338_SET__SWORDTRAININGAVATARDATA_OFFSET UNITYSDK_OFFSET(0x83F8CA0)
#define CLASS_1_BA9DF8A4AB4EB338__CTOR_OFFSET UNITYSDK_OFFSET(0x83F6FB0)

inline static constexpr unsigned int Class_1_BA9DF8A4AB4EB338_TypeDefinitionIndex = 49171;

class Class_1_BA9DF8A4AB4EB338 : public ::System::Object
{
public:
	::System::Collections::Generic::SortedList_2<::RPG::Client::SwordTrainingPropertySource, ::Class_1_CA604A479B70DDEA*>* Field_1_1; // 0x10
	::RPG::Client::SwordTrainingAvatarData* __SwordTrainingAvatarData_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::Client::SwordTrainingAvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingAvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_BA9DF8A4AB4EB338__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_02E519773547FCC9(::RPG::Client::SwordTrainingPropertySource a1, ::Class_1_CA604A479B70DDEA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingPropertySource, ::Class_1_CA604A479B70DDEA*))((::PBYTE)hIl2Cpp + CLASS_1_BA9DF8A4AB4EB338_METHOD_1_02E519773547FCC9_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_4B9EF9E1C8F4E6C6(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA9DF8A4AB4EB338_METHOD_1_4B9EF9E1C8F4E6C6_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FixPoint Method_1_5FBBE62CD3378223(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA9DF8A4AB4EB338_METHOD_1_5FBBE62CD3378223_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FixPoint Method_1_50B6F060C330D3F5(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA9DF8A4AB4EB338_METHOD_1_50B6F060C330D3F5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_E63B2D192A140C14(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA9DF8A4AB4EB338_METHOD_1_E63B2D192A140C14_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A7D9B9490F19A328(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2, ::RPG::GameCore::FixPoint& a3, ::RPG::GameCore::FixPoint& a4, ::RPG::GameCore::FixPoint& a5, ::RPG::GameCore::FixPoint& a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_BA9DF8A4AB4EB338_METHOD_1_A7D9B9490F19A328_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::RPG::Client::SwordTrainingAvatarData* get__SwordTrainingAvatarData()
	{
		return ((::RPG::Client::SwordTrainingAvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA9DF8A4AB4EB338_GET__SWORDTRAININGAVATARDATA_OFFSET))(this);
	}

	::System::Void set__SwordTrainingAvatarData(::RPG::Client::SwordTrainingAvatarData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingAvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_BA9DF8A4AB4EB338_SET__SWORDTRAININGAVATARDATA_OFFSET))(this, value);
	}
};
