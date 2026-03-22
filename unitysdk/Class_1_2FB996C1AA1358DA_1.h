#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
namespace RPG::Client { class AvatarData; }

#define CLASS_1_2FB996C1AA1358DA_1_METHOD_1_1C1DD9F59BB6AF2C_OFFSET UNITYSDK_OFFSET(0x111C3110)
#define CLASS_1_2FB996C1AA1358DA_1_METHOD_1_47DA2D68761DB05D_OFFSET UNITYSDK_OFFSET(0x111C2FB0)
#define CLASS_1_2FB996C1AA1358DA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x111C3340)

inline static constexpr unsigned int Class_1_2FB996C1AA1358DA_1_TypeDefinitionIndex = 52124;

class Class_1_2FB996C1AA1358DA_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB996C1AA1358DA_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_47DA2D68761DB05D(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_2FB996C1AA1358DA_1_METHOD_1_47DA2D68761DB05D_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_617* Method_1_1C1DD9F59BB6AF2C(::RPG::Client::AvatarData* a1)
	{
		return ((::Class_0_16E4307DCC419505_617*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_2FB996C1AA1358DA_1_METHOD_1_1C1DD9F59BB6AF2C_OFFSET))(this, a1);
	}
};
