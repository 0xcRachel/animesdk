#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/ElementDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/UIDamageTextType.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_870;
class Class_1_1EDFFB645AFD9A3E;
class Class_1_86B4CACC0974BF85;
class Class_2_5FC2452B9E7449BE;
class Class_2_FDE932543F78327B_Class_0_16E7307DCC43CB2C_19;
class DamageTextStyle;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class SimpleText; }
namespace RPG::Client { class SimpleTextStyleController; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class SimpleAnimation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class LayoutGroup; }

#define CLASS_2_FDE932543F78327B_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x896DAD0)
#define CLASS_2_FDE932543F78327B_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x896DB70)
#define CLASS_2_FDE932543F78327B_GET_TOPPRIORITY_OFFSET UNITYSDK_OFFSET(0x896D950)
#define CLASS_2_FDE932543F78327B_METHOD_2_0A4A57205FA2595A_OFFSET UNITYSDK_OFFSET(0x896C7B0)
#define CLASS_2_FDE932543F78327B_METHOD_2_0C44FB644D25C1C2_OFFSET UNITYSDK_OFFSET(0x896CA50)
#define CLASS_2_FDE932543F78327B_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x896BD00)
#define CLASS_2_FDE932543F78327B_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x8969350)
#define CLASS_2_FDE932543F78327B_METHOD_2_2303E3416C24D3F9_OFFSET UNITYSDK_OFFSET(0x896CEF0)
#define CLASS_2_FDE932543F78327B_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x896D6E0)
#define CLASS_2_FDE932543F78327B_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x896CE40)
#define CLASS_2_FDE932543F78327B_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x896D7B0)
#define CLASS_2_FDE932543F78327B_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x89697F0)
#define CLASS_2_FDE932543F78327B_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x89696A0)
#define CLASS_2_FDE932543F78327B_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x896CEA0)
#define CLASS_2_FDE932543F78327B_METHOD_2_4156C4E288B69D59_OFFSET UNITYSDK_OFFSET(0x896C610)
#define CLASS_2_FDE932543F78327B_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x896A360)
#define CLASS_2_FDE932543F78327B_METHOD_2_45274A20B96E4915_OFFSET UNITYSDK_OFFSET(0x896BA00)
#define CLASS_2_FDE932543F78327B_METHOD_2_48C86576570A48CA_OFFSET UNITYSDK_OFFSET(0x896A720)
#define CLASS_2_FDE932543F78327B_METHOD_2_4B5A2F5B46B88D6B_OFFSET UNITYSDK_OFFSET(0x896C670)
#define CLASS_2_FDE932543F78327B_METHOD_2_4C6A9BAF3D99BA03_OFFSET UNITYSDK_OFFSET(0x896BCA0)
#define CLASS_2_FDE932543F78327B_METHOD_2_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x896CF80)
#define CLASS_2_FDE932543F78327B_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x896D9B0)
#define CLASS_2_FDE932543F78327B_METHOD_2_583D59500575D856_OFFSET UNITYSDK_OFFSET(0x896D640)
#define CLASS_2_FDE932543F78327B_METHOD_2_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x896A260)
#define CLASS_2_FDE932543F78327B_METHOD_2_60EAF17B2205DD9D_OFFSET UNITYSDK_OFFSET(0x896C480)
#define CLASS_2_FDE932543F78327B_METHOD_2_628138D3B34B23DD_OFFSET UNITYSDK_OFFSET(0x896CCD0)
#define CLASS_2_FDE932543F78327B_METHOD_2_633BD41FEBF1F191_OFFSET UNITYSDK_OFFSET(0x896CD80)
#define CLASS_2_FDE932543F78327B_METHOD_2_6345BF557E4E4E6A_OFFSET UNITYSDK_OFFSET(0x896D570)
#define CLASS_2_FDE932543F78327B_METHOD_2_66C47ED41C56178D_1_OFFSET UNITYSDK_OFFSET(0x896C250)
#define CLASS_2_FDE932543F78327B_METHOD_2_66C47ED41C56178D_OFFSET UNITYSDK_OFFSET(0x896C1E0)
#define CLASS_2_FDE932543F78327B_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x89696F0)
#define CLASS_2_FDE932543F78327B_METHOD_2_76623DE8A1B9C08D_OFFSET UNITYSDK_OFFSET(0x896AD80)
#define CLASS_2_FDE932543F78327B_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x896A9C0)
#define CLASS_2_FDE932543F78327B_METHOD_2_7F7075F0DF1D9F3A_OFFSET UNITYSDK_OFFSET(0x896C2E0)
#define CLASS_2_FDE932543F78327B_METHOD_2_8BF39CBCCA99A7ED_OFFSET UNITYSDK_OFFSET(0x896D210)
#define CLASS_2_FDE932543F78327B_METHOD_2_8F63218BB0C2ED6A_OFFSET UNITYSDK_OFFSET(0x896B870)
#define CLASS_2_FDE932543F78327B_METHOD_2_914575F73265A2FE_OFFSET UNITYSDK_OFFSET(0x896D8C0)
#define CLASS_2_FDE932543F78327B_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8969080)
#define CLASS_2_FDE932543F78327B_METHOD_2_9B0D4BFDBF64D469_OFFSET UNITYSDK_OFFSET(0x896BD90)
#define CLASS_2_FDE932543F78327B_METHOD_2_A06359FA5E17A386_OFFSET UNITYSDK_OFFSET(0x896BB50)
#define CLASS_2_FDE932543F78327B_METHOD_2_A136AB76EB5E8B3E_OFFSET UNITYSDK_OFFSET(0x896CAB0)
#define CLASS_2_FDE932543F78327B_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x896A430)
#define CLASS_2_FDE932543F78327B_METHOD_2_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x896A560)
#define CLASS_2_FDE932543F78327B_METHOD_2_B15E7A61C7C724C3_OFFSET UNITYSDK_OFFSET(0x896AB20)
#define CLASS_2_FDE932543F78327B_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x896BC30)
#define CLASS_2_FDE932543F78327B_METHOD_2_B2672CBDD1DD573C_OFFSET UNITYSDK_OFFSET(0x896B340)
#define CLASS_2_FDE932543F78327B_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x89693D0)
#define CLASS_2_FDE932543F78327B_METHOD_2_C53CD788F605A37F_OFFSET UNITYSDK_OFFSET(0x896D0D0)
#define CLASS_2_FDE932543F78327B_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x896E850)
#define CLASS_2_FDE932543F78327B_METHOD_2_CA47EFC30F69156D_OFFSET UNITYSDK_OFFSET(0x896CB60)
#define CLASS_2_FDE932543F78327B_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x896B7E0)
#define CLASS_2_FDE932543F78327B_METHOD_2_CAFA48FD4F16F8D9_OFFSET UNITYSDK_OFFSET(0x896AEF0)
#define CLASS_2_FDE932543F78327B_METHOD_2_CBEA6C3CA5E42755_OFFSET UNITYSDK_OFFSET(0x896D690)
#define CLASS_2_FDE932543F78327B_METHOD_2_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x8969850)
#define CLASS_2_FDE932543F78327B_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x896AA50)
#define CLASS_2_FDE932543F78327B_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x89690F0)
#define CLASS_2_FDE932543F78327B_METHOD_2_EA3063A5CDD6F164_OFFSET UNITYSDK_OFFSET(0x89692C0)
#define CLASS_2_FDE932543F78327B_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x896D9D0)
#define CLASS_2_FDE932543F78327B_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x896D060)
#define CLASS_2_FDE932543F78327B_METHOD_2_FB74158D9A16FDD4_OFFSET UNITYSDK_OFFSET(0x896B210)
#define CLASS_2_FDE932543F78327B_METHOD_2_FD623ECF84051151_OFFSET UNITYSDK_OFFSET(0x896D380)
#define CLASS_2_FDE932543F78327B_SET_TOPPRIORITY_OFFSET UNITYSDK_OFFSET(0x896D980)
#define CLASS_2_FDE932543F78327B__CCTOR_OFFSET UNITYSDK_OFFSET(0x896E7E0)
#define CLASS_2_FDE932543F78327B__CTOR_OFFSET UNITYSDK_OFFSET(0x896DBF0)
#define CLASS_2_FDE932543F78327B__ONBIND_OFFSET UNITYSDK_OFFSET(0x8967210)
#define CLASS_2_FDE932543F78327B__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x896A310)
#define CLASS_2_FDE932543F78327B__ONTICK_OFFSET UNITYSDK_OFFSET(0x8969450)
#define CLASS_2_FDE932543F78327B___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x896E990)
#define CLASS_2_FDE932543F78327B___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x896E9F0)
#define CLASS_2_FDE932543F78327B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x896E7F0)
#define CLASS_2_FDE932543F78327B___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x896E930)
#define CLASS_2_FDE932543F78327B___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x896E8C0)

