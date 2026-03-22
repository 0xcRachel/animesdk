#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7256E7A2FB36A46D.h"

class Class_1_56FF45D7B2C55655;
class Class_1_9300C88C385E8250;
class Class_1_DA7373FBD5F460E0;
class Class_1_ECBCF86CDE61CBCA;
class Class_2_B4A86C2C265B56CB;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class MiddleDistantViewPrefabInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_948A3E2C51764CFD_GET_REFRESHMDV_OFFSET UNITYSDK_OFFSET(0x85A4400)
#define CLASS_2_948A3E2C51764CFD_METHOD_2_3BECD34535748C91_OFFSET UNITYSDK_OFFSET(0x85A3C10)
#define CLASS_2_948A3E2C51764CFD_METHOD_2_4A65E434964A4C42_OFFSET UNITYSDK_OFFSET(0x85A3A80)
#define CLASS_2_948A3E2C51764CFD_METHOD_2_C7C47740BDB99E4B_OFFSET UNITYSDK_OFFSET(0x85A4280)
#define CLASS_2_948A3E2C51764CFD_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x85A3BD0)
#define CLASS_2_948A3E2C51764CFD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x85A3B90)
#define CLASS_2_948A3E2C51764CFD_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x85A3980)
#define CLASS_2_948A3E2C51764CFD_SET_REFRESHMDV_OFFSET UNITYSDK_OFFSET(0x85A4410)
#define CLASS_2_948A3E2C51764CFD__CTOR_OFFSET UNITYSDK_OFFSET(0x85A3810)

inline static constexpr unsigned int Class_2_948A3E2C51764CFD_TypeDefinitionIndex = 58792;

class Class_2_948A3E2C51764CFD : public ::Class_1_7256E7A2FB36A46D
{
public:
	::System::Collections::Generic::List_1<::Class_2_B4A86C2C265B56CB*>* Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_9300C88C385E8250*>* Field_2_1; // 0x20
	::System::Boolean _RefreshMDV_k__BackingField; // 0x28

	::System::Void _ctor(::Class_1_56FF45D7B2C55655* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*))((::PBYTE)hIl2Cpp + CLASS_2_948A3E2C51764CFD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_948A3E2C51764CFD_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_4A65E434964A4C42(::Class_1_ECBCF86CDE61CBCA* a1, ::Class_1_ECBCF86CDE61CBCA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*, ::Class_1_ECBCF86CDE61CBCA*))((::PBYTE)hIl2Cpp + CLASS_2_948A3E2C51764CFD_METHOD_2_4A65E434964A4C42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_948A3E2C51764CFD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_948A3E2C51764CFD_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_3BECD34535748C91(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::GameCore::MiddleDistantViewPrefabInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::GameCore::MiddleDistantViewPrefabInfo*))((::PBYTE)hIl2Cpp + CLASS_2_948A3E2C51764CFD_METHOD_2_3BECD34535748C91_OFFSET))(this, a1, a2);
	}

	::Class_1_DA7373FBD5F460E0* Method_2_C7C47740BDB99E4B(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::GameCore::HoyoTag* a2)
	{
		return ((::Class_1_DA7373FBD5F460E0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + CLASS_2_948A3E2C51764CFD_METHOD_2_C7C47740BDB99E4B_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_RefreshMDV()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_948A3E2C51764CFD_GET_REFRESHMDV_OFFSET))(this);
	}

	::System::Void set_RefreshMDV(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_948A3E2C51764CFD_SET_REFRESHMDV_OFFSET))(this, value);
	}
};
