#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtModifierEvent.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_081645D6A8F2DA59.h"
#include "unitysdk/Struct_2_37A6863931715729.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
class Class_0_16E4307DCC419505_408;
class Class_0_16E4307DCC419505_449;
class Class_1_2CAAA2FDF9170110;
class Class_1_5469D397DAE62876;
class Class_1_F381B5B19F220415;
class Class_2_24193089A4D2255F;
class Class_2_71A48ED3DBF9C636;
class Class_3_024B137FE9F1BACE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_E44054C0F1A43C8E_METHOD_1_04F02FC65FAA2E0C_OFFSET UNITYSDK_OFFSET(0xC5C8970)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_104F74E8F934FD74_OFFSET UNITYSDK_OFFSET(0xC5CA340)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_19525A340F45209B_OFFSET UNITYSDK_OFFSET(0xC5C8CA0)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_207146490BB7E633_OFFSET UNITYSDK_OFFSET(0xC5C9460)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_37F6B7037B74F57A_OFFSET UNITYSDK_OFFSET(0xC5C9B00)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xC5CA7E0)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC5CA670)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_4E1969F1317D7407_1_OFFSET UNITYSDK_OFFSET(0xC5CA8B0)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_4E1969F1317D7407_OFFSET UNITYSDK_OFFSET(0xC5CA6D0)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_54DC8E44CB0235C2_OFFSET UNITYSDK_OFFSET(0xC5C9180)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_57E7F09C4DC7BD6F_OFFSET UNITYSDK_OFFSET(0xC5CA760)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_58E4F6A5F8FAF17F_1_OFFSET UNITYSDK_OFFSET(0xC5C8EA0)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_58E4F6A5F8FAF17F_2_OFFSET UNITYSDK_OFFSET(0xC5C9FA0)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_58E4F6A5F8FAF17F_3_OFFSET UNITYSDK_OFFSET(0xC5CA040)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0xC5C8C10)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_613F3A8AB03DA0D2_OFFSET UNITYSDK_OFFSET(0xC5CA840)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_61A325D7539DFACB_OFFSET UNITYSDK_OFFSET(0xC5C8F60)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_6AE109D99029E000_OFFSET UNITYSDK_OFFSET(0xC5C9600)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0xC5C8AC0)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_74423D7D8FA233A8_OFFSET UNITYSDK_OFFSET(0xC5C9A00)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_78B00C4500677DE2_OFFSET UNITYSDK_OFFSET(0xC5CA0E0)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_BC329F31E2118F30_OFFSET UNITYSDK_OFFSET(0xC5C9570)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xC5CA5E0)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_C51147DFC440FFBF_OFFSET UNITYSDK_OFFSET(0xC5C9C30)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_D55646974202D5CD_OFFSET UNITYSDK_OFFSET(0xC5C96A0)
#define CLASS_1_E44054C0F1A43C8E_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xC5CA930)
#define CLASS_1_E44054C0F1A43C8E_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xC5C9310)
#define CLASS_1_E44054C0F1A43C8E_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xC5C9400)
#define CLASS_1_E44054C0F1A43C8E__CTOR_OFFSET UNITYSDK_OFFSET(0xC5CA940)

inline static constexpr unsigned int Class_1_E44054C0F1A43C8E_TypeDefinitionIndex = 49877;

