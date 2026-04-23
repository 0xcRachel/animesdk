#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EVideoPlayMode.h"
#include "unitysdk/System/Object.h"

class Class_1_74ED0770F35826A6;
class Class_2_1611AD1A09A7A324;
namespace CriWare { class CriManaMovieController; }
namespace CriWare { class CriManaMovieControllerForUI; }
namespace CriWare { class CriManaMovieMaterial; }
namespace CriWare { class CriManaVP9Initializer; }
namespace CriWare { class CriWareErrorHandler; }
namespace CriWare { class CriWareInitializer; }
namespace CriWare::CriMana { class MovieInfo; }
namespace RPG::GameCore { class PlayVideoSequence; }
namespace RPG::GameCore { class RemoveVideoSequence; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Shader; }

#define CLASS_1_19460F67232DEE87_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE153A50)
#define CLASS_1_19460F67232DEE87_GET_PLAYMODE_OFFSET UNITYSDK_OFFSET(0xE1565E0)
#define CLASS_1_19460F67232DEE87_METHOD_1_0C06B282CF03A384_OFFSET UNITYSDK_OFFSET(0xE154C90)
#define CLASS_1_19460F67232DEE87_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xE1541C0)
#define CLASS_1_19460F67232DEE87_METHOD_1_1835459715B5D9D1_OFFSET UNITYSDK_OFFSET(0xE153B20)
#define CLASS_1_19460F67232DEE87_METHOD_1_1E69483851063E27_OFFSET UNITYSDK_OFFSET(0xE155B80)
#define CLASS_1_19460F67232DEE87_METHOD_1_25C1D63D5CD4CAF9_OFFSET UNITYSDK_OFFSET(0xE155330)
#define CLASS_1_19460F67232DEE87_METHOD_1_2D1E645E1D19FB69_OFFSET UNITYSDK_OFFSET(0xE154910)
#define CLASS_1_19460F67232DEE87_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xE1540F0)
#define CLASS_1_19460F67232DEE87_METHOD_1_3103666BB5017625_OFFSET UNITYSDK_OFFSET(0xE156560)
#define CLASS_1_19460F67232DEE87_METHOD_1_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0xE1543B0)
#define CLASS_1_19460F67232DEE87_METHOD_1_40ED258E7B928165_OFFSET UNITYSDK_OFFSET(0xE154690)
#define CLASS_1_19460F67232DEE87_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xE155A10)
#define CLASS_1_19460F67232DEE87_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE154300)
#define CLASS_1_19460F67232DEE87_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0xE154780)
#define CLASS_1_19460F67232DEE87_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xE155010)
#define CLASS_1_19460F67232DEE87_METHOD_1_57F17F1D6A27CB64_OFFSET UNITYSDK_OFFSET(0xE156430)
#define CLASS_1_19460F67232DEE87_METHOD_1_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0xE155530)
#define CLASS_1_19460F67232DEE87_METHOD_1_6250E00298E4B8BC_OFFSET UNITYSDK_OFFSET(0xE154BA0)
#define CLASS_1_19460F67232DEE87_METHOD_1_62C0A11808649CEF_OFFSET UNITYSDK_OFFSET(0xE156230)
#define CLASS_1_19460F67232DEE87_METHOD_1_6E0960EE7D7130DA_OFFSET UNITYSDK_OFFSET(0xE154D50)
#define CLASS_1_19460F67232DEE87_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0xE154170)
#define CLASS_1_19460F67232DEE87_METHOD_1_73C75C834F119161_OFFSET UNITYSDK_OFFSET(0xE1557B0)
#define CLASS_1_19460F67232DEE87_METHOD_1_7C35D2BC7FBDA31C_OFFSET UNITYSDK_OFFSET(0xE1553C0)
#define CLASS_1_19460F67232DEE87_METHOD_1_7E4A77EF678E415A_OFFSET UNITYSDK_OFFSET(0xE155430)
#define CLASS_1_19460F67232DEE87_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0xE155A60)
#define CLASS_1_19460F67232DEE87_METHOD_1_AA169839CB93802A_1_OFFSET UNITYSDK_OFFSET(0xE155950)
#define CLASS_1_19460F67232DEE87_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xE155720)
#define CLASS_1_19460F67232DEE87_METHOD_1_B2040612BB29E8BB_OFFSET UNITYSDK_OFFSET(0xE155E40)
#define CLASS_1_19460F67232DEE87_METHOD_1_B7D7FFB372B90AEB_OFFSET UNITYSDK_OFFSET(0xE155E90)
#define CLASS_1_19460F67232DEE87_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0xE154400)
#define CLASS_1_19460F67232DEE87_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE154370)
#define CLASS_1_19460F67232DEE87_METHOD_1_E1C90A4641E7FFDC_OFFSET UNITYSDK_OFFSET(0xE155810)
#define CLASS_1_19460F67232DEE87_METHOD_1_E264DC43451ACB03_OFFSET UNITYSDK_OFFSET(0xE154EC0)
#define CLASS_1_19460F67232DEE87_METHOD_1_F87916206B4C2FC7_OFFSET UNITYSDK_OFFSET(0xE155CC0)
#define CLASS_1_19460F67232DEE87_SET_PLAYMODE_OFFSET UNITYSDK_OFFSET(0xE1565F0)
#define CLASS_1_19460F67232DEE87__CCTOR_OFFSET UNITYSDK_OFFSET(0xE156800)
#define CLASS_1_19460F67232DEE87__CTOR_OFFSET UNITYSDK_OFFSET(0xE156600)
#define CLASS_1_19460F67232DEE87__SPAWNUICONTROLLER_B__24_0_OFFSET UNITYSDK_OFFSET(0xE156830)
#define CLASS_1_19460F67232DEE87___CREATEVIDEOTEXTURE_B__22_0_OFFSET UNITYSDK_OFFSET(0xE156820)

