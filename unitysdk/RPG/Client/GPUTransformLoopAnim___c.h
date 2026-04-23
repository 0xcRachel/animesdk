#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_B3D9F954008EA010_AnimatedItem;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15506540)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15506580)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__22_0_OFFSET UNITYSDK_OFFSET(0x15506590)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__22_1_OFFSET UNITYSDK_OFFSET(0x155065B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GPUTransformLoopAnim___c_TypeDefinitionIndex = 64825;

	class GPUTransformLoopAnim___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_3_B3D9F954008EA010_AnimatedItem*, ::UnityEngine::Mesh*>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::Class_3_B3D9F954008EA010_AnimatedItem*, ::UnityEngine::Mesh*>**)Il2CppClass::FromTypeDefinitionIndex(GPUTransformLoopAnim___c_TypeDefinitionIndex)->GetStaticField(0x1AEE0);
		}
		static ::System::Func_2<::Class_3_B3D9F954008EA010_AnimatedItem*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>*>** StaticGet___9__22_1()
		{
			return (::System::Func_2<::Class_3_B3D9F954008EA010_AnimatedItem*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>*>**)Il2CppClass::FromTypeDefinitionIndex(GPUTransformLoopAnim___c_TypeDefinitionIndex)->GetStaticField(0x1AEE8);
		}
		static ::RPG::Client::GPUTransformLoopAnim___c** StaticGet___9()
		{
			return (::RPG::Client::GPUTransformLoopAnim___c**)Il2CppClass::FromTypeDefinitionIndex(GPUTransformLoopAnim___c_TypeDefinitionIndex)->GetStaticField(0x1AEF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Mesh* _get_RenderBudgetData_b__22_0(::Class_3_B3D9F954008EA010_AnimatedItem* i)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::Class_3_B3D9F954008EA010_AnimatedItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__22_0_OFFSET))(this, i);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>* _get_RenderBudgetData_b__22_1(::Class_3_B3D9F954008EA010_AnimatedItem* i)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>*(*)(::PVOID, ::Class_3_B3D9F954008EA010_AnimatedItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__22_1_OFFSET))(this, i);
		}
	};
}
