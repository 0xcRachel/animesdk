#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPropPhysicsProxyView.h"

class Class_1_47EE63CB5C4DC8FC_5;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class BoxCollider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDRAGONDOGPHYSICSPROXYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x952B9B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDRAGONDOGPHYSICSPROXYVIEW_METHOD_8_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x952C200)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDRAGONDOGPHYSICSPROXYVIEW_METHOD_8_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x952B5A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDRAGONDOGPHYSICSPROXYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x952BDB0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDRAGONDOGPHYSICSPROXYVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x952C1A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDRAGONDOGPHYSICSPROXYVIEW___IFIXBASEPROXY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x952C270)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDRAGONDOGPHYSICSPROXYVIEW___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0x952C280)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimDragonDogPhysicsProxyView_TypeDefinitionIndex = 60867;

	class FiveDimDragonDogPhysicsProxyView : public ::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView
	{
	public:
		::UnityEngine::BoxCollider* Field_8_0; // 0x1E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDRAGONDOGPHYSICSPROXYVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_9B2E710EB9D49BA6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDRAGONDOGPHYSICSPROXYVIEW_METHOD_8_9B2E710EB9D49BA6_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDRAGONDOGPHYSICSPROXYVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDRAGONDOGPHYSICSPROXYVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void Method_8_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDRAGONDOGPHYSICSPROXYVIEW_METHOD_8_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Initialize(::Entitas::IContext* P0, ::Class_1_47EE63CB5C4DC8FC_5* P1, ::Entitas::IEntity* P2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDRAGONDOGPHYSICSPROXYVIEW___IFIXBASEPROXY_INITIALIZE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_Release(::System::String* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDRAGONDOGPHYSICSPROXYVIEW___IFIXBASEPROXY_RELEASE_OFFSET))(this, P0);
		}
	};
}
