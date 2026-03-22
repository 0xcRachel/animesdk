#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_ADC27DBA8547EDD7;
class Class_1_B587CAF66AB56ABD;
class Class_2_43D1AA62A6D00FFF;
class Class_3_F4528A5C0F861AF2;
namespace RPG::GameCore { class ElfBehaviorStateConfig; }
namespace RPG::GameCore { class ElfBuff; }
namespace RPG::GameCore { class ElfBuffConfig; }
namespace RPG::GameCore { class ElfDailyWaveConfig; }
namespace RPG::GameCore { class ElfRestaurantGameConfig; }
namespace RPG::GameCore { class ElfSpecialEventConfig; }
namespace RPG::GameCore { class ElfSuperEventTypeConfig; }
namespace RPG::GameCore { class ElfWaveCustomerConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class LittleGameStateTreeConfig; }
namespace RPG::GameCore { class RestaurantEventRewardRow; }
namespace RPG::GameCore { class RestaurantSpecialBubbleRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BFB761B5C7B53FBC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111DF7C0)
#define CLASS_1_BFB761B5C7B53FBC_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x111E0380)
#define CLASS_1_BFB761B5C7B53FBC_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x111DE390)
#define CLASS_1_BFB761B5C7B53FBC_METHOD_1_07BB45288DFF8852_OFFSET UNITYSDK_OFFSET(0x111DEAC0)
#define CLASS_1_BFB761B5C7B53FBC_METHOD_1_1CC11A49B82F4151_OFFSET UNITYSDK_OFFSET(0x111DFD30)
#define CLASS_1_BFB761B5C7B53FBC_METHOD_1_40051A2743448924_OFFSET UNITYSDK_OFFSET(0x111DFF60)
#define CLASS_1_BFB761B5C7B53FBC_METHOD_1_422AB1A19F04E217_OFFSET UNITYSDK_OFFSET(0x111DEF00)
#define CLASS_1_BFB761B5C7B53FBC_METHOD_1_5AEAA72641C1FC1E_OFFSET UNITYSDK_OFFSET(0x111DFB60)
#define CLASS_1_BFB761B5C7B53FBC_METHOD_1_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0x111DEE50)
#define CLASS_1_BFB761B5C7B53FBC_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x111DF4D0)
#define CLASS_1_BFB761B5C7B53FBC_METHOD_1_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0x111DF350)
#define CLASS_1_BFB761B5C7B53FBC_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x111DF250)
#define CLASS_1_BFB761B5C7B53FBC_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x111DF150)
#define CLASS_1_BFB761B5C7B53FBC_METHOD_1_C2992E3B105F7E09_OFFSET UNITYSDK_OFFSET(0x111DFC90)
#define CLASS_1_BFB761B5C7B53FBC_METHOD_1_E111A6E980D49A23_OFFSET UNITYSDK_OFFSET(0x111E0160)
#define CLASS_1_BFB761B5C7B53FBC_METHOD_1_E68AEBF88F1494A8_OFFSET UNITYSDK_OFFSET(0x111E02E0)
#define CLASS_1_BFB761B5C7B53FBC_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x111E0390)
#define CLASS_1_BFB761B5C7B53FBC__CCTOR_OFFSET UNITYSDK_OFFSET(0x111E03A0)
#define CLASS_1_BFB761B5C7B53FBC__CTOR_OFFSET UNITYSDK_OFFSET(0x111DE180)

inline static constexpr unsigned int Class_1_BFB761B5C7B53FBC_TypeDefinitionIndex = 60917;

