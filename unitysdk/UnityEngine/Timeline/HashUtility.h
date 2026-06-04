#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_1_OFFSET UNITYSDK_OFFSET(0x18B9AE70)
#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_2_OFFSET UNITYSDK_OFFSET(0x18B9AEB0)
#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_3_OFFSET UNITYSDK_OFFSET(0x18B9AF00)
#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_4_OFFSET UNITYSDK_OFFSET(0x18B9AF60)
#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_5_OFFSET UNITYSDK_OFFSET(0x18B9AFE0)
#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_6_OFFSET UNITYSDK_OFFSET(0x18B9B070)
#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_OFFSET UNITYSDK_OFFSET(0x18B8E7C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int HashUtility_TypeDefinitionIndex = 35936;

	class HashUtility : public ::System::Object
	{
	public:
		static ::System::Int32 CombineHash(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_OFFSET))(a1, a2);
		}

		static ::System::Int32 CombineHash_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CombineHash_2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 CombineHash_3(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 CombineHash_4(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_4_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 CombineHash_5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_5_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Int32 CombineHash_6(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_6_OFFSET))(a1);
		}
	};
}
