#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSG_GETMESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x157EDB40)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSG_READ_OFFSET UNITYSDK_OFFSET(0x157EDBB0)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSG_RESET_OFFSET UNITYSDK_OFFSET(0x157EDBE0)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSG_WRITE_OFFSET UNITYSDK_OFFSET(0x157EDB80)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSG__CTOR_OFFSET UNITYSDK_OFFSET(0x157EDBF0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugShaderVIPMaterialListReqMsg_TypeDefinitionIndex = 35425;

	class DebugShaderVIPMaterialListReqMsg : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSG__CTOR_OFFSET))(this);
		}

		::System::String* GetMessageType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSG_GETMESSAGETYPE_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSG_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSG_READ_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSG_RESET_OFFSET))(this);
		}
	};
}
