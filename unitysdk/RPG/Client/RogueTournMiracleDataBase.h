#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_412DDC84C44F8B4B;
namespace RPG::Client { class IRogueMiracleLegacyDisplayRow; }
namespace RPG::Client { class RogueTournUnderlineParamInfo; }
namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace RPG::GameCore { class RogueMiracleEffectRow; }
namespace RPG::GameCore { class RogueTournMiracleRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GETDESCUNDERLINEPARAMINFO_OFFSET UNITYSDK_OFFSET(0x17561A40)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x175619B0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x17561AC0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0x17561C30)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEBGDESC_OFFSET UNITYSDK_OFFSET(0x17561B20)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEDESC_OFFSET UNITYSDK_OFFSET(0x17561B80)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0x17561B60)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEICONPATH_OFFSET UNITYSDK_OFFSET(0x17561B40)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEID_OFFSET UNITYSDK_OFFSET(0x17561AA0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLENAME_OFFSET UNITYSDK_OFFSET(0x17561B00)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0x17561AE0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x17561AD0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0x17561C40)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLEBGDESC_OFFSET UNITYSDK_OFFSET(0x17561B30)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLEFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0x17561B70)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLEICONPATH_OFFSET UNITYSDK_OFFSET(0x17561B50)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLEID_OFFSET UNITYSDK_OFFSET(0x17561AB0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLENAME_OFFSET UNITYSDK_OFFSET(0x17561B10)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0x17561AF0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x175619F0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17561390)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE__INITFROMEXCEL_OFFSET UNITYSDK_OFFSET(0x17561520)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE__INITFROMROWS_OFFSET UNITYSDK_OFFSET(0x17557500)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17561C50)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17561C60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournMiracleDataBase_TypeDefinitionIndex = 62384;

	class RogueTournMiracleDataBase : public ::System::Object
	{
	public:
		::RPG::Client::IRogueMiracleLegacyDisplayRow* _DisplayRow_k__BackingField; // 0x10
		::System::String* _MiracleIconPath_k__BackingField; // 0x18
		::System::String* _MiracleFigureIconPath_k__BackingField; // 0x20
		::Class_1_412DDC84C44F8B4B* _MiracleDesc; // 0x28
		::System::UInt32 _MiracleID_k__BackingField; // 0x30
		::RPG::Client::TextID _MiracleName_k__BackingField; // 0x38
		::RPG::GameCore::RogueTournMode _TournMode_k__BackingField; // 0x48
		::RPG::GameCore::RogueMiracleCategory _Category_k__BackingField; // 0x4C
		::RPG::Client::TextID _MiracleBGDesc_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE__CTOR_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean _InitFromExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE__INITFROMEXCEL_OFFSET))(this);
		}

		::System::Void _InitFromRows(::RPG::GameCore::RogueTournMiracleRow* miracleRow, ::RPG::GameCore::RogueMiracleDisplayRow* displayRow, ::RPG::GameCore::RogueMiracleEffectRow* effectRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMiracleRow*, ::RPG::GameCore::RogueMiracleDisplayRow*, ::RPG::GameCore::RogueMiracleEffectRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE__INITFROMROWS_OFFSET))(this, miracleRow, displayRow, effectRow);
		}

		::RPG::Client::RogueTournUnderlineParamInfo* GetDescUnderlineParamInfo()
		{
			return ((::RPG::Client::RogueTournUnderlineParamInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GETDESCUNDERLINEPARAMINFO_OFFSET))(this);
		}

		::System::UInt32 get_MiracleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEID_OFFSET))(this);
		}

		::System::Void set_MiracleID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLEID_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueMiracleCategory get_Category()
		{
			return ((::RPG::GameCore::RogueMiracleCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_Category(::RPG::GameCore::RogueMiracleCategory value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMiracleCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_CATEGORY_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_TOURNMODE_OFFSET))(this);
		}

		::System::Void set_TournMode(::RPG::GameCore::RogueTournMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_TOURNMODE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_MiracleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLENAME_OFFSET))(this);
		}

		::System::Void set_MiracleName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLENAME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_MiracleBGDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEBGDESC_OFFSET))(this);
		}

		::System::Void set_MiracleBGDesc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLEBGDESC_OFFSET))(this, value);
		}

		::System::String* get_MiracleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEICONPATH_OFFSET))(this);
		}

		::System::Void set_MiracleIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLEICONPATH_OFFSET))(this, value);
		}

		::System::String* get_MiracleFigureIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEFIGUREICONPATH_OFFSET))(this);
		}

		::System::Void set_MiracleFigureIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLEFIGUREICONPATH_OFFSET))(this, value);
		}

		::System::String* get_MiracleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEDESC_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracleLegacyDisplayRow* get_DisplayRow()
		{
			return ((::RPG::Client::IRogueMiracleLegacyDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_DISPLAYROW_OFFSET))(this);
		}

		::System::Void set_DisplayRow(::RPG::Client::IRogueMiracleLegacyDisplayRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueMiracleLegacyDisplayRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_DISPLAYROW_OFFSET))(this, value);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
