#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0B52BF547574BA64_BatchState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/TextGenerationSettings.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_0B52BF547574BA64_Class_1_7F572A2075EA0638;
class Class_1_0B52BF547574BA64_Class_1_C2D5A5CD479FE664;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class SimpleText; }
namespace RPG::Client { class SimpleTextManagerMono; }
namespace RPG::Client { class SimpleTextTextureConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define CLASS_1_0B52BF547574BA64_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA1664F0)
#define CLASS_1_0B52BF547574BA64_METHOD_1_117D6E49E7E02C23_OFFSET UNITYSDK_OFFSET(0xA166840)
#define CLASS_1_0B52BF547574BA64_METHOD_1_14A56714D34E5360_OFFSET UNITYSDK_OFFSET(0xA166B90)
#define CLASS_1_0B52BF547574BA64_METHOD_1_236654F9BBB4920F_OFFSET UNITYSDK_OFFSET(0xA16BE40)
#define CLASS_1_0B52BF547574BA64_METHOD_1_2B5FB28692E10CF8_OFFSET UNITYSDK_OFFSET(0xA16C130)
#define CLASS_1_0B52BF547574BA64_METHOD_1_2EFA5C73430DC013_OFFSET UNITYSDK_OFFSET(0xA165580)
#define CLASS_1_0B52BF547574BA64_METHOD_1_3060617FE14209CC_OFFSET UNITYSDK_OFFSET(0xA162790)
#define CLASS_1_0B52BF547574BA64_METHOD_1_369D471BB09642DE_OFFSET UNITYSDK_OFFSET(0xA1611B0)
#define CLASS_1_0B52BF547574BA64_METHOD_1_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0xA164FA0)
#define CLASS_1_0B52BF547574BA64_METHOD_1_4CCFA465686650A3_OFFSET UNITYSDK_OFFSET(0xA167500)
#define CLASS_1_0B52BF547574BA64_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0xA160F10)
#define CLASS_1_0B52BF547574BA64_METHOD_1_52C9A41EF07B6497_OFFSET UNITYSDK_OFFSET(0xA16BAD0)
#define CLASS_1_0B52BF547574BA64_METHOD_1_59238DC2200E9C17_OFFSET UNITYSDK_OFFSET(0xA1658B0)
#define CLASS_1_0B52BF547574BA64_METHOD_1_593EA2E78115651C_OFFSET UNITYSDK_OFFSET(0xA164E40)
#define CLASS_1_0B52BF547574BA64_METHOD_1_5EE25971C63BF127_OFFSET UNITYSDK_OFFSET(0xA167C90)
#define CLASS_1_0B52BF547574BA64_METHOD_1_6B4F1BA536F1DB6A_OFFSET UNITYSDK_OFFSET(0xA166390)
#define CLASS_1_0B52BF547574BA64_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xA160FE0)
#define CLASS_1_0B52BF547574BA64_METHOD_1_79E2D1959C17629D_OFFSET UNITYSDK_OFFSET(0xA168880)
#define CLASS_1_0B52BF547574BA64_METHOD_1_7A148CFE71321E26_OFFSET UNITYSDK_OFFSET(0xA1656C0)
#define CLASS_1_0B52BF547574BA64_METHOD_1_7D4A73A4B7C7001C_OFFSET UNITYSDK_OFFSET(0xA1686D0)
#define CLASS_1_0B52BF547574BA64_METHOD_1_7FBFC04DB341E38F_OFFSET UNITYSDK_OFFSET(0xA166970)
#define CLASS_1_0B52BF547574BA64_METHOD_1_84C4B29CED539C51_OFFSET UNITYSDK_OFFSET(0xA164500)
#define CLASS_1_0B52BF547574BA64_METHOD_1_87CF9DCC6F287B9D_OFFSET UNITYSDK_OFFSET(0xA164400)
#define CLASS_1_0B52BF547574BA64_METHOD_1_9E52EF4365554D75_OFFSET UNITYSDK_OFFSET(0xA1660E0)
#define CLASS_1_0B52BF547574BA64_METHOD_1_B8D20E83112815DF_OFFSET UNITYSDK_OFFSET(0xA1679F0)
#define CLASS_1_0B52BF547574BA64_METHOD_1_BB43C25F64B2FB91_OFFSET UNITYSDK_OFFSET(0xA1663A0)
#define CLASS_1_0B52BF547574BA64_METHOD_1_C886EECF59CEBF2C_OFFSET UNITYSDK_OFFSET(0xA1653B0)
#define CLASS_1_0B52BF547574BA64_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA160F90)
#define CLASS_1_0B52BF547574BA64_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA160F40)
#define CLASS_1_0B52BF547574BA64_METHOD_1_DA3DBED770271634_OFFSET UNITYSDK_OFFSET(0xA16C1A0)
#define CLASS_1_0B52BF547574BA64_METHOD_1_F091F0DBC32FC72C_OFFSET UNITYSDK_OFFSET(0xA1647A0)
#define CLASS_1_0B52BF547574BA64_METHOD_1_F9326FB93A1F02CB_OFFSET UNITYSDK_OFFSET(0xA16BB50)
#define CLASS_1_0B52BF547574BA64__CCTOR_OFFSET UNITYSDK_OFFSET(0xA16C240)
#define CLASS_1_0B52BF547574BA64__CTOR_OFFSET UNITYSDK_OFFSET(0xA164940)
#define CLASS_1_0B52BF547574BA64__REGISTER_G__SETUP_6_0_OFFSET UNITYSDK_OFFSET(0xA164E20)

