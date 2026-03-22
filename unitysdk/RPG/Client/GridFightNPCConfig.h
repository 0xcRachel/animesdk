#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightNpcConfigRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTNPCCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x93BDD90)
#define RPG_CLIENT_GRIDFIGHTNPCCONFIG_GET_DESCTEXTID_OFFSET UNITYSDK_OFFSET(0x93BEDA0)
#define RPG_CLIENT_GRIDFIGHTNPCCONFIG_GET_FRONTBACKTYPE_OFFSET UNITYSDK_OFFSET(0x93BEE10)
#define RPG_CLIENT_GRIDFIGHTNPCCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x93BED30)
#define RPG_CLIENT_GRIDFIGHTNPCCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x93BED10)
#define RPG_CLIENT_GRIDFIGHTNPCCONFIG_GET_ISEQUIPPABLE_OFFSET UNITYSDK_OFFSET(0x93BEDF0)
#define RPG_CLIENT_GRIDFIGHTNPCCONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x93BED70)
#define RPG_CLIENT_GRIDFIGHTNPCCONFIG_GET_POSITIONREGION_OFFSET UNITYSDK_OFFSET(0x93BEDD0)
#define RPG_CLIENT_GRIDFIGHTNPCCONFIG_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x93BED50)
#define RPG_CLIENT_GRIDFIGHTNPCCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0x93BED20)
#define RPG_CLIENT_GRIDFIGHTNPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x93BEE70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightNPCConfig_TypeDefinitionIndex = 51696;

	class GridFightNPCConfig : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightNPCConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightNPCConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightNPCConfig_TypeDefinitionIndex)->GetStaticField(0x6DE0);
		}
		::RPG::GameCore::GridFightNpcConfigRow* _Row; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCONFIG__CTOR_OFFSET))(this, id);
		}

		static ::RPG::Client::GridFightNPCConfig* GetConfig(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightNPCConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCONFIG_GETCONFIG_OFFSET))(id);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCONFIG_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCONFIG_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCONFIG_GET_NAMETEXTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_DescTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCONFIG_GET_DESCTEXTID_OFFSET))(this);
		}

		::RPG::GameCore::GridFightRegion get_PositionRegion()
		{
			return ((::RPG::GameCore::GridFightRegion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCONFIG_GET_POSITIONREGION_OFFSET))(this);
		}

		::System::Boolean get_IsEquippable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCONFIG_GET_ISEQUIPPABLE_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_FrontBackType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCONFIG_GET_FRONTBACKTYPE_OFFSET))(this);
		}
	};
}
