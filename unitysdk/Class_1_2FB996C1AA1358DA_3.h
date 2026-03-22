#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
namespace RPG::Client { class AvatarData; }

#define CLASS_1_2FB996C1AA1358DA_3_METHOD_1_1C1DD9F59BB6AF2C_OFFSET UNITYSDK_OFFSET(0x10EC3690)
#define CLASS_1_2FB996C1AA1358DA_3_METHOD_1_37C2B6D936093B30_OFFSET UNITYSDK_OFFSET(0x10EC3640)
#define CLASS_1_2FB996C1AA1358DA_3__CTOR_OFFSET UNITYSDK_OFFSET(0x10EC3870)

inline static constexpr unsigned int Class_1_2FB996C1AA1358DA_3_TypeDefinitionIndex = 52128;

class Class_1_2FB996C1AA1358DA_3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB996C1AA1358DA_3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_37C2B6D936093B30(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_2FB996C1AA1358DA_3_METHOD_1_37C2B6D936093B30_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_617* Method_1_1C1DD9F59BB6AF2C(::RPG::Client::AvatarData* a1)
	{
		return ((::Class_0_16E4307DCC419505_617*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_2FB996C1AA1358DA_3_METHOD_1_1C1DD9F59BB6AF2C_OFFSET))(this, a1);
	}
};
