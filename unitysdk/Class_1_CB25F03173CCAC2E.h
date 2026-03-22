#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_176971BF7FCA1F10;
namespace RPG::GameCore { class ComplexSkillAIFactorGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CB25F03173CCAC2E_METHOD_1_12340FD2FA41D544_OFFSET UNITYSDK_OFFSET(0x100797C0)
#define CLASS_1_CB25F03173CCAC2E_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x10079690)
#define CLASS_1_CB25F03173CCAC2E_METHOD_1_33BE208E9812B600_OFFSET UNITYSDK_OFFSET(0x10079D00)
#define CLASS_1_CB25F03173CCAC2E_METHOD_1_3CE601BB8CCA8FA5_OFFSET UNITYSDK_OFFSET(0x10079820)
#define CLASS_1_CB25F03173CCAC2E_METHOD_1_518C6F1B8C5A6FFD_OFFSET UNITYSDK_OFFSET(0x10079E10)
#define CLASS_1_CB25F03173CCAC2E_METHOD_1_7443AD94E7275ABA_OFFSET UNITYSDK_OFFSET(0x10079AF0)
#define CLASS_1_CB25F03173CCAC2E_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x1007A070)
#define CLASS_1_CB25F03173CCAC2E_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x10079A20)
#define CLASS_1_CB25F03173CCAC2E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1007A0F0)

inline static constexpr unsigned int Class_1_CB25F03173CCAC2E_TypeDefinitionIndex = 44357;

class Class_1_CB25F03173CCAC2E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_176971BF7FCA1F10*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_176971BF7FCA1F10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CB25F03173CCAC2E_TypeDefinitionIndex)->GetStaticField(0x30E70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CB25F03173CCAC2E__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CB25F03173CCAC2E_METHOD_1_2C95AFAD0256302F_OFFSET))();
	}

	static ::System::Void Method_1_3CE601BB8CCA8FA5(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ComplexSkillAIFactorGroup*>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ComplexSkillAIFactorGroup*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB25F03173CCAC2E_METHOD_1_3CE601BB8CCA8FA5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CB25F03173CCAC2E_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}

	static ::RPG::GameCore::ComplexSkillAIFactorGroup* Method_1_33BE208E9812B600(::System::String* a1)
	{
		return ((::RPG::GameCore::ComplexSkillAIFactorGroup*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB25F03173CCAC2E_METHOD_1_33BE208E9812B600_OFFSET))(a1);
	}

	static ::System::Void Method_1_7443AD94E7275ABA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CB25F03173CCAC2E_METHOD_1_7443AD94E7275ABA_OFFSET))();
	}

	static ::System::Void Method_1_12340FD2FA41D544(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB25F03173CCAC2E_METHOD_1_12340FD2FA41D544_OFFSET))(a1);
	}

	static ::System::Void Method_1_518C6F1B8C5A6FFD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB25F03173CCAC2E_METHOD_1_518C6F1B8C5A6FFD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CB25F03173CCAC2E_METHOD_1_CE18697B63E52504_OFFSET))();
	}
};
