#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueMagicLayerEffectRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICLAYEREFFECTINFO_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9E0B1D0)
#define RPG_CLIENT_ROGUEMAGICLAYEREFFECTINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x9E0AF60)
#define RPG_CLIENT_ROGUEMAGICLAYEREFFECTINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9E0B130)
#define RPG_CLIENT_ROGUEMAGICLAYEREFFECTINFO_GET_NEEDCONSUMEROUND_OFFSET UNITYSDK_OFFSET(0x9E0B290)
#define RPG_CLIENT_ROGUEMAGICLAYEREFFECTINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9E0AF80)
#define RPG_CLIENT_ROGUEMAGICLAYEREFFECTINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x9E0AF70)
#define RPG_CLIENT_ROGUEMAGICLAYEREFFECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9E07CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicLayerEffectInfo_TypeDefinitionIndex = 53555;

	class RogueMagicLayerEffectInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueMagicLayerEffectRow* _Row; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 layerEffectId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICLAYEREFFECTINFO__CTOR_OFFSET))(this, layerEffectId);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICLAYEREFFECTINFO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICLAYEREFFECTINFO_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueMagicLayerEffectRow* get_Row()
		{
			return ((::RPG::GameCore::RogueMagicLayerEffectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICLAYEREFFECTINFO_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICLAYEREFFECTINFO_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICLAYEREFFECTINFO_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_NeedConsumeRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICLAYEREFFECTINFO_GET_NEEDCONSUMEROUND_OFFSET))(this);
		}
	};
}
