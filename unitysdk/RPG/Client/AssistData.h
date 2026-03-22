#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class PlayerAssistInfo; }
namespace Proto { class PlayerSimpleInfo; }
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class PlayerBriefDisplayData; }

#define RPG_CLIENT_ASSISTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x8C99A80)
#define RPG_CLIENT_ASSISTDATA_CREATE_2_OFFSET UNITYSDK_OFFSET(0x8C99AF0)
#define RPG_CLIENT_ASSISTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x8C998E0)
#define RPG_CLIENT_ASSISTDATA_SYNCDATA_OFFSET UNITYSDK_OFFSET(0x8C99960)
#define RPG_CLIENT_ASSISTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8C99950)

namespace RPG::Client
{
	inline static constexpr unsigned int AssistData_TypeDefinitionIndex = 51033;

	class AssistData : public ::System::Object
	{
	public:
		::RPG::Client::AvatarData* AvatarData; // 0x10
		::RPG::Client::PlayerBriefDisplayData* PlayerDisplayData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AssistData* Create(::Proto::PlayerAssistInfo* info)
		{
			return ((::RPG::Client::AssistData*(*)(::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_CREATE_OFFSET))(info);
		}

		static ::RPG::Client::AssistData* Create_1(::RPG::Client::AssistData* source)
		{
			return ((::RPG::Client::AssistData*(*)(::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_CREATE_1_OFFSET))(source);
		}

		static ::RPG::Client::AssistData* Create_2(::Proto::PlayerSimpleInfo* info, ::RPG::Client::AvatarData* dataA)
		{
			return ((::RPG::Client::AssistData*(*)(::Proto::PlayerSimpleInfo*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_CREATE_2_OFFSET))(info, dataA);
		}

		::System::Void SyncData(::Proto::PlayerAssistInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_SYNCDATA_OFFSET))(this, info);
		}
	};
}
