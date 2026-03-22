#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_55;
class Class_1_1B9BBF1B9A8CC806;
class Class_1_B6E7D41F9A5F8DB4_1;
class Class_1_BF97F7C8B9F61CCF;
class Class_1_E61B6BD5F01F8A04;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define CLASS_1_28B46EA8100D29E7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E08410)
#define CLASS_1_28B46EA8100D29E7_METHOD_1_0261A5BE648E23F2_OFFSET UNITYSDK_OFFSET(0x15E08110)
#define CLASS_1_28B46EA8100D29E7_METHOD_1_2306442DD3363ADB_OFFSET UNITYSDK_OFFSET(0x15E3B050)
#define CLASS_1_28B46EA8100D29E7_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x15E3A8C0)
#define CLASS_1_28B46EA8100D29E7_METHOD_1_9F9809DF5AED58E5_OFFSET UNITYSDK_OFFSET(0x15E3AF80)
#define CLASS_1_28B46EA8100D29E7_METHOD_1_A053F9BF40FAA5F0_OFFSET UNITYSDK_OFFSET(0x15E3AC70)
#define CLASS_1_28B46EA8100D29E7_METHOD_1_B29205EE7F7B640C_OFFSET UNITYSDK_OFFSET(0x15E3B390)
#define CLASS_1_28B46EA8100D29E7_METHOD_1_CB183F6576A61610_OFFSET UNITYSDK_OFFSET(0x15E3A910)
#define CLASS_1_28B46EA8100D29E7_METHOD_1_D38C35AD92DD9A26_OFFSET UNITYSDK_OFFSET(0x15E388F0)
#define CLASS_1_28B46EA8100D29E7__CTOR_OFFSET UNITYSDK_OFFSET(0x15E07FA0)

inline static constexpr unsigned int Class_1_28B46EA8100D29E7_TypeDefinitionIndex = 31253;

class Class_1_28B46EA8100D29E7 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_6 = 0x10; // 0x0
	// static const ::System::UInt32 Field_1_7 = 0x10; // 0x0
	::Il2CppArray<::System::Byte>* Field_1_8; // 0x10
	::System::String* Field_1_0; // 0x18
	::Il2CppArray<::Class_0_16E4307DCC419505_55*>* Field_1_2; // 0x20
	::Class_1_B6E7D41F9A5F8DB4_1* Field_1_4; // 0x28
	::Class_1_1B9BBF1B9A8CC806* Field_1_3; // 0x30
	::System::IO::MemoryStream* Field_1_5; // 0x38
	::System::Boolean Field_1_1; // 0x40

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt16 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_28B46EA8100D29E7__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28B46EA8100D29E7_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4_1*>* Method_1_D38C35AD92DD9A26()
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28B46EA8100D29E7_METHOD_1_D38C35AD92DD9A26_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4_1*>* Method_1_0261A5BE648E23F2(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4_1*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_28B46EA8100D29E7_METHOD_1_0261A5BE648E23F2_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_E61B6BD5F01F8A04*>* Method_1_CB183F6576A61610(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_E61B6BD5F01F8A04*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_28B46EA8100D29E7_METHOD_1_CB183F6576A61610_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_BF97F7C8B9F61CCF*>* Method_1_A053F9BF40FAA5F0(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_BF97F7C8B9F61CCF*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_28B46EA8100D29E7_METHOD_1_A053F9BF40FAA5F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F9809DF5AED58E5(::System::IO::BinaryWriter* a1, ::System::UInt16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_28B46EA8100D29E7_METHOD_1_9F9809DF5AED58E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2306442DD3363ADB(::System::IO::BinaryWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + CLASS_1_28B46EA8100D29E7_METHOD_1_2306442DD3363ADB_OFFSET))(this, a1);
	}

	::System::Void Method_1_B29205EE7F7B640C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28B46EA8100D29E7_METHOD_1_B29205EE7F7B640C_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28B46EA8100D29E7_DISPOSE_OFFSET))(this);
	}
};
