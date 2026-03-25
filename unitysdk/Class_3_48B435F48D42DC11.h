#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AF817EE146E8D611.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_02E020BDBD29C169;
class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_56FF45D7B2C55655;
class Class_1_8A6989C352B0F0F0;
class Class_1_DE4C6B309308A230;
class Class_2_5A5C70F7A3C39C00;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::GameCore { class HoyoTag; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_48B435F48D42DC11_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105E5030)
#define CLASS_3_48B435F48D42DC11_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x105E7AA0)
#define CLASS_3_48B435F48D42DC11_METHOD_3_1FFB392329DBE0D7_OFFSET UNITYSDK_OFFSET(0x105EB140)
#define CLASS_3_48B435F48D42DC11_METHOD_3_218DF842B2B9897B_OFFSET UNITYSDK_OFFSET(0x105EBA90)
#define CLASS_3_48B435F48D42DC11_METHOD_3_26FDBB5C9647101B_OFFSET UNITYSDK_OFFSET(0x105E9D70)
#define CLASS_3_48B435F48D42DC11_METHOD_3_2D971B358CE12705_OFFSET UNITYSDK_OFFSET(0x105EB5C0)
#define CLASS_3_48B435F48D42DC11_METHOD_3_32274F151B7AB84C_OFFSET UNITYSDK_OFFSET(0x105E4E40)
#define CLASS_3_48B435F48D42DC11_METHOD_3_32B25078002CC701_OFFSET UNITYSDK_OFFSET(0x105EBBB0)
#define CLASS_3_48B435F48D42DC11_METHOD_3_37AC6A9F6F6C24DF_OFFSET UNITYSDK_OFFSET(0x105E76B0)
#define CLASS_3_48B435F48D42DC11_METHOD_3_37D4A49951A1616C_OFFSET UNITYSDK_OFFSET(0x105EB5D0)
#define CLASS_3_48B435F48D42DC11_METHOD_3_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x105EB090)
#define CLASS_3_48B435F48D42DC11_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x105EB040)
#define CLASS_3_48B435F48D42DC11_METHOD_3_55C4FBBD2E025919_OFFSET UNITYSDK_OFFSET(0x105E70A0)
#define CLASS_3_48B435F48D42DC11_METHOD_3_5E0DBF36D6013B7C_OFFSET UNITYSDK_OFFSET(0x105E7D60)
#define CLASS_3_48B435F48D42DC11_METHOD_3_6B96EEE7388AD010_OFFSET UNITYSDK_OFFSET(0x105E5F10)
#define CLASS_3_48B435F48D42DC11_METHOD_3_899DBE3B70E727AA_OFFSET UNITYSDK_OFFSET(0x105E63E0)
#define CLASS_3_48B435F48D42DC11_METHOD_3_8A3813BAED267AA9_OFFSET UNITYSDK_OFFSET(0x105E5180)
#define CLASS_3_48B435F48D42DC11_METHOD_3_8D9C3A9794513792_OFFSET UNITYSDK_OFFSET(0x105EBA60)
#define CLASS_3_48B435F48D42DC11_METHOD_3_927F285F4427EC4B_OFFSET UNITYSDK_OFFSET(0x105E8DB0)
#define CLASS_3_48B435F48D42DC11_METHOD_3_9E9C8BD1128A2E9D_OFFSET UNITYSDK_OFFSET(0x105EB0E0)
#define CLASS_3_48B435F48D42DC11_METHOD_3_A7297CA88DE22D58_OFFSET UNITYSDK_OFFSET(0x105EBA70)
#define CLASS_3_48B435F48D42DC11_METHOD_3_B5C1A24BAF3E28F3_OFFSET UNITYSDK_OFFSET(0x105E71D0)
#define CLASS_3_48B435F48D42DC11_METHOD_3_B7D27E48AC9FDBE8_OFFSET UNITYSDK_OFFSET(0x105E7FE0)
#define CLASS_3_48B435F48D42DC11_METHOD_3_B8BCCD47F169CB0E_OFFSET UNITYSDK_OFFSET(0x105E55F0)
#define CLASS_3_48B435F48D42DC11_METHOD_3_B97CDACD9370E783_OFFSET UNITYSDK_OFFSET(0x105EB590)
#define CLASS_3_48B435F48D42DC11_METHOD_3_BE15EA945DBEABCA_OFFSET UNITYSDK_OFFSET(0x105EA880)
#define CLASS_3_48B435F48D42DC11_METHOD_3_BF7F293AEAA5E93F_OFFSET UNITYSDK_OFFSET(0x105EB5A0)
#define CLASS_3_48B435F48D42DC11_METHOD_3_C234B80C3BA4FD21_OFFSET UNITYSDK_OFFSET(0x105EBA50)
#define CLASS_3_48B435F48D42DC11_METHOD_3_C4919AE7547B2FDE_OFFSET UNITYSDK_OFFSET(0x105E6CF0)
#define CLASS_3_48B435F48D42DC11_METHOD_3_C8749FFF1E7A9767_OFFSET UNITYSDK_OFFSET(0x105E7600)
#define CLASS_3_48B435F48D42DC11_METHOD_3_CC854FDCC62FD587_OFFSET UNITYSDK_OFFSET(0x105EBA80)
#define CLASS_3_48B435F48D42DC11_METHOD_3_CD115B6A39AEF6B6_OFFSET UNITYSDK_OFFSET(0x105EB5B0)
#define CLASS_3_48B435F48D42DC11_METHOD_3_D12AC7EA4A5509AF_OFFSET UNITYSDK_OFFSET(0x105EB200)
#define CLASS_3_48B435F48D42DC11_METHOD_3_D2529F6A36AC08B4_OFFSET UNITYSDK_OFFSET(0x105EBBA0)
#define CLASS_3_48B435F48D42DC11_METHOD_3_DA1F7365DD83C97E_OFFSET UNITYSDK_OFFSET(0x105E9CC0)
#define CLASS_3_48B435F48D42DC11_METHOD_3_DCF93F6D70149715_OFFSET UNITYSDK_OFFSET(0x105E4F50)
#define CLASS_3_48B435F48D42DC11_METHOD_3_E8077BB5F63D9F47_OFFSET UNITYSDK_OFFSET(0x105EB0F0)
#define CLASS_3_48B435F48D42DC11_METHOD_3_E9448F0B44D232F6_OFFSET UNITYSDK_OFFSET(0x105E7580)
#define CLASS_3_48B435F48D42DC11_METHOD_3_F64CDAC64E922215_OFFSET UNITYSDK_OFFSET(0x105E7450)
#define CLASS_3_48B435F48D42DC11_METHOD_3_FA990B921FAC14EA_OFFSET UNITYSDK_OFFSET(0x105E9020)
#define CLASS_3_48B435F48D42DC11__CCTOR_OFFSET UNITYSDK_OFFSET(0x105EB100)
#define CLASS_3_48B435F48D42DC11__CTOR_OFFSET UNITYSDK_OFFSET(0x105E4680)
#define CLASS_3_48B435F48D42DC11___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105EB130)
#define CLASS_3_48B435F48D42DC11___IFIXBASEPROXY_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x105EBA40)

