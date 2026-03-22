#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

class Class_1_9AAC3BB4FD7CE6FE;
class Class_1_ACC999A332464440;
class Class_1_DE5041E302ADB1E0;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class LevelPedestrianV2Info; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class AsyncNavMeshSimulator; }

#define CLASS_1_BBBB808191126E3B_GET_ALLOWAUTORESPAWN_OFFSET UNITYSDK_OFFSET(0x10C29AC0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_0AB718BEE9EA06D7_1_OFFSET UNITYSDK_OFFSET(0x10C27160)
#define CLASS_1_BBBB808191126E3B_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x10C27100)
#define CLASS_1_BBBB808191126E3B_METHOD_1_1355E0FFDACE8C93_OFFSET UNITYSDK_OFFSET(0x10C28C30)
#define CLASS_1_BBBB808191126E3B_METHOD_1_1441C65D1B81B844_OFFSET UNITYSDK_OFFSET(0x10C29720)
#define CLASS_1_BBBB808191126E3B_METHOD_1_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0x10C28560)
#define CLASS_1_BBBB808191126E3B_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x10C28CF0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10C27060)
#define CLASS_1_BBBB808191126E3B_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10C28B60)
#define CLASS_1_BBBB808191126E3B_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x10C28BB0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_495B51F3EF57F06C_OFFSET UNITYSDK_OFFSET(0x10C27890)
#define CLASS_1_BBBB808191126E3B_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x10C299D0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_6815AD8D97959763_OFFSET UNITYSDK_OFFSET(0x10C29CD0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_6AF8CC03883E6064_OFFSET UNITYSDK_OFFSET(0x10C29430)
#define CLASS_1_BBBB808191126E3B_METHOD_1_7206DC8F66A4D2A8_1_OFFSET UNITYSDK_OFFSET(0x10C29060)
#define CLASS_1_BBBB808191126E3B_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x10C28F40)
#define CLASS_1_BBBB808191126E3B_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x10C28850)
#define CLASS_1_BBBB808191126E3B_METHOD_1_7B7F0EB7229C08F9_OFFSET UNITYSDK_OFFSET(0x10C29FD0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_940FD68EFA4D5A3C_OFFSET UNITYSDK_OFFSET(0x10C271C0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x10C27090)
#define CLASS_1_BBBB808191126E3B_METHOD_1_9F60C2A31E3F634D_OFFSET UNITYSDK_OFFSET(0x10C28D40)
#define CLASS_1_BBBB808191126E3B_METHOD_1_A3E94568D5184024_OFFSET UNITYSDK_OFFSET(0x10C29970)
#define CLASS_1_BBBB808191126E3B_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10C277F0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_C03A1E09069749C9_OFFSET UNITYSDK_OFFSET(0x10C29A20)
#define CLASS_1_BBBB808191126E3B_METHOD_1_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x10C292D0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_C63C6A5A3A58FC58_OFFSET UNITYSDK_OFFSET(0x10C288B0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_D571F33748045C95_OFFSET UNITYSDK_OFFSET(0x10C29AE0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_EC28FD7AA4FC3328_OFFSET UNITYSDK_OFFSET(0x10C29BE0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10C29AF0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_F13134015493E97E_OFFSET UNITYSDK_OFFSET(0x10C29180)
#define CLASS_1_BBBB808191126E3B_METHOD_1_F56A23E952AD7DB1_OFFSET UNITYSDK_OFFSET(0x10C27BF0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_F8728F22A9AA3720_OFFSET UNITYSDK_OFFSET(0x10C29B00)
#define CLASS_1_BBBB808191126E3B_SET_ALLOWAUTORESPAWN_OFFSET UNITYSDK_OFFSET(0x10C29AD0)
#define CLASS_1_BBBB808191126E3B__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C2A2C0)
#define CLASS_1_BBBB808191126E3B__CTOR_OFFSET UNITYSDK_OFFSET(0x10C2A100)

inline static constexpr unsigned int Class_1_BBBB808191126E3B_TypeDefinitionIndex = 55068;

class Class_1_BBBB808191126E3B : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BBBB808191126E3B_TypeDefinitionIndex)->GetStaticField(0x3150);
	}
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BBBB808191126E3B_TypeDefinitionIndex)->GetStaticField(0x3154);
	}
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BBBB808191126E3B_TypeDefinitionIndex)->GetStaticField(0x3158);
	}
	::RPG::Client::RPGProfilerMarker* Field_1_12; // 0x10
	::RPG::Client::MapDef* Field_1_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_ACC999A332464440*>* Field_1_11; // 0x20
	::Il2CppArray<::Class_1_9AAC3BB4FD7CE6FE*>* Field_1_14; // 0x28
	::UnityEngine::AI::AsyncNavMeshSimulator* Field_1_8; // 0x30
	::System::Collections::Generic::Dictionary_2<::Class_1_9AAC3BB4FD7CE6FE*, ::System::Int32>* Field_1_13; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_9; // 0x40
	::System::Collections::Generic::List_1<::Class_1_DE5041E302ADB1E0*>* Field_1_10; // 0x48
	::System::Boolean Field_1_4; // 0x50
	::System::Boolean _AllowAutoRespawn_k__BackingField; // 0x51
	::System::UInt32 Field_1_6; // 0x54
	::System::Int32 Field_1_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_0AB718BEE9EA06D7_1(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_0AB718BEE9EA06D7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_940FD68EFA4D5A3C(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_940FD68EFA4D5A3C_OFFSET))(this, a1);
	}

	::System::Void Method_1_28C834B59E1D0120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_28C834B59E1D0120_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_1_C63C6A5A3A58FC58(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_C63C6A5A3A58FC58_OFFSET))(this, a1);
	}

	::System::Void Method_1_1355E0FFDACE8C93(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_1355E0FFDACE8C93_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F60C2A31E3F634D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_9F60C2A31E3F634D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::System::Void Method_1_7206DC8F66A4D2A8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_7206DC8F66A4D2A8_1_OFFSET))(this);
	}

	::System::Void Method_1_F56A23E952AD7DB1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_F56A23E952AD7DB1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F13134015493E97E(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_F13134015493E97E_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_6AF8CC03883E6064(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_6AF8CC03883E6064_OFFSET))(this, a1);
	}

	::System::Void Method_1_1441C65D1B81B844(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_1441C65D1B81B844_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3E94568D5184024(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_A3E94568D5184024_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_1_495B51F3EF57F06C(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_495B51F3EF57F06C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C03A1E09069749C9(::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_C03A1E09069749C9_OFFSET))(this, a1);
	}

	::System::Boolean get_AllowAutoRespawn()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_GET_ALLOWAUTORESPAWN_OFFSET))(this);
	}

	::System::Void set_AllowAutoRespawn(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_SET_ALLOWAUTORESPAWN_OFFSET))(this, value);
	}

	::UnityEngine::AI::AsyncNavMeshSimulator* Method_1_D571F33748045C95()
	{
		return ((::UnityEngine::AI::AsyncNavMeshSimulator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_D571F33748045C95_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::CustomRP::Quality Method_1_F8728F22A9AA3720()
	{
		return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_F8728F22A9AA3720_OFFSET))(this);
	}

	::System::Boolean Method_1_EC28FD7AA4FC3328(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_EC28FD7AA4FC3328_OFFSET))(this, a1);
	}

	::System::Void Method_1_6815AD8D97959763(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_6815AD8D97959763_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B7F0EB7229C08F9(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_7B7F0EB7229C08F9_OFFSET))(this, a1);
	}
};
