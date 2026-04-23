#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightMemberEffect.h"

namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_GRIDFIGHTGROWUPEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x175523B0)
#define RPG_CLIENT_GRIDFIGHTGROWUPEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x17552490)
#define RPG_CLIENT_GRIDFIGHTGROWUPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x175525C0)
#define RPG_CLIENT_GRIDFIGHTGROWUPEFFECT___IFIXBASEPROXY_ONCREATE_OFFSET UNITYSDK_OFFSET(0x175525D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGrowUpEffect_TypeDefinitionIndex = 59350;

	class GridFightGrowUpEffect : public ::RPG::Client::GridFightMemberEffect
	{
	public:
		::UnityEngine::Animation* Field_6_0; // 0x38
		::System::Single Field_6_1; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGROWUPEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGROWUPEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Play(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGROWUPEFFECT_PLAY_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnCreate(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGROWUPEFFECT___IFIXBASEPROXY_ONCREATE_OFFSET))(this, P0);
		}
	};
}
