#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_36264895A759B0FF_DirectorState.h"
#include "unitysdk/RPGTools/Timeline/PauseTimelineReason.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_1_36264895A759B0FF_METHOD_1_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x12670430)
#define CLASS_1_36264895A759B0FF_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x12670960)
#define CLASS_1_36264895A759B0FF_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12670650)
#define CLASS_1_36264895A759B0FF_METHOD_1_85C746F74910D9C1_OFFSET UNITYSDK_OFFSET(0x12670B30)
#define CLASS_1_36264895A759B0FF_METHOD_1_BA05915D19667892_OFFSET UNITYSDK_OFFSET(0x12670A50)
#define CLASS_1_36264895A759B0FF_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12670A00)
#define CLASS_1_36264895A759B0FF_METHOD_1_CC256E026C2C5669_OFFSET UNITYSDK_OFFSET(0x126706B0)
#define CLASS_1_36264895A759B0FF_METHOD_1_D94FD23FDC64EBE6_OFFSET UNITYSDK_OFFSET(0x12670AD0)
#define CLASS_1_36264895A759B0FF__CTOR_OFFSET UNITYSDK_OFFSET(0x12670410)

inline static constexpr unsigned int Class_1_36264895A759B0FF_TypeDefinitionIndex = 45204;

class Class_1_36264895A759B0FF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::GameObject*>* Field_1_7; // 0x10
	::UnityEngine::Playables::PlayableDirector* Field_1_2; // 0x18
	::UnityEngine::GameObject* Field_1_6; // 0x20
	::System::String* Field_1_10; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_8; // 0x30
	::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* Field_1_5; // 0x38
	::System::String* Field_1_11; // 0x40
	::UnityEngine::Events::UnityAction* Field_1_4; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_9; // 0x50
	::System::Double Field_1_15; // 0x58
	::System::Double Field_1_14; // 0x60
	::Class_1_36264895A759B0FF_DirectorState Field_1_3; // 0x68
	::System::UInt32 Field_1_1; // 0x6C
	::System::Single Field_1_12; // 0x70
	::System::UInt32 Field_1_16; // 0x74
	::System::Int32 Field_1_0; // 0x78
	::System::Double Field_1_13; // 0x80

	::System::Void _ctor(::UnityEngine::Playables::PlayableDirector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + CLASS_1_36264895A759B0FF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_08DCF72FBE01FF99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36264895A759B0FF_METHOD_1_08DCF72FBE01FF99_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36264895A759B0FF_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36264895A759B0FF_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36264895A759B0FF_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_BA05915D19667892(::RPGTools::Timeline::PauseTimelineReason a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::PauseTimelineReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_36264895A759B0FF_METHOD_1_BA05915D19667892_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D94FD23FDC64EBE6(::RPGTools::Timeline::PauseTimelineReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::PauseTimelineReason))((::PBYTE)hIl2Cpp + CLASS_1_36264895A759B0FF_METHOD_1_D94FD23FDC64EBE6_OFFSET))(this, a1);
	}

	::System::Double Method_1_85C746F74910D9C1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36264895A759B0FF_METHOD_1_85C746F74910D9C1_OFFSET))(this);
	}

	::System::Single Method_1_CC256E026C2C5669()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36264895A759B0FF_METHOD_1_CC256E026C2C5669_OFFSET))(this);
	}
};
