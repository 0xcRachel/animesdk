#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/Struct_2_2A9144AA173D64D2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationPlayableOutput.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class Class_1_BCECFCD0C8771868;
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }

#define CLASS_1_7AAE8FA406499FBF_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xEE47040)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_166FCE95AF172ABC_OFFSET UNITYSDK_OFFSET(0xEE46AE0)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_23EFCEB999C1D825_OFFSET UNITYSDK_OFFSET(0xEE48740)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xEE47300)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xEE472A0)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xEE47240)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_434D975D1E08E041_OFFSET UNITYSDK_OFFSET(0xEE47720)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xEE46C30)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_5903A6947D49E37C_OFFSET UNITYSDK_OFFSET(0xEE47790)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xEE470F0)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_9999F3E4D60BFCCC_OFFSET UNITYSDK_OFFSET(0xEE48130)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xEE482F0)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xEE47350)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xEE48360)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_DBDE806671808CE7_OFFSET UNITYSDK_OFFSET(0xEE476A0)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_E8F71BC8471C5469_OFFSET UNITYSDK_OFFSET(0xEE46BD0)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_EB89FD9C9EC162AB_OFFSET UNITYSDK_OFFSET(0xEE473E0)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_EF17FAB3022DE07B_1_OFFSET UNITYSDK_OFFSET(0xEE47CE0)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_EF17FAB3022DE07B_OFFSET UNITYSDK_OFFSET(0xEE47880)
#define CLASS_1_7AAE8FA406499FBF__CTOR_OFFSET UNITYSDK_OFFSET(0xEE46AF0)

inline static constexpr unsigned int Class_1_7AAE8FA406499FBF_TypeDefinitionIndex = 67707;

class Class_1_7AAE8FA406499FBF : public ::System::Object
{
public:
	::UnityEngine::AnimationClip* Field_1_15; // 0x10
	::UnityEngine::Animator* Field_1_1; // 0x18
	::UnityEngine::AnimationClip* Field_1_16; // 0x20
	::Class_1_BCECFCD0C8771868* Field_1_8; // 0x28
	::Class_1_BCECFCD0C8771868* Field_1_11; // 0x30
	::UnityEngine::AnimationClip* Field_1_17; // 0x38
	::RPG::Client::MonoEmoPlayableGraph* Field_1_2; // 0x40
	::UnityEngine::AnimationClip* Field_1_14; // 0x48
	::Class_1_BCECFCD0C8771868* Field_1_9; // 0x50
	::System::String* Field_1_0; // 0x58
	::Class_1_BCECFCD0C8771868* Field_1_5; // 0x60
	::UnityEngine::AnimationClip* Field_1_18; // 0x68
	::Class_1_BCECFCD0C8771868* Field_1_6; // 0x70
	::UnityEngine::Animations::AnimationLayerMixerPlayable Field_1_13; // 0x78
	::UnityEngine::Animations::AnimationPlayableOutput Field_1_4; // 0x88
	::UnityEngine::Animations::AnimationPlayableOutput Field_1_12; // 0x98
	::UnityEngine::Playables::PlayableGraph Field_1_3; // 0xA8
	::System::Single Field_1_22; // 0xB8
	::System::Single Field_1_23; // 0xBC
	::System::Single Field_1_21; // 0xC0
	::System::Single Field_1_24; // 0xC4
	::System::Single Field_1_20; // 0xC8
	::System::Int32 Field_1_19; // 0xCC
	::UnityEngine::Animations::AnimationPlayableOutput Field_1_10; // 0xD0
	::UnityEngine::Animations::AnimationPlayableOutput Field_1_7; // 0xE0

	::System::Void _ctor(::UnityEngine::Animator* a1, ::RPG::Client::MonoEmoPlayableGraph* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::RPG::Client::MonoEmoPlayableGraph*))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Playables::PlayableGraph Method_1_166FCE95AF172ABC()
	{
		return ((::UnityEngine::Playables::PlayableGraph(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_166FCE95AF172ABC_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_EB89FD9C9EC162AB(::Struct_2_2A9144AA173D64D2 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2A9144AA173D64D2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_EB89FD9C9EC162AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DBDE806671808CE7(::System::Int32 a1, ::System::Single a2, ::RPGTools::Timeline::Emotion::EmoTrackType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::RPGTools::Timeline::Emotion::EmoTrackType))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_DBDE806671808CE7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_434D975D1E08E041(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_434D975D1E08E041_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5903A6947D49E37C(::System::Single a1, ::RPGTools::Timeline::Emotion::EmoTrackType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPGTools::Timeline::Emotion::EmoTrackType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_5903A6947D49E37C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_EF17FAB3022DE07B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_EF17FAB3022DE07B_OFFSET))(this);
	}

	::System::Void Method_1_EF17FAB3022DE07B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_EF17FAB3022DE07B_1_OFFSET))(this);
	}

	::System::Void Method_1_9999F3E4D60BFCCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_9999F3E4D60BFCCC_OFFSET))(this);
	}

	::System::Void Method_1_E8F71BC8471C5469()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_E8F71BC8471C5469_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_23EFCEB999C1D825(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_23EFCEB999C1D825_OFFSET))(this, a1);
	}
};
