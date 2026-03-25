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

#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x10A2BC70)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x10A2DEC0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0x10A2B410)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x10A2D000)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_19B14977ABA39612_OFFSET UNITYSDK_OFFSET(0x10A2A670)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_19F951B38D2C86E3_OFFSET UNITYSDK_OFFSET(0x10A2FBF0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x10A2B490)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_414A270E91E4BF2D_OFFSET UNITYSDK_OFFSET(0x10A2E1A0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x10A2AFC0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_44650C36F3358F75_OFFSET UNITYSDK_OFFSET(0x10A2FDB0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4ED5A32649C8BEBA_1_OFFSET UNITYSDK_OFFSET(0x10A2D2B0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4ED5A32649C8BEBA_OFFSET UNITYSDK_OFFSET(0x10A2AF70)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4FE33FD178F57C51_OFFSET UNITYSDK_OFFSET(0x10A2FE90)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x10A2D370)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x10A35D50)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x10A35E20)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x10A35F60)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x10A35FC0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x10A36020)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10A35CE0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x10A35D40)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_6E2356E48BB4B332_OFFSET UNITYSDK_OFFSET(0x10A35EF0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_7760BC14807C2DCE_OFFSET UNITYSDK_OFFSET(0x10A2CB40)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x10A35E80)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x10A29D50)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_95CBA07394A84492_OFFSET UNITYSDK_OFFSET(0x10A2BF30)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_9B3D46D8F2D493E3_OFFSET UNITYSDK_OFFSET(0x10A35DB0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x10A29DA0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C0353B6D8FB55332_OFFSET UNITYSDK_OFFSET(0x10A2D240)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10A34400)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x10A34440)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10A2A2D0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CBC2443440B894D4_OFFSET UNITYSDK_OFFSET(0x10A2C460)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x10A34480)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D4782799BBAD631B_OFFSET UNITYSDK_OFFSET(0x10A2C5C0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_E9FC08CF7527DC91_OFFSET UNITYSDK_OFFSET(0x10A2CA70)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_ECEC258AA9D9E334_OFFSET UNITYSDK_OFFSET(0x10A2CAE0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_F63565EA57F495CC_OFFSET UNITYSDK_OFFSET(0x10A2F870)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x10A2D300)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FAC1E4DEB02B3801_OFFSET UNITYSDK_OFFSET(0x10A2DDB0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FC2D782AE5BA571D_OFFSET UNITYSDK_OFFSET(0x10A32FF0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FD24D4C7B14328FB_OFFSET UNITYSDK_OFFSET(0x10A34030)
#define CLASS_2_D865BB63FE6CF6EB_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x10A35670)
#define CLASS_2_D865BB63FE6CF6EB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10A34510)

inline static constexpr unsigned int Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex = 40008;

