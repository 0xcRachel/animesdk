#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_952A7C560FC1CD4B.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"

class Class_1_5B239AF8CDCBD731;
class Class_1_C662E2F2A633F51D;
class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class EnvDynamicPropLayoutProfile; }
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_2_6A0D1851D91295B0_METHOD_2_0756C0BF4C8BD127_OFFSET UNITYSDK_OFFSET(0x86C1F90)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x86C1010)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_253A66CCBFD9E6BC_OFFSET UNITYSDK_OFFSET(0x86C0640)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_2E8AFDFF20EB7DF5_OFFSET UNITYSDK_OFFSET(0x86C05C0)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_3DB1C321AC87EE9A_OFFSET UNITYSDK_OFFSET(0x86C49F0)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x86C2DF0)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x86C04F0)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x86C6A40)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x86C6B20)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x86C69E0)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x86C6AA0)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_6E2356E48BB4B332_OFFSET UNITYSDK_OFFSET(0x86C6B80)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x86C6AB0)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x86C1260)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_915081C653EED5FB_OFFSET UNITYSDK_OFFSET(0x86C0500)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x86C1180)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_AE5D2F3CFBE15D74_1_OFFSET UNITYSDK_OFFSET(0x86C1E50)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_AE5D2F3CFBE15D74_OFFSET UNITYSDK_OFFSET(0x86C1D10)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x86C1220)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_CB7363B8D75A199E_OFFSET UNITYSDK_OFFSET(0x86C1C80)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_CF295EF977FF1E85_OFFSET UNITYSDK_OFFSET(0x86C5320)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_D00DF1751C044660_OFFSET UNITYSDK_OFFSET(0x86C0890)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x86C4380)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_DE9367954300A5D4_OFFSET UNITYSDK_OFFSET(0x86C4BA0)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_E26DC44DCE94AB5A_OFFSET UNITYSDK_OFFSET(0x86C4930)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_E4B829802A26F311_OFFSET UNITYSDK_OFFSET(0x86C0F50)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_E83C86A203FAF2A6_OFFSET UNITYSDK_OFFSET(0x86C10F0)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_EEEAE1AC770D8AEC_OFFSET UNITYSDK_OFFSET(0x86C0A20)
#define CLASS_2_6A0D1851D91295B0_METHOD_2_FCD96A53060DA74B_OFFSET UNITYSDK_OFFSET(0x86C07A0)
#define CLASS_2_6A0D1851D91295B0__CCTOR_OFFSET UNITYSDK_OFFSET(0x86C6990)
#define CLASS_2_6A0D1851D91295B0__CTOR_OFFSET UNITYSDK_OFFSET(0x86C0290)

inline static constexpr unsigned int Class_2_6A0D1851D91295B0_TypeDefinitionIndex = 39005;

class Class_2_6A0D1851D91295B0 : public ::Class_1_952A7C560FC1CD4B
{
public:
	static ::EnviromentSystemV2Space::EnvDynamicPropLayoutProfile** StaticGet_Field_2_6()
	{
		return (::EnviromentSystemV2Space::EnvDynamicPropLayoutProfile**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6A0D1851D91295B0_TypeDefinitionIndex)->GetStaticField(0x3E200);
	}
	static ::System::Int32* StaticGet_Field_2_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6A0D1851D91295B0_TypeDefinitionIndex)->GetStaticField(0xEC00);
	}
	static ::System::Int32* StaticGet_Field_2_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6A0D1851D91295B0_TypeDefinitionIndex)->GetStaticField(0xEC04);
	}
	static ::System::Int32* StaticGet_Field_2_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6A0D1851D91295B0_TypeDefinitionIndex)->GetStaticField(0xEC08);
	}
	::System::Collections::Generic::List_1<::Class_1_C662E2F2A633F51D*>* Field_2_1; // 0x28
	::Il2CppArray<::System::Int32>* Field_2_3; // 0x30
	::Il2CppArray<::System::Int32>* Field_2_2; // 0x38
	::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::Class_1_C662E2F2A633F51D*>* Field_2_0; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C662E2F2A633F51D*>* Field_2_7; // 0x48
	::Class_1_5B239AF8CDCBD731* Field_2_8; // 0x50
	::System::Boolean Field_2_9; // 0x58
	::System::Boolean Field_2_10; // 0x59
	::System::Int32 Field_2_4; // 0x5C
	::System::Int32 Field_2_5; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::List_1<::Class_1_C662E2F2A633F51D*>* Method_2_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C662E2F2A633F51D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_2_915081C653EED5FB(::System::Int32 a1, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_915081C653EED5FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_253A66CCBFD9E6BC(::System::Int32 a1, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_253A66CCBFD9E6BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FCD96A53060DA74B(::System::String* a1, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_FCD96A53060DA74B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D00DF1751C044660(::System::String* a1, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_D00DF1751C044660_OFFSET))(this, a1, a2);
	}

	::Class_1_C662E2F2A633F51D* Method_2_2E8AFDFF20EB7DF5(::System::Int32 a1)
	{
		return ((::Class_1_C662E2F2A633F51D*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_2E8AFDFF20EB7DF5_OFFSET))(this, a1);
	}

	::Class_1_C662E2F2A633F51D* Method_2_EEEAE1AC770D8AEC(::Class_1_EAF7984A8FAD6BE4* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::Class_1_C662E2F2A633F51D*(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_EEEAE1AC770D8AEC_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_C662E2F2A633F51D* Method_2_E4B829802A26F311(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::Class_1_C662E2F2A633F51D*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_E4B829802A26F311_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_E83C86A203FAF2A6(::Class_1_C662E2F2A633F51D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C662E2F2A633F51D*))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_E83C86A203FAF2A6_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_9681042564541CD6_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_CB7363B8D75A199E(::Class_1_EAF7984A8FAD6BE4* a1, ::EnviromentSystemV2Space::PropertyDataBase* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::EnviromentSystemV2Space::PropertyDataBase*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_CB7363B8D75A199E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AE5D2F3CFBE15D74()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_AE5D2F3CFBE15D74_OFFSET))(this);
	}

	::System::Void Method_2_AE5D2F3CFBE15D74_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_AE5D2F3CFBE15D74_1_OFFSET))(this);
	}

	::System::Void Method_2_0756C0BF4C8BD127(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_0756C0BF4C8BD127_OFFSET))(this, a1);
	}

	::System::Void Method_2_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Single Method_2_E26DC44DCE94AB5A(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_E26DC44DCE94AB5A_OFFSET))(this, a1);
	}

	::System::Void Method_2_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_D799715F2EF979EA_OFFSET))(this);
	}

	static ::System::Boolean Method_2_3DB1C321AC87EE9A(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::Int32>* a3, ::RPG::CustomRP::CustomLightQualityFilter a4)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_3DB1C321AC87EE9A_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_DE9367954300A5D4(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_DE9367954300A5D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF295EF977FF1E85(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_CF295EF977FF1E85_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_2_6E2356E48BB4B332(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_6A0D1851D91295B0_METHOD_2_6E2356E48BB4B332_OFFSET))(this, P0);
	}
};
