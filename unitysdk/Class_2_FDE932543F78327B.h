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

class Class_0_16E4307DCC419505_801;
class Class_1_1EDFFB645AFD9A3E;
class Class_1_86B4CACC0974BF85;
class Class_2_5FC2452B9E7449BE;
class Class_2_FDE932543F78327B_Class_0_16E7307DCC43CB2C_18;
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

#define CLASS_2_FDE932543F78327B_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8A95C00)
#define CLASS_2_FDE932543F78327B_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8A95CA0)
#define CLASS_2_FDE932543F78327B_GET_TOPPRIORITY_OFFSET UNITYSDK_OFFSET(0x8A95AB0)
#define CLASS_2_FDE932543F78327B_METHOD_2_0A4A57205FA2595A_OFFSET UNITYSDK_OFFSET(0x8A94930)
#define CLASS_2_FDE932543F78327B_METHOD_2_0C44FB644D25C1C2_OFFSET UNITYSDK_OFFSET(0x8A94BD0)
#define CLASS_2_FDE932543F78327B_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x8A93D90)
#define CLASS_2_FDE932543F78327B_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x8A91300)
#define CLASS_2_FDE932543F78327B_METHOD_2_2303E3416C24D3F9_OFFSET UNITYSDK_OFFSET(0x8A95070)
#define CLASS_2_FDE932543F78327B_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x8A95840)
#define CLASS_2_FDE932543F78327B_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x8A94FC0)
#define CLASS_2_FDE932543F78327B_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x8A95910)
#define CLASS_2_FDE932543F78327B_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x8A917A0)
#define CLASS_2_FDE932543F78327B_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8A91650)
#define CLASS_2_FDE932543F78327B_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x8A95020)
#define CLASS_2_FDE932543F78327B_METHOD_2_4156C4E288B69D59_OFFSET UNITYSDK_OFFSET(0x8A94790)
#define CLASS_2_FDE932543F78327B_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x8A92310)
#define CLASS_2_FDE932543F78327B_METHOD_2_45E60DF416BE67A4_OFFSET UNITYSDK_OFFSET(0x8A94590)
#define CLASS_2_FDE932543F78327B_METHOD_2_48C86576570A48CA_OFFSET UNITYSDK_OFFSET(0x8A926B0)
#define CLASS_2_FDE932543F78327B_METHOD_2_4B5A2F5B46B88D6B_OFFSET UNITYSDK_OFFSET(0x8A947F0)
#define CLASS_2_FDE932543F78327B_METHOD_2_4C6A9BAF3D99BA03_OFFSET UNITYSDK_OFFSET(0x8A93D30)
#define CLASS_2_FDE932543F78327B_METHOD_2_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x8A95100)
#define CLASS_2_FDE932543F78327B_METHOD_2_50906D1D83E206D0_OFFSET UNITYSDK_OFFSET(0x8A94370)
#define CLASS_2_FDE932543F78327B_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x8A95B10)
#define CLASS_2_FDE932543F78327B_METHOD_2_583D59500575D856_OFFSET UNITYSDK_OFFSET(0x8A957A0)
#define CLASS_2_FDE932543F78327B_METHOD_2_58A619544654E85E_OFFSET UNITYSDK_OFFSET(0x8A92CF0)
#define CLASS_2_FDE932543F78327B_METHOD_2_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x8A92210)
#define CLASS_2_FDE932543F78327B_METHOD_2_5ECF98B85414E700_OFFSET UNITYSDK_OFFSET(0x8A937F0)
#define CLASS_2_FDE932543F78327B_METHOD_2_628138D3B34B23DD_OFFSET UNITYSDK_OFFSET(0x8A94E50)
#define CLASS_2_FDE932543F78327B_METHOD_2_633BD41FEBF1F191_OFFSET UNITYSDK_OFFSET(0x8A94F00)
#define CLASS_2_FDE932543F78327B_METHOD_2_6345BF557E4E4E6A_OFFSET UNITYSDK_OFFSET(0x8A956D0)
#define CLASS_2_FDE932543F78327B_METHOD_2_6446D74C829BC703_OFFSET UNITYSDK_OFFSET(0x8A93A00)
#define CLASS_2_FDE932543F78327B_METHOD_2_66C47ED41C56178D_1_OFFSET UNITYSDK_OFFSET(0x8A942E0)
#define CLASS_2_FDE932543F78327B_METHOD_2_66C47ED41C56178D_OFFSET UNITYSDK_OFFSET(0x8A94270)
#define CLASS_2_FDE932543F78327B_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x8A916A0)
#define CLASS_2_FDE932543F78327B_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x8A92930)
#define CLASS_2_FDE932543F78327B_METHOD_2_845A8160D3385F85_OFFSET UNITYSDK_OFFSET(0x8A93290)
#define CLASS_2_FDE932543F78327B_METHOD_2_8BF39CBCCA99A7ED_OFFSET UNITYSDK_OFFSET(0x8A95370)
#define CLASS_2_FDE932543F78327B_METHOD_2_914575F73265A2FE_OFFSET UNITYSDK_OFFSET(0x8A95A20)
#define CLASS_2_FDE932543F78327B_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8A91030)
#define CLASS_2_FDE932543F78327B_METHOD_2_9B0D4BFDBF64D469_OFFSET UNITYSDK_OFFSET(0x8A93E20)
#define CLASS_2_FDE932543F78327B_METHOD_2_A06359FA5E17A386_OFFSET UNITYSDK_OFFSET(0x8A93BE0)
#define CLASS_2_FDE932543F78327B_METHOD_2_A136AB76EB5E8B3E_OFFSET UNITYSDK_OFFSET(0x8A94C30)
#define CLASS_2_FDE932543F78327B_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x8A95B30)
#define CLASS_2_FDE932543F78327B_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x8A923E0)
#define CLASS_2_FDE932543F78327B_METHOD_2_B15E7A61C7C724C3_OFFSET UNITYSDK_OFFSET(0x8A92A90)
#define CLASS_2_FDE932543F78327B_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8A93CC0)
#define CLASS_2_FDE932543F78327B_METHOD_2_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x8A92510)
#define CLASS_2_FDE932543F78327B_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x8A951D0)
#define CLASS_2_FDE932543F78327B_METHOD_2_BAC40468D22D4047_OFFSET UNITYSDK_OFFSET(0x8A93150)
#define CLASS_2_FDE932543F78327B_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x8A91380)
#define CLASS_2_FDE932543F78327B_METHOD_2_C53CD788F605A37F_OFFSET UNITYSDK_OFFSET(0x8A95230)
#define CLASS_2_FDE932543F78327B_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x8A96970)
#define CLASS_2_FDE932543F78327B_METHOD_2_CA47EFC30F69156D_OFFSET UNITYSDK_OFFSET(0x8A94CE0)
#define CLASS_2_FDE932543F78327B_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x8A93760)
#define CLASS_2_FDE932543F78327B_METHOD_2_CAFA48FD4F16F8D9_OFFSET UNITYSDK_OFFSET(0x8A92E30)
#define CLASS_2_FDE932543F78327B_METHOD_2_CBEA6C3CA5E42755_OFFSET UNITYSDK_OFFSET(0x8A957F0)
#define CLASS_2_FDE932543F78327B_METHOD_2_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x8A91800)
#define CLASS_2_FDE932543F78327B_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x8A929C0)
#define CLASS_2_FDE932543F78327B_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x8A910A0)
#define CLASS_2_FDE932543F78327B_METHOD_2_EA3063A5CDD6F164_OFFSET UNITYSDK_OFFSET(0x8A91270)
#define CLASS_2_FDE932543F78327B_METHOD_2_FD623ECF84051151_OFFSET UNITYSDK_OFFSET(0x8A954E0)
#define CLASS_2_FDE932543F78327B_SET_TOPPRIORITY_OFFSET UNITYSDK_OFFSET(0x8A95AE0)
#define CLASS_2_FDE932543F78327B__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A96900)
#define CLASS_2_FDE932543F78327B__CTOR_OFFSET UNITYSDK_OFFSET(0x8A95D20)
#define CLASS_2_FDE932543F78327B__ONBIND_OFFSET UNITYSDK_OFFSET(0x8A90110)
#define CLASS_2_FDE932543F78327B__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x8A922C0)
#define CLASS_2_FDE932543F78327B__ONTICK_OFFSET UNITYSDK_OFFSET(0x8A91400)
#define CLASS_2_FDE932543F78327B___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8A96AB0)
#define CLASS_2_FDE932543F78327B___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8A96B10)
#define CLASS_2_FDE932543F78327B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8A96910)
#define CLASS_2_FDE932543F78327B___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x8A96A50)
#define CLASS_2_FDE932543F78327B___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x8A969E0)

