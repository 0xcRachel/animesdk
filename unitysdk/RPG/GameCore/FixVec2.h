#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_FIXVEC2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2370E20)
#define RPG_GAMECORE_FIXVEC2_EQUALS_OFFSET UNITYSDK_OFFSET(0x2370DF0)
#define RPG_GAMECORE_FIXVEC2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2370DD0)
#define RPG_GAMECORE_FIXVEC2_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x19999CD0)
#define RPG_GAMECORE_FIXVEC2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x23709F0)
#define RPG_GAMECORE_FIXVEC2_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x19999CE0)
#define RPG_GAMECORE_FIXVEC2_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x2370E40)
#define RPG_GAMECORE_FIXVEC2_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x2370CD0)
#define RPG_GAMECORE_FIXVEC2_GET_ONE_OFFSET UNITYSDK_OFFSET(0x19999CB0)
#define RPG_GAMECORE_FIXVEC2_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x19999CF0)
#define RPG_GAMECORE_FIXVEC2_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x2370F40)
#define RPG_GAMECORE_FIXVEC2_GET_UP_OFFSET UNITYSDK_OFFSET(0x19999CC0)
#define RPG_GAMECORE_FIXVEC2_GET_X0Y_OFFSET UNITYSDK_OFFSET(0x23709D0)
#define RPG_GAMECORE_FIXVEC2_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x19999CA0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_031B473F17F39344_OFFSET UNITYSDK_OFFSET(0x2370CC0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_040FF5E115E8DA0F_OFFSET UNITYSDK_OFFSET(0x19999450)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_09124BC16B5B7018_OFFSET UNITYSDK_OFFSET(0x2370AF0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_0C35AC3DDA1F7BB8_OFFSET UNITYSDK_OFFSET(0x19996D40)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_0E338B589E0A60FF_OFFSET UNITYSDK_OFFSET(0x19999C70)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_1053C6885E7CDB16_OFFSET UNITYSDK_OFFSET(0x19999C50)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_2EEC2BA71AAECE61_OFFSET UNITYSDK_OFFSET(0x199997B0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_358EEAABF26AAD21_1_OFFSET UNITYSDK_OFFSET(0x19998400)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_358EEAABF26AAD21_2_OFFSET UNITYSDK_OFFSET(0x199994A0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_358EEAABF26AAD21_3_OFFSET UNITYSDK_OFFSET(0x19999520)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_358EEAABF26AAD21_OFFSET UNITYSDK_OFFSET(0x199983D0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_3DD6CED10C677382_OFFSET UNITYSDK_OFFSET(0x2370F40)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_3F08C525FA341A2A_OFFSET UNITYSDK_OFFSET(0x19995BC0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_46811FD3675F4395_OFFSET UNITYSDK_OFFSET(0x19999760)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_471C8E97F982D09C_1_OFFSET UNITYSDK_OFFSET(0x19999D30)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_471C8E97F982D09C_OFFSET UNITYSDK_OFFSET(0x19999D00)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_508B7199744B24FE_OFFSET UNITYSDK_OFFSET(0x19996850)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_57533738BDF6D712_1_OFFSET UNITYSDK_OFFSET(0x199997F0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_57533738BDF6D712_2_OFFSET UNITYSDK_OFFSET(0x19999A00)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_57533738BDF6D712_OFFSET UNITYSDK_OFFSET(0x19996D80)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_7589063EE8338187_1_OFFSET UNITYSDK_OFFSET(0x19999580)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_7589063EE8338187_OFFSET UNITYSDK_OFFSET(0x19996090)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_B9C16C63A2951F31_1_OFFSET UNITYSDK_OFFSET(0x19999DA0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_B9C16C63A2951F31_OFFSET UNITYSDK_OFFSET(0x19999D70)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_C3FC6EE097AE01B1_1_OFFSET UNITYSDK_OFFSET(0x199958A0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_C3FC6EE097AE01B1_OFFSET UNITYSDK_OFFSET(0x199955B0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_C53DBD8B14EA0BDD_OFFSET UNITYSDK_OFFSET(0x19999C90)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_C9193DA8920E5B5B_OFFSET UNITYSDK_OFFSET(0x19999310)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_DEF6E2C8E6261748_OFFSET UNITYSDK_OFFSET(0x19999C10)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_E390B123EC6F46B2_1_OFFSET UNITYSDK_OFFSET(0x2371500)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_E390B123EC6F46B2_OFFSET UNITYSDK_OFFSET(0x2371040)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_E5E1693AB12C5491_OFFSET UNITYSDK_OFFSET(0x199981D0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_F27C8283497774E3_1_OFFSET UNITYSDK_OFFSET(0x19997560)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_F27C8283497774E3_2_OFFSET UNITYSDK_OFFSET(0x19997E00)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_F27C8283497774E3_OFFSET UNITYSDK_OFFSET(0x19997170)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_F73ABB3E14131F9A_OFFSET UNITYSDK_OFFSET(0x608B90)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_FA94DDFD02990072_OFFSET UNITYSDK_OFFSET(0x19998430)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_FB1FA6AFCD54104A_OFFSET UNITYSDK_OFFSET(0x19997CB0)
#define RPG_GAMECORE_FIXVEC2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x2370A70)
#define RPG_GAMECORE_FIXVEC2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2370D00)
#define RPG_GAMECORE_FIXVEC2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19999DE0)
#define RPG_GAMECORE_FIXVEC2__CTOR_OFFSET UNITYSDK_OFFSET(0x608B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixVec2_TypeDefinitionIndex = 9595;

	struct alignas(8) FixVec2
	{
		static ::RPG::GameCore::FixVec2* StaticGet_oneVector()
		{
			return (::RPG::GameCore::FixVec2*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x46D0);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_EpsilonNormalSqrt()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x46E0);
		}
		static ::RPG::GameCore::FixVec2* StaticGet_downVector()
		{
			return (::RPG::GameCore::FixVec2*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x46E8);
		}
		static ::RPG::GameCore::FixVec2* StaticGet_upVector()
		{
			return (::RPG::GameCore::FixVec2*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x46F8);
		}
		static ::RPG::GameCore::FixVec2* StaticGet_zeroVector()
		{
			return (::RPG::GameCore::FixVec2*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x4708);
		}
		static ::RPG::GameCore::FixVec2* StaticGet_rightVector()
		{
			return (::RPG::GameCore::FixVec2*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x4718);
		}
		static ::RPG::GameCore::FixVec2* StaticGet_leftVector()
		{
			return (::RPG::GameCore::FixVec2*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x4728);
		}
		::RPG::GameCore::FixPoint x; // 0x10
		::RPG::GameCore::FixPoint y; // 0x18

		::System::Void _ctor(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2__CCTOR_OFFSET))();
		}

		/*
		::RPG::GameCore::FixVec3 get_x0y()
		{
			return ((::RPG::GameCore::FixVec3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_X0Y_OFFSET))(this);
		}
		*/

		::RPG::GameCore::FixPoint get_Item(::System::Int32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_F73ABB3E14131F9A(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_F73ABB3E14131F9A_OFFSET))(this, a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_C3FC6EE097AE01B1(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_C3FC6EE097AE01B1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixVec2 Method_2_C3FC6EE097AE01B1_1(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_C3FC6EE097AE01B1_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixVec2 Method_2_3F08C525FA341A2A(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_3F08C525FA341A2A_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixVec2 Method_2_7589063EE8338187(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_7589063EE8338187_OFFSET))(a1, a2);
		}

		::System::Void Method_2_09124BC16B5B7018(::RPG::GameCore::FixVec2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_09124BC16B5B7018_OFFSET))(this, a1);
		}

		::System::Void Method_2_031B473F17F39344()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_031B473F17F39344_OFFSET))(this);
		}

		::RPG::GameCore::FixVec2 get_normalized()
		{
			return ((::RPG::GameCore::FixVec2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_NORMALIZED_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::GameCore::FixVec2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_EQUALS_1_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::FixVec2 Method_2_508B7199744B24FE(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_508B7199744B24FE_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_0C35AC3DDA1F7BB8(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_0C35AC3DDA1F7BB8_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint Method_2_57533738BDF6D712(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_57533738BDF6D712_OFFSET))(a1, a2);
		}

		::RPG::GameCore::FixPoint get_magnitude()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_MAGNITUDE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_sqrMagnitude()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint Method_2_F27C8283497774E3(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_F27C8283497774E3_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Method_2_F27C8283497774E3_1(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_F27C8283497774E3_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Method_2_FB1FA6AFCD54104A(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_FB1FA6AFCD54104A_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_F27C8283497774E3_2(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_F27C8283497774E3_2_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Method_2_E5E1693AB12C5491(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_E5E1693AB12C5491_OFFSET))(a1);
		}

		::RPG::GameCore::FixPoint Method_2_3DD6CED10C677382()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_3DD6CED10C677382_OFFSET))(this);
		}

		static ::RPG::GameCore::FixVec2 Method_2_358EEAABF26AAD21(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_358EEAABF26AAD21_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_358EEAABF26AAD21_1(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_358EEAABF26AAD21_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_FA94DDFD02990072(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_FA94DDFD02990072_OFFSET))(a1, a2);
		}

		::RPG::GameCore::FixVec2 Method_2_E390B123EC6F46B2(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_E390B123EC6F46B2_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixVec2 Method_2_E390B123EC6F46B2_1(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_E390B123EC6F46B2_1_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::FixVec2 Method_2_C9193DA8920E5B5B(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_C9193DA8920E5B5B_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixVec2 Method_2_040FF5E115E8DA0F(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_040FF5E115E8DA0F_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixVec2 Method_2_358EEAABF26AAD21_2(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_358EEAABF26AAD21_2_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_358EEAABF26AAD21_3(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_358EEAABF26AAD21_3_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_7589063EE8338187_1(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_7589063EE8338187_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_46811FD3675F4395(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_46811FD3675F4395_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_2EEC2BA71AAECE61(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_2EEC2BA71AAECE61_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixVec2 Method_2_57533738BDF6D712_1(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_57533738BDF6D712_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_57533738BDF6D712_2(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_57533738BDF6D712_2_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_DEF6E2C8E6261748(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_DEF6E2C8E6261748_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_1053C6885E7CDB16(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_1053C6885E7CDB16_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_0E338B589E0A60FF(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_0E338B589E0A60FF_OFFSET))(a1, a2);
		}

		/*
		static ::RPG::GameCore::FixVec2 Method_2_C53DBD8B14EA0BDD(::RPG::GameCore::FixVec3 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_C53DBD8B14EA0BDD_OFFSET))(a1);
		}
		*/

		static ::RPG::GameCore::FixVec2 get_zero()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_ZERO_OFFSET))();
		}

		static ::RPG::GameCore::FixVec2 get_one()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_ONE_OFFSET))();
		}

		static ::RPG::GameCore::FixVec2 get_up()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_UP_OFFSET))();
		}

		static ::RPG::GameCore::FixVec2 get_down()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_DOWN_OFFSET))();
		}

		static ::RPG::GameCore::FixVec2 get_left()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_LEFT_OFFSET))();
		}

		static ::RPG::GameCore::FixVec2 get_right()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_RIGHT_OFFSET))();
		}

		/*
		static ::RPG::MVector2 Method_2_471C8E97F982D09C(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::MVector2(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_471C8E97F982D09C_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 Method_2_471C8E97F982D09C_1(::RPG::MVector2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_471C8E97F982D09C_1_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Vector2 Method_2_B9C16C63A2951F31(::RPG::GameCore::FixVec2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_B9C16C63A2951F31_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 Method_2_B9C16C63A2951F31_1(::UnityEngine::Vector2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_B9C16C63A2951F31_1_OFFSET))(a1);
		}
		*/
	};
}