inline static constexpr unsigned int Class_1_0B52BF547574BA64_TypeDefinitionIndex = 57915;

class Class_1_0B52BF547574BA64 : public ::System::Object
{
public:
	static ::Class_1_0B52BF547574BA64** StaticGet_Field_1_6()
	{
		return (::Class_1_0B52BF547574BA64**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B52BF547574BA64_TypeDefinitionIndex)->GetStaticField(0x161A0);
	}
	static ::System::Int32* StaticGet_Field_1_30()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B52BF547574BA64_TypeDefinitionIndex)->GetStaticField(0x5640);
	}
	static ::System::Int32* StaticGet_Field_1_33()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B52BF547574BA64_TypeDefinitionIndex)->GetStaticField(0x5644);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_37()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B52BF547574BA64_TypeDefinitionIndex)->GetStaticField(0x5648);
	}
	static ::System::Int32* StaticGet_Field_1_32()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B52BF547574BA64_TypeDefinitionIndex)->GetStaticField(0x5650);
	}
	static ::System::Int32* StaticGet_Field_1_34()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B52BF547574BA64_TypeDefinitionIndex)->GetStaticField(0x5654);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_36()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B52BF547574BA64_TypeDefinitionIndex)->GetStaticField(0x5658);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_35()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B52BF547574BA64_TypeDefinitionIndex)->GetStaticField(0x5660);
	}
	static ::System::Int32* StaticGet_Field_1_29()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B52BF547574BA64_TypeDefinitionIndex)->GetStaticField(0x5668);
	}
	static ::System::Int32* StaticGet_Field_1_31()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B52BF547574BA64_TypeDefinitionIndex)->GetStaticField(0x566C);
	}
	// static const ::System::Int32 Field_1_28 = 0x60; // 0x0
	::Il2CppArray<::System::Int32>* Field_1_19; // 0x10
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_14; // 0x18
	::Collections::Pooled::PooledList_1<::RPG::Client::SimpleTextManagerMono*>* Field_1_9; // 0x20
	::UnityEngine::Material* Field_1_3; // 0x28
	::UnityEngine::TextGenerator* Field_1_1; // 0x30
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Font*, ::UnityEngine::Material*>* Field_1_4; // 0x38
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_16; // 0x40
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Font*, ::Collections::Pooled::PooledList_1<::RPG::Client::SimpleText*>*>* Field_1_22; // 0x48
	::Collections::Pooled::PooledList_1<::RPG::Client::SimpleTextManagerMono*>* Field_1_10; // 0x50
	::Il2CppArray<::UnityEngine::Color32>* Field_1_13; // 0x58
	::RPG::Client::SimpleTextTextureConfig* Field_1_11; // 0x60
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_18; // 0x68
	::System::Func_3<::RPG::Client::SimpleText*, ::RPG::Client::SimpleText*, ::System::Int32>* Field_1_23; // 0x70
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_17; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::Font*, ::System::Int32>, ::Class_1_0B52BF547574BA64_Class_1_7F572A2075EA0638*>* Field_1_5; // 0x80
	::Class_1_0B52BF547574BA64_Class_1_C2D5A5CD479FE664* Field_1_7; // 0x88
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_15; // 0x90
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_12; // 0x98
	::UnityEngine::Material* Field_1_2; // 0xA0
	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_21; // 0xA8
	::System::Int32 Field_1_20; // 0xB0
	::System::Int32 Field_1_0; // 0xB4
	::System::Boolean Field_1_26; // 0xB8
	::System::Boolean Field_1_8; // 0xB9
	::System::Boolean Field_1_25; // 0xBA
	::System::Boolean Field_1_24; // 0xBB
	::Class_1_0B52BF547574BA64_BatchState Field_1_27; // 0xBC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64__CCTOR_OFFSET))();
	}

	static ::Class_1_0B52BF547574BA64* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_0B52BF547574BA64*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_528BD4865C714C5C_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_87CF9DCC6F287B9D(::UnityEngine::Font* a1, ::UnityEngine::Font* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_87CF9DCC6F287B9D_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_F091F0DBC32FC72C(::RPG::Client::SimpleTextManagerMono* a1)
	{
		return ((::System::Void(*)(::RPG::Client::SimpleTextManagerMono*))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_F091F0DBC32FC72C_OFFSET))(a1);
	}

	static ::System::Void Method_1_593EA2E78115651C(::RPG::Client::SimpleTextManagerMono* a1)
	{
		return ((::System::Void(*)(::RPG::Client::SimpleTextManagerMono*))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_593EA2E78115651C_OFFSET))(a1);
	}

	::System::Void Method_1_C886EECF59CEBF2C(::RPG::Client::SimpleTextManagerMono* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpleTextManagerMono*))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_C886EECF59CEBF2C_OFFSET))(this, a1);
	}

	::System::Void Method_1_2EFA5C73430DC013(::RPG::Client::SimpleTextManagerMono* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpleTextManagerMono*))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_2EFA5C73430DC013_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A148CFE71321E26(::System::String* a1, ::UnityEngine::TextGenerationSettings a2, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a3, ::System::Boolean& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_7A148CFE71321E26_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_0B52BF547574BA64_Class_1_C2D5A5CD479FE664* Method_1_6B4F1BA536F1DB6A()
	{
		return ((::Class_1_0B52BF547574BA64_Class_1_C2D5A5CD479FE664*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_6B4F1BA536F1DB6A_OFFSET))(this);
	}

	static ::UnityEngine::TextGenerationSettings Method_1_BB43C25F64B2FB91()
	{
		return ((::UnityEngine::TextGenerationSettings(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_BB43C25F64B2FB91_OFFSET))();
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_4358F70A163BCEAE_OFFSET))(this);
	}

	::System::Void Method_1_369D471BB09642DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_369D471BB09642DE_OFFSET))(this);
	}

	::System::Void Method_1_3060617FE14209CC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_3060617FE14209CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_14A56714D34E5360(::RPG::Client::SimpleText* a1, ::UnityEngine::Matrix4x4 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpleText*, ::UnityEngine::Matrix4x4, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_14A56714D34E5360_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4CCFA465686650A3(::RPG::Client::SimpleText* a1, ::UnityEngine::Matrix4x4 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpleText*, ::UnityEngine::Matrix4x4, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_4CCFA465686650A3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5EE25971C63BF127(::RPG::Client::SimpleText* a1, ::UnityEngine::Matrix4x4 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpleText*, ::UnityEngine::Matrix4x4, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_5EE25971C63BF127_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B8D20E83112815DF(::UnityEngine::Font* a1, ::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* a2, ::UnityEngine::Vector4 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*, ::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_B8D20E83112815DF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7FBFC04DB341E38F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_7FBFC04DB341E38F_OFFSET))(this, a1);
	}

	::System::Void Method_1_79E2D1959C17629D(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_79E2D1959C17629D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_59238DC2200E9C17(::System::String* a1, ::UnityEngine::TextGenerationSettings& a2, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings&, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_59238DC2200E9C17_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9E52EF4365554D75(::System::String* a1, ::UnityEngine::TextGenerationSettings& a2, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings&, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_9E52EF4365554D75_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Material* Method_1_52C9A41EF07B6497()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_52C9A41EF07B6497_OFFSET))(this);
	}

	::UnityEngine::Material* Method_1_84C4B29CED539C51(::UnityEngine::Font* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_84C4B29CED539C51_OFFSET))(this, a1);
	}

	::Class_1_0B52BF547574BA64_Class_1_7F572A2075EA0638* Method_1_7D4A73A4B7C7001C(::UnityEngine::Font* a1, ::System::Int32 a2)
	{
		return ((::Class_1_0B52BF547574BA64_Class_1_7F572A2075EA0638*(*)(::PVOID, ::UnityEngine::Font*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_7D4A73A4B7C7001C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_117D6E49E7E02C23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_117D6E49E7E02C23_OFFSET))(this);
	}

	::System::Void Method_1_236654F9BBB4920F(::UnityEngine::Font* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_236654F9BBB4920F_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B5FB28692E10CF8(::UnityEngine::Font* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_2B5FB28692E10CF8_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_F9326FB93A1F02CB(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_F9326FB93A1F02CB_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_DA3DBED770271634(::RPG::Client::SimpleText* a1, ::RPG::Client::SimpleText* a2)
	{
		return ((::System::Int32(*)(::RPG::Client::SimpleText*, ::RPG::Client::SimpleText*))((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64_METHOD_1_DA3DBED770271634_OFFSET))(a1, a2);
	}

	static ::System::Collections::IEnumerator* _Register_g__Setup_6_0()
	{
		return ((::System::Collections::IEnumerator*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B52BF547574BA64__REGISTER_G__SETUP_6_0_OFFSET))();
	}
};
