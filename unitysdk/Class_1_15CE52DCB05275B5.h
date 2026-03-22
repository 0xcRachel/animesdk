#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
class Class_1_339DD4CB3BD5B3BA;
namespace RPG::Client { class AvatarData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_15CE52DCB05275B5_METHOD_1_499B5D7A3B2CD0B4_OFFSET UNITYSDK_OFFSET(0xCBC39B0)
#define CLASS_1_15CE52DCB05275B5_METHOD_1_A1E7B2CC5EA43D80_OFFSET UNITYSDK_OFFSET(0xCBC3670)
#define CLASS_1_15CE52DCB05275B5__CTOR_OFFSET UNITYSDK_OFFSET(0xCBC3630)

inline static constexpr unsigned int Class_1_15CE52DCB05275B5_TypeDefinitionIndex = 52130;

class Class_1_15CE52DCB05275B5 : public ::System::Object
{
public:
	::Class_1_339DD4CB3BD5B3BA* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15CE52DCB05275B5__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>* Method_1_A1E7B2CC5EA43D80(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_15CE52DCB05275B5_METHOD_1_A1E7B2CC5EA43D80_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_499B5D7A3B2CD0B4(::Class_0_16E4307DCC419505_617* a1, ::Class_0_16E4307DCC419505_617* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_617*, ::Class_0_16E4307DCC419505_617*))((::PBYTE)hIl2Cpp + CLASS_1_15CE52DCB05275B5_METHOD_1_499B5D7A3B2CD0B4_OFFSET))(this, a1, a2);
	}
};
