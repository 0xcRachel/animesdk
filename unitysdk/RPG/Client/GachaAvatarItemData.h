#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GachaItemData.h"

namespace RPG::GameCore { class AvatarRow; }

#define RPG_CLIENT_GACHAAVATARITEMDATA_GET_AVATARROW_OFFSET UNITYSDK_OFFSET(0x15FFC8F0)
#define RPG_CLIENT_GACHAAVATARITEMDATA_SETROW_OFFSET UNITYSDK_OFFSET(0x15FFC760)
#define RPG_CLIENT_GACHAAVATARITEMDATA_SET_AVATARROW_OFFSET UNITYSDK_OFFSET(0x15FFC900)
#define RPG_CLIENT_GACHAAVATARITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFC6A0)
#define RPG_CLIENT_GACHAAVATARITEMDATA___IFIXBASEPROXY_SETROW_OFFSET UNITYSDK_OFFSET(0x15FFC910)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaAvatarItemData_TypeDefinitionIndex = 60093;

	class GachaAvatarItemData : public ::RPG::Client::GachaItemData
	{
	public:
		::RPG::GameCore::AvatarRow* _AvatarRow_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAAVATARITEMDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetRow(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAAVATARITEMDATA_SETROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarRow* get_AvatarRow()
		{
			return ((::RPG::GameCore::AvatarRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAAVATARITEMDATA_GET_AVATARROW_OFFSET))(this);
		}

		::System::Void set_AvatarRow(::RPG::GameCore::AvatarRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAAVATARITEMDATA_SET_AVATARROW_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_SetRow(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAAVATARITEMDATA___IFIXBASEPROXY_SETROW_OFFSET))(this, a1);
		}
	};
}
