#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47.h"
#include "unitysdk/Class_1_5B228A4605C15E47_Struct_2_823833D588E72957.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemEnableReason.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_303D5A33D1401D59;
class Class_1_56FF45D7B2C55655;
class Class_1_76597B0FC8DCAD88;
class Class_1_8A6989C352B0F0F0;
class Class_2_9959A93E28890169;
class Class_2_CBDF63BA2C3715C3;
namespace RPG { class IReference; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class EnvironmentDataInfo; }
namespace RPG::GameCore { class StagePrefabInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_2_1DF845F074911800_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EADEF0)
#define CLASS_2_1DF845F074911800_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9EAD680)
#define CLASS_2_1DF845F074911800_METHOD_2_066BA216A1F2A354_OFFSET UNITYSDK_OFFSET(0x9EB0FA0)
#define CLASS_2_1DF845F074911800_METHOD_2_0C14E2F7A3D38A0C_1_OFFSET UNITYSDK_OFFSET(0x9EB45B0)
#define CLASS_2_1DF845F074911800_METHOD_2_0C14E2F7A3D38A0C_OFFSET UNITYSDK_OFFSET(0x9EB4530)
#define CLASS_2_1DF845F074911800_METHOD_2_0EC0ECDD431DDF18_OFFSET UNITYSDK_OFFSET(0x9EB02F0)
#define CLASS_2_1DF845F074911800_METHOD_2_119F45C49A6D0A61_OFFSET UNITYSDK_OFFSET(0x9EB1A90)
#define CLASS_2_1DF845F074911800_METHOD_2_1300D853EC7F2C87_OFFSET UNITYSDK_OFFSET(0x9EAA270)
#define CLASS_2_1DF845F074911800_METHOD_2_13D98C8C9D23934F_OFFSET UNITYSDK_OFFSET(0x9EB01B0)
#define CLASS_2_1DF845F074911800_METHOD_2_1FFB392329DBE0D7_OFFSET UNITYSDK_OFFSET(0x9EB4450)
#define CLASS_2_1DF845F074911800_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x9EB32D0)
#define CLASS_2_1DF845F074911800_METHOD_2_26C5221AC22B6534_OFFSET UNITYSDK_OFFSET(0x9EB4440)
#define CLASS_2_1DF845F074911800_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x9EAC290)
#define CLASS_2_1DF845F074911800_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9EAA4D0)
#define CLASS_2_1DF845F074911800_METHOD_2_31C9AA5582664545_OFFSET UNITYSDK_OFFSET(0x9EB0D60)
#define CLASS_2_1DF845F074911800_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x9EB3790)
#define CLASS_2_1DF845F074911800_METHOD_2_39CB98ABCDE77C2D_OFFSET UNITYSDK_OFFSET(0x9EB0BD0)
#define CLASS_2_1DF845F074911800_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x9EADC00)
#define CLASS_2_1DF845F074911800_METHOD_2_3F3693110F25FD62_OFFSET UNITYSDK_OFFSET(0x9EB18E0)
#define CLASS_2_1DF845F074911800_METHOD_2_45024F3EBCDBE192_OFFSET UNITYSDK_OFFSET(0x9EAF750)
#define CLASS_2_1DF845F074911800_METHOD_2_45F50E6FF8EBA384_OFFSET UNITYSDK_OFFSET(0x9EB2DD0)
#define CLASS_2_1DF845F074911800_METHOD_2_4ADB2B17F54973DE_OFFSET UNITYSDK_OFFSET(0x9EADB40)
#define CLASS_2_1DF845F074911800_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x9EAD190)
#define CLASS_2_1DF845F074911800_METHOD_2_513A6D736C4BF66A_OFFSET UNITYSDK_OFFSET(0x9EB4760)
#define CLASS_2_1DF845F074911800_METHOD_2_59FF52498ADFDF6D_OFFSET UNITYSDK_OFFSET(0x9EB2600)
#define CLASS_2_1DF845F074911800_METHOD_2_5AFFA079DA8B20AA_1_OFFSET UNITYSDK_OFFSET(0x9EB4460)
#define CLASS_2_1DF845F074911800_METHOD_2_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x9EAD3D0)
#define CLASS_2_1DF845F074911800_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x9EAF0D0)
#define CLASS_2_1DF845F074911800_METHOD_2_69DB4E6A246A8C50_OFFSET UNITYSDK_OFFSET(0x9EB46D0)
#define CLASS_2_1DF845F074911800_METHOD_2_6F677BE8B748BDD6_OFFSET UNITYSDK_OFFSET(0x9EB0E40)
#define CLASS_2_1DF845F074911800_METHOD_2_73E7114C14C34A4A_OFFSET UNITYSDK_OFFSET(0x9EB1820)
#define CLASS_2_1DF845F074911800_METHOD_2_78BD37F838E56E4E_OFFSET UNITYSDK_OFFSET(0x9EB46E0)
#define CLASS_2_1DF845F074911800_METHOD_2_7C35D2BC7FBDA31C_OFFSET UNITYSDK_OFFSET(0x9EB3390)
#define CLASS_2_1DF845F074911800_METHOD_2_814F1C63A13F3FD8_OFFSET UNITYSDK_OFFSET(0x9EAE9A0)
#define CLASS_2_1DF845F074911800_METHOD_2_8553D6F0E217F736_OFFSET UNITYSDK_OFFSET(0x9EB2020)
#define CLASS_2_1DF845F074911800_METHOD_2_89DECAB5B4933D0A_OFFSET UNITYSDK_OFFSET(0x9EAFC20)
#define CLASS_2_1DF845F074911800_METHOD_2_953470A46D963D9F_OFFSET UNITYSDK_OFFSET(0x9EAD500)
#define CLASS_2_1DF845F074911800_METHOD_2_95ADA86398E2C5F5_OFFSET UNITYSDK_OFFSET(0x9EB4510)
#define CLASS_2_1DF845F074911800_METHOD_2_962621653A284B45_OFFSET UNITYSDK_OFFSET(0x9EAEB20)
#define CLASS_2_1DF845F074911800_METHOD_2_98EBFC3224A8653B_OFFSET UNITYSDK_OFFSET(0x9EAD940)
#define CLASS_2_1DF845F074911800_METHOD_2_9FDBC1ABADDA5E04_OFFSET UNITYSDK_OFFSET(0x9EB3D40)
#define CLASS_2_1DF845F074911800_METHOD_2_A02CF39103E765F0_OFFSET UNITYSDK_OFFSET(0x9EB3CE0)
#define CLASS_2_1DF845F074911800_METHOD_2_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x9EB3FB0)
#define CLASS_2_1DF845F074911800_METHOD_2_AD8ACDD1DBC2CFDE_OFFSET UNITYSDK_OFFSET(0x9EB3050)
#define CLASS_2_1DF845F074911800_METHOD_2_AE9766AFBBB00922_OFFSET UNITYSDK_OFFSET(0x9EAD360)
#define CLASS_2_1DF845F074911800_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x9EAC360)
#define CLASS_2_1DF845F074911800_METHOD_2_B2CECC7FF59DC603_OFFSET UNITYSDK_OFFSET(0x9EB46C0)
#define CLASS_2_1DF845F074911800_METHOD_2_B6BEDD4225354620_OFFSET UNITYSDK_OFFSET(0x9EB44F0)
#define CLASS_2_1DF845F074911800_METHOD_2_B877F7806A0C6446_OFFSET UNITYSDK_OFFSET(0x9EAA750)
#define CLASS_2_1DF845F074911800_METHOD_2_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x9EAE950)
#define CLASS_2_1DF845F074911800_METHOD_2_BD3151512FEA4FC1_OFFSET UNITYSDK_OFFSET(0x9EB39B0)
#define CLASS_2_1DF845F074911800_METHOD_2_BD8EEAFD67E5AD68_OFFSET UNITYSDK_OFFSET(0x9EB1E40)
#define CLASS_2_1DF845F074911800_METHOD_2_BEF2F2BBB0AD3447_OFFSET UNITYSDK_OFFSET(0x9EB05F0)
#define CLASS_2_1DF845F074911800_METHOD_2_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x9EB1480)
#define CLASS_2_1DF845F074911800_METHOD_2_C35310DB91DD6546_OFFSET UNITYSDK_OFFSET(0x9EAD880)
#define CLASS_2_1DF845F074911800_METHOD_2_C6159FCF4A6D407A_OFFSET UNITYSDK_OFFSET(0x9EACFA0)
#define CLASS_2_1DF845F074911800_METHOD_2_C76FBF5BDDCD86A3_OFFSET UNITYSDK_OFFSET(0x9EB3600)
#define CLASS_2_1DF845F074911800_METHOD_2_C82DF9C334A0C8F2_OFFSET UNITYSDK_OFFSET(0x9EAD440)
#define CLASS_2_1DF845F074911800_METHOD_2_CA3083E86B1C0764_OFFSET UNITYSDK_OFFSET(0x9EB3A60)
#define CLASS_2_1DF845F074911800_METHOD_2_CF95B16CCAFA4137_OFFSET UNITYSDK_OFFSET(0x9EB2420)
#define CLASS_2_1DF845F074911800_METHOD_2_D489F3D943173A56_OFFSET UNITYSDK_OFFSET(0x9EB17B0)
#define CLASS_2_1DF845F074911800_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x9EB4650)
#define CLASS_2_1DF845F074911800_METHOD_2_D691243C93840A43_OFFSET UNITYSDK_OFFSET(0x9EB4750)
#define CLASS_2_1DF845F074911800_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x9EAE580)
#define CLASS_2_1DF845F074911800_METHOD_2_DA0AD41C12822C47_OFFSET UNITYSDK_OFFSET(0x9EAFB60)
#define CLASS_2_1DF845F074911800_METHOD_2_DB4D2BAE2BB4B8D3_OFFSET UNITYSDK_OFFSET(0x9EAE900)
#define CLASS_2_1DF845F074911800_METHOD_2_DBB3752363FFFC3B_OFFSET UNITYSDK_OFFSET(0x9EADC50)
#define CLASS_2_1DF845F074911800_METHOD_2_DC703AC5AA81BFEE_OFFSET UNITYSDK_OFFSET(0x9EB2570)
#define CLASS_2_1DF845F074911800_METHOD_2_E34938DC4D84E7AA_OFFSET UNITYSDK_OFFSET(0x9EB2220)
#define CLASS_2_1DF845F074911800_METHOD_2_E35766CC3B2B81A4_OFFSET UNITYSDK_OFFSET(0x9EB4630)
#define CLASS_2_1DF845F074911800_METHOD_2_E68009D77E995993_OFFSET UNITYSDK_OFFSET(0x9EAA560)
#define CLASS_2_1DF845F074911800_METHOD_2_EB494B8C67649228_OFFSET UNITYSDK_OFFSET(0x9EAF560)
#define CLASS_2_1DF845F074911800_METHOD_2_EDDD1B285B468C3C_OFFSET UNITYSDK_OFFSET(0x9EAE750)
#define CLASS_2_1DF845F074911800_METHOD_2_EF7E445A255560A8_OFFSET UNITYSDK_OFFSET(0x9EAA1A0)
#define CLASS_2_1DF845F074911800_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x9EB17A0)
#define CLASS_2_1DF845F074911800_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x9EB3380)
#define CLASS_2_1DF845F074911800_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9EB1790)
#define CLASS_2_1DF845F074911800_METHOD_2_F3C83B2CAC9EAE37_OFFSET UNITYSDK_OFFSET(0x9EB4500)
#define CLASS_2_1DF845F074911800_METHOD_2_F4B96A0CCF7079C7_OFFSET UNITYSDK_OFFSET(0x9EAFE60)
#define CLASS_2_1DF845F074911800_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x9EB4220)
#define CLASS_2_1DF845F074911800_METHOD_2_F81F40BFD8FF4C5C_OFFSET UNITYSDK_OFFSET(0x9EAF390)
#define CLASS_2_1DF845F074911800_METHOD_2_F966E4837A59737F_OFFSET UNITYSDK_OFFSET(0x9EAD710)
#define CLASS_2_1DF845F074911800_METHOD_2_F9838B477D07E270_OFFSET UNITYSDK_OFFSET(0x9EB44E0)
#define CLASS_2_1DF845F074911800_METHOD_2_F985B5DB65161B2E_1_OFFSET UNITYSDK_OFFSET(0x9EAD600)
#define CLASS_2_1DF845F074911800_METHOD_2_F985B5DB65161B2E_OFFSET UNITYSDK_OFFSET(0x9EAD580)
#define CLASS_2_1DF845F074911800_METHOD_2_FC61BC5ECCCAA13D_OFFSET UNITYSDK_OFFSET(0x9EAECE0)
#define CLASS_2_1DF845F074911800__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EB42A0)
#define CLASS_2_1DF845F074911800__CTOR_OFFSET UNITYSDK_OFFSET(0x9EAB900)
#define CLASS_2_1DF845F074911800___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EB4640)
#define CLASS_2_1DF845F074911800___IFIXBASEPROXY_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9EB4520)
#define CLASS_2_1DF845F074911800___N__0_OFFSET UNITYSDK_OFFSET(0x9EB43C0)

