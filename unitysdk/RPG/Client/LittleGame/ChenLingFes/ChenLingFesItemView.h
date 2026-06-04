#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/ChenLingFesView.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_1342B57709FD7AC5;
namespace RPG { class OutlinePostFXMonoPlugin; }
namespace RPG::Client { class PropSelectionEffect; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_CLEARBREATHHOVERCOLOR_OFFSET UNITYSDK_OFFSET(0x17E23B90)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_CLEAREFFECT_OFFSET UNITYSDK_OFFSET(0x17E23E30)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x17E23F40)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_GET_OUTLINEPOSTFXMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x17E23EF0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_GET_PROPSELECTIONEFFECT_OFFSET UNITYSDK_OFFSET(0x17E23EA0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_METHOD_7_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x17E23880)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17E23D80)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_SETDITHERALPHA_OFFSET UNITYSDK_OFFSET(0x17E23800)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_START_OFFSET UNITYSDK_OFFSET(0x17E23D30)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_USEBREATHHOVERCOLOR_OFFSET UNITYSDK_OFFSET(0x17E23AE0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E23FB0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x17E23F90)

namespace RPG::Client::LittleGame::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesItemView_TypeDefinitionIndex = 72308;

	class ChenLingFesItemView : public ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesView
	{
	public:
		static ::System::Int32* StaticGet_Field_7_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesItemView_TypeDefinitionIndex)->GetStaticField(0xCB90);
		}
		static ::UnityEngine::Color* StaticGet_Field_7_1()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesItemView_TypeDefinitionIndex)->GetStaticField(0xCB94);
		}
		::RPG::Client::PropSelectionEffect* Field_7_2; // 0x58
		::RPG::OutlinePostFXMonoPlugin* Field_7_3; // 0x60
		::UnityEngine::Animator* Field_7_4; // 0x68
		::Class_1_1342B57709FD7AC5* Field_7_5; // 0x70
		::System::Boolean Field_7_6; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW__CCTOR_OFFSET))();
		}

		::System::Void SetDitherAlpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_SETDITHERALPHA_OFFSET))(this, a1);
		}

		::System::Void UseBreathHoverColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_USEBREATHHOVERCOLOR_OFFSET))(this);
		}

		::System::Void ClearBreathHoverColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_CLEARBREATHHOVERCOLOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void ClearEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_CLEAREFFECT_OFFSET))(this);
		}

		::System::Void Method_7_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_METHOD_7_A239DF324AF4215D_OFFSET))(this);
		}

		::RPG::Client::PropSelectionEffect* get_PropSelectionEffect()
		{
			return ((::RPG::Client::PropSelectionEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_GET_PROPSELECTIONEFFECT_OFFSET))(this);
		}

		::RPG::OutlinePostFXMonoPlugin* get_OutlinePostFXMonoPlugin()
		{
			return ((::RPG::OutlinePostFXMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_GET_OUTLINEPOSTFXMONOPLUGIN_OFFSET))(this);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_GET_ANIMATOR_OFFSET))(this);
		}
	};
}