inline static constexpr unsigned int Class_3_48B435F48D42DC11_TypeDefinitionIndex = 60490;

class Class_3_48B435F48D42DC11 : public ::Class_2_AF817EE146E8D611
{
public:
	static ::System::Boolean* StaticGet_Field_3_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_48B435F48D42DC11_TypeDefinitionIndex)->GetStaticField(0xB320);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_3_0()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_3_48B435F48D42DC11_TypeDefinitionIndex)->GetStaticField(0xB324);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Field_3_5; // 0x1B0
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_5A5C70F7A3C39C00*>*>* Field_3_6; // 0x1B8
	::System::Collections::Generic::List_1<::System::String*>* Field_3_4; // 0x1C0
	::UnityEngine::Vector3 Field_3_1; // 0x1C8
	::System::Boolean Field_3_3; // 0x1D4

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_56FF45D7B2C55655* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_56FF45D7B2C55655*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11__CCTOR_OFFSET))();
	}

	::System::Void Method_3_32274F151B7AB84C(::RPG::GameCore::HoyoTag* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_32274F151B7AB84C_OFFSET))(this, a1);
	}

	::System::Void Method_3_DCF93F6D70149715(::RPG::GameCore::HoyoTag* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_DCF93F6D70149715_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_B8BCCD47F169CB0E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_B8BCCD47F169CB0E_OFFSET))(this, a1);
	}

	::System::Void Method_3_6B96EEE7388AD010(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_6B96EEE7388AD010_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_8A3813BAED267AA9(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_8A3813BAED267AA9_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_55C4FBBD2E025919(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_55C4FBBD2E025919_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_B5C1A24BAF3E28F3(::Class_1_8A6989C352B0F0F0* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_B5C1A24BAF3E28F3_OFFSET))(this, a1, a2);
	}

	::Class_1_8A6989C352B0F0F0* Method_3_F64CDAC64E922215(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_F64CDAC64E922215_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9448F0B44D232F6(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_1_8A6989C352B0F0F0* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_E9448F0B44D232F6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_C8749FFF1E7A9767(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_1_8A6989C352B0F0F0* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_C8749FFF1E7A9767_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_3_37AC6A9F6F6C24DF(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_37AC6A9F6F6C24DF_OFFSET))(this, a1, a2);
	}

	::System::Boolean InActiveInstance(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_INACTIVEINSTANCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_5E0DBF36D6013B7C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_5E0DBF36D6013B7C_OFFSET))(this, a1);
	}

	::System::Void Method_3_B7D27E48AC9FDBE8(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_B7D27E48AC9FDBE8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_927F285F4427EC4B(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_927F285F4427EC4B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_FA990B921FAC14EA(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_FA990B921FAC14EA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_3_DA1F7365DD83C97E(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_DA1F7365DD83C97E_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_C4919AE7547B2FDE(::Class_2_5A5C70F7A3C39C00* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_5A5C70F7A3C39C00*))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_C4919AE7547B2FDE_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_26FDBB5C9647101B(::Class_1_DE4C6B309308A230* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_26FDBB5C9647101B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_3_899DBE3B70E727AA(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::Class_1_DE4C6B309308A230* a3, ::System::Boolean a4)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_899DBE3B70E727AA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_BE15EA945DBEABCA(::Class_1_02E020BDBD29C169* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_02E020BDBD29C169*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_BE15EA945DBEABCA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_3_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Method_3_9E9C8BD1128A2E9D()
	{
		return ((::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_9E9C8BD1128A2E9D_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Method_3_E8077BB5F63D9F47()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_E8077BB5F63D9F47_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_1FFB392329DBE0D7(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_1FFB392329DBE0D7_OFFSET))(this, P0);
	}

	::System::Boolean Method_3_D12AC7EA4A5509AF(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_D12AC7EA4A5509AF_OFFSET))(this, P0);
	}

	::System::Boolean Method_3_B97CDACD9370E783(::Class_1_8A6989C352B0F0F0* P0, ::System::Int32 P1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_B97CDACD9370E783_OFFSET))(this, P0, P1);
	}

	::Class_1_8A6989C352B0F0F0* Method_3_BF7F293AEAA5E93F(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_BF7F293AEAA5E93F_OFFSET))(this, P0);
	}

	::System::Void Method_3_CD115B6A39AEF6B6(::RPG::Client::OpenWorld::StreamingItemData* P0, ::Class_1_8A6989C352B0F0F0* P1, ::System::Int32 P2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_CD115B6A39AEF6B6_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_3_2D971B358CE12705(::RPG::Client::OpenWorld::StreamingItemData* P0, ::Class_1_8A6989C352B0F0F0* P1, ::System::Int32 P2, ::System::Int32 P3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_2D971B358CE12705_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Boolean Method_3_37D4A49951A1616C(::RPG::Client::OpenWorld::StreamingItemData* P0, ::System::Boolean P1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_37D4A49951A1616C_OFFSET))(this, P0, P1);
	}

	::System::Boolean __iFixBaseProxy_InActiveInstance(::Class_1_8A6989C352B0F0F0* P0, ::System::Boolean P1, ::System::Boolean P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11___IFIXBASEPROXY_INACTIVEINSTANCE_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_3_C234B80C3BA4FD21(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_C234B80C3BA4FD21_OFFSET))(this, P0);
	}

	::System::Void Method_3_8D9C3A9794513792(::Class_1_3F28033F34305C46* P0, ::Class_1_DE4C6B309308A230* P1, ::System::Boolean P2, ::System::Single P3, ::System::Boolean P4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_8D9C3A9794513792_OFFSET))(this, P0, P1, P2, P3, P4);
	}

	::System::Void Method_3_A7297CA88DE22D58(::Class_1_DE4C6B309308A230* P0, ::System::Boolean P1, ::System::Single P2, ::Class_1_3F28033F34305C46* P3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_A7297CA88DE22D58_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Void Method_3_CC854FDCC62FD587(::Class_1_DE4C6B309308A230* P0, ::System::Boolean P1, ::System::Single P2, ::Class_1_3F28033F34305C46* P3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_CC854FDCC62FD587_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Int32 Method_3_218DF842B2B9897B(::Class_1_DE4C6B309308A230* P0, ::RPG::Client::OpenWorld::StreamingItemData* P1, ::RPG::Client::OpenWorld::StreamingItemData* P2, ::System::Int32 P3, ::System::Boolean P4)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_218DF842B2B9897B_OFFSET))(this, P0, P1, P2, P3, P4);
	}

	::System::Int32 Method_3_D2529F6A36AC08B4(::RPG::Client::OpenWorld::StreamingItemData* P0, ::RPG::Client::OpenWorld::StreamingItemData* P1, ::Class_1_DE4C6B309308A230* P2, ::System::Boolean P3)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_D2529F6A36AC08B4_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Void Method_3_32B25078002CC701(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11_METHOD_3_32B25078002CC701_OFFSET))(this, P0);
	}
};
