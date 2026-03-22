#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BillboardComponent; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class RogueDoorSetGotoInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_31D3F60DC9A5BEF1_METHOD_3_CFB0D20179D50F00_OFFSET UNITYSDK_OFFSET(0x10DF1EF0)
#define CLASS_3_31D3F60DC9A5BEF1_METHOD_3_F19C9095437738A1_OFFSET UNITYSDK_OFFSET(0x10DF1E00)
#define CLASS_3_31D3F60DC9A5BEF1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10DF1A70)
#define CLASS_3_31D3F60DC9A5BEF1__CTOR_OFFSET UNITYSDK_OFFSET(0x10DF1A40)

inline static constexpr unsigned int Class_3_31D3F60DC9A5BEF1_TypeDefinitionIndex = 46096;

class Class_3_31D3F60DC9A5BEF1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RogueDoorSetGotoInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDoorSetGotoInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDoorSetGotoInfo*))((::PBYTE)hIl2Cpp + CLASS_3_31D3F60DC9A5BEF1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31D3F60DC9A5BEF1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_F19C9095437738A1(::RPG::GameCore::BillboardComponent* a1, ::RPG::Client::TextID a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BillboardComponent*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_3_31D3F60DC9A5BEF1_METHOD_3_F19C9095437738A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CFB0D20179D50F00(::RPG::GameCore::PropComponent* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_31D3F60DC9A5BEF1_METHOD_3_CFB0D20179D50F00_OFFSET))(this, a1, a2);
	}
};
