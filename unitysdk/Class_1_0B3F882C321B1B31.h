#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_341;
class Class_0_16E4307DCC419505_342;
class Class_0_16E4307DCC419505_350;
class Class_0_16E4307DCC419505_351;
class Class_1_090AB0EAA610410E;
namespace RPG::AvatarSystem { template <typename T> class IPropertyModifierBuilder_1; }
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0B3F882C321B1B31_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x116AC700)
#define CLASS_1_0B3F882C321B1B31_GETMODIFIER_OFFSET UNITYSDK_OFFSET(0x116ACC20)
#define CLASS_1_0B3F882C321B1B31_GET_EXTRAADDITIONPROVIDER_OFFSET UNITYSDK_OFFSET(0x116AC310)
#define CLASS_1_0B3F882C321B1B31_GET_MODIFIERBUILDER_OFFSET UNITYSDK_OFFSET(0x116AC330)
#define CLASS_1_0B3F882C321B1B31_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x116AC3A0)
#define CLASS_1_0B3F882C321B1B31_METHOD_1_3A328C770A71430D_OFFSET UNITYSDK_OFFSET(0x116AC9A0)
#define CLASS_1_0B3F882C321B1B31_METHOD_1_6A672A653B683549_OFFSET UNITYSDK_OFFSET(0x116AC930)
#define CLASS_1_0B3F882C321B1B31_METHOD_1_8EB1DC19791B0786_OFFSET UNITYSDK_OFFSET(0x116ACA00)
#define CLASS_1_0B3F882C321B1B31_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x116AC350)
#define CLASS_1_0B3F882C321B1B31_SET_EXTRAADDITIONPROVIDER_OFFSET UNITYSDK_OFFSET(0x116AC320)
#define CLASS_1_0B3F882C321B1B31_SET_MODIFIERBUILDER_OFFSET UNITYSDK_OFFSET(0x116AC340)
#define CLASS_1_0B3F882C321B1B31__CTOR_OFFSET UNITYSDK_OFFSET(0x116ACD90)

inline static constexpr unsigned int Class_1_0B3F882C321B1B31_TypeDefinitionIndex = 41966;

class Class_1_0B3F882C321B1B31 : public ::System::Object
{
public:
	::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>* _ModifierBuilder_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_350* _ExtraAdditionProvider_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_342*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3F882C321B1B31__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_350* get_ExtraAdditionProvider()
	{
		return ((::Class_0_16E4307DCC419505_350*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3F882C321B1B31_GET_EXTRAADDITIONPROVIDER_OFFSET))(this);
	}

	::System::Void set_ExtraAdditionProvider(::Class_0_16E4307DCC419505_350* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_350*))((::PBYTE)hIl2Cpp + CLASS_1_0B3F882C321B1B31_SET_EXTRAADDITIONPROVIDER_OFFSET))(this, value);
	}

	::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>* get_ModifierBuilder()
	{
		return ((::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3F882C321B1B31_GET_MODIFIERBUILDER_OFFSET))(this);
	}

	::System::Void set_ModifierBuilder(::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_0B3F882C321B1B31_SET_MODIFIERBUILDER_OFFSET))(this, value);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3F882C321B1B31_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void ImportProfile(::Class_1_090AB0EAA610410E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + CLASS_1_0B3F882C321B1B31_IMPORTPROFILE_OFFSET))(this, a1);
	}

	::System::Void ExportProfile(::Class_0_16E4307DCC419505_341* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_341*))((::PBYTE)hIl2Cpp + CLASS_1_0B3F882C321B1B31_EXPORTPROFILE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_342*>* Method_1_6A672A653B683549()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_342*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3F882C321B1B31_METHOD_1_6A672A653B683549_OFFSET))(this);
	}

	::System::Boolean Method_1_3A328C770A71430D(::RPG::GameCore::RelicType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_1_0B3F882C321B1B31_METHOD_1_3A328C770A71430D_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_342* Method_1_8EB1DC19791B0786(::RPG::GameCore::RelicType a1)
	{
		return ((::Class_0_16E4307DCC419505_342*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_1_0B3F882C321B1B31_METHOD_1_8EB1DC19791B0786_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* GetModifier(::Class_0_16E4307DCC419505_351* a1)
	{
		return ((::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Class_0_16E4307DCC419505_351*))((::PBYTE)hIl2Cpp + CLASS_1_0B3F882C321B1B31_GETMODIFIER_OFFSET))(this, a1);
	}
};
