#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::Client { class MeshPartIDMask; }
namespace RPG::Client::TAUtils { class RendererSlots; }
namespace RPG::GameCore { class HighlightOutlineSetting; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_CHARACTEREFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x8EADD40)
#define RPG_CLIENT_CHARACTEREFFECT_GETHIGHOUTLINERENDERER2MATDIC_OFFSET UNITYSDK_OFFSET(0x8EA9090)
#define RPG_CLIENT_CHARACTEREFFECT_GET_ALLMESHRENDER_OFFSET UNITYSDK_OFFSET(0x8EAE160)
#define RPG_CLIENT_CHARACTEREFFECT_GET_ARTMODELLOADED_OFFSET UNITYSDK_OFFSET(0x8EAE0B0)
#define RPG_CLIENT_CHARACTEREFFECT_GET_ENABLEHIGHLIGHTOUTLINE_OFFSET UNITYSDK_OFFSET(0x8EAE080)
#define RPG_CLIENT_CHARACTEREFFECT_GET_FETCHOWNERTIMESCALE_OFFSET UNITYSDK_OFFSET(0x8EAE0A0)
#define RPG_CLIENT_CHARACTEREFFECT_INHERITSHOWPARTIDFROMORIGINMATERIAL_OFFSET UNITYSDK_OFFSET(0x8EAB860)
#define RPG_CLIENT_CHARACTEREFFECT_LATETICK_OFFSET UNITYSDK_OFFSET(0x8EAD7D0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x8EA90F0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_08FEC147AACAA81D_1_OFFSET UNITYSDK_OFFSET(0x8EA9E00)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_08FEC147AACAA81D_OFFSET UNITYSDK_OFFSET(0x8EA9BB0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_0D11EC436EC5ACCE_OFFSET UNITYSDK_OFFSET(0x8EABAE0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x8EAAC50)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x8EAD2A0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x8EAA750)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x8EAA7F0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x8EA9B10)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_394F35BBA0EE596A_OFFSET UNITYSDK_OFFSET(0x8EAA060)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x8EAAB00)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x8EA8F20)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_47680E2642F37A1B_1_OFFSET UNITYSDK_OFFSET(0x8EACB30)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_47680E2642F37A1B_OFFSET UNITYSDK_OFFSET(0x8EAB600)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_5223D107AF3EE2AB_OFFSET UNITYSDK_OFFSET(0x8EAD380)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_543063A1C8FC9D3E_OFFSET UNITYSDK_OFFSET(0x8EABE90)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x8EAB720)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_67EBBDD5CDE980A1_OFFSET UNITYSDK_OFFSET(0x8EA94F0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_7E7E85596230BF07_OFFSET UNITYSDK_OFFSET(0x8EAA6E0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x8EACCB0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x8EAAF20)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_A7E01A8523F2C0BA_OFFSET UNITYSDK_OFFSET(0x8EABCE0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_AF53AC45ED2466EB_OFFSET UNITYSDK_OFFSET(0x8EAD9C0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x8EAADA0)
#define RPG_CLIENT_CHARACTEREFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8EADED0)
#define RPG_CLIENT_CHARACTEREFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x8EADE30)
#define RPG_CLIENT_CHARACTEREFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x8EADD90)
#define RPG_CLIENT_CHARACTEREFFECT_REFRESHHIGHOUTLINE_OFFSET UNITYSDK_OFFSET(0x8EA94A0)
#define RPG_CLIENT_CHARACTEREFFECT_REFRESHRENDERBATTLESTENCIL_OFFSET UNITYSDK_OFFSET(0x8EA8E60)
#define RPG_CLIENT_CHARACTEREFFECT_SETBATTLECHARASTENCIL_OFFSET UNITYSDK_OFFSET(0x8EA8E00)
#define RPG_CLIENT_CHARACTEREFFECT_SETENABLEHIGHLIGHTOUTLINE_OFFSET UNITYSDK_OFFSET(0x8EA8CC0)
#define RPG_CLIENT_CHARACTEREFFECT_SETEXTRATARGETRENDERS_OFFSET UNITYSDK_OFFSET(0x8EA9770)
#define RPG_CLIENT_CHARACTEREFFECT_SETSHADERSIMULATIONSPEEDENABLE_OFFSET UNITYSDK_OFFSET(0x8EADC00)
#define RPG_CLIENT_CHARACTEREFFECT_SET_ARTMODELLOADED_OFFSET UNITYSDK_OFFSET(0x8EAE0C0)
#define RPG_CLIENT_CHARACTEREFFECT_SET_ENABLEHIGHLIGHTOUTLINE_OFFSET UNITYSDK_OFFSET(0x8EA8D90)
#define RPG_CLIENT_CHARACTEREFFECT_SET_FETCHOWNERTIMESCALE_OFFSET UNITYSDK_OFFSET(0x8EAE090)
#define RPG_CLIENT_CHARACTEREFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x8EAE3A0)
#define RPG_CLIENT_CHARACTEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x8EAE170)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterEffect_TypeDefinitionIndex = 55478;

	class CharacterEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_Field_5_36()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x40560);
		}
		static ::System::Int32* StaticGet_Field_5_61()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEDC0);
		}
		static ::System::Int32* StaticGet_Field_5_57()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEDC4);
		}
		static ::System::Int32* StaticGet_Field_5_63()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEDC8);
		}
		static ::System::Int32* StaticGet_Field_5_67()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEDCC);
		}
		static ::System::Int32* StaticGet_Field_5_39()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEDD0);
		}
		static ::System::Int32* StaticGet_Field_5_51()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEDD4);
		}
		static ::System::Int32* StaticGet_Field_5_62()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEDD8);
		}
		static ::System::Int32* StaticGet_Field_5_58()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEDDC);
		}
		static ::System::Int32* StaticGet_Field_5_43()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEDE0);
		}
		static ::System::Int32* StaticGet_Field_5_53()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEDE4);
		}
		static ::System::Int32* StaticGet_Field_5_42()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEDE8);
		}
		static ::System::Int32* StaticGet_Field_5_41()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEDEC);
		}
		static ::System::Int32* StaticGet_Field_5_49()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEDF0);
		}
		static ::System::Int32* StaticGet_Field_5_40()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEDF4);
		}
		static ::System::Int32* StaticGet_Field_5_52()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEDF8);
		}
		static ::System::Int32* StaticGet_Field_5_65()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEDFC);
		}
		static ::System::Int32* StaticGet_Field_5_46()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEE00);
		}
		static ::System::Int32* StaticGet_Field_5_66()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEE04);
		}
		static ::System::Int32* StaticGet_Field_5_44()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEE08);
		}
		static ::System::Int32* StaticGet_Field_5_59()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEE0C);
		}
		static ::System::Int32* StaticGet_Field_5_56()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEE10);
		}
		static ::System::Int32* StaticGet_Field_5_68()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEE14);
		}
		static ::System::Int32* StaticGet_Field_5_55()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEE18);
		}
		static ::System::Int32* StaticGet_Field_5_60()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEE1C);
		}
		static ::System::Int32* StaticGet_Field_5_47()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEE20);
		}
		static ::System::Int32* StaticGet_Field_5_54()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEE24);
		}
		static ::System::Int32* StaticGet_Field_5_69()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEE28);
		}
		static ::System::Int32* StaticGet_Field_5_48()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEE2C);
		}
		static ::System::Int32* StaticGet_Field_5_64()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEE30);
		}
		static ::System::Int32* StaticGet_Field_5_50()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEE34);
		}
		static ::System::Int32* StaticGet_Field_5_45()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0xEE38);
		}
		::System::Boolean Field_5_0; // 0x18
		::System::Boolean KeyOutlineColorIsOn; // 0x19
		::UnityEngine::Color KeyOutlineInnerColor; // 0x1C
		::UnityEngine::Color KeyOutlineOuterColor; // 0x2C
		::System::Single HighlightPow; // 0x3C
		::System::Single OutlineWidth; // 0x40
		::System::Single OutlineWidth2; // 0x44
		::System::Boolean KeyDisableHighlightOutline; // 0x48
		::UnityEngine::Material* HighlightOutlineMaterial; // 0x50
		::System::Boolean _EnableHighlightOutline; // 0x58
		::System::Single OutlineEnhance; // 0x5C
		::System::Int32 StencilRef; // 0x60
		::System::String* CloseFightOverridePoint; // 0x68
		::System::Func_1<::System::Single>* _FetchOwnerTimeScale_k__BackingField; // 0x70
		::System::Boolean Field_5_14; // 0x78
		::Il2CppArray<::UnityEngine::Renderer*>* TargetMeshRender; // 0x80
		::Il2CppArray<::RPG::Client::TAUtils::RendererSlots*>* TargetMaterials; // 0x88
		::Il2CppArray<::RPG::Client::MeshPartIDMask*>* TargetMeshIDPart; // 0x90
		::System::Boolean EnableOverlayPassesHalfRes; // 0x98
		::System::Boolean ShaderSimulationSpeedEnable; // 0x99
		::RPG::GameCore::HighlightOutlineSetting* Field_5_20; // 0xA0
		::RPG::GameCore::HighlightOutlineSetting* Field_5_21; // 0xA8
		::RPG::GameCore::HighlightOutlineSetting* Field_5_22; // 0xB0
		::System::Boolean Field_5_23; // 0xB8
		::UnityEngine::Color Field_5_24; // 0xBC
		::UnityEngine::Color Field_5_25; // 0xCC
		::System::Single Field_5_26; // 0xDC
		::System::Boolean Field_5_27; // 0xE0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Material*>* Field_5_28; // 0xE8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Int32>* Field_5_29; // 0xF0
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_5_30; // 0xF8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* Field_5_31; // 0x100
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_5_32; // 0x108
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_5_33; // 0x110
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_5_34; // 0x118
		::RPG::Client::CharacterShaderPropertyTransition* Field_5_35; // 0x120
		::System::Single Field_5_37; // 0x128
		::System::Single Field_5_38; // 0x12C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT__CCTOR_OFFSET))();
		}

		::System::Void SetEnableHighlightOutline(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SETENABLEHIGHLIGHTOUTLINE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBattleCharaStencil(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SETBATTLECHARASTENCIL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Material*>* GetHighOutlineRenderer2MatDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_GETHIGHOUTLINERENDERER2MATDIC_OFFSET))(this);
		}

		::System::Void RefreshHighOutline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_REFRESHHIGHOUTLINE_OFFSET))(this);
		}

		::System::Void SetExtraTargetRenders(::System::Boolean a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a2, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SETEXTRATARGETRENDERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RefreshRenderBattleStencil()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_REFRESHRENDERBATTLESTENCIL_OFFSET))(this);
		}

		::System::Boolean Method_5_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_1808E1CF7A125519_OFFSET))(this);
		}

		::System::Void Method_5_1E13A8A5C0FF7D62()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_1E13A8A5C0FF7D62_OFFSET))(this);
		}

		::System::Void Method_5_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_5_43A478BA01FE29B7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_43A478BA01FE29B7_OFFSET))(this);
		}

		::System::Void Method_5_67EBBDD5CDE980A1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_67EBBDD5CDE980A1_OFFSET))(this, a1);
		}

		::System::Void InheritShowPartIDFromOriginMaterial(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_INHERITSHOWPARTIDFROMORIGINMATERIAL_OFFSET))(this, a1);
		}

		::System::Void Method_5_A27DC2C5A103933A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_A27DC2C5A103933A_OFFSET))(this);
		}

		::System::Void Method_5_47680E2642F37A1B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_47680E2642F37A1B_OFFSET))(this);
		}

		::System::Void Method_5_A7E01A8523F2C0BA(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_A7E01A8523F2C0BA_OFFSET))(this, a1);
		}

		::System::Void Method_5_543063A1C8FC9D3E(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_543063A1C8FC9D3E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_0D11EC436EC5ACCE(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_0D11EC436EC5ACCE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_03C4FFAD29DE0852()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_03C4FFAD29DE0852_OFFSET))(this);
		}

		::System::Void Method_5_47680E2642F37A1B_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_47680E2642F37A1B_1_OFFSET))(this);
		}

		::System::Void Method_5_0D7638DBC93E5002()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_0D7638DBC93E5002_OFFSET))(this);
		}

		::System::Void Method_5_A2172401030892FD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_A2172401030892FD_OFFSET))(this);
		}

		::System::Void Method_5_394F35BBA0EE596A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_394F35BBA0EE596A_OFFSET))(this);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_5_08FEC147AACAA81D(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_08FEC147AACAA81D_OFFSET))(this, a1);
		}

		::System::Void Method_5_08FEC147AACAA81D_1(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_08FEC147AACAA81D_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_5223D107AF3EE2AB(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_5223D107AF3EE2AB_OFFSET))(this, a1);
		}

		::System::Void Method_5_EAC2737A96E071C9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_EAC2737A96E071C9_OFFSET))(this);
		}

		::System::Void Method_5_652F3820D8B242FF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_652F3820D8B242FF_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_LATETICK_OFFSET))(this, a1);
		}

		::System::Void SetShaderSimulationSpeedEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SETSHADERSIMULATIONSPEEDENABLE_OFFSET))(this, a1);
		}

		::System::Void Method_5_AF53AC45ED2466EB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_AF53AC45ED2466EB_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean get_EnableHighlightOutline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_GET_ENABLEHIGHLIGHTOUTLINE_OFFSET))(this);
		}

		::System::Void set_EnableHighlightOutline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SET_ENABLEHIGHLIGHTOUTLINE_OFFSET))(this, a1);
		}

		::System::Void set_FetchOwnerTimeScale(::System::Func_1<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SET_FETCHOWNERTIMESCALE_OFFSET))(this, value);
		}

		::System::Func_1<::System::Single>* get_FetchOwnerTimeScale()
		{
			return ((::System::Func_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_GET_FETCHOWNERTIMESCALE_OFFSET))(this);
		}

		::System::Boolean get_ArtModelLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_GET_ARTMODELLOADED_OFFSET))(this);
		}

		::System::Void set_ArtModelLoaded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SET_ARTMODELLOADED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* get_AllMeshRender()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_GET_ALLMESHRENDER_OFFSET))(this);
		}

		::RPG::Client::CharacterShaderPropertyTransition* Method_5_7E7E85596230BF07()
		{
			return ((::RPG::Client::CharacterShaderPropertyTransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_7E7E85596230BF07_OFFSET))(this);
		}
	};
}
