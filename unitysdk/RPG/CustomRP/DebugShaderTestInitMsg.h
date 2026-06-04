#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define RPG_CUSTOMRP_DEBUGSHADERTESTINITMSG_GETMESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x157ED350)
#define RPG_CUSTOMRP_DEBUGSHADERTESTINITMSG_READ_OFFSET UNITYSDK_OFFSET(0x157ED3C0)
#define RPG_CUSTOMRP_DEBUGSHADERTESTINITMSG_RESET_OFFSET UNITYSDK_OFFSET(0x157ED3F0)
#define RPG_CUSTOMRP_DEBUGSHADERTESTINITMSG_WRITE_OFFSET UNITYSDK_OFFSET(0x157ED390)
#define RPG_CUSTOMRP_DEBUGSHADERTESTINITMSG__CTOR_OFFSET UNITYSDK_OFFSET(0x157ED400)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugShaderTestInitMsg_TypeDefinitionIndex = 35426;

	class DebugShaderTestInitMsg : public ::System::Object
	{
	public:
		::System::Boolean initShaderTest; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERTESTINITMSG__CTOR_OFFSET))(this);
		}

		::System::String* GetMessageType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERTESTINITMSG_GETMESSAGETYPE_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERTESTINITMSG_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERTESTINITMSG_READ_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERTESTINITMSG_RESET_OFFSET))(this);
		}
	};
}
