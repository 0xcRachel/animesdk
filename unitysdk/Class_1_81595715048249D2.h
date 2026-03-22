#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_81595715048249D2_GET_PLANDATA_OFFSET UNITYSDK_OFFSET(0x10BD6360)
#define CLASS_1_81595715048249D2_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x10BD6260)
#define CLASS_1_81595715048249D2_METHOD_1_39DDA7095448C614_OFFSET UNITYSDK_OFFSET(0x10BD68C0)
#define CLASS_1_81595715048249D2_METHOD_1_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0x10BD6380)
#define CLASS_1_81595715048249D2_METHOD_1_945A2D5120B1EDFD_OFFSET UNITYSDK_OFFSET(0x10BD6280)
#define CLASS_1_81595715048249D2_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10BD64F0)
#define CLASS_1_81595715048249D2_METHOD_1_A782C50886F8453A_OFFSET UNITYSDK_OFFSET(0x10BD6560)
#define CLASS_1_81595715048249D2_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10BD6460)
#define CLASS_1_81595715048249D2_METHOD_1_B42E22529089AE55_OFFSET UNITYSDK_OFFSET(0x10BD65B0)
#define CLASS_1_81595715048249D2_METHOD_1_D5C6D7AC80D95BF7_OFFSET UNITYSDK_OFFSET(0x10BD6600)
#define CLASS_1_81595715048249D2_METHOD_1_E222C1515DD1AE45_OFFSET UNITYSDK_OFFSET(0x10BD62C0)
#define CLASS_1_81595715048249D2_SET_PLANDATA_OFFSET UNITYSDK_OFFSET(0x10BD6370)
#define CLASS_1_81595715048249D2_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x10BD6270)
#define CLASS_1_81595715048249D2__CTOR_OFFSET UNITYSDK_OFFSET(0x10BD6420)

inline static constexpr unsigned int Class_1_81595715048249D2_TypeDefinitionIndex = 53274;

class Class_1_81595715048249D2 : public ::System::Object
{
public:
	::RPG::Client::IAvatarInfoProvider* Field_1_1; // 0x10
	::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* _PlanData_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* Field_1_0; // 0x20
	::System::UInt32 _Version_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Version()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_GET_VERSION_OFFSET))(this);
	}

	::System::Void set_Version(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_SET_VERSION_OFFSET))(this, value);
	}

	::RPG::Client::AvatarData* Method_1_945A2D5120B1EDFD()
	{
		return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_METHOD_1_945A2D5120B1EDFD_OFFSET))(this);
	}

	::RPG::GameCore::AvatarRelicRecommendRow* Method_1_E222C1515DD1AE45()
	{
		return ((::RPG::GameCore::AvatarRelicRecommendRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_METHOD_1_E222C1515DD1AE45_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* get_PlanData()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_GET_PLANDATA_OFFSET))(this);
	}

	::System::Void set_PlanData(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_SET_PLANDATA_OFFSET))(this, value);
	}

	static ::Class_1_81595715048249D2* Method_1_7E9AC3FFDA4606D5()
	{
		return ((::Class_1_81595715048249D2*(*)())((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_METHOD_1_7E9AC3FFDA4606D5_OFFSET))();
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_A782C50886F8453A(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_METHOD_1_A782C50886F8453A_OFFSET))(this, a1);
	}

	::System::Void Method_1_B42E22529089AE55(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_METHOD_1_B42E22529089AE55_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* Method_1_D5C6D7AC80D95BF7()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_METHOD_1_D5C6D7AC80D95BF7_OFFSET))(this);
	}

	::System::Boolean Method_1_39DDA7095448C614(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_METHOD_1_39DDA7095448C614_OFFSET))(this, a1);
	}
};
