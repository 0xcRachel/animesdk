#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT_MCVCOMPILEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0xA082A10)
#define RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT_MCVCOMPILEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA082AC0)
#define RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT_MCVCOMPILEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA082BF0)
#define RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT_MCVCOMPILEINFO___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA082C00)
#define RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT_MCVCOMPILEINFO___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA082C10)

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapStatic_TextCompileContext_MCVCompileInfo_TypeDefinitionIndex = 58149;

	class TextmapStatic_TextCompileContext_MCVCompileInfo : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::UInt32 MissionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT_MCVCOMPILEINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT_MCVCOMPILEINFO_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT_MCVCOMPILEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT_MCVCOMPILEINFO___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_TEXTCOMPILECONTEXT_MCVCOMPILEINFO___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
