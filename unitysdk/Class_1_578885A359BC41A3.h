#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_578885A359BC41A3_EPauseReason.h"
#include "unitysdk/Class_1_578885A359BC41A3_EStationOpenState.h"
#include "unitysdk/Class_1_72E008EEEC426B7A_EJumpMode.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_567;
class Class_1_94EB88AA9CBAE857;
class Class_1_9B6BEE1CD9DBAFD5;
class Class_2_D2FADB5DB88DD906;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace RPG::GameCore { class TimeScaleStack; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_578885A359BC41A3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4CD6A0)
#define CLASS_1_578885A359BC41A3_METHOD_1_0A79BB39472B56D2_OFFSET UNITYSDK_OFFSET(0xC4CC960)
#define CLASS_1_578885A359BC41A3_METHOD_1_205038A82D477568_OFFSET UNITYSDK_OFFSET(0xC4CC760)
#define CLASS_1_578885A359BC41A3_METHOD_1_206E989D49F0850E_OFFSET UNITYSDK_OFFSET(0xC4CE220)
#define CLASS_1_578885A359BC41A3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xC4CE960)
#define CLASS_1_578885A359BC41A3_METHOD_1_271744E94DD12D7E_OFFSET UNITYSDK_OFFSET(0xC4CC2B0)
#define CLASS_1_578885A359BC41A3_METHOD_1_2DE13BE11F24F545_OFFSET UNITYSDK_OFFSET(0xC4CE440)
#define CLASS_1_578885A359BC41A3_METHOD_1_4356E727FC496A9D_OFFSET UNITYSDK_OFFSET(0xC4CC520)
#define CLASS_1_578885A359BC41A3_METHOD_1_48838CDCB359D9A4_OFFSET UNITYSDK_OFFSET(0xC4CBFD0)
#define CLASS_1_578885A359BC41A3_METHOD_1_4C2ACACD89F4EF1A_1_OFFSET UNITYSDK_OFFSET(0xC4CA950)
#define CLASS_1_578885A359BC41A3_METHOD_1_4C2ACACD89F4EF1A_OFFSET UNITYSDK_OFFSET(0xC4CA2C0)
#define CLASS_1_578885A359BC41A3_METHOD_1_50D6A7C67ED3EDC7_OFFSET UNITYSDK_OFFSET(0xC4CD220)
#define CLASS_1_578885A359BC41A3_METHOD_1_5D53ED51EF8A6513_OFFSET UNITYSDK_OFFSET(0xC4CE1D0)
#define CLASS_1_578885A359BC41A3_METHOD_1_627CA8675CCF5CBD_OFFSET UNITYSDK_OFFSET(0xC4CCCB0)
#define CLASS_1_578885A359BC41A3_METHOD_1_74C597313EED91D6_OFFSET UNITYSDK_OFFSET(0xC4CC1B0)
#define CLASS_1_578885A359BC41A3_METHOD_1_76E0971E916FC215_OFFSET UNITYSDK_OFFSET(0xC4CA6D0)
#define CLASS_1_578885A359BC41A3_METHOD_1_814D155F7DAD88CA_1_OFFSET UNITYSDK_OFFSET(0xC4CA8A0)
#define CLASS_1_578885A359BC41A3_METHOD_1_814D155F7DAD88CA_OFFSET UNITYSDK_OFFSET(0xC4CA210)
#define CLASS_1_578885A359BC41A3_METHOD_1_8894E534FED3129C_OFFSET UNITYSDK_OFFSET(0xC4CB060)
#define CLASS_1_578885A359BC41A3_METHOD_1_8F8FD453339F3F3F_OFFSET UNITYSDK_OFFSET(0xC4CAAC0)
#define CLASS_1_578885A359BC41A3_METHOD_1_8FA5441D0B79BBBE_OFFSET UNITYSDK_OFFSET(0xC4CAF70)
#define CLASS_1_578885A359BC41A3_METHOD_1_A2132D12500AF157_OFFSET UNITYSDK_OFFSET(0xC4CCEC0)
#define CLASS_1_578885A359BC41A3_METHOD_1_A9FFFD53D0F733E2_1_OFFSET UNITYSDK_OFFSET(0xC4CA9D0)
#define CLASS_1_578885A359BC41A3_METHOD_1_A9FFFD53D0F733E2_OFFSET UNITYSDK_OFFSET(0xC4CA340)
#define CLASS_1_578885A359BC41A3_METHOD_1_AA66B05894B640F7_OFFSET UNITYSDK_OFFSET(0xC4CA5D0)
#define CLASS_1_578885A359BC41A3_METHOD_1_AB1A253BFABC50A9_OFFSET UNITYSDK_OFFSET(0xC4CD150)
#define CLASS_1_578885A359BC41A3_METHOD_1_B679E9E5B94C6DE8_OFFSET UNITYSDK_OFFSET(0xC4CD080)
#define CLASS_1_578885A359BC41A3_METHOD_1_CC641FB813095168_OFFSET UNITYSDK_OFFSET(0xC4CA430)
#define CLASS_1_578885A359BC41A3_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0xC4CE9D0)
#define CLASS_1_578885A359BC41A3_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xC4CD620)
#define CLASS_1_578885A359BC41A3_METHOD_1_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0xC4CB640)
#define CLASS_1_578885A359BC41A3_METHOD_1_E5630A859AA24FB3_OFFSET UNITYSDK_OFFSET(0xC4CE970)
#define CLASS_1_578885A359BC41A3_METHOD_1_EB62C8DE9FD7DAF9_OFFSET UNITYSDK_OFFSET(0xC4CB0C0)
#define CLASS_1_578885A359BC41A3_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xC4CA070)
#define CLASS_1_578885A359BC41A3_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xC4CE940)
#define CLASS_1_578885A359BC41A3__CCTOR_OFFSET UNITYSDK_OFFSET(0xC4CEA50)
#define CLASS_1_578885A359BC41A3__CTOR_OFFSET UNITYSDK_OFFSET(0xC4CACA0)

