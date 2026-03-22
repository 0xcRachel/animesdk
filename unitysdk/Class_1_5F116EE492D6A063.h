#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/System/ValueTuple_5.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_220;
class Class_1_09021BDF5ED5EA94;
class Class_1_290E70A78CB4315C;
class Class_1_56FF45D7B2C55655;
class Class_1_7A22A3DBEEDD1F80;
class Class_1_8A6989C352B0F0F0;
class Class_1_8B1384503A353CC0;
class Class_1_DE4C6B309308A230;
class Class_1_E136401E1657CFD7;
class Class_2_DD25755736E2A226;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace RPG { class IReference; }
namespace RPG::Client { class PVSDebugMono; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerSetting; }
namespace RPG::Client::OpenWorld { class Volume; }
namespace RPG::GameCore { class JsonOfflineCullingCellData; }
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class OfflineCullingIndex; }
namespace RPG::GameCore { class OfflineCullingLod; }
namespace RPG::GameCore { class StageAutoGenConfig; }
namespace RPG::GameCore { class StageConfig; }
namespace RPG::GameCore { class StagePVSData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class TextAsset; }

#define CLASS_1_5F116EE492D6A063_GET_DATADIRTY_OFFSET UNITYSDK_OFFSET(0x104A9850)
#define CLASS_1_5F116EE492D6A063_GET_USEBINARYDATA_OFFSET UNITYSDK_OFFSET(0x104A1010)
#define CLASS_1_5F116EE492D6A063_METHOD_1_0C4E0634D4E07EA3_OFFSET UNITYSDK_OFFSET(0x104A5A30)
#define CLASS_1_5F116EE492D6A063_METHOD_1_0FBF44BBA82CE88D_OFFSET UNITYSDK_OFFSET(0x104A9710)
#define CLASS_1_5F116EE492D6A063_METHOD_1_1799CA7A4943FF63_OFFSET UNITYSDK_OFFSET(0x104A34B0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_1FAAF94FAF3BC1EF_OFFSET UNITYSDK_OFFSET(0x104A82D0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x104A9840)
#define CLASS_1_5F116EE492D6A063_METHOD_1_2BE4F2EDBC8FFCCB_OFFSET UNITYSDK_OFFSET(0x104A5890)
#define CLASS_1_5F116EE492D6A063_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x104A9090)
#define CLASS_1_5F116EE492D6A063_METHOD_1_36199BBD14A68CEC_OFFSET UNITYSDK_OFFSET(0x104A4B30)
#define CLASS_1_5F116EE492D6A063_METHOD_1_369BB5E7FA6A1768_1_OFFSET UNITYSDK_OFFSET(0x104A9D40)
#define CLASS_1_5F116EE492D6A063_METHOD_1_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x104A9A40)
#define CLASS_1_5F116EE492D6A063_METHOD_1_4A28FA981541725F_OFFSET UNITYSDK_OFFSET(0x104A4FA0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x104A9820)
#define CLASS_1_5F116EE492D6A063_METHOD_1_5AB373DA300F74B2_OFFSET UNITYSDK_OFFSET(0x104A4480)
#define CLASS_1_5F116EE492D6A063_METHOD_1_5ADFEC2E44029993_OFFSET UNITYSDK_OFFSET(0x104A4220)
#define CLASS_1_5F116EE492D6A063_METHOD_1_5BCD80B898B3AF8B_OFFSET UNITYSDK_OFFSET(0x104A9810)
#define CLASS_1_5F116EE492D6A063_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x104A9830)
#define CLASS_1_5F116EE492D6A063_METHOD_1_67C10584F4320583_1_OFFSET UNITYSDK_OFFSET(0x104A9B90)
#define CLASS_1_5F116EE492D6A063_METHOD_1_67C10584F4320583_OFFSET UNITYSDK_OFFSET(0x104A9870)
#define CLASS_1_5F116EE492D6A063_METHOD_1_68BC2C58B9220C6F_OFFSET UNITYSDK_OFFSET(0x104A5060)
#define CLASS_1_5F116EE492D6A063_METHOD_1_6BB008E9B4218A45_OFFSET UNITYSDK_OFFSET(0x104A4140)
#define CLASS_1_5F116EE492D6A063_METHOD_1_6D82003517666E07_OFFSET UNITYSDK_OFFSET(0x104A4890)
#define CLASS_1_5F116EE492D6A063_METHOD_1_78A9A0823C944513_OFFSET UNITYSDK_OFFSET(0x104A3490)
#define CLASS_1_5F116EE492D6A063_METHOD_1_7F4EBEC55EBE2D81_1_OFFSET UNITYSDK_OFFSET(0x104A4430)
#define CLASS_1_5F116EE492D6A063_METHOD_1_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x104A43E0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_880A5E703311B822_OFFSET UNITYSDK_OFFSET(0x104A60C0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_8B451D7CE79AF87F_OFFSET UNITYSDK_OFFSET(0x104A6160)
#define CLASS_1_5F116EE492D6A063_METHOD_1_8E22B572EA9F050D_OFFSET UNITYSDK_OFFSET(0x104A4DD0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_90F250E7FF5CB0FD_OFFSET UNITYSDK_OFFSET(0x104A4580)
#define CLASS_1_5F116EE492D6A063_METHOD_1_93A53F40DFF75E28_OFFSET UNITYSDK_OFFSET(0x104A63A0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_943CDABE5D274DDB_OFFSET UNITYSDK_OFFSET(0x104A9130)
#define CLASS_1_5F116EE492D6A063_METHOD_1_9473958EACF8F196_OFFSET UNITYSDK_OFFSET(0x104A3DA0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x104A41C0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_A67EA69BF5A5FAC6_OFFSET UNITYSDK_OFFSET(0x104A7C80)
#define CLASS_1_5F116EE492D6A063_METHOD_1_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x104A34D0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_B11572376B688A06_OFFSET UNITYSDK_OFFSET(0x104A54B0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_BFFE0D476A0214C1_OFFSET UNITYSDK_OFFSET(0x104A4C50)
#define CLASS_1_5F116EE492D6A063_METHOD_1_C0688C2E36BAE128_OFFSET UNITYSDK_OFFSET(0x104A4BC0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_C4236B1B3A9C2B12_OFFSET UNITYSDK_OFFSET(0x104A3C70)
#define CLASS_1_5F116EE492D6A063_METHOD_1_C70A993A34CEBE9F_OFFSET UNITYSDK_OFFSET(0x104A8B60)
#define CLASS_1_5F116EE492D6A063_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x104A39D0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_D66F211912D83957_OFFSET UNITYSDK_OFFSET(0x104A3980)
#define CLASS_1_5F116EE492D6A063_METHOD_1_DAED5CDBD3055E38_OFFSET UNITYSDK_OFFSET(0x104A8000)
#define CLASS_1_5F116EE492D6A063_METHOD_1_F848FA6A62C78D33_OFFSET UNITYSDK_OFFSET(0x104A4D60)
#define CLASS_1_5F116EE492D6A063_SET_DATADIRTY_OFFSET UNITYSDK_OFFSET(0x104A9860)
#define CLASS_1_5F116EE492D6A063_SET_USEBINARYDATA_OFFSET UNITYSDK_OFFSET(0x104A1020)
#define CLASS_1_5F116EE492D6A063__CCTOR_OFFSET UNITYSDK_OFFSET(0x104A9E90)
#define CLASS_1_5F116EE492D6A063__CTOR_OFFSET UNITYSDK_OFFSET(0x104A1030)

