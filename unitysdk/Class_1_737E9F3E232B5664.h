#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class IMessage; }
namespace RPG::Client::Promises { class IPromiseInfo; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_1_737E9F3E232B5664_Class_3_B6136C2F127116DF;

#define CLASS_1_737E9F3E232B5664_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89BFCC0)
#define CLASS_1_737E9F3E232B5664__CTOR_OFFSET UNITYSDK_OFFSET(0x89BFDC0)

inline static constexpr unsigned int Class_1_737E9F3E232B5664_TypeDefinitionIndex = 37595;

class Class_1_737E9F3E232B5664 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::RPG::Client::Promises::IPromiseInfo*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_737E9F3E232B5664__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_737E9F3E232B5664_DISPOSE_OFFSET))(this);
	}
};
