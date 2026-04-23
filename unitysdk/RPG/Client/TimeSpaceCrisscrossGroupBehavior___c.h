#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::Client { class GameObjectAudio; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1514C960)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1514C9A0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTAUDIOS_B__30_0_OFFSET UNITYSDK_OFFSET(0x1514CAF0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTAUDIOS_B__30_1_OFFSET UNITYSDK_OFFSET(0x1514CB10)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTCOLLIDERTO_B__25_0_OFFSET UNITYSDK_OFFSET(0x1514CA80)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTCOLLIDERTO_B__25_1_OFFSET UNITYSDK_OFFSET(0x1514CAA0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTRENDERERSTO_B__22_0_OFFSET UNITYSDK_OFFSET(0x1514C9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossGroupBehavior___c_TypeDefinitionIndex = 64721;

	class TimeSpaceCrisscrossGroupBehavior___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::GameObjectAudio*>** StaticGet___9__30_1()
		{
			return (::System::Predicate_1<::RPG::Client::GameObjectAudio*>**)Il2CppClass::FromTypeDefinitionIndex(TimeSpaceCrisscrossGroupBehavior___c_TypeDefinitionIndex)->GetStaticField(0x4FF50);
		}
		static ::System::Func_2<::UnityEngine::Collider*, ::UnityEngine::Bounds>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::UnityEngine::Collider*, ::UnityEngine::Bounds>**)Il2CppClass::FromTypeDefinitionIndex(TimeSpaceCrisscrossGroupBehavior___c_TypeDefinitionIndex)->GetStaticField(0x4FF58);
		}
		static ::System::Predicate_1<::UnityEngine::Collider*>** StaticGet___9__25_0()
		{
			return (::System::Predicate_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(TimeSpaceCrisscrossGroupBehavior___c_TypeDefinitionIndex)->GetStaticField(0x4FF60);
		}
		static ::System::Predicate_1<::UnityEngine::Renderer*>** StaticGet___9__22_0()
		{
			return (::System::Predicate_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(TimeSpaceCrisscrossGroupBehavior___c_TypeDefinitionIndex)->GetStaticField(0x4FF68);
		}
		static ::RPG::Client::TimeSpaceCrisscrossGroupBehavior___c** StaticGet___9()
		{
			return (::RPG::Client::TimeSpaceCrisscrossGroupBehavior___c**)Il2CppClass::FromTypeDefinitionIndex(TimeSpaceCrisscrossGroupBehavior___c_TypeDefinitionIndex)->GetStaticField(0x4FF70);
		}
		static ::System::Predicate_1<::RPG::Client::GameObjectAudio*>** StaticGet___9__30_0()
		{
			return (::System::Predicate_1<::RPG::Client::GameObjectAudio*>**)Il2CppClass::FromTypeDefinitionIndex(TimeSpaceCrisscrossGroupBehavior___c_TypeDefinitionIndex)->GetStaticField(0x4FF78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectRenderersTo_b__22_0(::UnityEngine::Renderer* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTRENDERERSTO_B__22_0_OFFSET))(this, x);
		}

		::System::Boolean __CollectColliderTo_b__25_0(::UnityEngine::Collider* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTCOLLIDERTO_B__25_0_OFFSET))(this, x);
		}

		::UnityEngine::Bounds __CollectColliderTo_b__25_1(::UnityEngine::Collider* x)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTCOLLIDERTO_B__25_1_OFFSET))(this, x);
		}

		::System::Boolean __CollectAudios_b__30_0(::RPG::Client::GameObjectAudio* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GameObjectAudio*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTAUDIOS_B__30_0_OFFSET))(this, x);
		}

		::System::Boolean __CollectAudios_b__30_1(::RPG::Client::GameObjectAudio* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GameObjectAudio*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTAUDIOS_B__30_1_OFFSET))(this, x);
		}
	};
}
