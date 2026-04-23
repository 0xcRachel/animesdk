#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47_Struct_2_823833D588E72957.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemEnableReason.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/Struct_2_8BE3C66A8F21F652.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_918;
class Class_1_303D5A33D1401D59;
class Class_1_339067D9E32FBBB4;
class Class_1_3F28033F34305C46;
class Class_1_43BD383C98B4C0C5_165;
class Class_1_56FF45D7B2C55655;
class Class_1_8A6989C352B0F0F0;
class Class_1_DE4C6B309308A230;
class Class_1_F35AF634CCD4DC45;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::Client::OpenWorld { class Volume; }
namespace RPG::Client::OpenWorld { template <typename T> class AOIBase_1; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class EnvironmentDataInfo; }
namespace RPG::GameCore { class StagePrefabInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_5B228A4605C15E47_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0x14C0EDB0)
#define CLASS_1_5B228A4605C15E47_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0x14C0E9A0)
#define CLASS_1_5B228A4605C15E47_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14C0DFD0)
#define CLASS_1_5B228A4605C15E47_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x14C128F0)
#define CLASS_1_5B228A4605C15E47_GET_CANLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0x14C0D3E0)
#define CLASS_1_5B228A4605C15E47_GET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x14C128D0)
#define CLASS_1_5B228A4605C15E47_GET_ISPERSISTENTLOADED_OFFSET UNITYSDK_OFFSET(0x14C0F080)
#define CLASS_1_5B228A4605C15E47_GET_JOBDATASTREAMING_OFFSET UNITYSDK_OFFSET(0x14C0A990)
#define CLASS_1_5B228A4605C15E47_GET_LAYERSOURCEEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x14C0F0B0)
#define CLASS_1_5B228A4605C15E47_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x14C0FBD0)
#define CLASS_1_5B228A4605C15E47_INSERTTOAOI_OFFSET UNITYSDK_OFFSET(0x14C0C510)
#define CLASS_1_5B228A4605C15E47_LEAVEOUTVISION_OFFSET UNITYSDK_OFFSET(0x14C0E750)
#define CLASS_1_5B228A4605C15E47_METHOD_1_02A67ACF3BCC3ADE_OFFSET UNITYSDK_OFFSET(0x14C0FAB0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_03C56FBEC5C889AC_OFFSET UNITYSDK_OFFSET(0x14C12420)
#define CLASS_1_5B228A4605C15E47_METHOD_1_05968E5CCAD303A5_OFFSET UNITYSDK_OFFSET(0x14C09200)
#define CLASS_1_5B228A4605C15E47_METHOD_1_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x14C10DE0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x14C12650)
#define CLASS_1_5B228A4605C15E47_METHOD_1_115AC51E73D999C8_OFFSET UNITYSDK_OFFSET(0x14C0CB60)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x14C0E8A0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1A4414413DE08994_OFFSET UNITYSDK_OFFSET(0x14C116B0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1A90B7D81C1D0EB0_OFFSET UNITYSDK_OFFSET(0x14C09960)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1C9A89A72D430905_OFFSET UNITYSDK_OFFSET(0x14C0BFA0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14C0A9D0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1DE63FE11FA0D5B4_OFFSET UNITYSDK_OFFSET(0x14C11280)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1FE4DD8CBB24E4D9_OFFSET UNITYSDK_OFFSET(0x14C10810)
#define CLASS_1_5B228A4605C15E47_METHOD_1_255811211D98CDCE_OFFSET UNITYSDK_OFFSET(0x14C0D450)
#define CLASS_1_5B228A4605C15E47_METHOD_1_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x14C10560)
#define CLASS_1_5B228A4605C15E47_METHOD_1_2E3D208EC479E1B5_OFFSET UNITYSDK_OFFSET(0x14C09DC0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_336BBA1F27BAEEE0_OFFSET UNITYSDK_OFFSET(0x14C136A0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x14C0C310)
#define CLASS_1_5B228A4605C15E47_METHOD_1_35DD5E9922E078B2_OFFSET UNITYSDK_OFFSET(0x14C12B00)
#define CLASS_1_5B228A4605C15E47_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x14C09520)
#define CLASS_1_5B228A4605C15E47_METHOD_1_387EA1BE4F9FC1D2_OFFSET UNITYSDK_OFFSET(0x14C0B870)
#define CLASS_1_5B228A4605C15E47_METHOD_1_3DF018E49E922C69_OFFSET UNITYSDK_OFFSET(0x14C0DEA0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x14C12C00)
#define CLASS_1_5B228A4605C15E47_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x14C0C7F0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_3F3693110F25FD62_1_OFFSET UNITYSDK_OFFSET(0x14C0E790)
#define CLASS_1_5B228A4605C15E47_METHOD_1_3F3693110F25FD62_OFFSET UNITYSDK_OFFSET(0x14C0B1C0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x14C12850)
#define CLASS_1_5B228A4605C15E47_METHOD_1_4C409DF5E54C7553_OFFSET UNITYSDK_OFFSET(0x14C0B510)
#define CLASS_1_5B228A4605C15E47_METHOD_1_4C5371C54FF722B4_OFFSET UNITYSDK_OFFSET(0x14C0C6E0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_4EFC8421DB9059A5_OFFSET UNITYSDK_OFFSET(0x14C0EEB0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_4F5257BBEC1FBFED_1_OFFSET UNITYSDK_OFFSET(0x14C12320)
#define CLASS_1_5B228A4605C15E47_METHOD_1_4F5257BBEC1FBFED_OFFSET UNITYSDK_OFFSET(0x14C115B0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x14C0F3B0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x14C0DA90)
#define CLASS_1_5B228A4605C15E47_METHOD_1_56750A0C1A6E4594_OFFSET UNITYSDK_OFFSET(0x14C0F130)
#define CLASS_1_5B228A4605C15E47_METHOD_1_59E2538CF2D1A0AC_OFFSET UNITYSDK_OFFSET(0x14C0C840)
#define CLASS_1_5B228A4605C15E47_METHOD_1_5A6EDA618381B719_OFFSET UNITYSDK_OFFSET(0x14C13120)
#define CLASS_1_5B228A4605C15E47_METHOD_1_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x14C0CDC0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_62AA24C6BF34AC04_OFFSET UNITYSDK_OFFSET(0x14C120D0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_64F0C85A431FBD69_OFFSET UNITYSDK_OFFSET(0x14C0E670)
#define CLASS_1_5B228A4605C15E47_METHOD_1_695579C6786804DA_OFFSET UNITYSDK_OFFSET(0x14C0CFF0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_6CB5060D47BF8A1B_OFFSET UNITYSDK_OFFSET(0x14C0A900)
#define CLASS_1_5B228A4605C15E47_METHOD_1_6EB41FA6FC12E24C_1_OFFSET UNITYSDK_OFFSET(0x14C0D1C0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_6EB41FA6FC12E24C_OFFSET UNITYSDK_OFFSET(0x14C0D150)
#define CLASS_1_5B228A4605C15E47_METHOD_1_7CCF26DCE6CE0D45_OFFSET UNITYSDK_OFFSET(0x14C12D00)
#define CLASS_1_5B228A4605C15E47_METHOD_1_7D8635EB900C4D09_OFFSET UNITYSDK_OFFSET(0x14C09870)
#define CLASS_1_5B228A4605C15E47_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x14C113E0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_7E8FD15DE9AB685F_OFFSET UNITYSDK_OFFSET(0x14C0EBE0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_822031E522673D19_OFFSET UNITYSDK_OFFSET(0x14C12F70)
#define CLASS_1_5B228A4605C15E47_METHOD_1_86DA6A9C666CF918_OFFSET UNITYSDK_OFFSET(0x14C11EA0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x14C12B50)
#define CLASS_1_5B228A4605C15E47_METHOD_1_8DCD1FEC09DA5176_OFFSET UNITYSDK_OFFSET(0x14C10390)
#define CLASS_1_5B228A4605C15E47_METHOD_1_90EBA8A351308A02_OFFSET UNITYSDK_OFFSET(0x14C0EF60)
#define CLASS_1_5B228A4605C15E47_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x14C0A030)
#define CLASS_1_5B228A4605C15E47_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x14C0F0D0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_9617F67032BC6735_OFFSET UNITYSDK_OFFSET(0x14C12BB0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14C0A250)
#define CLASS_1_5B228A4605C15E47_METHOD_1_9AA4014B2568687E_OFFSET UNITYSDK_OFFSET(0x14C12C50)
#define CLASS_1_5B228A4605C15E47_METHOD_1_A64475C51C411FF6_OFFSET UNITYSDK_OFFSET(0x14C0D230)
#define CLASS_1_5B228A4605C15E47_METHOD_1_A65A67AD4D06DB66_OFFSET UNITYSDK_OFFSET(0x14C11F60)
#define CLASS_1_5B228A4605C15E47_METHOD_1_ABC8B40DCA6A186F_OFFSET UNITYSDK_OFFSET(0x14C0EFF0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_AE0DBCD5BCD90B1A_OFFSET UNITYSDK_OFFSET(0x14C0D320)
#define CLASS_1_5B228A4605C15E47_METHOD_1_B33A9ADC200A387A_OFFSET UNITYSDK_OFFSET(0x14C0CE50)
#define CLASS_1_5B228A4605C15E47_METHOD_1_B39416EBE5B2947C_OFFSET UNITYSDK_OFFSET(0x14C0DF20)
#define CLASS_1_5B228A4605C15E47_METHOD_1_BEFDA8A30C656893_OFFSET UNITYSDK_OFFSET(0x14C11970)
#define CLASS_1_5B228A4605C15E47_METHOD_1_C9D9053F8B86A848_OFFSET UNITYSDK_OFFSET(0x14C09030)
#define CLASS_1_5B228A4605C15E47_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14C0D400)
#define CLASS_1_5B228A4605C15E47_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x14C114A0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14C0B2C0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x14C08F40)
#define CLASS_1_5B228A4605C15E47_METHOD_1_D11981A7B23B56ED_OFFSET UNITYSDK_OFFSET(0x14C10FE0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_D489F3D943173A56_OFFSET UNITYSDK_OFFSET(0x14C139C0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x14C0E950)
#define CLASS_1_5B228A4605C15E47_METHOD_1_D55AF99D88788B5F_OFFSET UNITYSDK_OFFSET(0x14C0FE80)
#define CLASS_1_5B228A4605C15E47_METHOD_1_D89E9B7A3325AE84_OFFSET UNITYSDK_OFFSET(0x14C10110)
#define CLASS_1_5B228A4605C15E47_METHOD_1_DCDCD984F3A05F38_OFFSET UNITYSDK_OFFSET(0x14C0DB80)
#define CLASS_1_5B228A4605C15E47_METHOD_1_DF73DC25C3D9547E_OFFSET UNITYSDK_OFFSET(0x14C0DD70)
#define CLASS_1_5B228A4605C15E47_METHOD_1_E0C326C84781CF4C_OFFSET UNITYSDK_OFFSET(0x14C0A5F0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_E0C8A556B1402FB2_OFFSET UNITYSDK_OFFSET(0x14C0B310)
#define CLASS_1_5B228A4605C15E47_METHOD_1_E38EEC5A37671AAD_OFFSET UNITYSDK_OFFSET(0x14C095A0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_E72614EA19F75F2F_OFFSET UNITYSDK_OFFSET(0x14C0CBF0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_E8E28689B89F5CAB_OFFSET UNITYSDK_OFFSET(0x14C0B460)
#define CLASS_1_5B228A4605C15E47_METHOD_1_E8EDA2B6D6F6D326_OFFSET UNITYSDK_OFFSET(0x14C0BD10)
#define CLASS_1_5B228A4605C15E47_METHOD_1_EA56FF49F701790D_OFFSET UNITYSDK_OFFSET(0x14C0A2C0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_EC010C7F2D957A68_OFFSET UNITYSDK_OFFSET(0x14C11C10)
#define CLASS_1_5B228A4605C15E47_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x14C0F0A0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x14C0F120)
#define CLASS_1_5B228A4605C15E47_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14C0CB30)
#define CLASS_1_5B228A4605C15E47_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x14C0E650)
#define CLASS_1_5B228A4605C15E47_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x14C0CB40)
#define CLASS_1_5B228A4605C15E47_METHOD_1_FA36319A46D72876_OFFSET UNITYSDK_OFFSET(0x14C11500)
#define CLASS_1_5B228A4605C15E47_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x14C0F060)
#define CLASS_1_5B228A4605C15E47_METHOD_1_FEF999131EAD8C08_OFFSET UNITYSDK_OFFSET(0x14C0F450)
#define CLASS_1_5B228A4605C15E47_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0x14C0C400)
#define CLASS_1_5B228A4605C15E47_REMOVEFROMAOI_OFFSET UNITYSDK_OFFSET(0x14C0C5F0)
#define CLASS_1_5B228A4605C15E47_SET_CANLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0x14C0D3F0)
#define CLASS_1_5B228A4605C15E47_SET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x14C128E0)
#define CLASS_1_5B228A4605C15E47_SET_ISPERSISTENTLOADED_OFFSET UNITYSDK_OFFSET(0x14C0F090)
#define CLASS_1_5B228A4605C15E47_SET_JOBDATASTREAMING_OFFSET UNITYSDK_OFFSET(0x14C0A9B0)
#define CLASS_1_5B228A4605C15E47_SET_LAYERSOURCEEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x14C0F0C0)
#define CLASS_1_5B228A4605C15E47_TOHLOD_OFFSET UNITYSDK_OFFSET(0x14C0E3A0)
#define CLASS_1_5B228A4605C15E47__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C13A30)
#define CLASS_1_5B228A4605C15E47__CTOR_OFFSET UNITYSDK_OFFSET(0x14C0AA30)
#define CLASS_1_5B228A4605C15E47__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x14C0F9D0)
#define CLASS_1_5B228A4605C15E47__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0x14C0A3C0)
#define CLASS_1_5B228A4605C15E47__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x14C0FA40)

