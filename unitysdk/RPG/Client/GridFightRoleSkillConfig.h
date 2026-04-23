#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightRoleSkillDisplayConfigRow; }
namespace RPG::GameCore { class GridFightRoleStarConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTROLESKILLCONFIG_GETDESCSKILLID_OFFSET UNITYSDK_OFFSET(0x181295E0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLCONFIG_GETSKILLTAGTEXTIDS_OFFSET UNITYSDK_OFFSET(0x18129980)
#define RPG_CLIENT_GRIDFIGHTROLESKILLCONFIG_GET_FRONTBACKTYPE_OFFSET UNITYSDK_OFFSET(0x181296E0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18129790)
#define RPG_CLIENT_GRIDFIGHTROLESKILLCONFIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x181296D0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLCONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x181296F0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLCONFIG_GET_SHORTDESC_OFFSET UNITYSDK_OFFSET(0x181297F0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18129580)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleSkillConfig_TypeDefinitionIndex = 59951;

	class GridFightRoleSkillConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightRoleSkillDisplayConfigRow* _Row; // 0x10
		::RPG::GameCore::GridFightRoleStarConfigRow* _StarRow; // 0x18
		::RPG::GameCore::GridFightPreset _FrontBackType_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::GameCore::GridFightRoleStarConfigRow* starRow, ::RPG::GameCore::GridFightPreset frontBackType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightRoleStarConfigRow*, ::RPG::GameCore::GridFightPreset))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLCONFIG__CTOR_OFFSET))(this, starRow, frontBackType);
		}

		::System::UInt32 GetDescSkillID(::System::UInt32 skillID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLCONFIG_GETDESCSKILLID_OFFSET))(this, skillID);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLCONFIG_GET_ISVALID_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_FrontBackType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLCONFIG_GET_FRONTBACKTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLCONFIG_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_ShortDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLCONFIG_GET_SHORTDESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* GetSkillTagTextIDs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLCONFIG_GETSKILLTAGTEXTIDS_OFFSET))(this);
		}
	};
}