inline static constexpr unsigned int Class_1_19460F67232DEE87_TypeDefinitionIndex = 67419;

class Class_1_19460F67232DEE87 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_19460F67232DEE87_TypeDefinitionIndex)->GetStaticField(0x119E0);
	}
	static ::System::Int32* StaticGet_Field_1_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_19460F67232DEE87_TypeDefinitionIndex)->GetStaticField(0x119E4);
	}
	static ::System::Int32* StaticGet_Field_1_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_19460F67232DEE87_TypeDefinitionIndex)->GetStaticField(0x119E8);
	}
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	// static const ::System::String* Field_1_13; // 0x0
	::CriWare::CriWareErrorHandler* Field_1_22; // 0x10
	::System::Collections::Generic::List_1<::CriWare::CriManaMovieController*>* Field_1_29; // 0x18
	::System::Collections::Generic::HashSet_1<::Class_2_1611AD1A09A7A324*>* Field_1_31; // 0x20
	::CriWare::CriManaVP9Initializer* Field_1_23; // 0x28
	::System::Collections::Generic::List_1<::CriWare::CriManaMovieController*>* Field_1_30; // 0x30
	::UnityEngine::Shader* Field_1_15; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_74ED0770F35826A6*>* Field_1_2; // 0x40
	::CriWare::CriWareInitializer* Field_1_21; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CriWare::CriManaMovieMaterial*>* Field_1_24; // 0x50
	::UnityEngine::GameObject* Field_1_20; // 0x58
	::UnityEngine::Shader* Field_1_14; // 0x60
	::System::Collections::Generic::List_1<::Class_1_74ED0770F35826A6*>* Field_1_3; // 0x68
	::RPG::Client::EVideoPlayMode _PlayMode_k__BackingField; // 0x70
	::System::Int32 Field_1_27; // 0x74
	::System::Int32 Field_1_28; // 0x78
	::System::Boolean Field_1_19; // 0x7C
	::System::Boolean Field_1_32; // 0x7D
	::System::Single Field_1_1; // 0x80
	::System::Int32 Field_1_25; // 0x84
	::System::Int32 Field_1_26; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_3BC8B8F2BB08C1C2_OFFSET))(this);
	}

	::CriWare::CriManaMovieControllerForUI* Method_1_40ED258E7B928165(::UnityEngine::GameObject* a1, ::System::Int32& a2)
	{
		return ((::CriWare::CriManaMovieControllerForUI*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_40ED258E7B928165_OFFSET))(this, a1, a2);
	}

	::CriWare::CriManaMovieController* Method_1_6250E00298E4B8BC(::System::String* a1, ::System::Int32& a2)
	{
		return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_6250E00298E4B8BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E0960EE7D7130DA(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_6E0960EE7D7130DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_1_25C1D63D5CD4CAF9(::Class_2_1611AD1A09A7A324* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1611AD1A09A7A324*))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_25C1D63D5CD4CAF9_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C35D2BC7FBDA31C(::Class_2_1611AD1A09A7A324* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1611AD1A09A7A324*))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_7C35D2BC7FBDA31C_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E4A77EF678E415A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_7E4A77EF678E415A_OFFSET))(this, a1);
	}

	::System::Void Method_1_73C75C834F119161(::RPG::Client::EVideoPlayMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EVideoPlayMode))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_73C75C834F119161_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_1_1835459715B5D9D1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_1835459715B5D9D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_AA169839CB93802A_1_OFFSET))(this);
	}

	::CriWare::CriManaMovieController* Method_1_0C06B282CF03A384(::System::String* a1)
	{
		return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_0C06B282CF03A384_OFFSET))(this, a1);
	}

	::CriWare::CriManaMovieController* Method_1_F87916206B4C2FC7(::System::String* a1)
	{
		return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_F87916206B4C2FC7_OFFSET))(this, a1);
	}

	::CriWare::CriManaMovieController* Method_1_1E69483851063E27(::System::String* a1)
	{
		return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_1E69483851063E27_OFFSET))(this, a1);
	}

	::CriWare::CriManaMovieControllerForUI* Method_1_2D1E645E1D19FB69(::System::String* a1)
	{
		return ((::CriWare::CriManaMovieControllerForUI*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_2D1E645E1D19FB69_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2040612BB29E8BB(::CriWare::CriManaMovieMaterial* a1)
	{
		return ((::System::Void(*)(::PVOID, ::CriWare::CriManaMovieMaterial*))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_B2040612BB29E8BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7D7FFB372B90AEB(::RPG::GameCore::PlayVideoSequence* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayVideoSequence*))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_B7D7FFB372B90AEB_OFFSET))(this, a1);
	}

	::System::Void Method_1_62C0A11808649CEF(::RPG::GameCore::RemoveVideoSequence* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RemoveVideoSequence*))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_62C0A11808649CEF_OFFSET))(this, a1);
	}

	::System::Void Method_1_E264DC43451ACB03(::System::Int32 a1, ::CriWare::CriManaMovieController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::CriWare::CriManaMovieController*))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_E264DC43451ACB03_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_1_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::String* Method_1_57F17F1D6A27CB64(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_57F17F1D6A27CB64_OFFSET))(this, a1);
	}

	::System::String* Method_1_3103666BB5017625(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_3103666BB5017625_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_E1C90A4641E7FFDC(::RPG::Client::EVideoPlayMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EVideoPlayMode))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_METHOD_1_E1C90A4641E7FFDC_OFFSET))(this, a1);
	}

	::RPG::Client::EVideoPlayMode get_PlayMode()
	{
		return ((::RPG::Client::EVideoPlayMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_GET_PLAYMODE_OFFSET))(this);
	}

	::System::Void set_PlayMode(::RPG::Client::EVideoPlayMode value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EVideoPlayMode))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87_SET_PLAYMODE_OFFSET))(this, value);
	}

	::UnityEngine::Shader* __CreateVideoTexture_b__22_0(::CriWare::CriMana::MovieInfo* x, ::System::Boolean y)
	{
		return ((::UnityEngine::Shader*(*)(::PVOID, ::CriWare::CriMana::MovieInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87___CREATEVIDEOTEXTURE_B__22_0_OFFSET))(this, x, y);
	}

	::UnityEngine::Shader* _SpawnUIController_b__24_0(::CriWare::CriMana::MovieInfo* x, ::System::Boolean y)
	{
		return ((::UnityEngine::Shader*(*)(::PVOID, ::CriWare::CriMana::MovieInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_19460F67232DEE87__SPAWNUICONTROLLER_B__24_0_OFFSET))(this, x, y);
	}
};
