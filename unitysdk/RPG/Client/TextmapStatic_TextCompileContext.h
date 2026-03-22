#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextmapStatic_TextCompileContext_MCVCompileInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT_GETMCVINFO_OFFSET UNITYSDK_OFFSET(0xA082720)
#define RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT_RESET_OFFSET UNITYSDK_OFFSET(0xA082890)
#define RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA082930)

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapStatic_TextCompileContext_TypeDefinitionIndex = 58148;

	class TextmapStatic_TextCompileContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* JoinTextInfos; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TextmapStatic_TextCompileContext_MCVCompileInfo*>* MCVInfos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT__CTOR_OFFSET))(this);
		}

		::RPG::Client::TextmapStatic_TextCompileContext_MCVCompileInfo* GetMCVInfo(::System::UInt32 missionID, ::System::String* name)
		{
			return ((::RPG::Client::TextmapStatic_TextCompileContext_MCVCompileInfo*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT_GETMCVINFO_OFFSET))(this, missionID, name);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT_RESET_OFFSET))(this);
		}
	};
}
