#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { template <typename T1, typename T2, typename T3> class AsymmetricKeyHashTable_3_Entry; }
namespace MessagePack::Internal { template <typename T1, typename T2> class IAsymmetricEqualityComparer_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace MessagePack::Internal
{
	inline static constexpr unsigned int AsymmetricKeyHashTable_3_TypeDefinitionIndex = 9572;

	template <typename TKey1, typename TKey2, typename TValue>
	class AsymmetricKeyHashTable_3 : public ::System::Object
	{
	public:
		::Il2CppArray<::MessagePack::Internal::AsymmetricKeyHashTable_3_Entry<TKey1, TKey2, TValue>*>* buckets; // 0x0
		::System::Int32 size; // 0x0
		::System::Object* writerLock; // 0x0
		::System::Single loadFactor; // 0x0
		::MessagePack::Internal::IAsymmetricEqualityComparer_2<TKey1, TKey2>* comparer; // 0x0
	};
}
