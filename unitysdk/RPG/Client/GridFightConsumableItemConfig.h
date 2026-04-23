#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightConsumeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightItemConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1803DE50)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GET_CONSUMABLEDESC_OFFSET UNITYSDK_OFFSET(0x1803E040)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GET_CONSUMABLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1803DFE0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GET_CONSUMABLERULE_OFFSET UNITYSDK_OFFSET(0x1803DFC0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GET_IFCONSUME_OFFSET UNITYSDK_OFFSET(0x1803E020)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GET_IFSTACK_OFFSET UNITYSDK_OFFSET(0x1803E000)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_GET_ITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x1803DFA0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_SET_CONSUMABLEDESC_OFFSET UNITYSDK_OFFSET(0x1803E050)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_SET_CONSUMABLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1803DFF0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_SET_CONSUMABLERULE_OFFSET UNITYSDK_OFFSET(0x1803DFD0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_SET_IFCONSUME_OFFSET UNITYSDK_OFFSET(0x1803E030)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_SET_IFSTACK_OFFSET UNITYSDK_OFFSET(0x1803E010)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG_SET_ITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x1803DFB0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1803DEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConsumableItemConfig_TypeDefinitionIndex = 59359;

	class GridFightConsumableItemConfig : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightConsumableItemConfig*>** StaticGet_GetItemConfigImpl()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightConsumableItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConsumableItemConfig_TypeDefinitionIndex)->GetStaticField(0x1F630);
		}
		::Il2CppArray<::System::UInt32>* _ConsumableParamList_k__BackingField; // 0x10
		::RPG::Client::GridFightItemConfig* _ItemConfig_k__BackingField; // 0x18
		::RPG::GameCore::GridFightConsumeType _ConsumableRule_k__BackingField; // 0x20
		::System::Boolean _IfConsume_k__BackingField; // 0x24
		::System::Boolean _IfStack_k__BackingField; // 0x25
		::RPG::Client::TextID _ConsumableDesc_k__BackingField; // 0x28

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
