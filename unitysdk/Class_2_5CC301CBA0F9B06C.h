#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_952A7C560FC1CD4B.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"

class Class_0_16E4307DCC419505_339;
class Class_1_6680B389A28C1730;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_004598EA5EBAC892_OFFSET UNITYSDK_OFFSET(0x15158270)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_06203D43FC0EF766_OFFSET UNITYSDK_OFFSET(0x151560E0)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14196370)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_2091F34306E68C88_OFFSET UNITYSDK_OFFSET(0x15156970)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_31088BC584A51D26_OFFSET UNITYSDK_OFFSET(0x15156140)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_34684A7FBB4BE4DB_OFFSET UNITYSDK_OFFSET(0x15157440)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x151582D0)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_48A7652DB8EBD9D0_OFFSET UNITYSDK_OFFSET(0x15157270)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_4DE65AB3A4860CEB_1_OFFSET UNITYSDK_OFFSET(0x151577C0)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_4DE65AB3A4860CEB_OFFSET UNITYSDK_OFFSET(0x15156AA0)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x15158210)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x151581B0)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_7379F6F0451DB9CF_OFFSET UNITYSDK_OFFSET(0x15156E40)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_B9F11F0F4B258D26_OFFSET UNITYSDK_OFFSET(0x15157080)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x15158330)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14196420)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x14196470)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x15157780)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x141963D0)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_D1305BC17A89C222_OFFSET UNITYSDK_OFFSET(0x15156C20)
#define CLASS_2_5CC301CBA0F9B06C_METHOD_2_DBBC2E09C41EF26D_OFFSET UNITYSDK_OFFSET(0x151578E0)
#define CLASS_2_5CC301CBA0F9B06C__CTOR_OFFSET UNITYSDK_OFFSET(0x151580B0)

inline static constexpr unsigned int Class_2_5CC301CBA0F9B06C_TypeDefinitionIndex = 46530;

class Class_2_5CC301CBA0F9B06C : public ::Class_1_952A7C560FC1CD4B
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_339*>* Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::Class_1_6680B389A28C1730*>* Field_2_1; // 0x30
	::System::Action* Field_2_2; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_2_3; // 0x40
	::System::Single Field_2_4; // 0x48
	::System::Single Field_2_5; // 0x4C
	::System::Boolean Field_2_6; // 0x50
	::System::Boolean Field_2_7; // 0x51

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	static ::System::Void Method_2_06203D43FC0EF766(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_06203D43FC0EF766_OFFSET))(a1);
	}

	::System::Void Method_2_31088BC584A51D26(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_31088BC584A51D26_OFFSET))(this, a1);
	}

	::System::Void Method_2_2091F34306E68C88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_2091F34306E68C88_OFFSET))(this);
	}

	::System::Void Method_2_4DE65AB3A4860CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_4DE65AB3A4860CEB_OFFSET))(this);
	}

	::System::Void Method_2_7379F6F0451DB9CF(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_7379F6F0451DB9CF_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9F11F0F4B258D26(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_B9F11F0F4B258D26_OFFSET))(this, a1);
	}

	::System::Void Method_2_D1305BC17A89C222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_D1305BC17A89C222_OFFSET))(this);
	}

	::System::Void Method_2_48A7652DB8EBD9D0(::Il2CppArray<::Class_0_16E4307DCC419505_339*>* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_339*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_48A7652DB8EBD9D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_34684A7FBB4BE4DB(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_339*>* a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_339*>*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_34684A7FBB4BE4DB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_2_4DE65AB3A4860CEB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_4DE65AB3A4860CEB_1_OFFSET))(this);
	}

	::System::Void Method_2_DBBC2E09C41EF26D(::EnviromentSystemV2Space::OutputType a1, ::System::Single a2, ::System::Action* a3, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_339*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::System::Single, ::System::Action*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_339*>*))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_DBBC2E09C41EF26D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_004598EA5EBAC892(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_004598EA5EBAC892_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}

	::System::Void Method_2_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5CC301CBA0F9B06C_METHOD_2_C91E5170F9E36EED_OFFSET))(this, a1);
	}
};
