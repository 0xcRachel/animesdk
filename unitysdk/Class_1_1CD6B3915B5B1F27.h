#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyLineDirectionEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1CD6B3915B5B1F27_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x943D5D0)
#define CLASS_1_1CD6B3915B5B1F27__CTOR_OFFSET UNITYSDK_OFFSET(0x943D700)

inline static constexpr unsigned int Class_1_1CD6B3915B5B1F27_TypeDefinitionIndex = 49452;

class Class_1_1CD6B3915B5B1F27 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::AlleyLineDirectionEnum>* Field_1_6; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_3; // 0x28
	::System::UInt32 Field_1_0; // 0x30
	::System::UInt32 Field_1_2; // 0x34
	::System::UInt32 Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CD6B3915B5B1F27__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CD6B3915B5B1F27_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}
};
