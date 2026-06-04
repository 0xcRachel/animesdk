#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_36E3880E987172D7_1;
class Class_1_9180E2E655E700C9;
class Class_1_C50814066AD5D308;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E5506B2509E2F0C8_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x15E32880)
#define CLASS_1_E5506B2509E2F0C8_GET_BUFFAMPLIFICATIONMAP_OFFSET UNITYSDK_OFFSET(0x15E328E0)
#define CLASS_1_E5506B2509E2F0C8_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x15E328A0)
#define CLASS_1_E5506B2509E2F0C8_GET_INSERTMONSTERMAP_OFFSET UNITYSDK_OFFSET(0x15E328C0)
#define CLASS_1_E5506B2509E2F0C8_METHOD_1_4ABBE821374735DA_OFFSET UNITYSDK_OFFSET(0x15E331C0)
#define CLASS_1_E5506B2509E2F0C8_METHOD_1_63482CFE42B50617_OFFSET UNITYSDK_OFFSET(0x15E32900)
#define CLASS_1_E5506B2509E2F0C8_METHOD_1_F7721D0B419638BB_OFFSET UNITYSDK_OFFSET(0x15E335C0)
#define CLASS_1_E5506B2509E2F0C8_SET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x15E32890)
#define CLASS_1_E5506B2509E2F0C8_SET_BUFFAMPLIFICATIONMAP_OFFSET UNITYSDK_OFFSET(0x15E328F0)
#define CLASS_1_E5506B2509E2F0C8_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x15E328B0)
#define CLASS_1_E5506B2509E2F0C8_SET_INSERTMONSTERMAP_OFFSET UNITYSDK_OFFSET(0x15E328D0)
#define CLASS_1_E5506B2509E2F0C8__CTOR_OFFSET UNITYSDK_OFFSET(0x15E330F0)

inline static constexpr unsigned int Class_1_E5506B2509E2F0C8_TypeDefinitionIndex = 52357;

class Class_1_E5506B2509E2F0C8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_C50814066AD5D308*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _BuffAmplificationMap_k__BackingField; // 0x18
	::Class_1_9180E2E655E700C9* _InsertMonsterMap_k__BackingField; // 0x20
	::System::UInt32 _Difficulty_k__BackingField; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::RPG::GameCore::FateAreaType _AreaType_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5506B2509E2F0C8__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FateAreaType get_AreaType()
	{
		return ((::RPG::GameCore::FateAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5506B2509E2F0C8_GET_AREATYPE_OFFSET))(this);
	}

	::System::Void set_AreaType(::RPG::GameCore::FateAreaType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateAreaType))((::PBYTE)hIl2Cpp + CLASS_1_E5506B2509E2F0C8_SET_AREATYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_Difficulty()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5506B2509E2F0C8_GET_DIFFICULTY_OFFSET))(this);
	}

	::System::Void set_Difficulty(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E5506B2509E2F0C8_SET_DIFFICULTY_OFFSET))(this, a1);
	}

	::Class_1_9180E2E655E700C9* get_InsertMonsterMap()
	{
		return ((::Class_1_9180E2E655E700C9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5506B2509E2F0C8_GET_INSERTMONSTERMAP_OFFSET))(this);
	}

	::System::Void set_InsertMonsterMap(::Class_1_9180E2E655E700C9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9180E2E655E700C9*))((::PBYTE)hIl2Cpp + CLASS_1_E5506B2509E2F0C8_SET_INSERTMONSTERMAP_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* get_BuffAmplificationMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5506B2509E2F0C8_GET_BUFFAMPLIFICATIONMAP_OFFSET))(this);
	}

	::System::Void set_BuffAmplificationMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_E5506B2509E2F0C8_SET_BUFFAMPLIFICATIONMAP_OFFSET))(this, a1);
	}

	static ::Class_1_E5506B2509E2F0C8* Method_1_63482CFE42B50617(::Class_1_36E3880E987172D7_1* a1)
	{
		return ((::Class_1_E5506B2509E2F0C8*(*)(::Class_1_36E3880E987172D7_1*))((::PBYTE)hIl2Cpp + CLASS_1_E5506B2509E2F0C8_METHOD_1_63482CFE42B50617_OFFSET))(a1);
	}

	::Class_1_36E3880E987172D7_1* Method_1_4ABBE821374735DA()
	{
		return ((::Class_1_36E3880E987172D7_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5506B2509E2F0C8_METHOD_1_4ABBE821374735DA_OFFSET))(this);
	}

	::Class_1_E5506B2509E2F0C8* Method_1_F7721D0B419638BB()
	{
		return ((::Class_1_E5506B2509E2F0C8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5506B2509E2F0C8_METHOD_1_F7721D0B419638BB_OFFSET))(this);
	}
};
