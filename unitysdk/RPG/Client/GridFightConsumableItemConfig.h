#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightConsumeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightItemConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x931D2B0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GET_CONSUMABLEDESC_OFFSET UNITYSDK_OFFSET(0x933D110)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GET_CONSUMABLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x933D0B0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GET_CONSUMABLERULE_OFFSET UNITYSDK_OFFSET(0x933D090)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GET_IFCONSUME_OFFSET UNITYSDK_OFFSET(0x933D0F0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GET_IFSTACK_OFFSET UNITYSDK_OFFSET(0x933D0D0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GET_ITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x933D070)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_SET_CONSUMABLEDESC_OFFSET UNITYSDK_OFFSET(0x933D120)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_SET_CONSUMABLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x933D0C0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_SET_CONSUMABLERULE_OFFSET UNITYSDK_OFFSET(0x933D0A0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_SET_IFCONSUME_OFFSET UNITYSDK_OFFSET(0x933D100)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_SET_IFSTACK_OFFSET UNITYSDK_OFFSET(0x933D0E0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_SET_ITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x933D080)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x933CF80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConsumableItemConfig_TypeDefinitionIndex = 51269;

	class GridFightConsumableItemConfig : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightConsumableItemConfig*>** StaticGet_GetItemConfigImpl()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightConsumableItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConsumableItemConfig_TypeDefinitionIndex)->GetStaticField(0x44110);
		}
		::RPG::Client::GridFightItemConfig* _ItemConfig_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _ConsumableParamList_k__BackingField; // 0x18
		::RPG::Client::TextID _ConsumableDesc_k__BackingField; // 0x20
		::System::Boolean _IfStack_k__BackingField; // 0x30
		::System::Boolean _IfConsume_k__BackingField; // 0x31
		::RPG::GameCore::GridFightConsumeType _ConsumableRule_k__BackingField; // 0x34

		::System::Void _ctor(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG__CTOR_OFFSET))(this, itemID);
		}

		static ::RPG::Client::GridFightConsumableItemConfig* GetConfig(::System::UInt32 itemID)
		{
			return ((::RPG::Client::GridFightConsumableItemConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GETCONFIG_OFFSET))(itemID);
		}

		::RPG::Client::GridFightItemConfig* get_ItemConfig()
		{
			return ((::RPG::Client::GridFightItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GET_ITEMCONFIG_OFFSET))(this);
		}

		::System::Void set_ItemConfig(::RPG::Client::GridFightItemConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_SET_ITEMCONFIG_OFFSET))(this, value);
		}

		::RPG::GameCore::GridFightConsumeType get_ConsumableRule()
		{
			return ((::RPG::GameCore::GridFightConsumeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GET_CONSUMABLERULE_OFFSET))(this);
		}

		::System::Void set_ConsumableRule(::RPG::GameCore::GridFightConsumeType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightConsumeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_SET_CONSUMABLERULE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_ConsumableParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GET_CONSUMABLEPARAMLIST_OFFSET))(this);
		}

		::System::Void set_ConsumableParamList(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_SET_CONSUMABLEPARAMLIST_OFFSET))(this, value);
		}

		::System::Boolean get_IfStack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GET_IFSTACK_OFFSET))(this);
		}

		::System::Void set_IfStack(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_SET_IFSTACK_OFFSET))(this, value);
		}

		::System::Boolean get_IfConsume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GET_IFCONSUME_OFFSET))(this);
		}

		::System::Void set_IfConsume(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_SET_IFCONSUME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_ConsumableDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GET_CONSUMABLEDESC_OFFSET))(this);
		}

		::System::Void set_ConsumableDesc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_SET_CONSUMABLEDESC_OFFSET))(this, value);
		}
	};
}
