#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace RPG::Client { class ShellFurRendererMonoPlugin; }
namespace System { class Random; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x9F70C40)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9F70560)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x9F70700)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x9F70420)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x9F70BE0)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9F703B0)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x9F71240)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x9F712A0)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x9F71300)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x9F713D0)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x9F71430)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0x9F71490)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9F711E0)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x9F70790)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x9F6F9D0)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x9F705F0)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0x9F70680)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9F6F930)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9F70B20)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x9F6FA90)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9F70740)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x9F70480)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x9F71360)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x9F70C80)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F710E0)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9F71070)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9F714F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ShellFurRendererBehavior_TypeDefinitionIndex = 56530;

	class ShellFurRendererBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__MainTex_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x53E0);
		}
		static ::System::Int32* StaticGet__WindNoiseScale_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x53E4);
		}
		static ::System::Int32* StaticGet__QTangent_Off_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x53E8);
		}
		static ::System::Int32* StaticGet__FurMaskTex_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x53EC);
		}
		static ::System::Int32* StaticGet__SmoothnessScale_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x53F0);
		}
		static ::System::Int32* StaticGet__FurDither_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x53F4);
		}
		static ::System::Int32* StaticGet__WindDir_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x53F8);
		}
		static ::System::Int32* StaticGet__FurDitherID_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x53FC);
		}
		static ::System::Int32* StaticGet__FurLength_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x5400);
		}
		static ::System::Int32* StaticGet__RootColor_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x5404);
		}
		static ::System::Int32* StaticGet__RootSmoothnessScale_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x5408);
		}
		static ::System::Int32* StaticGet__NoiseMap_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x540C);
		}
		static ::System::Int32* StaticGet__TopColor_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x5410);
		}
		::System::Boolean hasUpdateRenderMatrix; // 0x38
		::UnityEngine::Mesh* m_Mesh; // 0x40
		::System::Random* m_random; // 0x48
		::UnityEngine::Material* m_Material; // 0x50
		::UnityEngine::MeshRenderer* m_TargetRenderer; // 0x58
		::Il2CppArray<::UnityEngine::Matrix4x4>* renderMatrices; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_9681042564541CD6_1_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_9681042564541CD6_2_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_655DDB722F1FDE73()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_655DDB722F1FDE73_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_B1EA412ACAE87C15()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_B1EA412ACAE87C15_OFFSET))(this);
		}

		::System::Void Method_3_7DB49B5407C8FD68()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_7DB49B5407C8FD68_OFFSET))(this);
		}

		::System::Void Method_3_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_30D1209326FA87FC_OFFSET))(this);
		}

		::RPG::Client::ShellFurRendererMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::ShellFurRendererMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Boolean Method_3_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
