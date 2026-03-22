#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_663;
class Class_1_2886F3D0C1CF5D4B_1;
class Class_1_F0E477502B416CE8;
namespace RPG::Client { class IRogueMiracleLegacyDisplayRow; }
namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace RPG::GameCore { class RogueMiracleEffectDisplayRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMIRACLEDATA_CREATEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x9E21BE0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9E21B60)
#define RPG_CLIENT_ROGUEMIRACLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9E21AD0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GETEXTRAEFFECTROWIDS_OFFSET UNITYSDK_OFFSET(0x9E22270)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9E22150)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x9E22470)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0x9E21C60)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_EXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0x9E222C0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_ISBROKEN_OFFSET UNITYSDK_OFFSET(0x9E22CB0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEBGDESC_OFFSET UNITYSDK_OFFSET(0x9E226C0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEDESC_OFFSET UNITYSDK_OFFSET(0x9E228F0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0x9E22840)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEICONPATH_OFFSET UNITYSDK_OFFSET(0x9E22790)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEID_OFFSET UNITYSDK_OFFSET(0x9E22450)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLENAME_OFFSET UNITYSDK_OFFSET(0x9E225F0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLESIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x9E22AB0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x9E22C90)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0x9E22530)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_USECOUNT_OFFSET UNITYSDK_OFFSET(0x9E22C70)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET__DISPLAYROW_OFFSET UNITYSDK_OFFSET(0x9E22370)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET__EFFECTDISPLAYROW_OFFSET UNITYSDK_OFFSET(0x9E223E0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET__MIRACLEDISPLAYID_OFFSET UNITYSDK_OFFSET(0x9E21CE0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET__MIRACLEEFFECTDISPLAYID_OFFSET UNITYSDK_OFFSET(0x9E21DB0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_ISMIRACLEEXISTS_OFFSET UNITYSDK_OFFSET(0x9E21880)
#define RPG_CLIENT_ROGUEMIRACLEDATA_REFRESH_1_OFFSET UNITYSDK_OFFSET(0x9E22200)
#define RPG_CLIENT_ROGUEMIRACLEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x9E22190)
#define RPG_CLIENT_ROGUEMIRACLEDATA_SET_MIRACLEID_OFFSET UNITYSDK_OFFSET(0x9E22460)
#define RPG_CLIENT_ROGUEMIRACLEDATA_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x9E22CA0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_SET_USECOUNT_OFFSET UNITYSDK_OFFSET(0x9E22C80)
#define RPG_CLIENT_ROGUEMIRACLEDATA__CREATEROWWRAP_OFFSET UNITYSDK_OFFSET(0x9E219C0)
#define RPG_CLIENT_ROGUEMIRACLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E21B50)
#define RPG_CLIENT_ROGUEMIRACLEDATA__REFRESH_OFFSET UNITYSDK_OFFSET(0x9E21EA0)
#define RPG_CLIENT_ROGUEMIRACLEDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9E22D00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleData_TypeDefinitionIndex = 53459;

	class RogueMiracleData : public ::System::Object
	{
	public:
		::RPG::Client::IRogueMiracleLegacyDisplayRow* _LegacyDisplayRowWrap; // 0x10
		::Class_0_16E4307DCC419505_663* _Row; // 0x18
		::System::UInt32 _UseCount_k__BackingField; // 0x20
		::System::UInt32 _TotalCount_k__BackingField; // 0x24
		::System::UInt32 _MiracleID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 miracleID, ::System::UInt32 useCount, ::System::UInt32 totalCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA__CTOR_OFFSET))(this, miracleID, useCount, totalCount);
		}

		static ::System::Boolean IsMiracleExists(::System::UInt32 miracleID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_ISMIRACLEEXISTS_OFFSET))(miracleID);
		}

		static ::RPG::Client::RogueMiracleData* Create(::Class_1_F0E477502B416CE8* proto)
		{
			return ((::RPG::Client::RogueMiracleData*(*)(::Class_1_F0E477502B416CE8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_CREATE_OFFSET))(proto);
		}

		static ::RPG::Client::RogueMiracleData* Create_1(::Class_1_2886F3D0C1CF5D4B_1* proto)
		{
			return ((::RPG::Client::RogueMiracleData*(*)(::Class_1_2886F3D0C1CF5D4B_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_CREATE_1_OFFSET))(proto);
		}

		static ::RPG::Client::RogueMiracleData* CreateDisplayData(::System::UInt32 miracleID, ::System::Boolean isBroken)
		{
			return ((::RPG::Client::RogueMiracleData*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_CREATEDISPLAYDATA_OFFSET))(miracleID, isBroken);
		}

		::RPG::Client::IRogueMiracleLegacyDisplayRow* get_DisplayRow()
		{
			return ((::RPG::Client::IRogueMiracleLegacyDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_DISPLAYROW_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::Void Refresh(::Class_1_F0E477502B416CE8* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0E477502B416CE8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_REFRESH_OFFSET))(this, proto);
		}

		::System::Void Refresh_1(::Class_1_2886F3D0C1CF5D4B_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2886F3D0C1CF5D4B_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_REFRESH_1_OFFSET))(this, proto);
		}

		::Il2CppArray<::System::UInt32>* GetExtraEffectRowIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GETEXTRAEFFECTROWIDS_OFFSET))(this);
		}

		::System::Void _Refresh(::System::UInt32 miracleID, ::System::UInt32 useCount, ::System::UInt32 totalCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA__REFRESH_OFFSET))(this, miracleID, useCount, totalCount);
		}

		static ::Class_0_16E4307DCC419505_663* _CreateRowWrap(::System::UInt32 miracleID)
		{
			return ((::Class_0_16E4307DCC419505_663*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA__CREATEROWWRAP_OFFSET))(miracleID);
		}

		::System::UInt32 get_MiracleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEID_OFFSET))(this);
		}

		::System::Void set_MiracleID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_SET_MIRACLEID_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueMiracleCategory get_Category()
		{
			return ((::RPG::GameCore::RogueMiracleCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_CATEGORY_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_TOURNMODE_OFFSET))(this);
		}

		::RPG::Client::TextID get_MiracleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_MiracleBGDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEBGDESC_OFFSET))(this);
		}

		::System::String* get_MiracleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEICONPATH_OFFSET))(this);
		}

		::System::String* get_MiracleFigureIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEFIGUREICONPATH_OFFSET))(this);
		}

		::System::String* get_MiracleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEDESC_OFFSET))(this);
		}

		::System::String* get_MiracleSimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLESIMPLEDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_EXTRAEFFECTIDS_OFFSET))(this);
		}

		::System::UInt32 get_UseCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_USECOUNT_OFFSET))(this);
		}

		::System::Void set_UseCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_SET_USECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_SET_TOTALCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsBroken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_ISBROKEN_OFFSET))(this);
		}

		::System::UInt32 get__MiracleDisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET__MIRACLEDISPLAYID_OFFSET))(this);
		}

		::RPG::GameCore::RogueMiracleDisplayRow* get__DisplayRow()
		{
			return ((::RPG::GameCore::RogueMiracleDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET__DISPLAYROW_OFFSET))(this);
		}

		::System::UInt32 get__MiracleEffectDisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET__MIRACLEEFFECTDISPLAYID_OFFSET))(this);
		}

		::RPG::GameCore::RogueMiracleEffectDisplayRow* get__EffectDisplayRow()
		{
			return ((::RPG::GameCore::RogueMiracleEffectDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET__EFFECTDISPLAYROW_OFFSET))(this);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