inline static constexpr unsigned int Class_2_1DF845F074911800_TypeDefinitionIndex = 58819;

class Class_2_1DF845F074911800 : public ::Class_1_5B228A4605C15E47
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_2_25()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1DF845F074911800_TypeDefinitionIndex)->GetStaticField(0x9FC0);
	}
	static ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>** StaticGet_Field_2_17()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1DF845F074911800_TypeDefinitionIndex)->GetStaticField(0x9FC8);
	}
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1DF845F074911800_TypeDefinitionIndex)->GetStaticField(0x9FD0);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::ValueTuple_2<::System::String*, ::System::Int32>>* Field_2_20; // 0x168
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*>* Field_2_35; // 0x170
	::System::Collections::Generic::Dictionary_2<::Class_2_9959A93E28890169*, ::Class_1_76597B0FC8DCAD88*>* Field_2_16; // 0x178
	::System::Collections::Generic::HashSet_1<::Class_2_CBDF63BA2C3715C3*>* Field_2_28; // 0x180
	::UnityEngine::GameObject* Field_2_9; // 0x188
	::System::Action_3<::UnityEngine::Object*, ::RPG::IReference*, ::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_2; // 0x190
	::System::String* Field_2_8; // 0x198
	::RPG::Client::OpenWorld::StreamingItemData* Field_2_7; // 0x1A0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* Field_2_29; // 0x1A8
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*>*>* Field_2_32; // 0x1B0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::UInt32>* Field_2_4; // 0x1B8
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* Field_2_15; // 0x1C0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>*>* Field_2_30; // 0x1C8
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>*>* Field_2_33; // 0x1D0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*>* Field_2_34; // 0x1D8
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_14; // 0x1E0
	::System::Collections::Generic::List_1<::Class_2_CBDF63BA2C3715C3*>* Field_2_27; // 0x1E8
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* Field_2_5; // 0x1F0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*>* Field_2_23; // 0x1F8
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*>* Field_2_19; // 0x200
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_18; // 0x208
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_2_13; // 0x210
	::UnityEngine::GameObject* Field_2_12; // 0x218
	::System::Action_4<::RPG::IReference*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean>* Field_2_1; // 0x220
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Object*>* Field_2_3; // 0x228
	::System::Action* Field_2_11; // 0x230
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_31; // 0x238
	::System::Collections::Generic::List_1<::System::Action*>* Field_2_21; // 0x240
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_6; // 0x248
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::String*>* Field_2_24; // 0x250
	::System::Boolean Field_2_10; // 0x258
	::System::Boolean Field_2_22; // 0x259
	::System::Int32 Field_2_26; // 0x25C

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_56FF45D7B2C55655* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4, ::UnityEngine::GameObject* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_56FF45D7B2C55655*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800__CCTOR_OFFSET))();
	}

	::System::Void Method_2_EF7E445A255560A8(::RPG::IReference* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::IReference*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_EF7E445A255560A8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E68009D77E995993(::UnityEngine::Object* a1, ::RPG::IReference* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::RPG::IReference*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_E68009D77E995993_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_2_AE9766AFBBB00922(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_AE9766AFBBB00922_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_C82DF9C334A0C8F2(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_C82DF9C334A0C8F2_OFFSET))(this, a1);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_953470A46D963D9F(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_953470A46D963D9F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F985B5DB65161B2E(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_F985B5DB65161B2E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F985B5DB65161B2E_1(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_F985B5DB65161B2E_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean InActiveInstance(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_INACTIVEINSTANCE_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_2_F966E4837A59737F(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_F966E4837A59737F_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_C35310DB91DD6546(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_C35310DB91DD6546_OFFSET))(this, a1);
	}

	::System::Void Method_2_98EBFC3224A8653B(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::RPG::GameCore::EnvironmentDataInfo* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::EnvironmentDataInfo*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_98EBFC3224A8653B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4ADB2B17F54973DE(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::RPG::GameCore::EnvironmentDataInfo* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::EnvironmentDataInfo*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_4ADB2B17F54973DE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_DBB3752363FFFC3B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_DBB3752363FFFC3B_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_EDDD1B285B468C3C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_EDDD1B285B468C3C_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB4D2BAE2BB4B8D3(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_DB4D2BAE2BB4B8D3_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_BC46FCF99873D9DD_OFFSET))(this);
	}

	::System::Void Method_2_814F1C63A13F3FD8(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_814F1C63A13F3FD8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_962621653A284B45(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_962621653A284B45_OFFSET))(this, a1);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_FC61BC5ECCCAA13D(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_FC61BC5ECCCAA13D_OFFSET))(this, a1);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_F81F40BFD8FF4C5C(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_F81F40BFD8FF4C5C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EB494B8C67649228(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_EB494B8C67649228_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_B877F7806A0C6446(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Object* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Object*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_B877F7806A0C6446_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_1300D853EC7F2C87(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_1300D853EC7F2C87_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F4B96A0CCF7079C7(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_F4B96A0CCF7079C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_13D98C8C9D23934F(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_13D98C8C9D23934F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BEF2F2BBB0AD3447(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_BEF2F2BBB0AD3447_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_39CB98ABCDE77C2D(::System::Action_1<::UnityEngine::Object*>* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_39CB98ABCDE77C2D_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Object* Method_2_0EC0ECDD431DDF18(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_0EC0ECDD431DDF18_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_2_31C9AA5582664545(::System::Int32 a1, ::RPG::GameCore::StagePrefabInfo* a2)
	{
		return ((::System::String*(*)(::System::Int32, ::RPG::GameCore::StagePrefabInfo*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_31C9AA5582664545_OFFSET))(a1, a2);
	}

	::System::Void Method_2_C6159FCF4A6D407A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_C6159FCF4A6D407A_OFFSET))(this);
	}

	::System::Void Method_2_6F677BE8B748BDD6(::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47_Struct_2_823833D588E72957>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47_Struct_2_823833D588E72957>*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_6F677BE8B748BDD6_OFFSET))(this, a1);
	}

	::System::Void Method_2_066BA216A1F2A354(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::Client::OpenWorld::StreamingItemEnableReason a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemEnableReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_066BA216A1F2A354_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_D489F3D943173A56(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_D489F3D943173A56_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_2_73E7114C14C34A4A(::Class_2_CBDF63BA2C3715C3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CBDF63BA2C3715C3*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_73E7114C14C34A4A_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F3693110F25FD62(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_3F3693110F25FD62_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD8EEAFD67E5AD68(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_BD8EEAFD67E5AD68_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8553D6F0E217F736(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_8553D6F0E217F736_OFFSET))(this, a1);
	}

	::System::Void Method_2_E34938DC4D84E7AA(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_E34938DC4D84E7AA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CF95B16CCAFA4137(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_CF95B16CCAFA4137_OFFSET))(this, a1);
	}

	::System::Void Method_2_DC703AC5AA81BFEE(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_DC703AC5AA81BFEE_OFFSET))(this, a1);
	}

	::System::Void Method_2_59FF52498ADFDF6D(::Class_2_CBDF63BA2C3715C3* a1, ::UnityEngine::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CBDF63BA2C3715C3*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_59FF52498ADFDF6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_7C35D2BC7FBDA31C(::Class_2_CBDF63BA2C3715C3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CBDF63BA2C3715C3*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_7C35D2BC7FBDA31C_OFFSET))(this, a1);
	}

	::System::Void Method_2_C76FBF5BDDCD86A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_C76FBF5BDDCD86A3_OFFSET))(this);
	}

	::System::Void Method_2_119F45C49A6D0A61(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_119F45C49A6D0A61_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BD3151512FEA4FC1(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_BD3151512FEA4FC1_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_45024F3EBCDBE192(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a3, ::System::Boolean a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_45024F3EBCDBE192_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_CA3083E86B1C0764(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_CA3083E86B1C0764_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_A02CF39103E765F0(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_A02CF39103E765F0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_45F50E6FF8EBA384(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_45F50E6FF8EBA384_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_AD8ACDD1DBC2CFDE(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_AD8ACDD1DBC2CFDE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_89DECAB5B4933D0A(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4, ::UnityEngine::GameObject* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_89DECAB5B4933D0A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::OpenWorld::StreamingItemData* Method_2_DA0AD41C12822C47(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_DA0AD41C12822C47_OFFSET))(this, a1);
	}

	::System::Void Method_2_9FDBC1ABADDA5E04(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*&))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_9FDBC1ABADDA5E04_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_2_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Collections::IEnumerator* __n__0()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800___N__0_OFFSET))(this);
	}

	::System::Void Method_2_26C5221AC22B6534()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_26C5221AC22B6534_OFFSET))(this);
	}

	::System::Void Method_2_1FFB392329DBE0D7(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_1FFB392329DBE0D7_OFFSET))(this, P0);
	}

	::System::Collections::IEnumerator* Method_2_5AFFA079DA8B20AA_1()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_5AFFA079DA8B20AA_1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_F9838B477D07E270(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_F9838B477D07E270_OFFSET))(this, P0);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_B6BEDD4225354620(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_B6BEDD4225354620_OFFSET))(this, P0);
	}

	::System::Boolean Method_2_F3C83B2CAC9EAE37(::RPG::Client::OpenWorld::StreamingItemData* P0, ::System::Boolean P1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_F3C83B2CAC9EAE37_OFFSET))(this, P0, P1);
	}

	::System::Boolean Method_2_95ADA86398E2C5F5(::RPG::Client::OpenWorld::StreamingItemData* P0, ::System::Boolean P1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_95ADA86398E2C5F5_OFFSET))(this, P0, P1);
	}

	::System::Boolean __iFixBaseProxy_InActiveInstance(::Class_1_8A6989C352B0F0F0* P0, ::System::Boolean P1, ::System::Boolean P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800___IFIXBASEPROXY_INACTIVEINSTANCE_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_0C14E2F7A3D38A0C(::UnityEngine::GameObject* P0, ::RPG::GameCore::BlockNodeConfig* P1, ::RPG::GameCore::EnvironmentDataInfo* P2, ::System::String* P3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::EnvironmentDataInfo*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_0C14E2F7A3D38A0C_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Void Method_2_0C14E2F7A3D38A0C_1(::UnityEngine::GameObject* P0, ::RPG::GameCore::BlockNodeConfig* P1, ::RPG::GameCore::EnvironmentDataInfo* P2, ::System::String* P3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::EnvironmentDataInfo*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_0C14E2F7A3D38A0C_1_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Void Method_2_E35766CC3B2B81A4(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_E35766CC3B2B81A4_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void Method_2_B2CECC7FF59DC603(::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47_Struct_2_823833D588E72957>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47_Struct_2_823833D588E72957>*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_B2CECC7FF59DC603_OFFSET))(this, P0);
	}

	::System::Void Method_2_69DB4E6A246A8C50(::RPG::Client::OpenWorld::StreamingItemData* P0, ::System::Boolean P1, ::System::Boolean P2, ::RPG::Client::OpenWorld::StreamingItemEnableReason P3, ::System::Boolean P4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemEnableReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_69DB4E6A246A8C50_OFFSET))(this, P0, P1, P2, P3, P4);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_78BD37F838E56E4E(::System::Int32 P0)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_78BD37F838E56E4E_OFFSET))(this, P0);
	}

	::System::Void Method_2_D691243C93840A43(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_D691243C93840A43_OFFSET))(this, P0);
	}

	::System::Void Method_2_513A6D736C4BF66A(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800_METHOD_2_513A6D736C4BF66A_OFFSET))(this, P0);
	}
};
