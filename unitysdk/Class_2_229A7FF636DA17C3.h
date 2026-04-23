#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_357673ADDEE88E8E.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_15.h"
#include "unitysdk/Enum_3_96F6662CA3713095_24.h"

class Class_1_7FF19F6206AF6DD7_39;
class Class_1_963E317C37FB5E9A_26;
class Class_1_B5A923E6D262DF9D_3;
class Class_1_D17272E82AE804C2_747;
class Class_1_D17272E82AE804C2_748;
namespace RPG::Client { class RelicPresetModel; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_229A7FF636DA17C3_METHOD_2_20C92412A64696F1_OFFSET UNITYSDK_OFFSET(0xD7D5E90)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_2486056CA4C5FCC1_OFFSET UNITYSDK_OFFSET(0xD7D5A70)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_2A6C0ECB8826F705_OFFSET UNITYSDK_OFFSET(0xD7D57A0)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_6896C9FB3F6EC8CB_OFFSET UNITYSDK_OFFSET(0xD7D5C00)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_AE9108BBF823EC51_OFFSET UNITYSDK_OFFSET(0xD7D53A0)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_CAABB065325F1F7F_OFFSET UNITYSDK_OFFSET(0xD7D5490)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_D2B81771134FD5B5_OFFSET UNITYSDK_OFFSET(0xD7D5670)
#define CLASS_2_229A7FF636DA17C3__CTOR_OFFSET UNITYSDK_OFFSET(0xD7D5330)
#define CLASS_2_229A7FF636DA17C3__SENDADDRELICPRESETPLAN_B__2_0_OFFSET UNITYSDK_OFFSET(0xD7D6030)
#define CLASS_2_229A7FF636DA17C3__SENDGETRELICPRESETPLAN_B__1_0_OFFSET UNITYSDK_OFFSET(0xD7D5F60)

inline static constexpr unsigned int Class_2_229A7FF636DA17C3_TypeDefinitionIndex = 61576;

class Class_2_229A7FF636DA17C3 : public ::Class_1_357673ADDEE88E8E
{
public:
	::RPG::Client::RelicPresetModel* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::Client::RelicPresetModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicPresetModel*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_7FF19F6206AF6DD7_39*>* Method_2_AE9108BBF823EC51(::System::UInt32 a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_7FF19F6206AF6DD7_39*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_AE9108BBF823EC51_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_963E317C37FB5E9A_26*>* Method_2_CAABB065325F1F7F(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::String* a3, ::Enum_3_71AA90D596A09AC8_15 a4, ::Enum_3_96F6662CA3713095_24 a5)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_963E317C37FB5E9A_26*>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::String*, ::Enum_3_71AA90D596A09AC8_15, ::Enum_3_96F6662CA3713095_24))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_CAABB065325F1F7F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_D17272E82AE804C2_747*>* Method_2_D2B81771134FD5B5(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_D17272E82AE804C2_747*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_D2B81771134FD5B5_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_B5A923E6D262DF9D_3*>* Method_2_2A6C0ECB8826F705(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::Enum_3_71AA90D596A09AC8_15 a4, ::Enum_3_96F6662CA3713095_24 a5)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_B5A923E6D262DF9D_3*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_71AA90D596A09AC8_15, ::Enum_3_96F6662CA3713095_24))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_2A6C0ECB8826F705_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_B5A923E6D262DF9D_3*>* Method_2_2486056CA4C5FCC1(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_B5A923E6D262DF9D_3*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_2486056CA4C5FCC1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6896C9FB3F6EC8CB(::System::UInt32 a1, ::Class_1_B5A923E6D262DF9D_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_B5A923E6D262DF9D_3*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_6896C9FB3F6EC8CB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_20C92412A64696F1(::System::UInt16 a1, ::Class_1_D17272E82AE804C2_748* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_D17272E82AE804C2_748*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_20C92412A64696F1_OFFSET))(this, a1, a2);
	}

	::Class_1_7FF19F6206AF6DD7_39* _SendGetRelicPresetPlan_b__1_0(::Class_1_7FF19F6206AF6DD7_39* rsp)
	{
		return ((::Class_1_7FF19F6206AF6DD7_39*(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_39*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3__SENDGETRELICPRESETPLAN_B__1_0_OFFSET))(this, rsp);
	}

	::Class_1_963E317C37FB5E9A_26* _SendAddRelicPresetPlan_b__2_0(::Class_1_963E317C37FB5E9A_26* rsp)
	{
		return ((::Class_1_963E317C37FB5E9A_26*(*)(::PVOID, ::Class_1_963E317C37FB5E9A_26*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3__SENDADDRELICPRESETPLAN_B__2_0_OFFSET))(this, rsp);
	}
};
