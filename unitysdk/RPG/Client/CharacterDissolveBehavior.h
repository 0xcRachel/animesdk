#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class CharacterDissolve; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x8EA7150)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_178812F674E8B05A_OFFSET UNITYSDK_OFFSET(0x8EA6DF0)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_422AB1A19F04E217_OFFSET UNITYSDK_OFFSET(0x8EA73A0)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x8EA7220)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x8EA7280)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x8EA72E0)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8EA71C0)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x8EA8A70)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x8EA8AD0)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x8EA8B30)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x8EA8B90)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x8EA8BF0)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8EA8A10)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8EA6D50)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_FE936CB8E8F44BDB_OFFSET UNITYSDK_OFFSET(0x8EA74F0)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x8EA7340)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x8EA8840)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x8EA87E0)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8EA8C50)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterDissolveBehavior_TypeDefinitionIndex = 55955;

	class CharacterDissolveBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__DissolveShadowOffShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xED60);
		}
		static ::System::Int32* StaticGet__DissolveMaskShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xED64);
		}
		static ::System::Int32* StaticGet__DitherAlphaShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xED68);
		}
		static ::System::Int32* StaticGet__DissolveOutlineColor1ShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xED6C);
		}
		static ::System::Int32* StaticGet__DissoveOnShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xED70);
		}
		static ::System::Int32* StaticGet__DissolveMaskUVSetShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xED74);
		}
		static ::System::Int32* StaticGet__DissolveStShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xED78);
		}
		static ::System::Int32* StaticGet__DissolveOutlineSmoothStepShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xED7C);
		}
		static ::System::Int32* StaticGet__DissolveMapShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xED80);
		}
		static ::System::Int32* StaticGet__DissolveOutlineSize1ShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xED84);
		}
		static ::System::Int32* StaticGet__DissoveDirecMaskShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xED88);
		}
		static ::System::Int32* StaticGet__DistortionStShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xED8C);
		}
		static ::System::Int32* StaticGet__DissolveUVSpeedShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xED90);
		}
		static ::System::Int32* StaticGet__DissolveOutlineSize2ShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xED94);
		}
		static ::System::Int32* StaticGet__DissolveUVShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xED98);
		}
		static ::System::Int32* StaticGet__DissolveOutlineOffsetShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xED9C);
		}
		static ::System::Int32* StaticGet__DissolveDistortionIntensityShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xEDA0);
		}
		static ::System::Int32* StaticGet__DissolveMapAddShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xEDA4);
		}
		static ::System::Int32* StaticGet__DissolveRateShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xEDA8);
		}
		static ::System::Int32* StaticGet__DissolveOutlineColor2ShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xEDAC);
		}
		static ::System::Int32* StaticGet__UsingDitherAlphaShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xEDB0);
		}
		static ::System::Int32* StaticGet__DissolveComponentShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xEDB4);
		}
		::UnityEngine::Renderer* _Renderer; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* _MatIndexes; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_178812F674E8B05A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_178812F674E8B05A_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_422AB1A19F04E217()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_422AB1A19F04E217_OFFSET))(this);
		}

		::System::Void Method_3_FE936CB8E8F44BDB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_FE936CB8E8F44BDB_OFFSET))(this, a1);
		}

		::RPG::Client::CharacterDissolve* get__Owner()
		{
			return ((::RPG::Client::CharacterDissolve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
