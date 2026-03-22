#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_55;
class Class_1_1B9BBF1B9A8CC806;
class Class_1_B6E7D41F9A5F8DB4;
class Class_1_BF97F7C8B9F61CCF;
class Class_1_E61B6BD5F01F8A04;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }

#define CLASS_1_AB19097CB5079A1C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E208F0)
#define CLASS_1_AB19097CB5079A1C_METHOD_1_51E2051F9A44A10F_OFFSET UNITYSDK_OFFSET(0x15E1E710)
#define CLASS_1_AB19097CB5079A1C_METHOD_1_91C23D9FBADDD801_OFFSET UNITYSDK_OFFSET(0x15E1F370)
#define CLASS_1_AB19097CB5079A1C_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x15E1E5B0)
#define CLASS_1_AB19097CB5079A1C_METHOD_1_9F9809DF5AED58E5_OFFSET UNITYSDK_OFFSET(0x15E1F2A0)
#define CLASS_1_AB19097CB5079A1C_METHOD_1_A053F9BF40FAA5F0_OFFSET UNITYSDK_OFFSET(0x15E1EEE0)
#define CLASS_1_AB19097CB5079A1C_METHOD_1_B325FC876562A5C3_OFFSET UNITYSDK_OFFSET(0x15E1E810)
#define CLASS_1_AB19097CB5079A1C_METHOD_1_CB183F6576A61610_OFFSET UNITYSDK_OFFSET(0x15E1EA80)
#define CLASS_1_AB19097CB5079A1C_METHOD_1_EB7282B6745B4611_OFFSET UNITYSDK_OFFSET(0x15E1F630)
#define CLASS_1_AB19097CB5079A1C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E1E600)

inline static constexpr unsigned int Class_1_AB19097CB5079A1C_TypeDefinitionIndex = 31252;

class Class_1_AB19097CB5079A1C : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_5 = 0x10; // 0x0
	// static const ::System::UInt32 Field_1_6 = 0x10; // 0x0
	::Class_1_B6E7D41F9A5F8DB4* Field_1_4; // 0x10
	::Class_1_1B9BBF1B9A8CC806* Field_1_3; // 0x18
	::Il2CppArray<::System::Byte>* Field_1_7; // 0x20
	::System::String* Field_1_0; // 0x28
	::Il2CppArray<::Class_0_16E4307DCC419505_55*>* Field_1_2; // 0x30
	::System::Boolean Field_1_1; // 0x38

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt16 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_AB19097CB5079A1C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB19097CB5079A1C_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>* Method_1_51E2051F9A44A10F()
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB19097CB5079A1C_METHOD_1_51E2051F9A44A10F_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>* Method_1_B325FC876562A5C3(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB19097CB5079A1C_METHOD_1_B325FC876562A5C3_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_E61B6BD5F01F8A04*>* Method_1_CB183F6576A61610(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_E61B6BD5F01F8A04*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB19097CB5079A1C_METHOD_1_CB183F6576A61610_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_BF97F7C8B9F61CCF*>* Method_1_A053F9BF40FAA5F0(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_BF97F7C8B9F61CCF*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB19097CB5079A1C_METHOD_1_A053F9BF40FAA5F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F9809DF5AED58E5(::System::IO::BinaryWriter* a1, ::System::UInt16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_AB19097CB5079A1C_METHOD_1_9F9809DF5AED58E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_91C23D9FBADDD801(::System::IO::BinaryWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + CLASS_1_AB19097CB5079A1C_METHOD_1_91C23D9FBADDD801_OFFSET))(this, a1);
	}

	::System::Void Method_1_EB7282B6745B4611()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB19097CB5079A1C_METHOD_1_EB7282B6745B4611_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB19097CB5079A1C_DISPOSE_OFFSET))(this);
	}
};
