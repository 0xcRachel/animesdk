#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/Class_1_E8293664BB5E691F.h"

class AkCallbackInfo;
class Class_1_A795842876E00DE4;
namespace RPG::GameCore { class MunicipalChatActionTalk; }
namespace RPG::GameCore { class TalkSentenceConfigRow; }
namespace System { class String; }

#define CLASS_2_5222F3391B61CFDF_METHOD_2_1A752A6434262E21_OFFSET UNITYSDK_OFFSET(0x8421900)
#define CLASS_2_5222F3391B61CFDF_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x84210E0)
#define CLASS_2_5222F3391B61CFDF_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x8421A00)
#define CLASS_2_5222F3391B61CFDF_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x8421AD0)
#define CLASS_2_5222F3391B61CFDF_METHOD_2_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x8421B30)
#define CLASS_2_5222F3391B61CFDF_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x84219A0)
#define CLASS_2_5222F3391B61CFDF_METHOD_2_7744894CEC41BF06_1_OFFSET UNITYSDK_OFFSET(0x84218B0)
#define CLASS_2_5222F3391B61CFDF_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x8420F20)
#define CLASS_2_5222F3391B61CFDF_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x8421A60)
#define CLASS_2_5222F3391B61CFDF_METHOD_2_7BB869B5840DB4EB_OFFSET UNITYSDK_OFFSET(0x84211B0)
#define CLASS_2_5222F3391B61CFDF_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x8420F80)
#define CLASS_2_5222F3391B61CFDF_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8421020)
#define CLASS_2_5222F3391B61CFDF_METHOD_2_B2C8A19AF49C2CFD_OFFSET UNITYSDK_OFFSET(0x8420ED0)
#define CLASS_2_5222F3391B61CFDF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8421870)
#define CLASS_2_5222F3391B61CFDF_METHOD_2_E293F3C449C552DC_OFFSET UNITYSDK_OFFSET(0x8421620)
#define CLASS_2_5222F3391B61CFDF__CCTOR_OFFSET UNITYSDK_OFFSET(0x8421990)
#define CLASS_2_5222F3391B61CFDF__CTOR_OFFSET UNITYSDK_OFFSET(0x8420EC0)

inline static constexpr unsigned int Class_2_5222F3391B61CFDF_TypeDefinitionIndex = 54987;

class Class_2_5222F3391B61CFDF : public ::Class_1_E8293664BB5E691F
{
public:
	static ::System::Single* StaticGet_Field_2_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5222F3391B61CFDF_TypeDefinitionIndex)->GetStaticField(0x4FB0);
	}
	::System::String* Field_2_2; // 0x30
	::RPG::GameCore::TalkSentenceConfigRow* Field_2_0; // 0x38
	::System::Single Field_2_5; // 0x40
	::System::Single Field_2_8; // 0x44
	::System::Single Field_2_4; // 0x48
	::System::Boolean Field_2_1; // 0x4C
	::System::Boolean Field_2_7; // 0x4D
	::System::UInt32 Field_2_6; // 0x50
	::System::Single Field_2_3; // 0x54

	::System::Void _ctor(::Class_1_A795842876E00DE4* a1, ::RPG::GameCore::MunicipalChatActionTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A795842876E00DE4*, ::RPG::GameCore::MunicipalChatActionTalk*))((::PBYTE)hIl2Cpp + CLASS_2_5222F3391B61CFDF__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5222F3391B61CFDF__CCTOR_OFFSET))();
	}

	::RPG::GameCore::MunicipalChatActionTalk* Method_2_B2C8A19AF49C2CFD()
	{
		return ((::RPG::GameCore::MunicipalChatActionTalk*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5222F3391B61CFDF_METHOD_2_B2C8A19AF49C2CFD_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5222F3391B61CFDF_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5222F3391B61CFDF_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_7BB869B5840DB4EB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5222F3391B61CFDF_METHOD_2_7BB869B5840DB4EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5222F3391B61CFDF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5222F3391B61CFDF_METHOD_2_7744894CEC41BF06_1_OFFSET))(this);
	}

	::System::Void Method_2_E293F3C449C552DC(::System::Single a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5222F3391B61CFDF_METHOD_2_E293F3C449C552DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5222F3391B61CFDF_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5222F3391B61CFDF_METHOD_2_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_2_1A752A6434262E21(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_2_5222F3391B61CFDF_METHOD_2_1A752A6434262E21_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5222F3391B61CFDF_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5222F3391B61CFDF_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5222F3391B61CFDF_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5222F3391B61CFDF_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5222F3391B61CFDF_METHOD_2_5790A55946AA509D_3_OFFSET))(this);
	}
};
