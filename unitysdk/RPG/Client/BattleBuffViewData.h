#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEBUFFVIEWDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xF3B8240)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFCURRENTLIFE_OFFSET UNITYSDK_OFFSET(0xF3B8740)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFDESC_OFFSET UNITYSDK_OFFSET(0xF3B8700)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFICONPATH_OFFSET UNITYSDK_OFFSET(0xF3B8720)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0xF3B86E0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFTYPE_OFFSET UNITYSDK_OFFSET(0xF3B87A0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_ISSHOWNUM_OFFSET UNITYSDK_OFFSET(0xF3B8760)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_SHOWNUM_OFFSET UNITYSDK_OFFSET(0xF3B8780)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFCURRENTLIFE_OFFSET UNITYSDK_OFFSET(0xF3B8750)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFDESC_OFFSET UNITYSDK_OFFSET(0xF3B8710)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFICONPATH_OFFSET UNITYSDK_OFFSET(0xF3B8730)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0xF3B86F0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFTYPE_OFFSET UNITYSDK_OFFSET(0xF3B87B0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_ISSHOWNUM_OFFSET UNITYSDK_OFFSET(0xF3B8770)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_SHOWNUM_OFFSET UNITYSDK_OFFSET(0xF3B8790)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF3B82C0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA__GETBUFFDESC_OFFSET UNITYSDK_OFFSET(0xF3B8490)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA__GETBUFFSHOWNUM_OFFSET UNITYSDK_OFFSET(0xF3B8620)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleBuffViewData_TypeDefinitionIndex = 65917;

	class BattleBuffViewData : public ::System::Object
	{
	public:
		::System::String* _BuffIconPath_k__BackingField; // 0x10
		::System::String* _BuffDesc_k__BackingField; // 0x18
		::System::String* _BuffName_k__BackingField; // 0x20
		::System::Int32 _BuffCurrentLife_k__BackingField; // 0x28
		::RPG::GameCore::EnumStatusType _BuffType_k__BackingField; // 0x2C
		::System::Boolean _IsShowNum_k__BackingField; // 0x30
		::System::Int32 _ShowNum_k__BackingField; // 0x34

		::System::Void _ctor(::RPG::GameCore::TurnBasedModifierInstance* modifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA__CTOR_OFFSET))(this, modifier);
		}

		static ::RPG::Client::BattleBuffViewData* Create(::RPG::GameCore::TurnBasedModifierInstance* modifier)
		{
			return ((::RPG::Client::BattleBuffViewData*(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_CREATE_OFFSET))(modifier);
		}

		::System::String* _GetBuffDesc(::RPG::GameCore::TurnBasedModifierInstance* modifier, ::RPG::GameCore::StatusRow* config)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA__GETBUFFDESC_OFFSET))(this, modifier, config);
		}

		::System::Int32 _GetBuffShowNum(::RPG::GameCore::TurnBasedModifierInstance* modifier)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA__GETBUFFSHOWNUM_OFFSET))(this, modifier);
		}

		::System::String* get_BuffName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFNAME_OFFSET))(this);
		}

		::System::Void set_BuffName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFNAME_OFFSET))(this, value);
		}

		::System::String* get_BuffDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFDESC_OFFSET))(this);
		}

		::System::Void set_BuffDesc(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFDESC_OFFSET))(this, value);
		}

		::System::String* get_BuffIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFICONPATH_OFFSET))(this);
		}

		::System::Void set_BuffIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFICONPATH_OFFSET))(this, value);
		}

		::System::Int32 get_BuffCurrentLife()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFCURRENTLIFE_OFFSET))(this);
		}

		::System::Void set_BuffCurrentLife(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFCURRENTLIFE_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowNum()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_ISSHOWNUM_OFFSET))(this);
		}

		::System::Void set_IsShowNum(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_ISSHOWNUM_OFFSET))(this, value);
		}

		::System::Int32 get_ShowNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_SHOWNUM_OFFSET))(this);
		}

		::System::Void set_ShowNum(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_SHOWNUM_OFFSET))(this, value);
		}

		::RPG::GameCore::EnumStatusType get_BuffType()
		{
			return ((::RPG::GameCore::EnumStatusType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFTYPE_OFFSET))(this);
		}

		::System::Void set_BuffType(::RPG::GameCore::EnumStatusType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFTYPE_OFFSET))(this, value);
		}
	};
}
