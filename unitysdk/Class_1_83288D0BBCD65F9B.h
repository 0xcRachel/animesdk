#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
class Class_0_16E4307DCC419505_619;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class RecommendRelicGrowthGuideItem; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_83288D0BBCD65F9B_METHOD_1_18898CF8F46D45D1_1_OFFSET UNITYSDK_OFFSET(0x10D87CD0)
#define CLASS_1_83288D0BBCD65F9B_METHOD_1_18898CF8F46D45D1_OFFSET UNITYSDK_OFFSET(0x10D87FE0)
#define CLASS_1_83288D0BBCD65F9B_METHOD_1_31FD44713112CB53_OFFSET UNITYSDK_OFFSET(0x10D87720)
#define CLASS_1_83288D0BBCD65F9B_METHOD_1_5F446754F8D6AF5D_OFFSET UNITYSDK_OFFSET(0x10D87A00)
#define CLASS_1_83288D0BBCD65F9B__CTOR_OFFSET UNITYSDK_OFFSET(0x10D87610)

inline static constexpr unsigned int Class_1_83288D0BBCD65F9B_TypeDefinitionIndex = 52120;

class Class_1_83288D0BBCD65F9B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_619*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83288D0BBCD65F9B__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>* Method_1_31FD44713112CB53(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_83288D0BBCD65F9B_METHOD_1_31FD44713112CB53_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>* Method_1_5F446754F8D6AF5D(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_83288D0BBCD65F9B_METHOD_1_5F446754F8D6AF5D_OFFSET))(this, a1);
	}

	::RPG::Client::RecommendRelicGrowthGuideItem* Method_1_18898CF8F46D45D1(::RPG::Client::AvatarData* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a2)
	{
		return ((::RPG::Client::RecommendRelicGrowthGuideItem*(*)(::PVOID, ::RPG::Client::AvatarData*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_83288D0BBCD65F9B_METHOD_1_18898CF8F46D45D1_OFFSET))(this, a1, a2);
	}

	::RPG::Client::RecommendRelicGrowthGuideItem* Method_1_18898CF8F46D45D1_1(::RPG::Client::AvatarData* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a2)
	{
		return ((::RPG::Client::RecommendRelicGrowthGuideItem*(*)(::PVOID, ::RPG::Client::AvatarData*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_83288D0BBCD65F9B_METHOD_1_18898CF8F46D45D1_1_OFFSET))(this, a1, a2);
	}
};
