#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingHPChangeFormatType.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/CirticalTrackType.h"
#include "unitysdk/RPG/GameCore/ChenLingDamageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GETHPCHANGEFORMATTYPE_OFFSET UNITYSDK_OFFSET(0x15854610)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_ANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x15855E60)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x15855EF0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_DELTAHP_OFFSET UNITYSDK_OFFSET(0x15855E90)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_HPCHANGEFORMATTYPE_OFFSET UNITYSDK_OFFSET(0x15855F10)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_SHOWJUMPTEXT_OFFSET UNITYSDK_OFFSET(0x15855ED0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x15855EB0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_ANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x15855E80)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x15855F00)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_DELTAHP_OFFSET UNITYSDK_OFFSET(0x15855EA0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_HPCHANGEFORMATTYPE_OFFSET UNITYSDK_OFFSET(0x15855F20)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_SHOWJUMPTEXT_OFFSET UNITYSDK_OFFSET(0x15855EE0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0x15855EC0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15854670)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int HPChangeData_TypeDefinitionIndex = 71323;

	class HPChangeData : public ::System::Object
	{
	public:
		::System::Int32 _UID_k__BackingField; // 0x10
		::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType _HPChangeFormatType_k__BackingField; // 0x14
		::UnityEngine::Vector3 _AnchorPosition_k__BackingField; // 0x18
		::System::Boolean _ShowJumpText_k__BackingField; // 0x24
		::System::Single _CurrentHP_k__BackingField; // 0x28
		::System::Int32 _DeltaHP_k__BackingField; // 0x2C

		::System::Void _ctor(::UnityEngine::Transform* ancestorTransform, ::System::Int32 deltaHP, ::System::Boolean showJumpText, ::System::Int32 uniqueID, ::System::Single currentHP, ::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType hpChangeFormatType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Single, ::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA__CTOR_OFFSET))(this, ancestorTransform, deltaHP, showJumpText, uniqueID, currentHP, hpChangeFormatType);
		}

		static ::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType GetHPChangeFormatType(::RPG::Client::LittleGame::ChenLing::CirticalTrackType cirticalTrackType, ::RPG::GameCore::ChenLingDamageType damageType)
		{
			return ((::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType(*)(::RPG::Client::LittleGame::ChenLing::CirticalTrackType, ::RPG::GameCore::ChenLingDamageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GETHPCHANGEFORMATTYPE_OFFSET))(cirticalTrackType, damageType);
		}

		::UnityEngine::Vector3 get_AnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_ANCHORPOSITION_OFFSET))(this);
		}

		::System::Void set_AnchorPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_ANCHORPOSITION_OFFSET))(this, value);
		}

		::System::Int32 get_DeltaHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_DELTAHP_OFFSET))(this);
		}

		::System::Void set_DeltaHP(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_DELTAHP_OFFSET))(this, value);
		}

		::System::Int32 get_UID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_UID_OFFSET))(this, value);
		}

		::System::Boolean get_ShowJumpText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_SHOWJUMPTEXT_OFFSET))(this);
		}

		::System::Void set_ShowJumpText(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_SHOWJUMPTEXT_OFFSET))(this, value);
		}

		::System::Single get_CurrentHP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_CURRENTHP_OFFSET))(this);
		}

		::System::Void set_CurrentHP(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_CURRENTHP_OFFSET))(this, value);
		}

		::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType get_HPChangeFormatType()
		{
			return ((::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_HPCHANGEFORMATTYPE_OFFSET))(this);
		}

		::System::Void set_HPChangeFormatType(::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_HPCHANGEFORMATTYPE_OFFSET))(this, value);
		}
	};
}
