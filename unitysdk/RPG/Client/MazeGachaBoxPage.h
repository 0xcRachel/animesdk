#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MAZEGACHABOXPAGE_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x96E99A0)
#define RPG_CLIENT_MAZEGACHABOXPAGE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x96E9960)
#define RPG_CLIENT_MAZEGACHABOXPAGE_GET_GACHAGROUPSFOCUS_OFFSET UNITYSDK_OFFSET(0x96E99C0)
#define RPG_CLIENT_MAZEGACHABOXPAGE_GET_GACHAGROUPSMASK1_OFFSET UNITYSDK_OFFSET(0x96E99E0)
#define RPG_CLIENT_MAZEGACHABOXPAGE_GET_GACHAGROUPSMASK2_OFFSET UNITYSDK_OFFSET(0x96E9A00)
#define RPG_CLIENT_MAZEGACHABOXPAGE_GET_WAITSECONDS_OFFSET UNITYSDK_OFFSET(0x96E9980)
#define RPG_CLIENT_MAZEGACHABOXPAGE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x96E9DA0)
#define RPG_CLIENT_MAZEGACHABOXPAGE_ONSTOPROLLING_OFFSET UNITYSDK_OFFSET(0x96E9D50)
#define RPG_CLIENT_MAZEGACHABOXPAGE_SET_CURVE_OFFSET UNITYSDK_OFFSET(0x96E99B0)
#define RPG_CLIENT_MAZEGACHABOXPAGE_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x96E9970)
#define RPG_CLIENT_MAZEGACHABOXPAGE_SET_GACHAGROUPSFOCUS_OFFSET UNITYSDK_OFFSET(0x96E99D0)
#define RPG_CLIENT_MAZEGACHABOXPAGE_SET_GACHAGROUPSMASK1_OFFSET UNITYSDK_OFFSET(0x96E99F0)
#define RPG_CLIENT_MAZEGACHABOXPAGE_SET_GACHAGROUPSMASK2_OFFSET UNITYSDK_OFFSET(0x96E9A10)
#define RPG_CLIENT_MAZEGACHABOXPAGE_SET_WAITSECONDS_OFFSET UNITYSDK_OFFSET(0x96E9990)
#define RPG_CLIENT_MAZEGACHABOXPAGE_STARTROLLING_OFFSET UNITYSDK_OFFSET(0x96E9A20)
#define RPG_CLIENT_MAZEGACHABOXPAGE_UPDATE_OFFSET UNITYSDK_OFFSET(0x96E9DF0)
#define RPG_CLIENT_MAZEGACHABOXPAGE__CALCCURRENTINDEX_OFFSET UNITYSDK_OFFSET(0x96E9EB0)
#define RPG_CLIENT_MAZEGACHABOXPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x96EA4D0)
#define RPG_CLIENT_MAZEGACHABOXPAGE__POS2INDEX_OFFSET UNITYSDK_OFFSET(0x96EA190)
#define RPG_CLIENT_MAZEGACHABOXPAGE__REMOVEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x96E9B20)
#define RPG_CLIENT_MAZEGACHABOXPAGE__SETHIGHLIGHTGACHAGROUP_OFFSET UNITYSDK_OFFSET(0x96EA050)
#define RPG_CLIENT_MAZEGACHABOXPAGE__SETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x96EA2A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MazeGachaBoxPage_TypeDefinitionIndex = 58111;

	class MazeGachaBoxPage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 _TargetIndex; // 0x18
		::System::Int32 _WalkNum; // 0x1C
		::System::Boolean _IsRolling; // 0x20
		::System::Boolean _IsStopped; // 0x21
		::System::Single _RollingStartTime; // 0x24
		::System::Int32 _CurHighlightIndex; // 0x28
		::System::Action* _OnStopRolling; // 0x30
		::System::Action* _OnFinish; // 0x38
		::System::Single _Duration_k__BackingField; // 0x40
		::System::Single _WaitSeconds_k__BackingField; // 0x44
		::UnityEngine::AnimationCurve* _Curve_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _GachaGroupsFocus_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _GachaGroupsMask1_k__BackingField; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _GachaGroupsMask2_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE__CTOR_OFFSET))(this);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_Duration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_SET_DURATION_OFFSET))(this, value);
		}

		::System::Single get_WaitSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_GET_WAITSECONDS_OFFSET))(this);
		}

		::System::Void set_WaitSeconds(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_SET_WAITSECONDS_OFFSET))(this, value);
		}

		::UnityEngine::AnimationCurve* get_Curve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_GET_CURVE_OFFSET))(this);
		}

		::System::Void set_Curve(::UnityEngine::AnimationCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_SET_CURVE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* get_GachaGroupsFocus()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_GET_GACHAGROUPSFOCUS_OFFSET))(this);
		}

		::System::Void set_GachaGroupsFocus(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_SET_GACHAGROUPSFOCUS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* get_GachaGroupsMask1()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_GET_GACHAGROUPSMASK1_OFFSET))(this);
		}

		::System::Void set_GachaGroupsMask1(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_SET_GACHAGROUPSMASK1_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* get_GachaGroupsMask2()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_GET_GACHAGROUPSMASK2_OFFSET))(this);
		}

		::System::Void set_GachaGroupsMask2(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_SET_GACHAGROUPSMASK2_OFFSET))(this, value);
		}

		::System::Void StartRolling(::System::Int32 targetIndex, ::System::Int32 walkNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_STARTROLLING_OFFSET))(this, targetIndex, walkNum);
		}

		::System::Void OnStopRolling(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_ONSTOPROLLING_OFFSET))(this, action);
		}

		::System::Void OnFinish(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_ONFINISH_OFFSET))(this, action);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE_UPDATE_OFFSET))(this);
		}

		::System::Int32 _CalcCurrentIndex(::System::Single rollingTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE__CALCCURRENTINDEX_OFFSET))(this, rollingTime);
		}

		static ::System::Int32 _Pos2Index(::System::Single pos, ::System::Int32 mod)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE__POS2INDEX_OFFSET))(pos, mod);
		}

		::System::Void _SetHighlightGachaGroup(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE__SETHIGHLIGHTGACHAGROUP_OFFSET))(this, index);
		}

		static ::System::Void _SetHighlight(::UnityEngine::GameObject* focus, ::UnityEngine::GameObject* mask1, ::UnityEngine::GameObject* mask2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE__SETHIGHLIGHT_OFFSET))(focus, mask1, mask2);
		}

		static ::System::Void _RemoveHighlight(::UnityEngine::GameObject* focus, ::UnityEngine::GameObject* mask1, ::UnityEngine::GameObject* mask2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEGACHABOXPAGE__REMOVEHIGHLIGHT_OFFSET))(focus, mask1, mask2);
		}
	};
}