class Class_2_D865BB63FE6CF6EB_1 : public ::Class_1_952A7C560FC1CD4B
{
public:
	static ::UnityEngine::Texture3D** StaticGet_Field_2_109()
	{
		return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x3BEA0);
	}
	static ::System::String** StaticGet_Field_2_114()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x3BEA8);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_67()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x3BEB0);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_68()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x3BEB8);
	}
	static ::EnviromentSystemV2Space::EnvAtmosphereQualityConfig** StaticGet_Field_2_112()
	{
		return (::EnviromentSystemV2Space::EnvAtmosphereQualityConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x3BEC0);
	}
	static ::UnityEngine::Material** StaticGet_Field_2_108()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x3BEC8);
	}
	static ::System::String** StaticGet_Field_2_113()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x3BED0);
	}
	static ::UnityEngine::ComputeShader** StaticGet_Field_2_66()
	{
		return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x3BED8);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_76()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x3BEE0);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_70()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x3BEE8);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_69()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x3BEF0);
	}
	static ::System::String** StaticGet_Field_2_115()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x3BEF8);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_73()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x3BF00);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_75()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x3BF08);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_77()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x3BF10);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_71()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x3BF18);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_74()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x3BF20);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_72()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x3BF28);
	}
	static ::System::Int32* StaticGet_Field_2_188()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF4E0);
	}
	static ::System::Int32* StaticGet_Field_2_150()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF4E4);
	}
	static ::System::Int32* StaticGet_Field_2_176()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF4E8);
	}
	static ::System::Int32* StaticGet_Field_2_153()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF4EC);
	}
	static ::System::Int32* StaticGet_Field_2_163()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF4F0);
	}
	static ::System::Int32* StaticGet_Field_2_201()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF4F4);
	}
	static ::System::Int32* StaticGet_Field_2_144()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF4F8);
	}
	static ::System::Int32* StaticGet_Field_2_157()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF4FC);
	}
	static ::System::Int32* StaticGet_Field_2_138()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF500);
	}
	static ::System::Int32* StaticGet_Field_2_172()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF504);
	}
	static ::System::Int32* StaticGet_Field_2_204()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF508);
	}
	static ::System::Int32* StaticGet_Field_2_137()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF50C);
	}
	static ::System::Int32* StaticGet_Field_2_186()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF510);
	}
	static ::System::Int32* StaticGet_Field_2_139()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF514);
	}
	static ::System::Int32* StaticGet_Field_2_185()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF518);
	}
	static ::System::Int32* StaticGet_Field_2_183()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF51C);
	}
	static ::System::Int32* StaticGet_Field_2_147()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF520);
	}
	static ::System::Int32* StaticGet_Field_2_168()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF524);
	}
	static ::System::Int32* StaticGet_Field_2_165()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF528);
	}
	static ::System::Int32* StaticGet_Field_2_121()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF52C);
	}
	static ::System::Int32* StaticGet_Field_2_178()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF530);
	}
	static ::System::Int32* StaticGet_Field_2_196()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF534);
	}
	static ::System::Int32* StaticGet_Field_2_135()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF538);
	}
	static ::System::Int32* StaticGet_Field_2_180()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF53C);
	}
	static ::System::Int32* StaticGet_Field_2_200()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF540);
	}
	static ::System::Int32* StaticGet_Field_2_191()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF544);
	}
	static ::System::Int32* StaticGet_Field_2_166()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF548);
	}
	static ::System::Int32* StaticGet_Field_2_189()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF54C);
	}
	static ::System::Int32* StaticGet_Field_2_179()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF550);
	}
	static ::System::Int32* StaticGet_Field_2_132()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF554);
	}
	static ::System::Int32* StaticGet_Field_2_125()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF558);
	}
	static ::System::Int32* StaticGet_Field_2_146()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF55C);
	}
	static ::System::Int32* StaticGet_Field_2_171()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF560);
	}
	static ::System::Int32* StaticGet_Field_2_154()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF564);
	}
	static ::System::Int32* StaticGet_Field_2_143()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF568);
	}
	static ::System::Int32* StaticGet_Field_2_141()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF56C);
	}
	static ::System::Int32* StaticGet_Field_2_175()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF570);
	}
	static ::System::Int32* StaticGet_Field_2_173()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF574);
	}
	static ::System::Int32* StaticGet_Field_2_169()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF578);
	}
	static ::System::Int32* StaticGet_Field_2_160()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF57C);
	}
	static ::System::Int32* StaticGet_Field_2_156()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF580);
	}
	static ::System::Int32* StaticGet_Field_2_198()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF584);
	}
	static ::System::Int32* StaticGet_Field_2_133()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF588);
	}
	static ::System::Int32* StaticGet_Field_2_170()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF58C);
	}
	static ::System::Int32* StaticGet_Field_2_126()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF590);
	}
	static ::System::Int32* StaticGet_Field_2_195()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF594);
	}
	static ::System::Int32* StaticGet_Field_2_202()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF598);
	}
	static ::System::Int32* StaticGet_Field_2_162()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF59C);
	}
	static ::System::Int32* StaticGet_Field_2_203()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5A0);
	}
	static ::System::Int32* StaticGet_Field_2_187()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5A4);
	}
	static ::System::Int32* StaticGet_Field_2_128()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5A8);
	}
	static ::System::Int32* StaticGet_Field_2_140()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5AC);
	}
	static ::System::Int32* StaticGet_Field_2_134()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5B0);
	}
	static ::System::Int32* StaticGet_Field_2_164()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5B4);
	}
	static ::System::Int32* StaticGet_Field_2_129()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5B8);
	}
	static ::System::Int32* StaticGet_Field_2_158()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5BC);
	}
	static ::System::Int32* StaticGet_Field_2_151()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5C0);
	}
	static ::System::Int32* StaticGet_Field_2_182()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5C4);
	}
	static ::System::Int32* StaticGet_Field_2_152()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5C8);
	}
	static ::System::Int32* StaticGet_Field_2_142()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5CC);
	}
	static ::System::Int32* StaticGet_Field_2_131()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5D0);
	}
	static ::System::Int32* StaticGet_Field_2_167()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5D4);
	}
	static ::System::Int32* StaticGet_Field_2_194()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5D8);
	}
	static ::System::Int32* StaticGet_Field_2_161()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5DC);
	}
	static ::System::Int32* StaticGet_Field_2_184()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5E0);
	}
	static ::System::Int32* StaticGet_Field_2_149()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5E4);
	}
	static ::System::Int32* StaticGet_Field_2_174()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5E8);
	}
	static ::System::Int32* StaticGet_Field_2_159()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5EC);
	}
	static ::System::Int32* StaticGet_Field_2_177()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5F0);
	}
	static ::System::Int32* StaticGet_Field_2_136()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5F4);
	}
	static ::System::Int32* StaticGet_Field_2_124()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5F8);
	}
	static ::System::Int32* StaticGet_Field_2_197()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF5FC);
	}
	static ::System::Int32* StaticGet_Field_2_130()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF600);
	}
	static ::System::Int32* StaticGet_Field_2_148()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF604);
	}
	static ::System::Int32* StaticGet_Field_2_199()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF608);
	}
	static ::System::Int32* StaticGet_Field_2_145()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF60C);
	}
	static ::System::Int32* StaticGet_Field_2_181()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF610);
	}
	static ::System::Int32* StaticGet_Field_2_127()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF614);
	}
	static ::System::Int32* StaticGet_Field_2_193()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF618);
	}
	static ::System::Int32* StaticGet_Field_2_120()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF61C);
	}
	static ::System::Int32* StaticGet_Field_2_155()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF620);
	}
	static ::System::Int32* StaticGet_Field_2_192()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF624);
	}
	static ::System::Int32* StaticGet_Field_2_190()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF628);
	}
	// static const ::System::Single Field_2_17; // 0x0
	// static const ::System::Single Field_2_18; // 0x0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_37; // 0x28
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_40; // 0x30
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_23; // 0x38
	::UnityEngine::RenderTexture* Field_2_78; // 0x40
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_64; // 0x48
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_54; // 0x50
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_61; // 0x58
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_38; // 0x60
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_31; // 0x68
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_46; // 0x70
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_32; // 0x78
	::UnityEngine::RenderTexture* Field_2_83; // 0x80
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_62; // 0x88
	::Il2CppArray<::UnityEngine::RenderTexture*>* Field_2_80; // 0x90
	::Il2CppArray<::UnityEngine::RenderTexture*>* Field_2_79; // 0x98
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_57; // 0xA0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_50; // 0xA8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_45; // 0xB0
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_56; // 0xB8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_21; // 0xC0
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_25; // 0xC8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_52; // 0xD0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_51; // 0xD8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_39; // 0xE0
	::Class_2_719453818C1A6AE9* Field_2_110; // 0xE8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_65; // 0xF0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_34; // 0xF8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_58; // 0x100
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_26; // 0x108
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_42; // 0x110
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_28; // 0x118
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_30; // 0x120
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_43; // 0x128
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_22; // 0x130
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_19; // 0x138
	::UnityEngine::RenderTexture* Field_2_82; // 0x140
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_49; // 0x148
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_36; // 0x150
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_29; // 0x158
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_48; // 0x160
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_35; // 0x168
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_44; // 0x170
	::Class_4_77EB9B0502521934<::System::Int32>* Field_2_59; // 0x178
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_41; // 0x180
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_60; // 0x188
	::UnityEngine::MeshRenderer* Field_2_122; // 0x190
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_20; // 0x198
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_47; // 0x1A0
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_55; // 0x1A8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_24; // 0x1B0
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_33; // 0x1B8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_63; // 0x1C0
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_27; // 0x1C8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_53; // 0x1D0
	::System::Int32 Field_2_12; // 0x1D8
	::System::Single Field_2_97; // 0x1DC
	::System::Boolean Field_2_111; // 0x1E0
	::System::Boolean Field_2_15; // 0x1E1
	::System::Boolean Field_2_107; // 0x1E2
	::System::Boolean Field_2_123; // 0x1E3
	::System::Single Field_2_95; // 0x1E4
	::System::Single Field_2_96; // 0x1E8
	::UnityEngine::Matrix4x4 Field_2_118; // 0x1EC
	::System::Int32 Field_2_13; // 0x22C
	::UnityEngine::Matrix4x4 Field_2_102; // 0x230
	::System::Single Field_2_11; // 0x270
	::UnityEngine::Matrix4x4 Field_2_116; // 0x274
	::UnityEngine::Color Field_2_90; // 0x2B4
	::System::Single Field_2_86; // 0x2C4
	::UnityEngine::Color Field_2_106; // 0x2C8
	::System::Int32 Field_2_9; // 0x2D8
	::UnityEngine::Matrix4x4 Field_2_117; // 0x2DC
	::System::Single Field_2_93; // 0x31C
	::UnityEngine::Vector3 Field_2_119; // 0x320
	::UnityEngine::Color Field_2_88; // 0x32C
	::UnityEngine::Vector4 Field_2_98; // 0x33C
	::System::Int32 Field_2_81; // 0x34C
	::UnityEngine::Vector3 Field_2_84; // 0x350
	::System::Int32 Field_2_3; // 0x35C
	::System::Int32 Field_2_4; // 0x360
	::UnityEngine::Vector3 Field_2_100; // 0x364
	::System::Int32 Field_2_8; // 0x370
	::UnityEngine::Color Field_2_104; // 0x374
	::System::Int32 Field_2_1; // 0x384
	::UnityEngine::Vector4 Field_2_101; // 0x388
	::System::Single Field_2_10; // 0x398
	::System::Single Field_2_6; // 0x39C
	::System::Single Field_2_5; // 0x3A0
	::System::Single Field_2_89; // 0x3A4
	::UnityEngine::Matrix4x4 Field_2_103; // 0x3A8
	::System::Single Field_2_99; // 0x3E8
	::UnityEngine::Color Field_2_91; // 0x3EC
	::UnityEngine::Vector3 Field_2_85; // 0x3FC
	::System::Single Field_2_92; // 0x408
	::System::Int32 Field_2_14; // 0x40C
	::UnityEngine::Color Field_2_87; // 0x410
	::System::Single Field_2_105; // 0x420
	::System::Int32 Field_2_0; // 0x424
	::System::Single Field_2_94; // 0x428
	::System::Int32 Field_2_2; // 0x42C
	::System::Int32 Field_2_7; // 0x430
	::UnityEngine::RenderTextureFormat Field_2_16; // 0x434

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

	::System::Void Method_2_FD24D4C7B14328FB(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FD24D4C7B14328FB_OFFSET))(this, a1);
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
