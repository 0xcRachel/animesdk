#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3D47BC6DE43C43F3_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xEC02970)
#define CLASS_1_3D47BC6DE43C43F3_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0xEC029D0)
#define CLASS_1_3D47BC6DE43C43F3_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xEC02990)
#define CLASS_1_3D47BC6DE43C43F3_GET_PROPERTYDESC_OFFSET UNITYSDK_OFFSET(0xEC02950)
#define CLASS_1_3D47BC6DE43C43F3_GET_PROPERTYFACTORCONFIGS_OFFSET UNITYSDK_OFFSET(0xEC029B0)
#define CLASS_1_3D47BC6DE43C43F3_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xEC02930)
#define CLASS_1_3D47BC6DE43C43F3_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xEC02910)
#define CLASS_1_3D47BC6DE43C43F3_METHOD_1_296EFCE37BFFBD85_OFFSET UNITYSDK_OFFSET(0xEC02400)
#define CLASS_1_3D47BC6DE43C43F3_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xEC02980)
#define CLASS_1_3D47BC6DE43C43F3_SET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0xEC029E0)
#define CLASS_1_3D47BC6DE43C43F3_SET_ORDER_OFFSET UNITYSDK_OFFSET(0xEC029A0)
#define CLASS_1_3D47BC6DE43C43F3_SET_PROPERTYDESC_OFFSET UNITYSDK_OFFSET(0xEC02960)
#define CLASS_1_3D47BC6DE43C43F3_SET_PROPERTYFACTORCONFIGS_OFFSET UNITYSDK_OFFSET(0xEC029C0)
#define CLASS_1_3D47BC6DE43C43F3_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xEC02940)
#define CLASS_1_3D47BC6DE43C43F3_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xEC02920)
#define CLASS_1_3D47BC6DE43C43F3__CTOR_OFFSET UNITYSDK_OFFSET(0xEC02900)

inline static constexpr unsigned int Class_1_3D47BC6DE43C43F3_TypeDefinitionIndex = 43979;

class Class_1_3D47BC6DE43C43F3 : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* _PropertyFactorConfigs_k__BackingField; // 0x18
	::System::Boolean _IsDisplay_k__BackingField; // 0x20
	::RPG::Client::TextID _PropertyDesc_k__BackingField; // 0x28
	::System::Int32 _Order_k__BackingField; // 0x38
	::RPG::GameCore::IdleLiveAvatarPropertyType _PropertyType_k__BackingField; // 0x3C
	::RPG::Client::TextID _PropertyName_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D47BC6DE43C43F3__CTOR_OFFSET))(this);
	}

	static ::Class_1_3D47BC6DE43C43F3* Method_1_296EFCE37BFFBD85(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
	{
		return ((::Class_1_3D47BC6DE43C43F3*(*)(::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_3D47BC6DE43C43F3_METHOD_1_296EFCE37BFFBD85_OFFSET))(a1);
	}

	::RPG::GameCore::IdleLiveAvatarPropertyType get_PropertyType()
	{
		return ((::RPG::GameCore::IdleLiveAvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D47BC6DE43C43F3_GET_PROPERTYTYPE_OFFSET))(this);
	}

	::System::Void set_PropertyType(::RPG::GameCore::IdleLiveAvatarPropertyType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_3D47BC6DE43C43F3_SET_PROPERTYTYPE_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_PropertyName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D47BC6DE43C43F3_GET_PROPERTYNAME_OFFSET))(this);
	}

	::System::Void set_PropertyName(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_3D47BC6DE43C43F3_SET_PROPERTYNAME_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_PropertyDesc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D47BC6DE43C43F3_GET_PROPERTYDESC_OFFSET))(this);
	}

	::System::Void set_PropertyDesc(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_3D47BC6DE43C43F3_SET_PROPERTYDESC_OFFSET))(this, value);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D47BC6DE43C43F3_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3D47BC6DE43C43F3_SET_ICONPATH_OFFSET))(this, value);
	}

	::System::Int32 get_Order()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D47BC6DE43C43F3_GET_ORDER_OFFSET))(this);
	}

	::System::Void set_Order(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3D47BC6DE43C43F3_SET_ORDER_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* get_PropertyFactorConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D47BC6DE43C43F3_GET_PROPERTYFACTORCONFIGS_OFFSET))(this);
	}

	::System::Void set_PropertyFactorConfigs(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + CLASS_1_3D47BC6DE43C43F3_SET_PROPERTYFACTORCONFIGS_OFFSET))(this, value);
	}

	::System::Boolean get_IsDisplay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D47BC6DE43C43F3_GET_ISDISPLAY_OFFSET))(this);
	}

	::System::Void set_IsDisplay(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3D47BC6DE43C43F3_SET_ISDISPLAY_OFFSET))(this, value);
	}
};
