#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueDialogueType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_667;
namespace RPG::GameCore { class RogueNPCConfig; }
namespace RPG::GameCore { class RogueNPCDialogueConfig; }

#define CLASS_1_580C8814FDE85009_METHOD_1_30264B757B048CE6_OFFSET UNITYSDK_OFFSET(0x11073EF0)
#define CLASS_1_580C8814FDE85009_METHOD_1_3F32B2FBAEE402A8_OFFSET UNITYSDK_OFFSET(0x11074030)
#define CLASS_1_580C8814FDE85009_METHOD_1_80A751D930F59D01_OFFSET UNITYSDK_OFFSET(0x11073BD0)
#define CLASS_1_580C8814FDE85009_METHOD_1_BA1CD130AF913E90_OFFSET UNITYSDK_OFFSET(0x11073DD0)
#define CLASS_1_580C8814FDE85009_METHOD_1_F0E4FAC8E5EC9E93_OFFSET UNITYSDK_OFFSET(0x11073F50)
#define CLASS_1_580C8814FDE85009__CTOR_OFFSET UNITYSDK_OFFSET(0x110738F0)

inline static constexpr unsigned int Class_1_580C8814FDE85009_TypeDefinitionIndex = 53475;

class Class_1_580C8814FDE85009 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_667* Field_1_0; // 0x10
	::RPG::GameCore::RogueNPCConfig* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_667* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_667*))((::PBYTE)hIl2Cpp + CLASS_1_580C8814FDE85009__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_580C8814FDE85009* Method_1_80A751D930F59D01(::System::UInt32 a1)
	{
		return ((::Class_1_580C8814FDE85009*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_580C8814FDE85009_METHOD_1_80A751D930F59D01_OFFSET))(a1);
	}

	::RPG::GameCore::RogueNPCDialogueConfig* Method_1_BA1CD130AF913E90(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueNPCDialogueConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_580C8814FDE85009_METHOD_1_BA1CD130AF913E90_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_F0E4FAC8E5EC9E93()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_580C8814FDE85009_METHOD_1_F0E4FAC8E5EC9E93_OFFSET))(this);
	}

	::RPG::GameCore::RogueDialogueType Method_1_3F32B2FBAEE402A8()
	{
		return ((::RPG::GameCore::RogueDialogueType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_580C8814FDE85009_METHOD_1_3F32B2FBAEE402A8_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::RogueNPCDialogueConfig*>* Method_1_30264B757B048CE6()
	{
		return ((::Il2CppArray<::RPG::GameCore::RogueNPCDialogueConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_580C8814FDE85009_METHOD_1_30264B757B048CE6_OFFSET))(this);
	}
};
