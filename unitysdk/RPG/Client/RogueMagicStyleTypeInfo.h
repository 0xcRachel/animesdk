#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueMagicStyleTypeSelectRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_DESC_OFFSET UNITYSDK_OFFSET(0x172D16E0)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x172D1670)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x172D1780)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x172D11E0)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x172D15B0)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0x172D1460)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x172D1440)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0x172D1840)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x172D1450)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x172D0DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicStyleTypeInfo_TypeDefinitionIndex = 62141;

	class RogueMagicStyleTypeInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueMagicStyleTypeSelectRow* _Row; // 0x10
		::RPG::Client::TextID _Name; // 0x18
		::RPG::Client::TextID _CommonTypeNameTextID; // 0x28
		::RPG::GameCore::RogueMagicStyleType _Type_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::GameCore::RogueMagicStyleType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO__CTOR_OFFSET))(this, type);
		}

		::RPG::GameCore::RogueMagicStyleType get_Type()
		{
			return ((::RPG::GameCore::RogueMagicStyleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::RogueMagicStyleType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_SET_TYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueMagicStyleTypeSelectRow* get_Row()
		{
			return ((::RPG::GameCore::RogueMagicStyleTypeSelectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_DESC_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ISACTIVE_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_UNLOCKID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ISUNLOCK_OFFSET))(this);
		}
	};
}
