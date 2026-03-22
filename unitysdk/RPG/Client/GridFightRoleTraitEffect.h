#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightMemberEffect.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x93EF820)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_METHOD_6_EADD0BCD86F751B0_OFFSET UNITYSDK_OFFSET(0x93EF9C0)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x93EF6B0)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x93EF8A0)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x93EFA70)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT___IFIXBASEPROXY_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x93EFA90)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT___IFIXBASEPROXY_ONCREATE_OFFSET UNITYSDK_OFFSET(0x93EFA80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleTraitEffect_TypeDefinitionIndex = 51264;

	class GridFightRoleTraitEffect : public ::RPG::Client::GridFightMemberEffect
	{
	public:
		::System::Single Field_6_0; // 0x30
		::System::Action* Field_6_1; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void Play(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_PLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_EADD0BCD86F751B0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_METHOD_6_EADD0BCD86F751B0_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnCreate(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT___IFIXBASEPROXY_ONCREATE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT___IFIXBASEPROXY_DESPAWNED_OFFSET))(this);
		}
	};
}
