#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitConfigBase.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightActivationType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"

namespace RPG::GameCore { class GridFightTraitBaseConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_ACTIVATIONTYPE_OFFSET UNITYSDK_OFFSET(0x941F700)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_BASEDESC_OFFSET UNITYSDK_OFFSET(0x941F510)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_BATTLEEVENTIDLIST_OFFSET UNITYSDK_OFFSET(0x941F770)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_CUTINPATH_OFFSET UNITYSDK_OFFSET(0x941F4F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x941D550)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x941F4B0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x941F4D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x941D4F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x941F790)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x941F600)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_TRAITEFFECTLIST_OFFSET UNITYSDK_OFFSET(0x941F6E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_TRAITTYPE_OFFSET UNITYSDK_OFFSET(0x941F750)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x941F410)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitConfig_TypeDefinitionIndex = 51995;

	class GridFightTraitConfig : public ::RPG::Client::GridFightTraitConfigBase
	{
	public:
		::RPG::GameCore::GridFightTraitBaseConfigRow* _Row; // 0x18

		::System::Void _ctor(::RPG::GameCore::GridFightTraitBaseConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitBaseConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::String* get_CutInPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_CUTINPATH_OFFSET))(this);
		}

		::System::String* get_BaseDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_BASEDESC_OFFSET))(this);
		}

		::System::String* get_SimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_SIMPLEDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TraitEffectList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_TRAITEFFECTLIST_OFFSET))(this);
		}

		::RPG::GameCore::GridFightActivationType get_ActivationType()
		{
			return ((::RPG::GameCore::GridFightActivationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_ACTIVATIONTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitType get_TraitType()
		{
			return ((::RPG::GameCore::GridFightTraitType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_TRAITTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_BattleEventIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_BATTLEEVENTIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_PRIORITY_OFFSET))(this);
		}
	};
}