class Class_1_E44054C0F1A43C8E : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::Struct_2_081645D6A8F2DA59>* Field_1_4; // 0x10
	::Class_1_F381B5B19F220415* Field_1_1; // 0x18
	::Class_1_2CAAA2FDF9170110* Field_1_7; // 0x20
	::System::Collections::Generic::List_1<::Class_3_024B137FE9F1BACE*>* Field_1_2; // 0x28
	::Il2CppArray<::Class_2_71A48ED3DBF9C636*>* Field_1_3; // 0x30
	::RPG::GameCore::GameWorld* Field_1_0; // 0x38
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_449*>* Field_1_9; // 0x40
	::System::Func_3<::Class_0_16E4307DCC419505_408*, ::Class_0_16E4307DCC419505_408*, ::System::Int32>* Field_1_6; // 0x48
	::System::Collections::Generic::Stack_1<::Struct_2_37A6863931715729>* Field_1_5; // 0x50
	::System::Boolean Field_1_8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_04F02FC65FAA2E0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_04F02FC65FAA2E0C_OFFSET))(this);
	}

	::System::Void Method_1_6FE6E0587E8D1F5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_6FE6E0587E8D1F5C_OFFSET))(this);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F_1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_58E4F6A5F8FAF17F_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_54DC8E44CB0235C2(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_54DC8E44CB0235C2_OFFSET))(this, a1);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_207146490BB7E633(::Class_3_024B137FE9F1BACE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_024B137FE9F1BACE*))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_207146490BB7E633_OFFSET))(this, a1);
	}

	::System::Void Method_1_BC329F31E2118F30(::Class_3_024B137FE9F1BACE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_024B137FE9F1BACE*))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_BC329F31E2118F30_OFFSET))(this, a1);
	}

	::System::Void Method_1_6AE109D99029E000(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_6AE109D99029E000_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D55646974202D5CD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_D55646974202D5CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_74423D7D8FA233A8(::RPG::GameCore::RtModifierEvent a1, ::Class_1_5469D397DAE62876* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtModifierEvent, ::Class_1_5469D397DAE62876*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_74423D7D8FA233A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_37F6B7037B74F57A(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::RtModifierEvent a2, ::Class_1_5469D397DAE62876* a3, ::RPG::GameCore::GameEntity* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtModifierEvent, ::Class_1_5469D397DAE62876*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_37F6B7037B74F57A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_19525A340F45209B(::RPG::GameCore::RtModifierEvent a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4, ::RPG::GameCore::GameEntity* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtModifierEvent, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_19525A340F45209B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_61A325D7539DFACB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::RtModifierEvent a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a5, ::RPG::GameCore::GameEntity* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtModifierEvent, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_61A325D7539DFACB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_C51147DFC440FFBF(::RPG::GameCore::RtModifierEvent a1, ::Class_0_16E4307DCC419505_408* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtModifierEvent, ::Class_0_16E4307DCC419505_408*))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_C51147DFC440FFBF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F_2(::Class_0_16E4307DCC419505_449* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_449*))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_58E4F6A5F8FAF17F_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F_3(::Class_0_16E4307DCC419505_449* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_449*))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_58E4F6A5F8FAF17F_3_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_1_78B00C4500677DE2(::Class_0_16E4307DCC419505_408* a1, ::Class_0_16E4307DCC419505_408* a2)
	{
		return ((::System::Int32(*)(::Class_0_16E4307DCC419505_408*, ::Class_0_16E4307DCC419505_408*))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_78B00C4500677DE2_OFFSET))(a1, a2);
	}

	::System::Void Method_1_104F74E8F934FD74(::RPG::GameCore::RtModifierEvent a1, ::Class_0_16E4307DCC419505_408* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtModifierEvent, ::Class_0_16E4307DCC419505_408*))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_104F74E8F934FD74_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BCCEF225A11BDA90(::Struct_2_081645D6A8F2DA59 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_081645D6A8F2DA59))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::Struct_2_081645D6A8F2DA59 Method_1_4E1969F1317D7407()
	{
		return ((::Struct_2_081645D6A8F2DA59(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_4E1969F1317D7407_OFFSET))(this);
	}

	::System::Void Method_1_57E7F09C4DC7BD6F(::Class_2_24193089A4D2255F* a1, ::RPG::GameCore::RtModifierEvent a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_24193089A4D2255F*, ::RPG::GameCore::RtModifierEvent))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_57E7F09C4DC7BD6F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::RPG::GameCore::RtModifierEvent Method_1_613F3A8AB03DA0D2()
	{
		return ((::RPG::GameCore::RtModifierEvent(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_613F3A8AB03DA0D2_OFFSET))(this);
	}

	::Struct_2_37A6863931715729 Method_1_4E1969F1317D7407_1()
	{
		return ((::Struct_2_37A6863931715729(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_4E1969F1317D7407_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E44054C0F1A43C8E_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