inline static constexpr unsigned int Class_1_578885A359BC41A3_TypeDefinitionIndex = 55186;

class Class_1_578885A359BC41A3 : public ::System::Object
{
public:
	static ::System::Object** StaticGet_Field_1_4()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_578885A359BC41A3_TypeDefinitionIndex)->GetStaticField(0x5EBB0);
	}
	static ::Class_1_578885A359BC41A3** StaticGet_Field_1_3()
	{
		return (::Class_1_578885A359BC41A3**)Il2CppClass::FromTypeDefinitionIndex(Class_1_578885A359BC41A3_TypeDefinitionIndex)->GetStaticField(0x5EBB8);
	}
	// static const ::System::Single Field_1_17; // 0x0
	// static const ::System::Single Field_1_18; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>*>* Field_1_13; // 0x10
	::RPG::GameCore::TimeScaleStack* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_567*>* Field_1_12; // 0x20
	::Class_1_9B6BEE1CD9DBAFD5* Field_1_16; // 0x28
	::Class_2_D2FADB5DB88DD906* Field_1_15; // 0x30
	::RPG::Client::MapDef* Field_1_9; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_567*>* Field_1_11; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::System::Boolean>*>* Field_1_2; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Action_1<::Class_1_578885A359BC41A3_EStationOpenState>*>*>* Field_1_1; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::System::Boolean>*>* Field_1_0; // 0x58
	::Class_1_94EB88AA9CBAE857* Field_1_14; // 0x60
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_10; // 0x68
	::RPG::Client::ReasonBool_1<::Class_1_578885A359BC41A3_EPauseReason> Field_1_8; // 0x70
	::System::Boolean Field_1_7; // 0x78
	::System::Boolean Field_1_6; // 0x79

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3__CCTOR_OFFSET))();
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_1_814D155F7DAD88CA(::System::String* a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_814D155F7DAD88CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4C2ACACD89F4EF1A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_4C2ACACD89F4EF1A_OFFSET))(this, a1);
	}

	::System::Void Method_1_A9FFFD53D0F733E2(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_A9FFFD53D0F733E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CC641FB813095168(::System::String* a1, ::System::Action_1<::Class_1_578885A359BC41A3_EStationOpenState>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_578885A359BC41A3_EStationOpenState>*))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_CC641FB813095168_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AA66B05894B640F7(::System::String* a1, ::System::Action_1<::Class_1_578885A359BC41A3_EStationOpenState>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_578885A359BC41A3_EStationOpenState>*))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_AA66B05894B640F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_76E0971E916FC215(::System::String* a1, ::Class_1_578885A359BC41A3_EStationOpenState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_578885A359BC41A3_EStationOpenState))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_76E0971E916FC215_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_814D155F7DAD88CA_1(::System::String* a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_814D155F7DAD88CA_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4C2ACACD89F4EF1A_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_4C2ACACD89F4EF1A_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A9FFFD53D0F733E2_1(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_A9FFFD53D0F733E2_1_OFFSET))(this, a1, a2);
	}

	static ::Class_1_578885A359BC41A3* Method_1_8F8FD453339F3F3F()
	{
		return ((::Class_1_578885A359BC41A3*(*)())((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_8F8FD453339F3F3F_OFFSET))();
	}

	::System::Void Method_1_8FA5441D0B79BBBE(::System::Boolean a1, ::Class_1_578885A359BC41A3_EPauseReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_578885A359BC41A3_EPauseReason))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_8FA5441D0B79BBBE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8894E534FED3129C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_8894E534FED3129C_OFFSET))(this);
	}

	::System::Void Method_1_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::System::Void Method_1_48838CDCB359D9A4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_48838CDCB359D9A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_74C597313EED91D6(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_74C597313EED91D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_205038A82D477568(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_205038A82D477568_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_627CA8675CCF5CBD(::Class_1_72E008EEEC426B7A_EJumpMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_72E008EEEC426B7A_EJumpMode))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_627CA8675CCF5CBD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A2132D12500AF157(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_A2132D12500AF157_OFFSET))(this, a1);
	}

	::System::Void Method_1_B679E9E5B94C6DE8(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_B679E9E5B94C6DE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EB62C8DE9FD7DAF9(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_EB62C8DE9FD7DAF9_OFFSET))(this, a1);
	}

	::System::Void Method_1_50D6A7C67ED3EDC7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_50D6A7C67ED3EDC7_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_271744E94DD12D7E(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_271744E94DD12D7E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0A79BB39472B56D2(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_0A79BB39472B56D2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5D53ED51EF8A6513(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_5D53ED51EF8A6513_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB1A253BFABC50A9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_AB1A253BFABC50A9_OFFSET))(this, a1);
	}

	::System::Void Method_1_206E989D49F0850E(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_206E989D49F0850E_OFFSET))(this, a1);
	}

	::System::Void Method_1_2DE13BE11F24F545(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_2DE13BE11F24F545_OFFSET))(this, a1);
	}

	::RPG::Client::IAssetOperation* Method_1_4356E727FC496A9D(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_4356E727FC496A9D_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::Class_1_94EB88AA9CBAE857* Method_1_24748FC20F375725()
	{
		return ((::Class_1_94EB88AA9CBAE857*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::Class_2_D2FADB5DB88DD906* Method_1_E5630A859AA24FB3()
	{
		return ((::Class_2_D2FADB5DB88DD906*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_E5630A859AA24FB3_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3_METHOD_1_D64FD9A228A1C4E0_1_OFFSET))(this);
	}
};