inline static constexpr unsigned int Class_2_FDE932543F78327B_TypeDefinitionIndex = 57660;

class Class_2_FDE932543F78327B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::RPG::Client::UIFloatingTextType* StaticGet_Field_2_48()
	{
		return (::RPG::Client::UIFloatingTextType*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FDE932543F78327B_TypeDefinitionIndex)->GetStaticField(0xDB60);
	}
	static ::System::Int32* StaticGet__TopPriority_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FDE932543F78327B_TypeDefinitionIndex)->GetStaticField(0xDB64);
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
	::UnityEngine::Transform* Field_2_24; // 0x60
	::Class_0_16E4307DCC419505_801* Field_2_29; // 0x68
	::System::Collections::Generic::List_1<::RPG::Client::SimpleText*>* Field_2_33; // 0x70
	::RPG::Client::UIFollow3DTarget* Field_2_12; // 0x78
	::RPG::Client::SimpleTextStyleController* Field_2_23; // 0x80
	::RPG::Client::SimpleTextStyleController* Field_2_22; // 0x88
	::UnityEngine::UI::ContentSizeFitter* Field_2_32; // 0x90
	::UnityEngine::Animation* Field_2_8; // 0x98
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* Field_2_2; // 0xA0
	::RPG::Client::PrefabLoadMeta* Field_2_37; // 0xA8
	::UnityEngine::UI::Image* Field_2_27; // 0xB0
	::RPG::Client::SimpleTextStyleController* Field_2_28; // 0xB8
	::UnityEngine::RectTransform* Field_2_30; // 0xC0
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* Field_2_3; // 0xC8
	::RPG::Client::SimpleTextStyleController* Field_2_42; // 0xD0
	::Il2CppArray<::UnityEngine::Transform*>* Field_2_40; // 0xD8
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_66; // 0xE0
	::RPG::Client::SimpleText* Field_2_21; // 0xE8
	::UnityEngine::UI::Image* Field_2_26; // 0xF0
	::RPG::Client::SimpleText* Field_2_25; // 0xF8
	::RPG::GameCore::CharacterVisibleComponent* Field_2_13; // 0x100
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* Field_2_1; // 0x108
	::System::Collections::Generic::List_1<::Class_2_FDE932543F78327B_Class_0_16E7307DCC43CB2C_18*>* Field_2_86; // 0x110
	::Class_1_1EDFFB645AFD9A3E* Field_2_46; // 0x118
	::RPG::Client::SimpleText* Field_2_14; // 0x120
	::UnityEngine::SimpleAnimation* Field_2_9; // 0x128
	::System::String* Field_2_11; // 0x130
	::RPG::Client::SimpleTextStyleController* Field_2_45; // 0x138
	::UnityEngine::Transform* Field_2_38; // 0x140
	::UnityEngine::UI::LayoutGroup* Field_2_31; // 0x148
	::UnityEngine::Transform* Field_2_6; // 0x150
	::UnityEngine::Transform* Field_2_41; // 0x158
	::Il2CppArray<::RPG::Client::SimpleTextStyleController*>* Field_2_7; // 0x160
	::UnityEngine::Transform* Field_2_15; // 0x168
	::RPG::Client::SimpleText* Field_2_44; // 0x170
	::RPG::GameCore::GameEntity* Field_2_34; // 0x178
	::Class_2_5FC2452B9E7449BE* Field_2_87; // 0x180
	::UnityEngine::Transform* Field_2_39; // 0x188
	::RPG::GameCore::TeamType Field_2_35; // 0x190
	::System::Boolean Field_2_43; // 0x194
	::System::Boolean Field_2_10; // 0x195
	::System::Boolean Field_2_5; // 0x196
	::System::Boolean Field_2_20; // 0x197
	::System::Boolean Field_2_19; // 0x198
	::System::Single Field_2_17; // 0x19C
	::System::Single Field_2_16; // 0x1A0
	::RPG::GameCore::UIDamageTextType Field_2_36; // 0x1A4
	::System::Single Field_2_18; // 0x1A8
	::UnityEngine::Vector2 Field_2_85; // 0x1AC

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

	::System::Void Method_2_BAC40468D22D4047(::RPG::Client::UIFloatingTextType a1, ::DamageTextStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFloatingTextType, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_BAC40468D22D4047_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_5ECF98B85414E700(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_5ECF98B85414E700_OFFSET))(this, a1);
	}

	::System::Void Method_2_6446D74C829BC703(::RPG::GameCore::AttackDamageType a1, ::DamageTextStyle* a2, ::System::Nullable_1<::RPG::GameCore::ElementDamageType> a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType, ::DamageTextStyle*, ::System::Nullable_1<::RPG::GameCore::ElementDamageType>))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_6446D74C829BC703_OFFSET))(this, a1, a2, a3);
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

	::System::Void Method_2_50906D1D83E206D0(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_50906D1D83E206D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_45E60DF416BE67A4(::RPG::Client::TextID a1, ::DamageTextStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_45E60DF416BE67A4_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_58A619544654E85E(::System::Int64 a1, ::DamageTextStyle* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::DamageTextStyle*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_58A619544654E85E_OFFSET))(this, a1, a2, a3);
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

	::System::Void Method_2_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_B235E757922104A8_OFFSET))(this);
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

	::System::Void Method_2_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_B2C52ACF9D9B435B_OFFSET))(this);
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

	::System::Void Method_2_845A8160D3385F85(::RPG::Client::UIFloatingTextType a1, ::DamageTextStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFloatingTextType, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_845A8160D3385F85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
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