inline static constexpr unsigned int Class_1_5B228A4605C15E47_TypeDefinitionIndex = 67958;

class Class_1_5B228A4605C15E47 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B228A4605C15E47_TypeDefinitionIndex)->GetStaticField(0x606B0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_58()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B228A4605C15E47_TypeDefinitionIndex)->GetStaticField(0x606B8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_40()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B228A4605C15E47_TypeDefinitionIndex)->GetStaticField(0x606C0);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B228A4605C15E47_TypeDefinitionIndex)->GetStaticField(0x10E10);
	}
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_43; // 0x18
	::Class_1_303D5A33D1401D59* Field_1_15; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_54; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_28; // 0x30
	::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::System::Boolean>* Field_1_31; // 0x38
	::Class_1_F35AF634CCD4DC45* Field_1_16; // 0x40
	::System::Action_1<::Class_1_8A6989C352B0F0F0*>* Field_1_30; // 0x48
	::System::Collections::Concurrent::ConcurrentQueue_1<::System::Tuple_2<::Class_1_8A6989C352B0F0F0*, ::System::Int32>*>* Field_1_44; // 0x50
	::System::Collections::Generic::List_1<::System::Action*>* Field_1_39; // 0x58
	::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>* Field_1_5; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_1_32; // 0x68
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_51; // 0x70
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_25; // 0x78
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_26; // 0x80
	::System::Collections::Concurrent::ConcurrentDictionary_2<::Class_1_8A6989C352B0F0F0*, ::System::Int32>* Field_1_41; // 0x88
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_57; // 0x90
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_52; // 0x98
	::RPG::Client::OpenWorld::StreamingLayerDetail* Field_1_11; // 0xA0
	::System::Collections::Generic::HashSet_1<::Class_1_8A6989C352B0F0F0*>* Field_1_59; // 0xA8
	::Class_1_56FF45D7B2C55655* Field_1_14; // 0xB0
	::System::Collections::Concurrent::ConcurrentQueue_1<::Class_1_8A6989C352B0F0F0*>* Field_1_42; // 0xB8
	::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_29; // 0xC0
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_4; // 0xC8
	::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Field_1_24; // 0xD0
	::Class_1_43BD383C98B4C0C5_165* Field_1_3; // 0xD8
	::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>* Field_1_60; // 0xE0
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>*>* Field_1_45; // 0xE8
	::Class_1_339067D9E32FBBB4* Field_1_2; // 0xF0
	::UnityEngine::GameObject* Field_1_19; // 0xF8
	::UnityEngine::Vector3 Field_1_20; // 0x100
	::System::Single Field_1_22; // 0x10C
	::System::Single Field_1_23; // 0x110
	::UnityEngine::Rect Field_1_33; // 0x114
	::System::Int32 _LayerSourceEffectType_k__BackingField; // 0x124
	::System::Single Field_1_12; // 0x128
	::System::Int32 Field_1_55; // 0x12C
	::System::Int32 Field_1_27; // 0x130
	::Struct_2_8BE3C66A8F21F652 _JobDataStreaming_k__BackingField; // 0x134
	::UnityEngine::Vector3 Field_1_21; // 0x148
	::System::Boolean Field_1_17; // 0x154
	::System::Boolean Field_1_38; // 0x155
	::System::Boolean Field_1_48; // 0x156
	::System::Boolean _CanLoadStreamingResource_k__BackingField; // 0x157
	::System::Boolean Field_1_34; // 0x158
	::System::Boolean Field_1_36; // 0x159
	::System::Boolean Field_1_37; // 0x15A
	::System::Boolean Field_1_35; // 0x15B
	::System::Boolean Field_1_18; // 0x15C
	::System::Boolean Field_1_50; // 0x15D
	::System::Boolean _IsPersistentLoaded_k__BackingField; // 0x15E
	::System::Boolean Field_1_46; // 0x15F
	::System::Boolean Field_1_56; // 0x160
	::System::Boolean Field_1_49; // 0x161
	::System::Boolean _IsFocus_k__BackingField; // 0x162
	::System::Boolean Field_1_47; // 0x163
	::System::Single Field_1_13; // 0x164

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_56FF45D7B2C55655* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_56FF45D7B2C55655*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47__CCTOR_OFFSET))();
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_C9D9053F8B86A848(::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47_Struct_2_823833D588E72957>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47_Struct_2_823833D588E72957>*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_C9D9053F8B86A848_OFFSET))(this, a1);
	}

	::System::Void Method_1_05968E5CCAD303A5(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_05968E5CCAD303A5_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Boolean Method_1_E38EEC5A37671AAD(::Class_0_16E4307DCC419505_918* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_918*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_E38EEC5A37671AAD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7D8635EB900C4D09(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_7D8635EB900C4D09_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_1A90B7D81C1D0EB0(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_1A90B7D81C1D0EB0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_2E3D208EC479E1B5(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::Class_1_8A6989C352B0F0F0* a4, ::RPG::Client::OpenWorld::StreamingItemData* a5, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*> a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_2E3D208EC479E1B5_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_EA56FF49F701790D(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_EA56FF49F701790D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _SolveInstanceLodCalc(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::Class_1_8A6989C352B0F0F0* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_E0C326C84781CF4C(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_E0C326C84781CF4C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6CB5060D47BF8A1B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_6CB5060D47BF8A1B_OFFSET))(this, a1, a2);
	}

	::Struct_2_8BE3C66A8F21F652 get_JobDataStreaming()
	{
		return ((::Struct_2_8BE3C66A8F21F652(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_GET_JOBDATASTREAMING_OFFSET))(this);
	}

	::System::Void set_JobDataStreaming(::Struct_2_8BE3C66A8F21F652 value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_8BE3C66A8F21F652))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_SET_JOBDATASTREAMING_OFFSET))(this, value);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_3F3693110F25FD62(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_3F3693110F25FD62_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E0C8A556B1402FB2(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_E0C8A556B1402FB2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E8E28689B89F5CAB(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_E8E28689B89F5CAB_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C409DF5E54C7553()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_4C409DF5E54C7553_OFFSET))(this);
	}

	::System::Boolean Method_1_387EA1BE4F9FC1D2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_387EA1BE4F9FC1D2_OFFSET))(this);
	}

	::System::Single Method_1_E8EDA2B6D6F6D326()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_E8EDA2B6D6F6D326_OFFSET))(this);
	}

	::System::Void Method_1_1C9A89A72D430905(::UnityEngine::Bounds& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_1C9A89A72D430905_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void QuadTreeOp(::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_QUADTREEOP_OFFSET))(this, a1);
	}

	::System::Void InsertToAOI(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_INSERTTOAOI_OFFSET))(this, a1);
	}

	::System::Void RemoveFromAOI(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_REMOVEFROMAOI_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C5371C54FF722B4(::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::System::Object*>* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_4C5371C54FF722B4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_59E2538CF2D1A0AC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_59E2538CF2D1A0AC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_1_115AC51E73D999C8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_115AC51E73D999C8_OFFSET))(this);
	}

	::System::Void Method_1_E72614EA19F75F2F(::RPG::GameCore::StagePrefabInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StagePrefabInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_E72614EA19F75F2F_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_1_B33A9ADC200A387A(::RPG::GameCore::StagePrefabInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StagePrefabInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_B33A9ADC200A387A_OFFSET))(this, a1);
	}

	::System::Void Method_1_695579C6786804DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_695579C6786804DA_OFFSET))(this);
	}

	::System::Void Method_1_6EB41FA6FC12E24C(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::RPG::GameCore::EnvironmentDataInfo* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::EnvironmentDataInfo*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_6EB41FA6FC12E24C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6EB41FA6FC12E24C_1(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::RPG::GameCore::EnvironmentDataInfo* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::EnvironmentDataInfo*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_6EB41FA6FC12E24C_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::GameObject* Method_1_A64475C51C411FF6(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_A64475C51C411FF6_OFFSET))(this, a1);
	}

	::Class_1_8A6989C352B0F0F0* Method_1_AE0DBCD5BCD90B1A(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_AE0DBCD5BCD90B1A_OFFSET))(this, a1);
	}

	::System::Boolean get_CanLoadStreamingResource()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_GET_CANLOADSTREAMINGRESOURCE_OFFSET))(this);
	}

	::System::Void set_CanLoadStreamingResource(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_SET_CANLOADSTREAMINGRESOURCE_OFFSET))(this, value);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_255811211D98CDCE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_255811211D98CDCE_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF73DC25C3D9547E(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_DF73DC25C3D9547E_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_DISPOSE_OFFSET))(this);
	}

	::System::Void ToHLOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_TOHLOD_OFFSET))(this);
	}

	::System::Void LeaveOutVision()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_LEAVEOUTVISION_OFFSET))(this);
	}

	::System::Void Method_1_3F3693110F25FD62_1(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_3F3693110F25FD62_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Int32 Method_1_D4E1804C25B5032C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_D4E1804C25B5032C_OFFSET))(this, a1);
	}

	::System::Void CheckStreaming(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_CHECKSTREAMING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_7E8FD15DE9AB685F(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_7E8FD15DE9AB685F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_4EFC8421DB9059A5(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_4EFC8421DB9059A5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_90EBA8A351308A02(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_90EBA8A351308A02_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABC8B40DCA6A186F(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_ABC8B40DCA6A186F_OFFSET))(this, a1);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Boolean get_IsPersistentLoaded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_GET_ISPERSISTENTLOADED_OFFSET))(this);
	}

	::System::Void set_IsPersistentLoaded(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_SET_ISPERSISTENTLOADED_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Int32 get_LayerSourceEffectType()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_GET_LAYERSOURCEEFFECTTYPE_OFFSET))(this);
	}

	::System::Void set_LayerSourceEffectType(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_SET_LAYERSOURCEEFFECTTYPE_OFFSET))(this, value);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	static ::System::Boolean Method_1_64F0C85A431FBD69()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_64F0C85A431FBD69_OFFSET))();
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::Class_1_8A6989C352B0F0F0* Method_1_56750A0C1A6E4594(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_56750A0C1A6E4594_OFFSET))(this, a1);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FEF999131EAD8C08(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_FEF999131EAD8C08_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterInstanceToCullingSystem(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET))(this, a1);
	}

	::System::Void _UnRegisterInstanceFromCullingSystem(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_02A67ACF3BCC3ADE(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_02A67ACF3BCC3ADE_OFFSET))(this, a1, a2);
	}

	::System::Boolean InActiveInstance(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_INACTIVEINSTANCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_D55AF99D88788B5F(::Class_1_8A6989C352B0F0F0* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_D55AF99D88788B5F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D89E9B7A3325AE84(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_D89E9B7A3325AE84_OFFSET))(this, a1);
	}

	::System::Void Method_1_8DCD1FEC09DA5176()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_8DCD1FEC09DA5176_OFFSET))(this);
	}

	::System::Void Method_1_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_25EC451C0EA68F53_OFFSET))(this);
	}

	::System::Void Method_1_1FE4DD8CBB24E4D9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_1FE4DD8CBB24E4D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_1_D11981A7B23B56ED(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::Client::OpenWorld::StreamingItemEnableReason a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemEnableReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_D11981A7B23B56ED_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_FA36319A46D72876(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_FA36319A46D72876_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A4414413DE08994(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_1_8A6989C352B0F0F0* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_1A4414413DE08994_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BEFDA8A30C656893(::Class_1_3F28033F34305C46* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_BEFDA8A30C656893_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EC010C7F2D957A68(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_1_8A6989C352B0F0F0* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_EC010C7F2D957A68_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_1DE63FE11FA0D5B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_1DE63FE11FA0D5B4_OFFSET))(this);
	}

	::System::Void Method_1_86DA6A9C666CF918(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_86DA6A9C666CF918_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4F5257BBEC1FBFED(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_4F5257BBEC1FBFED_OFFSET))(this, a1);
	}

	::System::Void Method_1_A65A67AD4D06DB66(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_A65A67AD4D06DB66_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_62AA24C6BF34AC04(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_62AA24C6BF34AC04_OFFSET))(this, a1);
	}

	::System::Void Method_1_03C56FBEC5C889AC(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_03C56FBEC5C889AC_OFFSET))(this, a1);
	}

	::System::Void Method_1_4F5257BBEC1FBFED_1(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_4F5257BBEC1FBFED_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Boolean get_IsFocus()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_GET_ISFOCUS_OFFSET))(this);
	}

	::System::Void set_IsFocus(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_SET_ISFOCUS_OFFSET))(this, value);
	}

	::System::Int32 GetItemLodLevel(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::RPG::Client::OpenWorld::StreamingLayerDetail* Method_1_35DD5E9922E078B2()
	{
		return ((::RPG::Client::OpenWorld::StreamingLayerDetail*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_35DD5E9922E078B2_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::RPG::GameCore::StreamingLayerType Method_1_9617F67032BC6735()
	{
		return ((::RPG::GameCore::StreamingLayerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_9617F67032BC6735_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_9AA4014B2568687E(::Class_1_DE4C6B309308A230* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_9AA4014B2568687E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Collections::Pooled::PooledList_1<::RPG::Client::OpenWorld::StreamingItemData*>* Method_1_7CCF26DCE6CE0D45(::RPG::Client::OpenWorld::Volume* a1, ::System::Boolean a2)
	{
		return ((::Collections::Pooled::PooledList_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_7CCF26DCE6CE0D45_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3DF018E49E922C69(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_3DF018E49E922C69_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_822031E522673D19(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_822031E522673D19_OFFSET))(this, a1);
	}

	::System::Void Method_1_B39416EBE5B2947C(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_B39416EBE5B2947C_OFFSET))(this, a1);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_DCDCD984F3A05F38(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_DCDCD984F3A05F38_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5A6EDA618381B719(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_5A6EDA618381B719_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_336BBA1F27BAEEE0(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_336BBA1F27BAEEE0_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_1_D489F3D943173A56(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_D489F3D943173A56_OFFSET))(this, a1);
	}
};
