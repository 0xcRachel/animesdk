#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { template <typename T1, typename T2, typename T3> class AsymmetricKeyHashTable_3_Entry; }
namespace System { class String; }

namespace MessagePack::Internal
{
	inline static constexpr unsigned int AsymmetricKeyHashTable_3_Entry_TypeDefinitionIndex = 9573;

	template <typename TKey1, typename TKey2, typename TValue>
	class AsymmetricKeyHashTable_3_Entry : public ::System::Object
	{
	public:
		TKey1 Key; // 0x0
		TValue Value; // 0x0
		::System::Int32 Hash; // 0x0
		::MessagePack::Internal::AsymmetricKeyHashTable_3_Entry<TKey1, TKey2, TValue>* Next; // 0x0
	};
}
