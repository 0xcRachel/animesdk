#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
namespace RPG::Client { class AvatarData; }

#define CLASS_1_2FB996C1AA1358DA_METHOD_1_1C1DD9F59BB6AF2C_OFFSET UNITYSDK_OFFSET(0xCBC1C60)
#define CLASS_1_2FB996C1AA1358DA_METHOD_1_C4DE706543E87EDD_OFFSET UNITYSDK_OFFSET(0xCBC1BE0)
#define CLASS_1_2FB996C1AA1358DA__CTOR_OFFSET UNITYSDK_OFFSET(0xCBC1E90)

inline static constexpr unsigned int Class_1_2FB996C1AA1358DA_TypeDefinitionIndex = 52122;

class Class_1_2FB996C1AA1358DA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB996C1AA1358DA__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_C4DE706543E87EDD(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_2FB996C1AA1358DA_METHOD_1_C4DE706543E87EDD_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_617* Method_1_1C1DD9F59BB6AF2C(::RPG::Client::AvatarData* a1)
	{
		return ((::Class_0_16E4307DCC419505_617*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_2FB996C1AA1358DA_METHOD_1_1C1DD9F59BB6AF2C_OFFSET))(this, a1);
	}
};
