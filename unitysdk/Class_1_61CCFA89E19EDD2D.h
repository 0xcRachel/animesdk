#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RelicScoreCalculatorConfig.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicAffixType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_855;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicShowPropertyData; }
namespace RPG::Client::RelicSmartSuit { class MainPropertyMatchChecker; }
namespace RPG::GameCore { class RelicMainAffixAvatarValueRow; }
namespace RPG::GameCore { class RelicSubAffixAvatarValueRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_61CCFA89E19EDD2D_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x945AAD0)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_00774B5C8637A4AD_OFFSET UNITYSDK_OFFSET(0x945AAE0)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_061739BCA68F2B1B_1_OFFSET UNITYSDK_OFFSET(0x945BC00)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_061739BCA68F2B1B_OFFSET UNITYSDK_OFFSET(0x945B9E0)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_1531AF6FB28345B4_OFFSET UNITYSDK_OFFSET(0x945BED0)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_2EE857E26F4A1CDC_OFFSET UNITYSDK_OFFSET(0x945B250)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_5CF5175CFF5F10AC_OFFSET UNITYSDK_OFFSET(0x945BFE0)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_6CBB61A49BB2C474_OFFSET UNITYSDK_OFFSET(0x945C270)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_745C27D4BCAC384D_OFFSET UNITYSDK_OFFSET(0x945AEB0)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_8CD3A05EB683B1A7_1_OFFSET UNITYSDK_OFFSET(0x945C100)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_8CD3A05EB683B1A7_OFFSET UNITYSDK_OFFSET(0x945B5E0)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_AA7047F594B773AE_OFFSET UNITYSDK_OFFSET(0x945B790)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_B835618663ACD999_OFFSET UNITYSDK_OFFSET(0x945B0A0)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_E864A544A2F8CDBB_OFFSET UNITYSDK_OFFSET(0x945ADD0)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_EB1B0623B4BDD44D_OFFSET UNITYSDK_OFFSET(0x945BE20)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_EDA7579EB3F05B46_OFFSET UNITYSDK_OFFSET(0x945AF10)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_EF6A3193F3CB74FA_OFFSET UNITYSDK_OFFSET(0x945B530)
#define CLASS_1_61CCFA89E19EDD2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x945C2C0)
#define CLASS_1_61CCFA89E19EDD2D__CTOR_OFFSET UNITYSDK_OFFSET(0x945AB70)

inline static constexpr unsigned int Class_1_61CCFA89E19EDD2D_TypeDefinitionIndex = 59434;

class Class_1_61CCFA89E19EDD2D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61CCFA89E19EDD2D_TypeDefinitionIndex)->GetStaticField(0x41EA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AttackDamageType>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AttackDamageType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61CCFA89E19EDD2D_TypeDefinitionIndex)->GetStaticField(0x41EA8);
	}
	::Class_0_16E4307DCC419505_855* Field_1_2; // 0x10
	::RPG::GameCore::RelicMainAffixAvatarValueRow* Field_1_3; // 0x18
	::RPG::GameCore::RelicSubAffixAvatarValueRow* Field_1_4; // 0x20
	::RPG::Client::RelicSmartSuit::MainPropertyMatchChecker* Field_1_5; // 0x28
	::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig _Config_k__BackingField; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_855* a1, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_855*, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D__CCTOR_OFFSET))();
	}

	::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig get_Config()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_GET_CONFIG_OFFSET))(this);
	}

	static ::Class_1_61CCFA89E19EDD2D* Method_1_00774B5C8637A4AD(::Class_0_16E4307DCC419505_855* a1, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig a2)
	{
		return ((::Class_1_61CCFA89E19EDD2D*(*)(::Class_0_16E4307DCC419505_855*, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_00774B5C8637A4AD_OFFSET))(a1, a2);
	}

	::System::Single Method_1_E864A544A2F8CDBB(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_E864A544A2F8CDBB_OFFSET))(this, a1);
	}

	::System::Single Method_1_745C27D4BCAC384D(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_745C27D4BCAC384D_OFFSET))(this, a1);
	}

	::System::Single Method_1_2EE857E26F4A1CDC(::RPG::GameCore::AvatarPropertyType a1, ::RPG::Client::RelicItemData* a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_2EE857E26F4A1CDC_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_8CD3A05EB683B1A7(::RPG::GameCore::RelicAffixType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::RelicAffixType))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_8CD3A05EB683B1A7_OFFSET))(this, a1);
	}

	::System::Single Method_1_EDA7579EB3F05B46(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_EDA7579EB3F05B46_OFFSET))(this, a1);
	}

	::System::Single Method_1_EB1B0623B4BDD44D(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicShowPropertyData* a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicShowPropertyData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_EB1B0623B4BDD44D_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_1531AF6FB28345B4(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicShowPropertyData* a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicShowPropertyData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_1531AF6FB28345B4_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_5CF5175CFF5F10AC(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_5CF5175CFF5F10AC_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_8CD3A05EB683B1A7_1(::RPG::GameCore::RelicAffixType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::RelicAffixType))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_8CD3A05EB683B1A7_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6CBB61A49BB2C474(::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_6CBB61A49BB2C474_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_EF6A3193F3CB74FA(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_EF6A3193F3CB74FA_OFFSET))(this, a1);
	}

	::System::Single Method_1_AA7047F594B773AE(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_AA7047F594B773AE_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_061739BCA68F2B1B(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_061739BCA68F2B1B_OFFSET))(this, a1);
	}

	::System::Single Method_1_061739BCA68F2B1B_1(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_061739BCA68F2B1B_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_B835618663ACD999(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_B835618663ACD999_OFFSET))(this, a1);
	}
};
