#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TalkOptionData; }
namespace RPG::GameCore { class JsonEnum; }

#define RPG_CLIENT_TALKMODULE___C__DISPLAYCLASS108_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA02E1A0)
#define RPG_CLIENT_TALKMODULE___C__DISPLAYCLASS108_0__GETCURRENTSKIPDEFAULTOPTIONINDEX_B__0_OFFSET UNITYSDK_OFFSET(0xA0316F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkModule___c__DisplayClass108_0_TypeDefinitionIndex = 53977;

	class TalkModule___c__DisplayClass108_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* sortOptionIconType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE___C__DISPLAYCLASS108_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetCurrentSkipDefaultOptionIndex_b__0(::RPG::Client::TalkOptionData* l, ::RPG::Client::TalkOptionData* r)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TalkOptionData*, ::RPG::Client::TalkOptionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE___C__DISPLAYCLASS108_0__GETCURRENTSKIPDEFAULTOPTIONINDEX_B__0_OFFSET))(this, l, r);
		}
	};
}