class Class_1_BFB761B5C7B53FBC : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_21()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFB761B5C7B53FBC_TypeDefinitionIndex)->GetStaticField(0x44470);
	}
	static ::System::String** StaticGet_Field_1_20()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFB761B5C7B53FBC_TypeDefinitionIndex)->GetStaticField(0x44478);
	}
	static ::System::String** StaticGet_Field_1_22()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFB761B5C7B53FBC_TypeDefinitionIndex)->GetStaticField(0x44480);
	}
	static ::System::String** StaticGet_Field_1_23()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFB761B5C7B53FBC_TypeDefinitionIndex)->GetStaticField(0x44488);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RestaurantNormalEventType, ::RPG::GameCore::RestaurantEventRewardRow*>* Field_1_14; // 0x10
	::RPG::GameCore::LittleGameStateTreeConfig* Field_1_9; // 0x18
	::RPG::GameCore::LittleGameStateTreeConfig* Field_1_7; // 0x20
	::Class_3_F4528A5C0F861AF2* Field_1_18; // 0x28
	::RPG::GameCore::LittleGameStateTreeConfig* Field_1_8; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ElfBehaviorStateConfig*>* Field_1_11; // 0x38
	::Class_2_43D1AA62A6D00FFF* Field_1_17; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_B587CAF66AB56ABD*>* Field_1_6; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* Field_1_4; // 0x50
	::Class_1_ADC27DBA8547EDD7* Field_1_10; // 0x58
	::RPG::GameCore::ElfRestaurantGameConfig* _GameConfig_k__BackingField; // 0x60
	::RPG::GameCore::LittleGameLevelConfig* Field_1_19; // 0x68
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RestaurantSuperEventType, ::RPG::GameCore::LittleGameEntityConfig*>* Field_1_5; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::RestaurantSpecialBubbleRow*>*>* Field_1_13; // 0x78
	::RPG::GameCore::ElfDailyWaveConfig* Field_1_16; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* Field_1_1; // 0x88
	::RPG::GameCore::ElfBehaviorStateConfig* Field_1_12; // 0x90
	::RPG::GameCore::ElfBuffConfig* Field_1_15; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* Field_1_3; // 0xA0
	::System::UInt32 Field_1_2; // 0xA8

	::System::Void _ctor(::Class_3_F4528A5C0F861AF2* a1, ::Class_2_43D1AA62A6D00FFF* a2, ::RPG::GameCore::LittleGameLevelConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F4528A5C0F861AF2*, ::Class_2_43D1AA62A6D00FFF*, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_5AEAA72641C1FC1E(::System::String* a1, ::RPG::GameCore::ElfBuff*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::ElfBuff*&))((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC_METHOD_1_5AEAA72641C1FC1E_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ElfSuperEventTypeConfig* Method_1_C2992E3B105F7E09(::RPG::GameCore::RestaurantSuperEventType a1)
	{
		return ((::RPG::GameCore::ElfSuperEventTypeConfig*(*)(::PVOID, ::RPG::GameCore::RestaurantSuperEventType))((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC_METHOD_1_C2992E3B105F7E09_OFFSET))(this, a1);
	}

	::RPG::GameCore::ElfWaveCustomerConfig* Method_1_1CC11A49B82F4151()
	{
		return ((::RPG::GameCore::ElfWaveCustomerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC_METHOD_1_1CC11A49B82F4151_OFFSET))(this);
	}

	::RPG::GameCore::ElfBehaviorStateConfig* Method_1_40051A2743448924(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ElfBehaviorStateConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC_METHOD_1_40051A2743448924_OFFSET))(this, a1);
	}

	::RPG::GameCore::ElfSpecialEventConfig* Method_1_E111A6E980D49A23(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ElfSpecialEventConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC_METHOD_1_E111A6E980D49A23_OFFSET))(this, a1);
	}

	::RPG::GameCore::ElfSpecialEventConfig* Method_1_E68AEBF88F1494A8(::System::String* a1)
	{
		return ((::RPG::GameCore::ElfSpecialEventConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC_METHOD_1_E68AEBF88F1494A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_1_07BB45288DFF8852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC_METHOD_1_07BB45288DFF8852_OFFSET))(this);
	}

	::System::Void Method_1_8F537CE539CF0103()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC_METHOD_1_8F537CE539CF0103_OFFSET))(this);
	}

	::System::Void Method_1_422AB1A19F04E217()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC_METHOD_1_422AB1A19F04E217_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC_METHOD_1_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_1_98060E4D16CBDFE4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC_METHOD_1_98060E4D16CBDFE4_OFFSET))(this);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::RPG::GameCore::ElfRestaurantGameConfig* get_GameConfig()
	{
		return ((::RPG::GameCore::ElfRestaurantGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC_GET_GAMECONFIG_OFFSET))(this);
	}

	::System::Void set_GameConfig(::RPG::GameCore::ElfRestaurantGameConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElfRestaurantGameConfig*))((::PBYTE)hIl2Cpp + CLASS_1_BFB761B5C7B53FBC_SET_GAMECONFIG_OFFSET))(this, value);
	}
};
