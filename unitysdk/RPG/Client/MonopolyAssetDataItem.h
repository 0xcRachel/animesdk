#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_70;
namespace RPG::Client { class MonopolyAssetWrapper; }
namespace System { class String; }

#define RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_ASSETDESC_OFFSET UNITYSDK_OFFSET(0x175EF2B0)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x175EF210)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_DISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x175EF350)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0x175EF190)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_HASNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0x175EF120)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0x175EF0D0)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_ISOWNEDBYPLAYER_OFFSET UNITYSDK_OFFSET(0x175EF110)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x175EF0F0)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_TOTALPROFIT_OFFSET UNITYSDK_OFFSET(0x175EF3F0)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_MODIFY_OFFSET UNITYSDK_OFFSET(0x175EF080)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0x175EF0E0)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x175EF100)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_SET_TOTALPROFIT_OFFSET UNITYSDK_OFFSET(0x175EF400)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0x175EEFE0)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x175EEFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyAssetDataItem_TypeDefinitionIndex = 60969;

	class MonopolyAssetDataItem : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _INITLEVEL = 0x1; // 0x0
		::RPG::Client::MonopolyAssetWrapper* _NextDisplayData; // 0x10
		::RPG::Client::MonopolyAssetWrapper* _CurDisplayData; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::UInt32 _Level_k__BackingField; // 0x24
		::System::UInt32 _TotalProfit_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM__CTOR_OFFSET))(this, id);
		}

		::System::Void Sync(::Class_1_D1E0AD3915BCCF29_70* asset)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_70*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_SYNC_OFFSET))(this, asset);
		}

		::System::Void Modify(::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_MODIFY_OFFSET))(this, level);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_IsOwnedByPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_ISOWNEDBYPLAYER_OFFSET))(this);
		}

		::System::Boolean get_HasNextLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_HASNEXTLEVEL_OFFSET))(this);
		}

		::System::String* get_FigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_FIGUREPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_AssetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_ASSETNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_AssetDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_ASSETDESC_OFFSET))(this);
		}

		::RPG::Client::MonopolyAssetWrapper* get_DisplayData()
		{
			return ((::RPG::Client::MonopolyAssetWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_DISPLAYDATA_OFFSET))(this);
		}

		::System::UInt32 get_TotalProfit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_TOTALPROFIT_OFFSET))(this);
		}

		::System::Void set_TotalProfit(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_SET_TOTALPROFIT_OFFSET))(this, value);
		}
	};
}
