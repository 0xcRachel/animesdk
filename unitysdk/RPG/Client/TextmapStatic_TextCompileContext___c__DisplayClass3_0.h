#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextmapStatic_TextCompileContext_MCVCompileInfo; }
namespace System { class String; }

#define RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA082880)
#define RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT___C__DISPLAYCLASS3_0__GETMCVINFO_B__0_OFFSET UNITYSDK_OFFSET(0xA0829B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapStatic_TextCompileContext___c__DisplayClass3_0_TypeDefinitionIndex = 58150;

	class TextmapStatic_TextCompileContext___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::UInt32 missionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMCVInfo_b__0(::RPG::Client::TextmapStatic_TextCompileContext_MCVCompileInfo* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextmapStatic_TextCompileContext_MCVCompileInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT___C__DISPLAYCLASS3_0__GETMCVINFO_B__0_OFFSET))(this, info);
		}
	};
}
