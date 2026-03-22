#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_322;
class Class_0_16E4307DCC419505_329;
class Class_0_16E4307DCC419505_343;
class Class_1_37676B2FB4322E20;
namespace RPG::AvatarSystem { class AvatarServant; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_F0A1A70ED6BE20B2_GET_INHERITABILITYPROPERTRIES_OFFSET UNITYSDK_OFFSET(0x10A6DAB0)
#define CLASS_1_F0A1A70ED6BE20B2_GET_ISWOMANHERO_OFFSET UNITYSDK_OFFSET(0x10A6DA70)
#define CLASS_1_F0A1A70ED6BE20B2_GET_MASTERPROPERTYCALCULATOR_OFFSET UNITYSDK_OFFSET(0x10A6DB10)
#define CLASS_1_F0A1A70ED6BE20B2_GET_MASTERPROPERTYCONTEXT_OFFSET UNITYSDK_OFFSET(0x10A6DAF0)
#define CLASS_1_F0A1A70ED6BE20B2_GET_MASTERSKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0x10A6DB30)
#define CLASS_1_F0A1A70ED6BE20B2_GET_PROPERTYREPOSITORY_OFFSET UNITYSDK_OFFSET(0x10A6DAD0)
#define CLASS_1_F0A1A70ED6BE20B2_GET_SERVANTSKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0x10A6DB50)
#define CLASS_1_F0A1A70ED6BE20B2_GET_SERVANT_OFFSET UNITYSDK_OFFSET(0x10A6DA90)
#define CLASS_1_F0A1A70ED6BE20B2_METHOD_1_2D41FB6FE1BEE09A_1_OFFSET UNITYSDK_OFFSET(0x10A6E260)
#define CLASS_1_F0A1A70ED6BE20B2_METHOD_1_2D41FB6FE1BEE09A_OFFSET UNITYSDK_OFFSET(0x10A6DC50)
#define CLASS_1_F0A1A70ED6BE20B2_METHOD_1_4EC2E1ECDEE1B9F2_OFFSET UNITYSDK_OFFSET(0x10A6E700)
#define CLASS_1_F0A1A70ED6BE20B2_METHOD_1_6990AE4D09B03418_OFFSET UNITYSDK_OFFSET(0x10A6E790)
#define CLASS_1_F0A1A70ED6BE20B2_METHOD_1_9BB88030A7F69CE7_1_OFFSET UNITYSDK_OFFSET(0x10A6E180)
#define CLASS_1_F0A1A70ED6BE20B2_METHOD_1_9BB88030A7F69CE7_OFFSET UNITYSDK_OFFSET(0x10A6DB70)
#define CLASS_1_F0A1A70ED6BE20B2_METHOD_1_C62EDA7531C66CDE_1_OFFSET UNITYSDK_OFFSET(0x10A6E640)
#define CLASS_1_F0A1A70ED6BE20B2_METHOD_1_C62EDA7531C66CDE_OFFSET UNITYSDK_OFFSET(0x10A6E0C0)
#define CLASS_1_F0A1A70ED6BE20B2_METHOD_1_D9B0DB83645D9C63_OFFSET UNITYSDK_OFFSET(0x10A6E030)
#define CLASS_1_F0A1A70ED6BE20B2_SET_INHERITABILITYPROPERTRIES_OFFSET UNITYSDK_OFFSET(0x10A6DAC0)
#define CLASS_1_F0A1A70ED6BE20B2_SET_ISWOMANHERO_OFFSET UNITYSDK_OFFSET(0x10A6DA80)
#define CLASS_1_F0A1A70ED6BE20B2_SET_MASTERPROPERTYCALCULATOR_OFFSET UNITYSDK_OFFSET(0x10A6DB20)
#define CLASS_1_F0A1A70ED6BE20B2_SET_MASTERPROPERTYCONTEXT_OFFSET UNITYSDK_OFFSET(0x10A6DB00)
#define CLASS_1_F0A1A70ED6BE20B2_SET_MASTERSKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0x10A6DB40)
#define CLASS_1_F0A1A70ED6BE20B2_SET_PROPERTYREPOSITORY_OFFSET UNITYSDK_OFFSET(0x10A6DAE0)
#define CLASS_1_F0A1A70ED6BE20B2_SET_SERVANTSKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0x10A6DB60)
#define CLASS_1_F0A1A70ED6BE20B2_SET_SERVANT_OFFSET UNITYSDK_OFFSET(0x10A6DAA0)
#define CLASS_1_F0A1A70ED6BE20B2__CTOR_OFFSET UNITYSDK_OFFSET(0x10A6E7E0)

inline static constexpr unsigned int Class_1_F0A1A70ED6BE20B2_TypeDefinitionIndex = 49810;

class Class_1_F0A1A70ED6BE20B2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_343* _MasterPropertyCalculator_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_329* _ServantSkillLevelProvider_k__BackingField; // 0x18
	::Class_1_37676B2FB4322E20* _PropertyRepository_k__BackingField; // 0x20
	::RPG::AvatarSystem::AvatarServant* _Servant_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_322* _MasterPropertyContext_k__BackingField; // 0x30
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>* _InheritAbilityPropertries_k__BackingField; // 0x38
	::Class_0_16E4307DCC419505_329* _MasterSkillLevelProvider_k__BackingField; // 0x40
	::System::Boolean _IsWomanHero_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsWomanHero()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_GET_ISWOMANHERO_OFFSET))(this);
	}

	::System::Void set_IsWomanHero(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_SET_ISWOMANHERO_OFFSET))(this, value);
	}

	::RPG::AvatarSystem::AvatarServant* get_Servant()
	{
		return ((::RPG::AvatarSystem::AvatarServant*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_GET_SERVANT_OFFSET))(this);
	}

	::System::Void set_Servant(::RPG::AvatarSystem::AvatarServant* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarServant*))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_SET_SERVANT_OFFSET))(this, value);
	}

	::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>* get_InheritAbilityPropertries()
	{
		return ((::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_GET_INHERITABILITYPROPERTRIES_OFFSET))(this);
	}

	::System::Void set_InheritAbilityPropertries(::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>*))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_SET_INHERITABILITYPROPERTRIES_OFFSET))(this, value);
	}

	::Class_1_37676B2FB4322E20* get_PropertyRepository()
	{
		return ((::Class_1_37676B2FB4322E20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_GET_PROPERTYREPOSITORY_OFFSET))(this);
	}

	::System::Void set_PropertyRepository(::Class_1_37676B2FB4322E20* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_37676B2FB4322E20*))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_SET_PROPERTYREPOSITORY_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_322* get_MasterPropertyContext()
	{
		return ((::Class_0_16E4307DCC419505_322*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_GET_MASTERPROPERTYCONTEXT_OFFSET))(this);
	}

	::System::Void set_MasterPropertyContext(::Class_0_16E4307DCC419505_322* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_322*))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_SET_MASTERPROPERTYCONTEXT_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_343* get_MasterPropertyCalculator()
	{
		return ((::Class_0_16E4307DCC419505_343*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_GET_MASTERPROPERTYCALCULATOR_OFFSET))(this);
	}

	::System::Void set_MasterPropertyCalculator(::Class_0_16E4307DCC419505_343* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_343*))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_SET_MASTERPROPERTYCALCULATOR_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_329* get_MasterSkillLevelProvider()
	{
		return ((::Class_0_16E4307DCC419505_329*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_GET_MASTERSKILLLEVELPROVIDER_OFFSET))(this);
	}

	::System::Void set_MasterSkillLevelProvider(::Class_0_16E4307DCC419505_329* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_329*))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_SET_MASTERSKILLLEVELPROVIDER_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_329* get_ServantSkillLevelProvider()
	{
		return ((::Class_0_16E4307DCC419505_329*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_GET_SERVANTSKILLLEVELPROVIDER_OFFSET))(this);
	}

	::System::Void set_ServantSkillLevelProvider(::Class_0_16E4307DCC419505_329* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_329*))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_SET_SERVANTSKILLLEVELPROVIDER_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint Method_1_9BB88030A7F69CE7(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_METHOD_1_9BB88030A7F69CE7_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_9BB88030A7F69CE7_1(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_METHOD_1_9BB88030A7F69CE7_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_2D41FB6FE1BEE09A(::RPG::GameCore::AvatarPropertyType a1, ::System::String* a2, ::System::String* a3, ::System::UInt32 a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_METHOD_1_2D41FB6FE1BEE09A_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FixPoint Method_1_2D41FB6FE1BEE09A_1(::RPG::GameCore::AvatarPropertyType a1, ::System::String* a2, ::System::String* a3, ::System::UInt32 a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_METHOD_1_2D41FB6FE1BEE09A_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_4EC2E1ECDEE1B9F2(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_METHOD_1_4EC2E1ECDEE1B9F2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6990AE4D09B03418(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_METHOD_1_6990AE4D09B03418_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D9B0DB83645D9C63(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_METHOD_1_D9B0DB83645D9C63_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_C62EDA7531C66CDE(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_METHOD_1_C62EDA7531C66CDE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_C62EDA7531C66CDE_1(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_F0A1A70ED6BE20B2_METHOD_1_C62EDA7531C66CDE_1_OFFSET))(this, a1);
	}
};
