#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightSelectEnhanceRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x9423170)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_COST_OFFSET UNITYSDK_OFFSET(0x9423420)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9423440)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x94234A0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x94233E0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9423460)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x9423480)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_TRAITEFFECTID_OFFSET UNITYSDK_OFFSET(0x9423400)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_COST_OFFSET UNITYSDK_OFFSET(0x9423430)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_DESC_OFFSET UNITYSDK_OFFSET(0x9423450)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x94234B0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0x94233F0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9423470)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x9423490)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_TRAITEFFECTID_OFFSET UNITYSDK_OFFSET(0x9423410)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x94233D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEffectEnhanceSelectConfig_TypeDefinitionIndex = 51998;

	class GridFightTraitEffectEnhanceSelectConfig : public ::System::Object
	{
	public:
		::System::String* _Desc_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::System::String* _SimpleDesc_k__BackingField; // 0x20
		::System::String* _Name_k__BackingField; // 0x28
		::System::UInt32 _Cost_k__BackingField; // 0x30
		::System::UInt32 _TraitEffectID_k__BackingField; // 0x34
		::System::UInt32 _ID_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightTraitEffectEnhanceSelectConfig* Create(::RPG::GameCore::GridFightSelectEnhanceRow* row)
		{
			return ((::RPG::Client::GridFightTraitEffectEnhanceSelectConfig*(*)(::RPG::GameCore::GridFightSelectEnhanceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_CREATE_OFFSET))(row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_TraitEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_TRAITEFFECTID_OFFSET))(this);
		}

		::System::Void set_TraitEffectID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_TRAITEFFECTID_OFFSET))(this, value);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_COST_OFFSET))(this);
		}

		::System::Void set_Cost(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_COST_OFFSET))(this, value);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_DESC_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_SimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_SIMPLEDESC_OFFSET))(this);
		}

		::System::Void set_SimpleDesc(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_SIMPLEDESC_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_ICONPATH_OFFSET))(this, value);
		}
	};
}