inline static constexpr unsigned int Class_1_5F116EE492D6A063_TypeDefinitionIndex = 58736;

class Class_1_5F116EE492D6A063 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_17()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x43440);
	}
	static ::Class_1_7A22A3DBEEDD1F80** StaticGet_Field_1_6()
	{
		return (::Class_1_7A22A3DBEEDD1F80**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x43448);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_16()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x43450);
	}
	static ::System::Collections::Generic::List_1<::System::Int64>** StaticGet_Field_1_53()
	{
		return (::System::Collections::Generic::List_1<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x43458);
	}
	static ::System::Collections::Generic::Stack_1<::Class_1_8B1384503A353CC0*>** StaticGet_Field_1_61()
	{
		return (::System::Collections::Generic::Stack_1<::Class_1_8B1384503A353CC0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x43460);
	}
	static ::System::Collections::Generic::Stack_1<::Class_1_E136401E1657CFD7*>** StaticGet_Field_1_59()
	{
		return (::System::Collections::Generic::Stack_1<::Class_1_E136401E1657CFD7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x43468);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_13()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x43470);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_15()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x43478);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_14()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x43480);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_12()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x43488);
	}
	static ::System::Object** StaticGet_Field_1_60()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x43490);
	}
	static ::System::Object** StaticGet_Field_1_62()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x43498);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_11()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x434A0);
	}
	static ::System::Single* StaticGet_Field_1_57()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0xF9E0);
	}
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_56; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::ValueTuple_4<::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32>>* Field_1_7; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_1_09021BDF5ED5EA94*>* Field_1_42; // 0x18
	::Class_0_16E4307DCC419505_220* Field_1_55; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_49; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_32; // 0x30
	::System::Collections::Generic::List_1<::System::Single>* Field_1_30; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::Volume*>* Field_1_36; // 0x40
	::RPG::GameCore::StagePVSData* Field_1_25; // 0x48
	::System::Action_6<::UnityEngine::TextAsset*, ::RPG::IReference*, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32>* Field_1_9; // 0x50
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_44; // 0x58
	::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Field_1_41; // 0x60
	::Class_1_290E70A78CB4315C* Field_1_27; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Boolean>* Field_1_52; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::OfflineCullingIndex*>*>* Field_1_20; // 0x78
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* Field_1_4; // 0x80
	::System::Collections::Generic::List_1<::System::ValueTuple_5<::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::GameCore::JsonOfflineCullingCellData*, ::System::Int32>>* Field_1_8; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::JsonOfflineCullingCellData*>* Field_1_19; // 0x90
	::RPG::GameCore::StageAutoGenConfig* Field_1_24; // 0x98
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_45; // 0xA0
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_46; // 0xA8
	::RPG::GameCore::StageConfig* Field_1_23; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Int32>* Field_1_51; // 0xB8
	::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>* Field_1_34; // 0xC0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Field_1_43; // 0xC8
	::System::Collections::Generic::List_1<::System::String*>* Field_1_21; // 0xD0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* Field_1_47; // 0xD8
	::Class_1_56FF45D7B2C55655* Field_1_22; // 0xE0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* Field_1_5; // 0xE8
	::RPG::Client::PVSDebugMono* Field_1_3; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_48; // 0xF8
	::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>*>*>* Field_1_29; // 0x100
	::System::Action_2<::System::Int64, ::System::Boolean>* Field_1_54; // 0x108
	::System::Collections::Generic::List_1<::System::ValueTuple_4<::RPG::GameCore::OfflineCullingIndex*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32>>* Field_1_18; // 0x110
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>* Field_1_39; // 0x118
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>*>* Field_1_28; // 0x120
	::System::Int32 Field_1_38; // 0x128
	::UnityEngine::Vector3 Field_1_33; // 0x12C
	::System::Boolean Field_1_26; // 0x138
	::System::Boolean Field_1_35; // 0x139
	::System::Boolean _UseBinaryData_k__BackingField; // 0x13A
	::System::Boolean _DataDirty_k__BackingField; // 0x13B
	::System::Boolean Field_1_10; // 0x13C
	::System::Boolean Field_1_0; // 0x13D
	::System::Int32 Field_1_40; // 0x140
	::System::Int32 Field_1_37; // 0x144
	::System::Single Field_1_31; // 0x148
	::System::Int64 Field_1_50; // 0x150

	::System::Void _ctor(::Class_1_56FF45D7B2C55655* a1, ::RPG::GameCore::StageConfig* a2, ::RPG::GameCore::StageAutoGenConfig* a3, ::RPG::GameCore::LodConfig* a4, ::RPG::Client::OpenWorld::StreamingLayerSetting* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*, ::RPG::GameCore::StageConfig*, ::RPG::GameCore::StageAutoGenConfig*, ::RPG::GameCore::LodConfig*, ::RPG::Client::OpenWorld::StreamingLayerSetting*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063__CCTOR_OFFSET))();
	}

	::System::Boolean get_UseBinaryData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_GET_USEBINARYDATA_OFFSET))(this);
	}

	::System::Void set_UseBinaryData(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_SET_USEBINARYDATA_OFFSET))(this, value);
	}

	::System::Void Method_1_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Int64 Method_1_D66F211912D83957()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_D66F211912D83957_OFFSET))(this);
	}

	::System::Void Method_1_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_1_9473958EACF8F196(::System::Action_2<::System::Int64, ::System::Boolean>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int64, ::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_9473958EACF8F196_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6BB008E9B4218A45(::System::Action_2<::System::Int64, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int64, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_6BB008E9B4218A45_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_5ADFEC2E44029993(::System::Collections::Generic::List_1<::System::Int64>* a1, ::System::Collections::Generic::List_1<::System::Int64>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int64>*, ::System::Collections::Generic::List_1<::System::Int64>*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_5ADFEC2E44029993_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C4236B1B3A9C2B12(::System::Int64 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_C4236B1B3A9C2B12_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F4EBEC55EBE2D81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_7F4EBEC55EBE2D81_OFFSET))(this);
	}

	::System::Void Method_1_7F4EBEC55EBE2D81_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_7F4EBEC55EBE2D81_1_OFFSET))(this);
	}

	::System::Void Method_1_5AB373DA300F74B2(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_5AB373DA300F74B2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_90F250E7FF5CB0FD(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_90F250E7FF5CB0FD_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_6D82003517666E07(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_6D82003517666E07_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_36199BBD14A68CEC(::Class_1_09021BDF5ED5EA94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_09021BDF5ED5EA94*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_36199BBD14A68CEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_C0688C2E36BAE128(::Class_1_09021BDF5ED5EA94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_09021BDF5ED5EA94*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_C0688C2E36BAE128_OFFSET))(this, a1);
	}

	::System::Void Method_1_BFFE0D476A0214C1(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_BFFE0D476A0214C1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F848FA6A62C78D33(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_F848FA6A62C78D33_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E22B572EA9F050D(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_8E22B572EA9F050D_OFFSET))(this, a1);
	}

	::System::Void Method_1_4A28FA981541725F(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_4A28FA981541725F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* Method_1_68BC2C58B9220C6F(::System::Int32 a1, ::System::Int64 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*(*)(::PVOID, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_68BC2C58B9220C6F_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::OfflineCullingIndex* Method_1_B11572376B688A06(::System::Int32 a1, ::System::Int64 a2, ::System::Single a3)
	{
		return ((::RPG::GameCore::OfflineCullingIndex*(*)(::PVOID, ::System::Int32, ::System::Int64, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_B11572376B688A06_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::JsonOfflineCullingCellData* Method_1_2BE4F2EDBC8FFCCB(::UnityEngine::TextAsset* a1)
	{
		return ((::RPG::GameCore::JsonOfflineCullingCellData*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_2BE4F2EDBC8FFCCB_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C4E0634D4E07EA3(::Class_2_DD25755736E2A226* a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DD25755736E2A226*, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_0C4E0634D4E07EA3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_8B451D7CE79AF87F(::UnityEngine::TextAsset* a1, ::RPG::IReference* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::RPG::GameCore::OfflineCullingIndex* a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAsset*, ::RPG::IReference*, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_8B451D7CE79AF87F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* Method_1_880A5E703311B822(::RPG::GameCore::OfflineCullingIndex* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::OfflineCullingIndex*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_880A5E703311B822_OFFSET))(this, a1);
	}

	::System::Void Method_1_93A53F40DFF75E28(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_93A53F40DFF75E28_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1FAAF94FAF3BC1EF(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_1FAAF94FAF3BC1EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_C70A993A34CEBE9F(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_C70A993A34CEBE9F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_943CDABE5D274DDB(::Class_1_09021BDF5ED5EA94* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_09021BDF5ED5EA94*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_943CDABE5D274DDB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0FBF44BBA82CE88D(::RPG::GameCore::OfflineCullingIndex* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OfflineCullingIndex*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_0FBF44BBA82CE88D_OFFSET))(this, a1);
	}

	::System::Void Method_1_A67EA69BF5A5FAC6(::Class_2_DD25755736E2A226* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DD25755736E2A226*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_A67EA69BF5A5FAC6_OFFSET))(this, a1);
	}

	::System::Void Method_1_DAED5CDBD3055E38(::Class_2_DD25755736E2A226* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DD25755736E2A226*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_DAED5CDBD3055E38_OFFSET))(this, a1);
	}

	::RPG::GameCore::StageConfig* Method_1_5BCD80B898B3AF8B()
	{
		return ((::RPG::GameCore::StageConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_5BCD80B898B3AF8B_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::OfflineCullingIndex*>* Method_1_78A9A0823C944513()
	{
		return ((::Il2CppArray<::RPG::GameCore::OfflineCullingIndex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_78A9A0823C944513_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::OfflineCullingLod*>* Method_1_1799CA7A4943FF63()
	{
		return ((::Il2CppArray<::RPG::GameCore::OfflineCullingLod*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_1799CA7A4943FF63_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_220* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_220*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::Class_1_290E70A78CB4315C* Method_1_24748FC20F375725()
	{
		return ((::Class_1_290E70A78CB4315C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Boolean get_DataDirty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_GET_DATADIRTY_OFFSET))(this);
	}

	::System::Void set_DataDirty(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_SET_DATADIRTY_OFFSET))(this, value);
	}

	static ::Class_1_E136401E1657CFD7* Method_1_67C10584F4320583()
	{
		return ((::Class_1_E136401E1657CFD7*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_67C10584F4320583_OFFSET))();
	}

	static ::System::Void Method_1_369BB5E7FA6A1768(::Class_1_E136401E1657CFD7* a1)
	{
		return ((::System::Void(*)(::Class_1_E136401E1657CFD7*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_369BB5E7FA6A1768_OFFSET))(a1);
	}

	static ::Class_1_8B1384503A353CC0* Method_1_67C10584F4320583_1()
	{
		return ((::Class_1_8B1384503A353CC0*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_67C10584F4320583_1_OFFSET))();
	}

	static ::System::Void Method_1_369BB5E7FA6A1768_1(::Class_1_8B1384503A353CC0* a1)
	{
		return ((::System::Void(*)(::Class_1_8B1384503A353CC0*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_369BB5E7FA6A1768_1_OFFSET))(a1);
	}
};
