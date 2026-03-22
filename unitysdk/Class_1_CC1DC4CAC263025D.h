#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0288E507E2813FBB.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_384;
namespace RPG::GameCore { class TargetOperationConfigList; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CC1DC4CAC263025D_METHOD_1_86F643F491980593_OFFSET UNITYSDK_OFFSET(0xA147A60)
#define CLASS_1_CC1DC4CAC263025D_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0xA147520)
#define CLASS_1_CC1DC4CAC263025D_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0xA147E00)
#define CLASS_1_CC1DC4CAC263025D_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xA147980)
#define CLASS_1_CC1DC4CAC263025D__CCTOR_OFFSET UNITYSDK_OFFSET(0xA147E80)

inline static constexpr unsigned int Class_1_CC1DC4CAC263025D_TypeDefinitionIndex = 44398;

class Class_1_CC1DC4CAC263025D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Struct_2_0288E507E2813FBB, ::Class_0_16E4307DCC419505_384*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::Struct_2_0288E507E2813FBB, ::Class_0_16E4307DCC419505_384*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC1DC4CAC263025D_TypeDefinitionIndex)->GetStaticField(0x45170);
	}
	static ::RPG::GameCore::TargetOperationConfigList** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::TargetOperationConfigList**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC1DC4CAC263025D_TypeDefinitionIndex)->GetStaticField(0x45178);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC1DC4CAC263025D__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC1DC4CAC263025D_METHOD_1_96189EDEF38976A6_OFFSET))();
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC1DC4CAC263025D_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_384* Method_1_86F643F491980593(::Struct_2_0288E507E2813FBB a1)
	{
		return ((::Class_0_16E4307DCC419505_384*(*)(::Struct_2_0288E507E2813FBB))((::PBYTE)hIl2Cpp + CLASS_1_CC1DC4CAC263025D_METHOD_1_86F643F491980593_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC1DC4CAC263025D_METHOD_1_CE18697B63E52504_OFFSET))();
	}
};
