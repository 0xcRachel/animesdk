#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CakeRaceBattleItemUseType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceBattleItemRow; }
namespace System { class String; }

#define RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x185EEA00)
#define RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x185EECA0)
#define RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x185EED80)
#define RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_GET_INVALIDICONPATH_OFFSET UNITYSDK_OFFSET(0x185EEE30)
#define RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x185EEB50)
#define RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x185EEB60)
#define RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_GET_USEHINT_OFFSET UNITYSDK_OFFSET(0x185EEEE0)
#define RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x185EEC40)
#define RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_GET__USETYPE_OFFSET UNITYSDK_OFFSET(0x185EEAB0)
#define RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_ISCATUSETYPE_OFFSET UNITYSDK_OFFSET(0x185EEA60)
#define RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x185EEA50)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceBattleItemDataItem_TypeDefinitionIndex = 58946;

	class CakeRaceBattleItemDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _ItemID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRaceBattleItemDataItem* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeRaceBattleItemDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_CREATE_OFFSET))(a1);
		}

		::System::Boolean IsCatUseType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_ISCATUSETYPE_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_GET_ITEMID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_GET_DESC_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_InvalidIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_GET_INVALIDICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_UseHint()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_GET_USEHINT_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceBattleItemUseType get__UseType()
		{
			return ((::RPG::GameCore::CakeRaceBattleItemUseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_GET__USETYPE_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceBattleItemRow* get__Row()
		{
			return ((::RPG::GameCore::CakeRaceBattleItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMDATAITEM_GET__ROW_OFFSET))(this);
		}
	};
}
