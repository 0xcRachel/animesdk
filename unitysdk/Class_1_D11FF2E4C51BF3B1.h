#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D11FF2E4C51BF3B1_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x14C2FB30)
#define CLASS_1_D11FF2E4C51BF3B1_GET_PLANDATA_OFFSET UNITYSDK_OFFSET(0x14C2FBC0)
#define CLASS_1_D11FF2E4C51BF3B1_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x14C2FB10)
#define CLASS_1_D11FF2E4C51BF3B1_METHOD_1_127BBE0707AEE314_OFFSET UNITYSDK_OFFSET(0x14C2FE60)
#define CLASS_1_D11FF2E4C51BF3B1_METHOD_1_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0x14C2FBE0)
#define CLASS_1_D11FF2E4C51BF3B1_METHOD_1_B38BA7FF09A3FCB9_OFFSET UNITYSDK_OFFSET(0x14C2FDC0)
#define CLASS_1_D11FF2E4C51BF3B1_METHOD_1_C2A28CA64905AA3E_OFFSET UNITYSDK_OFFSET(0x14C30180)
#define CLASS_1_D11FF2E4C51BF3B1_METHOD_1_C3555C7ACCDC14EC_OFFSET UNITYSDK_OFFSET(0x14C2FE10)
#define CLASS_1_D11FF2E4C51BF3B1_METHOD_1_C51FDF05180E75AF_OFFSET UNITYSDK_OFFSET(0x14C2FB50)
#define CLASS_1_D11FF2E4C51BF3B1_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x14C2FCC0)
#define CLASS_1_D11FF2E4C51BF3B1_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x14C2FD50)
#define CLASS_1_D11FF2E4C51BF3B1_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0x14C2FB40)
#define CLASS_1_D11FF2E4C51BF3B1_SET_PLANDATA_OFFSET UNITYSDK_OFFSET(0x14C2FBD0)
#define CLASS_1_D11FF2E4C51BF3B1_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x14C2FB20)
#define CLASS_1_D11FF2E4C51BF3B1__CTOR_OFFSET UNITYSDK_OFFSET(0x14C2FC80)

inline static constexpr unsigned int Class_1_D11FF2E4C51BF3B1_TypeDefinitionIndex = 62536;

class Class_1_D11FF2E4C51BF3B1 : public ::System::Object
{
public:
	::RPG::AvatarSystem::IAvatar* _Avatar_k__BackingField; // 0x10
	::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* _PlanData_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* Field_1_2; // 0x20
	::System::UInt32 _Version_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11FF2E4C51BF3B1__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Version()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11FF2E4C51BF3B1_GET_VERSION_OFFSET))(this);
	}

	::System::Void set_Version(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D11FF2E4C51BF3B1_SET_VERSION_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* get_Avatar()
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11FF2E4C51BF3B1_GET_AVATAR_OFFSET))(this);
	}

	::System::Void set_Avatar(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_D11FF2E4C51BF3B1_SET_AVATAR_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarRelicRecommendRow* Method_1_C51FDF05180E75AF()
	{
		return ((::RPG::GameCore::AvatarRelicRecommendRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11FF2E4C51BF3B1_METHOD_1_C51FDF05180E75AF_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* get_PlanData()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11FF2E4C51BF3B1_GET_PLANDATA_OFFSET))(this);
	}

	::System::Void set_PlanData(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_D11FF2E4C51BF3B1_SET_PLANDATA_OFFSET))(this, a1);
	}

	static ::Class_1_D11FF2E4C51BF3B1* Method_1_7E9AC3FFDA4606D5()
	{
		return ((::Class_1_D11FF2E4C51BF3B1*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D11FF2E4C51BF3B1_METHOD_1_7E9AC3FFDA4606D5_OFFSET))();
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11FF2E4C51BF3B1_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11FF2E4C51BF3B1_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_B38BA7FF09A3FCB9(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_D11FF2E4C51BF3B1_METHOD_1_B38BA7FF09A3FCB9_OFFSET))(this, a1);
	}

	::System::Void Method_1_C3555C7ACCDC14EC(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_D11FF2E4C51BF3B1_METHOD_1_C3555C7ACCDC14EC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* Method_1_127BBE0707AEE314()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11FF2E4C51BF3B1_METHOD_1_127BBE0707AEE314_OFFSET))(this);
	}

	::System::Boolean Method_1_C2A28CA64905AA3E(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_D11FF2E4C51BF3B1_METHOD_1_C2A28CA64905AA3E_OFFSET))(this, a1);
	}
};
