#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class TitanAtlasGroup; }
namespace RPG::Client { class TitanAtlasInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TITANATLASMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0C5680)
#define RPG_CLIENT_TITANATLASMODULE_GETALLBASEINFOS_OFFSET UNITYSDK_OFFSET(0xA0C5A50)
#define RPG_CLIENT_TITANATLASMODULE_GETALLGROUPS_OFFSET UNITYSDK_OFFSET(0xA0C56C0)
#define RPG_CLIENT_TITANATLASMODULE_GETALLINFOS_OFFSET UNITYSDK_OFFSET(0xA0C5880)
#define RPG_CLIENT_TITANATLASMODULE_GETALLNUM_OFFSET UNITYSDK_OFFSET(0xA0C5DB0)
#define RPG_CLIENT_TITANATLASMODULE_GETALLUNLOCKNUM_OFFSET UNITYSDK_OFFSET(0xA0C5C20)
#define RPG_CLIENT_TITANATLASMODULE_GETINITLOCATIONINDEX_OFFSET UNITYSDK_OFFSET(0xA0C6030)
#define RPG_CLIENT_TITANATLASMODULE_GET_LOCATIONGROUPINDEX_OFFSET UNITYSDK_OFFSET(0xA0C6400)
#define RPG_CLIENT_TITANATLASMODULE_GET_LOCATIONINDEX_OFFSET UNITYSDK_OFFSET(0xA0C6220)
#define RPG_CLIENT_TITANATLASMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA0C5580)
#define RPG_CLIENT_TITANATLASMODULE_NEEDSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xA0C6280)
#define RPG_CLIENT_TITANATLASMODULE_SETLOCATIONINDEX_OFFSET UNITYSDK_OFFSET(0xA0C5F70)
#define RPG_CLIENT_TITANATLASMODULE_SET_LOCATIONINDEX_OFFSET UNITYSDK_OFFSET(0xA0C5FC0)
#define RPG_CLIENT_TITANATLASMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA0C6490)
#define RPG_CLIENT_TITANATLASMODULE__INITDATA_OFFSET UNITYSDK_OFFSET(0xA0C5630)
#define RPG_CLIENT_TITANATLASMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0C6540)
#define RPG_CLIENT_TITANATLASMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA0C64B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TitanAtlasModule_TypeDefinitionIndex = 54071;

	class TitanAtlasModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasGroup*>* _TitanAtlasGroups; // 0x10
		::System::UInt32 GroupInfoNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasGroup*>* GetAllGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_GETALLGROUPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>* GetAllInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_GETALLINFOS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>* GetAllBaseInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_GETALLBASEINFOS_OFFSET))(this);
		}

		::System::UInt32 GetAllUnlockNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_GETALLUNLOCKNUM_OFFSET))(this);
		}

		::System::UInt32 GetAllNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_GETALLNUM_OFFSET))(this);
		}

		::System::Void SetLocationIndex(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_SETLOCATIONINDEX_OFFSET))(this, index);
		}

		::System::UInt32 GetInitLocationIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_GETINITLOCATIONINDEX_OFFSET))(this);
		}

		::System::Boolean NeedShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_NEEDSHOWREDDOT_OFFSET))(this);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE__INITDATA_OFFSET))(this);
		}

		::System::UInt32 get_LocationIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_GET_LOCATIONINDEX_OFFSET))(this);
		}

		::System::Void set_LocationIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_SET_LOCATIONINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_LocationGroupIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_GET_LOCATIONGROUPINDEX_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
