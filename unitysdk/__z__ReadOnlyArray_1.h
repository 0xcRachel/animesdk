#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

inline static constexpr unsigned int __z__ReadOnlyArray_1_TypeDefinitionIndex = 9897;

template <typename T>
class __z__ReadOnlyArray_1 : public ::System::Object
{
public:
	::Il2CppArray<T>* _items; // 0x0
};
