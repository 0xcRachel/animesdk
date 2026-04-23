#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateTraitMode.h"
#include "unitysdk/RPG/GameCore/FateTraitTag.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_0B49B342EAF65A7A_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x1897E890)
#define CLASS_1_0B49B342EAF65A7A__CTOR_OFFSET UNITYSDK_OFFSET(0x1897ED50)

inline static constexpr unsigned int Class_1_0B49B342EAF65A7A_TypeDefinitionIndex = 11019;

class Class_1_0B49B342EAF65A7A : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_4; // 0x10
	::System::String* Field_1_10; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_9; // 0x20
	::RPG::GameCore::FateTraitTag Field_1_6; // 0x28
	::System::UInt32 Field_1_0; // 0x2C
	::System::UInt32 Field_1_8; // 0x30
	::RPG::GameCore::FateTraitMode Field_1_7; // 0x34
	::RPG::Client::TextID Field_1_5; // 0x38
	::System::UInt32 Field_1_1; // 0x48
	::RPG::Client::TextID Field_1_3; // 0x50
	::RPG::Client::TextID Field_1_2; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B49B342EAF65A7A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_0B49B342EAF65A7A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_0B49B342EAF65A7A*&))((::PBYTE)hIl2Cpp + CLASS_1_0B49B342EAF65A7A_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