inline static constexpr unsigned int Class_2_FDE932543F78327B_TypeDefinitionIndex = 59279;

class Class_2_FDE932543F78327B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Int32* StaticGet__TopPriority_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FDE932543F78327B_TypeDefinitionIndex)->GetStaticField(0x10390);
	}
	static ::RPG::Client::UIFloatingTextType* StaticGet_Field_2_48()
	{
		return (::RPG::Client::UIFloatingTextType*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FDE932543F78327B_TypeDefinitionIndex)->GetStaticField(0x10394);
	}
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_47; // 0x0
	// static const ::System::String* Field_2_49; // 0x0
	// static const ::System::String* Field_2_50; // 0x0
	// static const ::System::String* Field_2_51; // 0x0
	// static const ::System::String* Field_2_52; // 0x0
	// static const ::System::String* Field_2_53; // 0x0
	// static const ::System::String* Field_2_54; // 0x0
	// static const ::System::String* Field_2_55; // 0x0
	// static const ::System::String* Field_2_56; // 0x0
	// static const ::System::String* Field_2_57; // 0x0
	// static const ::System::String* Field_2_58; // 0x0
	// static const ::System::String* Field_2_59; // 0x0
	// static const ::System::String* Field_2_60; // 0x0
	// static const ::System::String* Field_2_61; // 0x0
	// static const ::System::String* Field_2_62; // 0x0
	// static const ::System::String* Field_2_63; // 0x0
	// static const ::System::String* Field_2_64; // 0x0
	// static const ::System::String* Field_2_65; // 0x0
	// static const ::System::Int32 Field_2_67 = 0x0; // 0x0
	// static const ::System::Int32 Field_2_68 = 0xC; // 0x0
	// static const ::System::Int64 Field_2_69 = 0xE8D4A50FFF; // 0x0
	// static const ::System::String* Field_2_70; // 0x0
	// static const ::System::String* Field_2_71; // 0x0
	// static const ::System::String* Field_2_72; // 0x0
	// static const ::System::String* Field_2_73; // 0x0
	// static const ::System::String* Field_2_74; // 0x0
	// static const ::System::String* Field_2_75; // 0x0
	// static const ::System::String* Field_2_76; // 0x0
	// static const ::System::String* Field_2_77; // 0x0
	// static const ::System::String* Field_2_78; // 0x0
	// static const ::System::String* Field_2_79; // 0x0
	// static const ::System::String* Field_2_80; // 0x0
	// static const ::System::String* Field_2_81; // 0x0
	// static const ::System::String* Field_2_82; // 0x0
	// static const ::System::String* Field_2_83; // 0x0
	// static const ::System::String* Field_2_84; // 0x0
	::RPG::Client::PrefabLoadMeta* Field_2_37; // 0x60
	::UnityEngine::UI::Image* Field_2_26; // 0x68
	::RPG::Client::SimpleTextStyleController* Field_2_42; // 0x70
	::RPG::Client::SimpleText* Field_2_14; // 0x78
	::Class_1_1EDFFB645AFD9A3E* Field_2_46; // 0x80
	::RPG::Client::SimpleText* Field_2_44; // 0x88
	::System::Collections::Generic::List_1<::RPG::Client::SimpleText*>* Field_2_33; // 0x90
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_66; // 0x98
	::UnityEngine::UI::Image* Field_2_27; // 0xA0
	::RPG::Client::SimpleText* Field_2_21; // 0xA8
	::RPG::Client::SimpleTextStyleController* Field_2_28; // 0xB0
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* Field_2_2; // 0xB8
	::System::String* Field_2_11; // 0xC0
	::RPG::GameCore::GameEntity* Field_2_34; // 0xC8
	::Il2CppArray<::UnityEngine::Transform*>* Field_2_40; // 0xD0
	::UnityEngine::RectTransform* Field_2_30; // 0xD8
	::RPG::Client::SimpleText* Field_2_25; // 0xE0
	::UnityEngine::Animation* Field_2_8; // 0xE8
	::UnityEngine::Transform* Field_2_24; // 0xF0
	::UnityEngine::Transform* Field_2_39; // 0xF8
	::UnityEngine::UI::ContentSizeFitter* Field_2_32; // 0x100
	::RPG::Client::UIFollow3DTarget* Field_2_12; // 0x108
	::UnityEngine::Transform* Field_2_41; // 0x110
	::Il2CppArray<::RPG::Client::SimpleTextStyleController*>* Field_2_7; // 0x118
	::Class_2_5FC2452B9E7449BE* Field_2_87; // 0x120
	::RPG::Client::SimpleTextStyleController* Field_2_23; // 0x128
	::Class_0_16E4307DCC419505_870* Field_2_29; // 0x130
	::UnityEngine::Transform* Field_2_6; // 0x138
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* Field_2_1; // 0x140
	::RPG::Client::SimpleTextStyleController* Field_2_45; // 0x148
	::UnityEngine::Transform* Field_2_38; // 0x150
	::UnityEngine::Transform* Field_2_15; // 0x158
	::System::Collections::Generic::List_1<::Class_2_FDE932543F78327B_Class_0_16E7307DCC43CB2C_19*>* Field_2_86; // 0x160
	::UnityEngine::UI::LayoutGroup* Field_2_31; // 0x168
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* Field_2_3; // 0x170
	::RPG::Client::SimpleTextStyleController* Field_2_22; // 0x178
	::RPG::GameCore::CharacterVisibleComponent* Field_2_13; // 0x180
	::UnityEngine::SimpleAnimation* Field_2_9; // 0x188
	::RPG::GameCore::UIDamageTextType Field_2_36; // 0x190
	::System::Boolean Field_2_20; // 0x194
	::UnityEngine::Vector2 Field_2_85; // 0x198
	::System::Single Field_2_17; // 0x1A0
	::RPG::GameCore::TeamType Field_2_35; // 0x1A4
	::System::Boolean Field_2_43; // 0x1A8
	::System::Boolean Field_2_10; // 0x1A9
	::System::Boolean Field_2_19; // 0x1AA
	::System::Boolean Field_2_5; // 0x1AB
	::System::Single Field_2_16; // 0x1AC
	::System::Single Field_2_18; // 0x1B0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_48C86576570A48CA(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_48C86576570A48CA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_B15E7A61C7C724C3(::RPG::GameCore::FixPoint a1, ::System::Boolean a2, ::DamageTextStyle* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Boolean, ::DamageTextStyle*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_B15E7A61C7C724C3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CAFA48FD4F16F8D9(::System::Decimal a1, ::System::Boolean a2, ::DamageTextStyle* a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Decimal, ::System::Boolean, ::DamageTextStyle*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_CAFA48FD4F16F8D9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_FB74158D9A16FDD4(::RPG::Client::UIFloatingTextType a1, ::DamageTextStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFloatingTextType, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_FB74158D9A16FDD4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F63218BB0C2ED6A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_8F63218BB0C2ED6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_45274A20B96E4915(::RPG::GameCore::AttackDamageType a1, ::DamageTextStyle* a2, ::System::Nullable_1<::RPG::GameCore::ElementDamageType> a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType, ::DamageTextStyle*, ::System::Nullable_1<::RPG::GameCore::ElementDamageType>))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_45274A20B96E4915_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	static ::System::Boolean Method_2_4C6A9BAF3D99BA03(::RPG::Client::UIFloatingTextType a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_4C6A9BAF3D99BA03_OFFSET))(a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_A06359FA5E17A386(::RPG::GameCore::AttackDamageType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_A06359FA5E17A386_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_2_9B0D4BFDBF64D469(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_9B0D4BFDBF64D469_OFFSET))(this, a1);
	}

	::System::Void Method_2_66C47ED41C56178D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_66C47ED41C56178D_OFFSET))(this, a1);
	}

	::System::Void Method_2_66C47ED41C56178D_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_66C47ED41C56178D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F7075F0DF1D9F3A(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_7F7075F0DF1D9F3A_OFFSET))(this, a1);
	}

	::System::Void Method_2_60EAF17B2205DD9D(::RPG::Client::TextID a1, ::DamageTextStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_60EAF17B2205DD9D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4156C4E288B69D59(::DamageTextStyle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_4156C4E288B69D59_OFFSET))(this, a1);
	}

	::System::Void Method_2_4B5A2F5B46B88D6B(::System::Decimal a1, ::RPG::Client::UIFloatingTextType a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Decimal, ::RPG::Client::UIFloatingTextType, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_4B5A2F5B46B88D6B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0C44FB644D25C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_0C44FB644D25C1C2_OFFSET))(this);
	}

	::System::Void Method_2_CA47EFC30F69156D(::System::Decimal a1, ::RPG::Client::UIFloatingTextType a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Decimal, ::RPG::Client::UIFloatingTextType, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_CA47EFC30F69156D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_628138D3B34B23DD(::System::String* a1, ::RPG::Client::UIFloatingTextType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_628138D3B34B23DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_633BD41FEBF1F191(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_633BD41FEBF1F191_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::String* Method_2_0A4A57205FA2595A(::RPG::Client::UIFloatingTextType a1, ::System::Boolean a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::UIFloatingTextType, ::System::Boolean, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_0A4A57205FA2595A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4(::Class_1_86B4CACC0974BF85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86B4CACC0974BF85*))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* Method_2_2303E3416C24D3F9()
	{
		return ((::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_2303E3416C24D3F9_OFFSET))(this);
	}

	::System::Void Method_2_76623DE8A1B9C08D(::System::Int64 a1, ::DamageTextStyle* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::DamageTextStyle*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_76623DE8A1B9C08D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8BF39CBCCA99A7ED(::System::String* a1, ::DamageTextStyle* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::DamageTextStyle*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_8BF39CBCCA99A7ED_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C53CD788F605A37F(::System::String* a1, ::DamageTextStyle* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::DamageTextStyle*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_C53CD788F605A37F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FD623ECF84051151(::System::Int32 a1, ::System::String* a2, ::DamageTextStyle* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::DamageTextStyle*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_FD623ECF84051151_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void Method_2_6345BF557E4E4E6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_6345BF557E4E4E6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::RPG::GameCore::TeamType Method_2_583D59500575D856()
	{
		return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_583D59500575D856_OFFSET))(this);
	}

	::System::Void Method_2_CBEA6C3CA5E42755(::RPG::GameCore::UIDamageTextType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UIDamageTextType))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_CBEA6C3CA5E42755_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_2_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void Method_2_A136AB76EB5E8B3E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_A136AB76EB5E8B3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_32B2368221A04800_OFFSET))(this, a1);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_2_914575F73265A2FE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_914575F73265A2FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_2_EA3063A5CDD6F164()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_EA3063A5CDD6F164_OFFSET))(this);
	}

	static ::System::Int32 get_TopPriority()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_GET_TOPPRIORITY_OFFSET))();
	}

	static ::System::Void set_TopPriority(::System::Int32 value)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_SET_TOPPRIORITY_OFFSET))(value);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_B2672CBDD1DD573C(::RPG::Client::UIFloatingTextType a1, ::DamageTextStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFloatingTextType, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_B2672CBDD1DD573C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
