#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
namespace RPG::Client { class AvatarData; }

#define CLASS_1_2FB996C1AA1358DA_2_METHOD_1_1C1DD9F59BB6AF2C_OFFSET UNITYSDK_OFFSET(0x891EBA0)
#define CLASS_1_2FB996C1AA1358DA_2_METHOD_1_76C1B010FBBDADEC_OFFSET UNITYSDK_OFFSET(0x891E8E0)
#define CLASS_1_2FB996C1AA1358DA_2_METHOD_1_7A9EE6E4B8F1006C_OFFSET UNITYSDK_OFFSET(0x891EA50)
#define CLASS_1_2FB996C1AA1358DA_2__CTOR_OFFSET UNITYSDK_OFFSET(0x891EDD0)

inline static constexpr unsigned int Class_1_2FB996C1AA1358DA_2_TypeDefinitionIndex = 52126;

class Class_1_2FB996C1AA1358DA_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB996C1AA1358DA_2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_76C1B010FBBDADEC(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_2FB996C1AA1358DA_2_METHOD_1_76C1B010FBBDADEC_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_617* Method_1_1C1DD9F59BB6AF2C(::RPG::Client::AvatarData* a1)
	{
		return ((::Class_0_16E4307DCC419505_617*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_2FB996C1AA1358DA_2_METHOD_1_1C1DD9F59BB6AF2C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7A9EE6E4B8F1006C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB996C1AA1358DA_2_METHOD_1_7A9EE6E4B8F1006C_OFFSET))(this);
	}
};
