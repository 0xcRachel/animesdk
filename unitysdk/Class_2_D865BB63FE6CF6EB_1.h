#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_952A7C560FC1CD4B.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F;
class Class_1_C7C4EDD02A4426B2;
class Class_1_EAF7984A8FAD6BE4;
class Class_2_719453818C1A6AE9;
namespace EnviromentSystemV2Space { class EnvAtmosphereQualityConfig; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine::Rendering { class CommandBuffer; }
template <typename T> class Class_3_E4A470CB2179ACFB;
template <typename T> class Class_4_77EB9B0502521934;

#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0xB2DB8D0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0xB2DDB30)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0xB2DB070)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB2DCC70)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_19B14977ABA39612_OFFSET UNITYSDK_OFFSET(0xB2DA2D0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_19F951B38D2C86E3_OFFSET UNITYSDK_OFFSET(0xB2DF860)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xB2DB0F0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_414A270E91E4BF2D_OFFSET UNITYSDK_OFFSET(0xB2DDE10)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB2DAC20)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_44650C36F3358F75_OFFSET UNITYSDK_OFFSET(0xB2DFA20)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4ED5A32649C8BEBA_1_OFFSET UNITYSDK_OFFSET(0xB2DCF20)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4ED5A32649C8BEBA_OFFSET UNITYSDK_OFFSET(0xB2DABD0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4FE33FD178F57C51_OFFSET UNITYSDK_OFFSET(0xB2DFB00)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0xB2DCFE0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xB2E5970)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xB2E5A40)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0xB2E5B80)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0xB2E5BE0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0xB2E5C40)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB2E5900)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0xB2E5960)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_6E2356E48BB4B332_OFFSET UNITYSDK_OFFSET(0xB2E5B10)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_7760BC14807C2DCE_OFFSET UNITYSDK_OFFSET(0xB2DC7B0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0xB2E5AA0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0xB2D99B0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_95CBA07394A84492_OFFSET UNITYSDK_OFFSET(0xB2DBB90)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_9B3D46D8F2D493E3_OFFSET UNITYSDK_OFFSET(0xB2E59D0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0xB2D9A00)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C0353B6D8FB55332_OFFSET UNITYSDK_OFFSET(0xB2DCEB0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB2E4050)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xB2E4090)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB2D9F30)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CBC2443440B894D4_OFFSET UNITYSDK_OFFSET(0xB2DC0D0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xB2E40D0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D4782799BBAD631B_OFFSET UNITYSDK_OFFSET(0xB2DC230)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_E9FC08CF7527DC91_OFFSET UNITYSDK_OFFSET(0xB2DC6E0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_ECEC258AA9D9E334_OFFSET UNITYSDK_OFFSET(0xB2DC750)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_F63565EA57F495CC_OFFSET UNITYSDK_OFFSET(0xB2DF4E0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0xB2DCF70)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FAC1E4DEB02B3801_OFFSET UNITYSDK_OFFSET(0xB2DDA20)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FC2D782AE5BA571D_OFFSET UNITYSDK_OFFSET(0xB2E2C80)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FDFF4FF770A14D72_OFFSET UNITYSDK_OFFSET(0xB2E3CC0)
#define CLASS_2_D865BB63FE6CF6EB_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2E52C0)
#define CLASS_2_D865BB63FE6CF6EB_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB2E4160)

inline static constexpr unsigned int Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex = 39028;

class Class_2_D865BB63FE6CF6EB_1 : public ::Class_1_952A7C560FC1CD4B
{
public:
	static ::EnviromentSystemV2Space::EnvAtmosphereQualityConfig** StaticGet_Field_2_112()
	{
		return (::EnviromentSystemV2Space::EnvAtmosphereQualityConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x46A20);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_75()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x46A28);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_72()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x46A30);
	}
	static ::System::String** StaticGet_Field_2_113()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x46A38);
	}
	static ::System::String** StaticGet_Field_2_115()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x46A40);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_71()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x46A48);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_74()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x46A50);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_69()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x46A58);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_77()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x46A60);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_76()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x46A68);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_67()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x46A70);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_73()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x46A78);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_70()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x46A80);
	}
	static ::System::String** StaticGet_Field_2_114()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x46A88);
	}
	static ::UnityEngine::Material** StaticGet_Field_2_108()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x46A90);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_68()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x46A98);
	}
	static ::UnityEngine::ComputeShader** StaticGet_Field_2_66()
	{
		return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x46AA0);
	}
	static ::UnityEngine::Texture3D** StaticGet_Field_2_109()
	{
		return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x46AA8);
	}
	static ::System::Int32* StaticGet_Field_2_158()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10920);
	}
	static ::System::Int32* StaticGet_Field_2_172()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10924);
	}
	static ::System::Int32* StaticGet_Field_2_123()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10928);
	}
	static ::System::Int32* StaticGet_Field_2_165()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1092C);
	}
	static ::System::Int32* StaticGet_Field_2_175()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10930);
	}
	static ::System::Int32* StaticGet_Field_2_197()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10934);
	}
	static ::System::Int32* StaticGet_Field_2_135()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10938);
	}
	static ::System::Int32* StaticGet_Field_2_187()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1093C);
	}
	static ::System::Int32* StaticGet_Field_2_188()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10940);
	}
	static ::System::Int32* StaticGet_Field_2_122()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10944);
	}
	static ::System::Int32* StaticGet_Field_2_170()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10948);
	}
	static ::System::Int32* StaticGet_Field_2_152()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1094C);
	}
	static ::System::Int32* StaticGet_Field_2_192()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10950);
	}
	static ::System::Int32* StaticGet_Field_2_182()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10954);
	}
	static ::System::Int32* StaticGet_Field_2_150()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10958);
	}
	static ::System::Int32* StaticGet_Field_2_141()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1095C);
	}
	static ::System::Int32* StaticGet_Field_2_185()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10960);
	}
	static ::System::Int32* StaticGet_Field_2_200()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10964);
	}
	static ::System::Int32* StaticGet_Field_2_145()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10968);
	}
	static ::System::Int32* StaticGet_Field_2_180()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1096C);
	}
	static ::System::Int32* StaticGet_Field_2_162()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10970);
	}
	static ::System::Int32* StaticGet_Field_2_124()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10974);
	}
	static ::System::Int32* StaticGet_Field_2_189()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10978);
	}
	static ::System::Int32* StaticGet_Field_2_177()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1097C);
	}
	static ::System::Int32* StaticGet_Field_2_173()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10980);
	}
	static ::System::Int32* StaticGet_Field_2_198()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10984);
	}
	static ::System::Int32* StaticGet_Field_2_156()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10988);
	}
	static ::System::Int32* StaticGet_Field_2_147()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1098C);
	}
	static ::System::Int32* StaticGet_Field_2_139()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10990);
	}
	static ::System::Int32* StaticGet_Field_2_178()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10994);
	}
	static ::System::Int32* StaticGet_Field_2_146()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10998);
	}
	static ::System::Int32* StaticGet_Field_2_153()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1099C);
	}
	static ::System::Int32* StaticGet_Field_2_183()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109A0);
	}
	static ::System::Int32* StaticGet_Field_2_133()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109A4);
	}
	static ::System::Int32* StaticGet_Field_2_190()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109A8);
	}
	static ::System::Int32* StaticGet_Field_2_195()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109AC);
	}
	static ::System::Int32* StaticGet_Field_2_167()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109B0);
	}
	static ::System::Int32* StaticGet_Field_2_130()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109B4);
	}
	static ::System::Int32* StaticGet_Field_2_199()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109B8);
	}
	static ::System::Int32* StaticGet_Field_2_149()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109BC);
	}
	static ::System::Int32* StaticGet_Field_2_138()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109C0);
	}
	static ::System::Int32* StaticGet_Field_2_132()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109C4);
	}
	static ::System::Int32* StaticGet_Field_2_168()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109C8);
	}
	static ::System::Int32* StaticGet_Field_2_131()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109CC);
	}
	static ::System::Int32* StaticGet_Field_2_202()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109D0);
	}
	static ::System::Int32* StaticGet_Field_2_184()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109D4);
	}
	static ::System::Int32* StaticGet_Field_2_129()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109D8);
	}
	static ::System::Int32* StaticGet_Field_2_154()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109DC);
	}
	static ::System::Int32* StaticGet_Field_2_134()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109E0);
	}
	static ::System::Int32* StaticGet_Field_2_201()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109E4);
	}
	static ::System::Int32* StaticGet_Field_2_176()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109E8);
	}
	static ::System::Int32* StaticGet_Field_2_148()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109EC);
	}
	static ::System::Int32* StaticGet_Field_2_194()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109F0);
	}
	static ::System::Int32* StaticGet_Field_2_186()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109F4);
	}
	static ::System::Int32* StaticGet_Field_2_160()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109F8);
	}
	static ::System::Int32* StaticGet_Field_2_126()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x109FC);
	}
	static ::System::Int32* StaticGet_Field_2_127()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A00);
	}
	static ::System::Int32* StaticGet_Field_2_140()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A04);
	}
	static ::System::Int32* StaticGet_Field_2_143()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A08);
	}
	static ::System::Int32* StaticGet_Field_2_174()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A0C);
	}
	static ::System::Int32* StaticGet_Field_2_161()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A10);
	}
	static ::System::Int32* StaticGet_Field_2_157()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A14);
	}
	static ::System::Int32* StaticGet_Field_2_166()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A18);
	}
	static ::System::Int32* StaticGet_Field_2_136()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A1C);
	}
	static ::System::Int32* StaticGet_Field_2_137()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A20);
	}
	static ::System::Int32* StaticGet_Field_2_144()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A24);
	}
	static ::System::Int32* StaticGet_Field_2_163()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A28);
	}
	static ::System::Int32* StaticGet_Field_2_128()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A2C);
	}
	static ::System::Int32* StaticGet_Field_2_171()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A30);
	}
	static ::System::Int32* StaticGet_Field_2_159()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A34);
	}
	static ::System::Int32* StaticGet_Field_2_151()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A38);
	}
	static ::System::Int32* StaticGet_Field_2_155()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A3C);
	}
	static ::System::Int32* StaticGet_Field_2_181()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A40);
	}
	static ::System::Int32* StaticGet_Field_2_169()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A44);
	}
	static ::System::Int32* StaticGet_Field_2_142()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A48);
	}
	static ::System::Int32* StaticGet_Field_2_196()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A4C);
	}
	static ::System::Int32* StaticGet_Field_2_191()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A50);
	}
	static ::System::Int32* StaticGet_Field_2_125()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A54);
	}
	static ::System::Int32* StaticGet_Field_2_179()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A58);
	}
	static ::System::Int32* StaticGet_Field_2_164()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A5C);
	}
	static ::System::Int32* StaticGet_Field_2_193()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x10A60);
	}
	// static const ::System::Single Field_2_17; // 0x0
	// static const ::System::Single Field_2_18; // 0x0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_21; // 0x28
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_50; // 0x30
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_44; // 0x38
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_45; // 0x40
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_41; // 0x48
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_43; // 0x50
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_40; // 0x58
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_48; // 0x60
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_57; // 0x68
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_36; // 0x70
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_30; // 0x78
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_60; // 0x80
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_56; // 0x88
	::UnityEngine::MeshRenderer* Field_2_120; // 0x90
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_34; // 0x98
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_49; // 0xA0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_47; // 0xA8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_63; // 0xB0
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_25; // 0xB8
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_33; // 0xC0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_24; // 0xC8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_54; // 0xD0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_46; // 0xD8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_39; // 0xE0
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_19; // 0xE8
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_55; // 0xF0
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_22; // 0xF8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_37; // 0x100
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_61; // 0x108
	::Class_2_719453818C1A6AE9* Field_2_110; // 0x110
	::Il2CppArray<::UnityEngine::RenderTexture*>* Field_2_80; // 0x118
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_20; // 0x120
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_28; // 0x128
	::UnityEngine::RenderTexture* Field_2_83; // 0x130
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_52; // 0x138
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_64; // 0x140
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_38; // 0x148
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_27; // 0x150
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_62; // 0x158
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_51; // 0x160
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_29; // 0x168
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_26; // 0x170
	::UnityEngine::RenderTexture* Field_2_82; // 0x178
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_42; // 0x180
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_23; // 0x188
	::Class_4_77EB9B0502521934<::System::Int32>* Field_2_59; // 0x190
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_58; // 0x198
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_65; // 0x1A0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_35; // 0x1A8
	::Il2CppArray<::UnityEngine::RenderTexture*>* Field_2_79; // 0x1B0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_32; // 0x1B8
	::UnityEngine::RenderTexture* Field_2_78; // 0x1C0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_53; // 0x1C8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_31; // 0x1D0
	::System::Single Field_2_6; // 0x1D8
	::System::Single Field_2_99; // 0x1DC
	::UnityEngine::Vector3 Field_2_119; // 0x1E0
	::System::Boolean Field_2_15; // 0x1EC
	::System::Boolean Field_2_107; // 0x1ED
	::System::Boolean Field_2_121; // 0x1EE
	::System::Boolean Field_2_111; // 0x1EF
	::System::Int32 Field_2_13; // 0x1F0
	::System::Int32 Field_2_14; // 0x1F4
	::System::Single Field_2_89; // 0x1F8
	::System::Single Field_2_92; // 0x1FC
	::UnityEngine::Color Field_2_91; // 0x200
	::System::Single Field_2_105; // 0x210
	::System::Int32 Field_2_81; // 0x214
	::System::Int32 Field_2_7; // 0x218
	::UnityEngine::Matrix4x4 Field_2_103; // 0x21C
	::System::Single Field_2_97; // 0x25C
	::UnityEngine::Vector4 Field_2_98; // 0x260
	::System::Int32 Field_2_3; // 0x270
	::UnityEngine::Matrix4x4 Field_2_102; // 0x274
	::UnityEngine::Color Field_2_104; // 0x2B4
	::UnityEngine::Color Field_2_88; // 0x2C4
	::UnityEngine::Vector3 Field_2_100; // 0x2D4
	::System::Single Field_2_5; // 0x2E0
	::UnityEngine::Color Field_2_87; // 0x2E4
	::System::Single Field_2_86; // 0x2F4
	::System::Int32 Field_2_0; // 0x2F8
	::System::Int32 Field_2_4; // 0x2FC
	::System::Single Field_2_11; // 0x300
	::System::Single Field_2_96; // 0x304
	::System::Single Field_2_95; // 0x308
	::System::Single Field_2_93; // 0x30C
	::UnityEngine::Vector3 Field_2_85; // 0x310
	::UnityEngine::Vector4 Field_2_101; // 0x31C
	::System::Int32 Field_2_9; // 0x32C
	::UnityEngine::Color Field_2_90; // 0x330
	::UnityEngine::RenderTextureFormat Field_2_16; // 0x340
	::System::Int32 Field_2_1; // 0x344
	::UnityEngine::Matrix4x4 Field_2_118; // 0x348
	::System::Int32 Field_2_2; // 0x388
	::System::Int32 Field_2_8; // 0x38C
	::UnityEngine::Color Field_2_106; // 0x390
	::UnityEngine::Matrix4x4 Field_2_117; // 0x3A0
	::System::Single Field_2_10; // 0x3E0
	::UnityEngine::Vector3 Field_2_84; // 0x3E4
	::System::Int32 Field_2_12; // 0x3F0
	::UnityEngine::Matrix4x4 Field_2_116; // 0x3F4
	::System::Single Field_2_94; // 0x434

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1__CCTOR_OFFSET))();
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_19B14977ABA39612()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_19B14977ABA39612_OFFSET))(this);
	}

	::System::Void Method_2_4ED5A32649C8BEBA(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4ED5A32649C8BEBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	static ::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_28EB11670A8E5A86_OFFSET))();
	}

	static ::System::Void Method_2_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_07E567B3C6C3D7D7_OFFSET))();
	}

	::System::Void Method_2_95CBA07394A84492(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_95CBA07394A84492_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_A1C7122184516C18_OFFSET))(this);
	}

	::System::Void Method_2_D4782799BBAD631B(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D4782799BBAD631B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E9FC08CF7527DC91(::UnityEngine::RenderTextureFormat a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_E9FC08CF7527DC91_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_2_ECEC258AA9D9E334(::RPG::CustomRP::CustomLightQualityFilter a1)
	{
		return ((::System::Int32(*)(::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_ECEC258AA9D9E334_OFFSET))(a1);
	}

	::System::Void Method_2_7760BC14807C2DCE(::RPG::CustomRP::CustomLightQualityFilter a1, ::RPG::CustomRP::CustomLightQualityFilter a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomLightQualityFilter, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_7760BC14807C2DCE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_4ED5A32649C8BEBA_1(::Class_1_C7C4EDD02A4426B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C7C4EDD02A4426B2*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4ED5A32649C8BEBA_1_OFFSET))(this, a1);
	}

	::UnityEngine::Camera* Method_2_C0353B6D8FB55332()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C0353B6D8FB55332_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FA662896843C137A_OFFSET))(this);
	}

	::System::Void Method_2_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5176DC743E478510_OFFSET))(this);
	}

	::UnityEngine::Color Method_2_FAC1E4DEB02B3801(::UnityEngine::Color a1, ::System::Single a2)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FAC1E4DEB02B3801_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_2_414A270E91E4BF2D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_414A270E91E4BF2D_OFFSET))(this, a1);
	}

	::System::Single Method_2_19F951B38D2C86E3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_19F951B38D2C86E3_OFFSET))(this);
	}

	static ::System::Void Method_2_44650C36F3358F75(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::ComputeShader* a2, ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* a3, ::UnityEngine::RenderTexture* a4)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_44650C36F3358F75_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_4FE33FD178F57C51(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4FE33FD178F57C51_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC2D782AE5BA571D(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FC2D782AE5BA571D_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDFF4FF770A14D72(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FDFF4FF770A14D72_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_2_10867B69EFBCA83E(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_10867B69EFBCA83E_OFFSET))(a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_F63565EA57F495CC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_F63565EA57F495CC_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_2_CBC2443440B894D4(::UnityEngine::RenderTexture* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::UnityEngine::RenderTextureFormat a5)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::UnityEngine::RenderTexture*, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CBC2443440B894D4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_9B3D46D8F2D493E3(::RPG::CustomRP::CustomLightQualityFilter P0, ::RPG::CustomRP::CustomLightQualityFilter P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomLightQualityFilter, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_9B3D46D8F2D493E3_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}

	::System::Void Method_2_6E2356E48BB4B332(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_6E2356E48BB4B332_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_3_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_4_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_5_OFFSET))(this);
	}
};
