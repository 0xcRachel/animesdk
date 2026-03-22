#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
namespace RPG::Client { class AvatarData; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace System { class String; }

#define CLASS_1_339DD4CB3BD5B3BA_METHOD_1_16B4BC12771557BC_OFFSET UNITYSDK_OFFSET(0x894A480)
#define CLASS_1_339DD4CB3BD5B3BA_METHOD_1_32EED3E6FFA0E18C_OFFSET UNITYSDK_OFFSET(0x8949B60)
#define CLASS_1_339DD4CB3BD5B3BA_METHOD_1_6BE93CCE00D3084D_OFFSET UNITYSDK_OFFSET(0x8949C20)
#define CLASS_1_339DD4CB3BD5B3BA_METHOD_1_7D841C83C142BBDE_OFFSET UNITYSDK_OFFSET(0x8949BB0)
#define CLASS_1_339DD4CB3BD5B3BA_METHOD_1_EC96B9812FCA6310_OFFSET UNITYSDK_OFFSET(0x894A150)
#define CLASS_1_339DD4CB3BD5B3BA_METHOD_1_F3E5590D73F7E44C_OFFSET UNITYSDK_OFFSET(0x8949D20)
#define CLASS_1_339DD4CB3BD5B3BA__CTOR_OFFSET UNITYSDK_OFFSET(0x894A740)

inline static constexpr unsigned int Class_1_339DD4CB3BD5B3BA_TypeDefinitionIndex = 52131;

class Class_1_339DD4CB3BD5B3BA : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x2; // 0x0
	::RPG::GameCore::AvatarSkillTreeRow* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_339DD4CB3BD5B3BA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_32EED3E6FFA0E18C(::RPG::GameCore::AvatarSkillTreeRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + CLASS_1_339DD4CB3BD5B3BA_METHOD_1_32EED3E6FFA0E18C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7D841C83C142BBDE(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_339DD4CB3BD5B3BA_METHOD_1_7D841C83C142BBDE_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_617* Method_1_F3E5590D73F7E44C(::RPG::Client::AvatarData* a1)
	{
		return ((::Class_0_16E4307DCC419505_617*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_339DD4CB3BD5B3BA_METHOD_1_F3E5590D73F7E44C_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BE93CCE00D3084D(::RPG::GameCore::AvatarSkillTreeRow* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + CLASS_1_339DD4CB3BD5B3BA_METHOD_1_6BE93CCE00D3084D_OFFSET))(this, a1);
	}

	::System::String* Method_1_EC96B9812FCA6310(::RPG::Client::TextID a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_339DD4CB3BD5B3BA_METHOD_1_EC96B9812FCA6310_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_16B4BC12771557BC(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_339DD4CB3BD5B3BA_METHOD_1_16B4BC12771557BC_OFFSET))(this, a1);
	}
};
