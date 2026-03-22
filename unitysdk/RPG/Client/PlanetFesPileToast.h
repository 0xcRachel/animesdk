#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class PlanetFesToastItem; }
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_PLANETFESPILETOAST_HIDEALL_OFFSET UNITYSDK_OFFSET(0x9AF9B00)
#define RPG_CLIENT_PLANETFESPILETOAST_INIT_OFFSET UNITYSDK_OFFSET(0x9AF9870)
#define RPG_CLIENT_PLANETFESPILETOAST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9AF9D60)
#define RPG_CLIENT_PLANETFESPILETOAST_PILE_OFFSET UNITYSDK_OFFSET(0x9AF96D0)
#define RPG_CLIENT_PLANETFESPILETOAST_SETENABLE_OFFSET UNITYSDK_OFFSET(0x9AF9AA0)
#define RPG_CLIENT_PLANETFESPILETOAST_SETPAUSE_OFFSET UNITYSDK_OFFSET(0x9AF9B90)
#define RPG_CLIENT_PLANETFESPILETOAST_UPDATE_OFFSET UNITYSDK_OFFSET(0x9AF9DB0)
#define RPG_CLIENT_PLANETFESPILETOAST__ADDTOPILE_OFFSET UNITYSDK_OFFSET(0x9AF9770)
#define RPG_CLIENT_PLANETFESPILETOAST__APPLYLATENCYLAG_OFFSET UNITYSDK_OFFSET(0x9AF9C40)
#define RPG_CLIENT_PLANETFESPILETOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x9AFAE50)
#define RPG_CLIENT_PLANETFESPILETOAST__ENDMOVING_OFFSET UNITYSDK_OFFSET(0x9AFA610)
#define RPG_CLIENT_PLANETFESPILETOAST__ENTERMOVING_OFFSET UNITYSDK_OFFSET(0x9AFA990)
#define RPG_CLIENT_PLANETFESPILETOAST__FADEIN_OFFSET UNITYSDK_OFFSET(0x9AFA120)
#define RPG_CLIENT_PLANETFESPILETOAST__FADEOUT_OFFSET UNITYSDK_OFFSET(0x9AFA400)
#define RPG_CLIENT_PLANETFESPILETOAST__GETNEXTINDEX_OFFSET UNITYSDK_OFFSET(0x9AFABA0)
#define RPG_CLIENT_PLANETFESPILETOAST__ONITEMADDTOPILE_OFFSET UNITYSDK_OFFSET(0x9AFA890)
#define RPG_CLIENT_PLANETFESPILETOAST__ONITEMHIDE_OFFSET UNITYSDK_OFFSET(0x9AF9CA0)
#define RPG_CLIENT_PLANETFESPILETOAST__SHOWING_OFFSET UNITYSDK_OFFSET(0x9AFA280)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesPileToast_TypeDefinitionIndex = 52958;

	class PlanetFesPileToast : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single MOVE_TIME; // 0x0
		::UnityEngine::GameObject* ToastPrefab; // 0x18
		::System::Int32 _MaxCount; // 0x20
		::System::Boolean _Moving; // 0x24
		::System::Single _MovingPoint; // 0x28
		::System::UInt32 _Header; // 0x2C
		::Il2CppArray<::RPG::Client::PlanetFesToastItem*>* _Items; // 0x30
		::System::Collections::Generic::Queue_1<::System::Object*>* _Msgs; // 0x38
		::System::Boolean _IsEnable; // 0x40
		::System::Boolean _IsPaused; // 0x41
		::RPG::Client::UIPrefabLoader* _PrefabLoader; // 0x48
		::System::Action_3<::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*, ::System::Object*>* _OnAddToPileDelegate; // 0x50
		::System::Action_2<::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*>* _OnItemHideDelegate; // 0x58
		::XLua::LuaTable* _LuaTable; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__CTOR_OFFSET))(this);
		}

		::System::Void Pile(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST_PILE_OFFSET))(this, data);
		}

		::System::Void Init(::System::Int32 count, ::System::Action_3<::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*, ::System::Object*>* onAddToPileDelegate, ::XLua::LuaTable* table, ::System::Action_2<::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*>* onItemHideDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_3<::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*, ::System::Object*>*, ::XLua::LuaTable*, ::System::Action_2<::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST_INIT_OFFSET))(this, count, onAddToPileDelegate, table, onItemHideDelegate);
		}

		::System::Void SetEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST_SETENABLE_OFFSET))(this, enable);
		}

		::System::Void SetPause(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST_SETPAUSE_OFFSET))(this, value);
		}

		::System::Void HideAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST_HIDEALL_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST_UPDATE_OFFSET))(this);
		}

		::System::Void _AddToPile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__ADDTOPILE_OFFSET))(this);
		}

		::System::Void _FadeIn(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__FADEIN_OFFSET))(this, index);
		}

		::System::Void _Showing(::System::UInt32 index, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__SHOWING_OFFSET))(this, index, deltaTime);
		}

		::System::Void _FadeOut(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__FADEOUT_OFFSET))(this, index);
		}

		::System::Void _EnterMoving()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__ENTERMOVING_OFFSET))(this);
		}

		::System::Void _EndMoving()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__ENDMOVING_OFFSET))(this);
		}

		::System::UInt32 _GetNextIndex(::System::UInt32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__GETNEXTINDEX_OFFSET))(this, index);
		}

		::System::Void _ApplyLatencyLag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__APPLYLATENCYLAG_OFFSET))(this);
		}

		::System::Void _OnItemAddToPile(::RPG::Client::PlanetFesToastItem* item, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesToastItem*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__ONITEMADDTOPILE_OFFSET))(this, item, data);
		}

		::System::Void _OnItemHide(::RPG::Client::PlanetFesToastItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesToastItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__ONITEMHIDE_OFFSET))(this, item);
		}
	};
}
