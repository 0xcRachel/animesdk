#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x93E4DD0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_DETAILPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x93E5420)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_EXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0x93E54C0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x93E5440)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x93E5480)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISGRIDFIGHTONLY_OFFSET UNITYSDK_OFFSET(0x93E53E0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x93E5460)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x93E54A0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x93E5400)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x93E53C0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_DETAILPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x93E5430)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_EXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0x93E54D0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x93E5450)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x93E5490)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISGRIDFIGHTONLY_OFFSET UNITYSDK_OFFSET(0x93E53F0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x93E5470)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x93E54B0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x93E5410)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x93E53D0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x93E52E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRolePropertyConfig_TypeDefinitionIndex = 51290;

	class GridFightRolePropertyConfig : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::AvatarPropertyType, ::RPG::Client::GridFightRolePropertyConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_2<::RPG::GameCore::AvatarPropertyType, ::RPG::Client::GridFightRolePropertyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRolePropertyConfig_TypeDefinitionIndex)->GetStaticField(0x89A0);
		}
		::System::String* _MiniIconPath_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::RPG::Client::TextID _DetailPropertyName_k__BackingField; // 0x20
		::System::UInt32 _ExtraEffectID_k__BackingField; // 0x30
		::System::UInt32 _Order_k__BackingField; // 0x34
		::RPG::Client::TextID _PropertyName_k__BackingField; // 0x38
		::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x48
		::System::Boolean _IsGridFightOnly_k__BackingField; // 0x4C
		::System::Boolean _IsDisplay_k__BackingField; // 0x4D

		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG__CTOR_OFFSET))(this, propertyType);
		}

		static ::RPG::Client::GridFightRolePropertyConfig* GetConfig(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::RPG::Client::GridFightRolePropertyConfig*(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GETCONFIG_OFFSET))(propertyType);
		}

		::RPG::GameCore::AvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsGridFightOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISGRIDFIGHTONLY_OFFSET))(this);
		}

		::System::Void set_IsGridFightOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISGRIDFIGHTONLY_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_PropertyName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_PropertyName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYNAME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_DetailPropertyName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_DETAILPROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_DetailPropertyName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_DETAILPROPERTYNAME_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ICONPATH_OFFSET))(this, value);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::Void set_MiniIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_MINIICONPATH_OFFSET))(this, value);
		}

		::System::Boolean get_IsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISDISPLAY_OFFSET))(this);
		}

		::System::Void set_IsDisplay(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISDISPLAY_OFFSET))(this, value);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ORDER_OFFSET))(this, value);
		}

		::System::UInt32 get_ExtraEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_EXTRAEFFECTID_OFFSET))(this);
		}

		::System::Void set_ExtraEffectID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_EXTRAEFFECTID_OFFSET))(this, value);
		}
	};
}
