#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5FB2896E6C484E49.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"

namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CLASS_2_DB9F6B8D6084E1EE_METHOD_2_2372762F4122DEB8_1_OFFSET UNITYSDK_OFFSET(0x16D8BD60)
#define CLASS_2_DB9F6B8D6084E1EE_METHOD_2_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x16D8BCF0)
#define CLASS_2_DB9F6B8D6084E1EE_METHOD_2_2C0E978E0D14BBE3_OFFSET UNITYSDK_OFFSET(0x16D8BEC0)
#define CLASS_2_DB9F6B8D6084E1EE_METHOD_2_3A1AE9C7A5060D43_OFFSET UNITYSDK_OFFSET(0x16D8BB80)
#define CLASS_2_DB9F6B8D6084E1EE_METHOD_2_4A59748E156BDB65_OFFSET UNITYSDK_OFFSET(0x16D8BDD0)
#define CLASS_2_DB9F6B8D6084E1EE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8BB70)

inline static constexpr unsigned int Class_2_DB9F6B8D6084E1EE_TypeDefinitionIndex = 69895;

class Class_2_DB9F6B8D6084E1EE : public ::Class_1_5FB2896E6C484E49
{
public:
	::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_2_DB9F6B8D6084E1EE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A1AE9C7A5060D43(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_DB9F6B8D6084E1EE_METHOD_2_3A1AE9C7A5060D43_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4A59748E156BDB65(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + CLASS_2_DB9F6B8D6084E1EE_METHOD_2_4A59748E156BDB65_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB9F6B8D6084E1EE_METHOD_2_2372762F4122DEB8_OFFSET))(this);
	}

	::System::UInt32 Method_2_2372762F4122DEB8_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB9F6B8D6084E1EE_METHOD_2_2372762F4122DEB8_1_OFFSET))(this);
	}

	::System::Boolean Method_2_2C0E978E0D14BBE3(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + CLASS_2_DB9F6B8D6084E1EE_METHOD_2_2C0E978E0D14BBE3_OFFSET))(this, a1);
	}
};
