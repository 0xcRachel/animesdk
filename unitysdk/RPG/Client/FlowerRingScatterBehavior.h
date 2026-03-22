#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::Client { class FlowerRingScatterMonoPlugin; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x929EAF0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0x929DB90)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_178812F674E8B05A_OFFSET UNITYSDK_OFFSET(0x929D1E0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x929EB60)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x929DAD0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x929DB30)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x929EBA0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x929DA70)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x929EDD0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x929EE30)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x929EE90)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x929EEF0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x929EF50)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0x929F090)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x929ED70)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x929D250)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x929D9A0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x929D150)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x929F020)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x929EC10)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x929EC00)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR___IFIXBASEPROXY_LATETICK_OFFSET UNITYSDK_OFFSET(0x929EFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int FlowerRingScatterBehavior_TypeDefinitionIndex = 56247;

	class FlowerRingScatterBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__RingRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0xF8B0);
		}
		static ::System::Int32* StaticGet__DissolveProgress()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0xF8B4);
		}
		static ::System::Int32* StaticGet__GrowRandomSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0xF8B8);
		}
		static ::System::Int32* StaticGet__RandomColor0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0xF8BC);
		}
		static ::System::Int32* StaticGet__ParticleRotationMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0xF8C0);
		}
		static ::System::Int32* StaticGet__RandomSeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0xF8C4);
		}
		static ::System::Int32* StaticGet__RingThickness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0xF8C8);
		}
		static ::System::Int32* StaticGet__RandomColor1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0xF8CC);
		}
		static ::System::Int32* StaticGet_ParticleSizeMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0xF8D0);
		}
		static ::System::Int32* StaticGet__DissolveTile()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0xF8D4);
		}
		static ::System::Int32* StaticGet__DissolveSmoothness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0xF8D8);
		}
		static ::System::Int32* StaticGet__DissolveTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0xF8DC);
		}
		static ::System::Int32* StaticGet_ParticleSizeMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0xF8E0);
		}
		static ::System::Int32* StaticGet__Center()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0xF8E4);
		}
		static ::System::Int32* StaticGet__ParticleRotationMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0xF8E8);
		}
		static ::System::Int32* StaticGet__GrowProgress()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0xF8EC);
		}
		::Il2CppArray<::System::UInt32>* IndirectDrawArgs; // 0x38
		::UnityEngine::ComputeBuffer* IndirectDrawArgsBuffer; // 0x40
		::UnityEngine::Bounds _Bounds; // 0x48
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_178812F674E8B05A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_178812F674E8B05A_OFFSET))(this);
		}

		::System::Void Method_3_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_6112A1276899AF0F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_6112A1276899AF0F_OFFSET))(this);
		}

		::RPG::Client::FlowerRingScatterMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::FlowerRingScatterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR___IFIXBASEPROXY_LATETICK_OFFSET))(this, P0);
		}

		::System::Boolean Method_3_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET))(this);
		}
	};
}
