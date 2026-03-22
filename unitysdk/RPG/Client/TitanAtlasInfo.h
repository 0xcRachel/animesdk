#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TitanAtlasVoiceInfo; }
namespace RPG::Client { class TitanAtlasVoicePool; }
namespace RPG::GameCore { class TitanAtlasRow; }

#define RPG_CLIENT_TITANATLASINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xA0C4AC0)
#define RPG_CLIENT_TITANATLASINFO_GETRANDOMVOICE_OFFSET UNITYSDK_OFFSET(0xA0C4BD0)
#define RPG_CLIENT_TITANATLASINFO_GET_BASEID_OFFSET UNITYSDK_OFFSET(0xA0C5300)
#define RPG_CLIENT_TITANATLASINFO_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA0C5210)
#define RPG_CLIENT_TITANATLASINFO_GET_HASSEEN_OFFSET UNITYSDK_OFFSET(0xA0C4FF0)
#define RPG_CLIENT_TITANATLASINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xA0C5110)
#define RPG_CLIENT_TITANATLASINFO_GET_ISBASETITAN_OFFSET UNITYSDK_OFFSET(0xA0C4310)
#define RPG_CLIENT_TITANATLASINFO_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xA0C4480)
#define RPG_CLIENT_TITANATLASINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA0C5190)
#define RPG_CLIENT_TITANATLASINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA0C5130)
#define RPG_CLIENT_TITANATLASINFO_GET_SHOWNREDDOT_OFFSET UNITYSDK_OFFSET(0xA0C4E70)
#define RPG_CLIENT_TITANATLASINFO_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xA0C5290)
#define RPG_CLIENT_TITANATLASINFO_NEEDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xA0C4F90)
#define RPG_CLIENT_TITANATLASINFO_NEEDSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xA0C47B0)
#define RPG_CLIENT_TITANATLASINFO_SETBASEID_OFFSET UNITYSDK_OFFSET(0xA0C4B80)
#define RPG_CLIENT_TITANATLASINFO_SETPOOL_OFFSET UNITYSDK_OFFSET(0xA0C4B30)
#define RPG_CLIENT_TITANATLASINFO_SET_BASEID_OFFSET UNITYSDK_OFFSET(0xA0C5310)
#define RPG_CLIENT_TITANATLASINFO_SET_HASSEEN_OFFSET UNITYSDK_OFFSET(0xA0C5320)
#define RPG_CLIENT_TITANATLASINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0xA0C5120)
#define RPG_CLIENT_TITANATLASINFO_SET_SHOWNREDDOT_OFFSET UNITYSDK_OFFSET(0xA0C5450)
#define RPG_CLIENT_TITANATLASINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA0C4B20)

namespace RPG::Client
{
	inline static constexpr unsigned int TitanAtlasInfo_TypeDefinitionIndex = 54070;

	class TitanAtlasInfo : public ::System::Object
	{
	public:
		::RPG::Client::TitanAtlasVoicePool* _Pool; // 0x10
		::System::UInt32 _BaseID_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TitanAtlasInfo* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::TitanAtlasInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_CREATE_OFFSET))(id);
		}

		::System::Void SetPool(::RPG::Client::TitanAtlasVoicePool* pool)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TitanAtlasVoicePool*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_SETPOOL_OFFSET))(this, pool);
		}

		::System::Void SetBaseID(::System::UInt32 baseID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_SETBASEID_OFFSET))(this, baseID);
		}

		::RPG::Client::TitanAtlasVoiceInfo* GetRandomVoice()
		{
			return ((::RPG::Client::TitanAtlasVoiceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GETRANDOMVOICE_OFFSET))(this);
		}

		::System::Boolean NeedShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_NEEDSHOWREDDOT_OFFSET))(this);
		}

		::System::Boolean NeedPlayUnlockAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_NEEDPLAYUNLOCKANIM_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::TitanAtlasRow* get_Row()
		{
			return ((::RPG::GameCore::TitanAtlasRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_UNLOCKID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_BaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_BASEID_OFFSET))(this);
		}

		::System::Void set_BaseID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_SET_BASEID_OFFSET))(this, value);
		}

		::System::Boolean get_IsBaseTitan()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_ISBASETITAN_OFFSET))(this);
		}

		::System::Boolean get_HasSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_HASSEEN_OFFSET))(this);
		}

		::System::Void set_HasSeen(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_SET_HASSEEN_OFFSET))(this, value);
		}

		::System::Boolean get_ShownRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_SHOWNREDDOT_OFFSET))(this);
		}

		::System::Void set_ShownRedDot(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_SET_SHOWNREDDOT_OFFSET))(this, value);
		}
	};
}
