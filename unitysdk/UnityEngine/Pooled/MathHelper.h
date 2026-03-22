#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_POOLED_MATHHELPER_GETINDEXOFPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x182168F0)
#define UNITYENGINE_POOLED_MATHHELPER_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x182168E0)
#define UNITYENGINE_POOLED_MATHHELPER_NEXTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x182168B0)
#define UNITYENGINE_POOLED_MATHHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18216970)

namespace UnityEngine::Pooled
{
	inline static constexpr unsigned int MathHelper_TypeDefinitionIndex = 4311;

	class MathHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_Log2()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(MathHelper_TypeDefinitionIndex)->GetStaticField(0x19740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_MATHHELPER__CCTOR_OFFSET))();
		}

		static ::System::Int32 NextPowerOfTwo(::System::Int32 number)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_MATHHELPER_NEXTPOWEROFTWO_OFFSET))(number);
		}

		static ::System::Boolean IsPowerOfTwo(::System::Int32 number)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_MATHHELPER_ISPOWEROFTWO_OFFSET))(number);
		}

		static ::System::Int32 GetIndexOfPowerOfTwo(::System::Int32 number1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_MATHHELPER_GETINDEXOFPOWEROFTWO_OFFSET))(number1);
		}
	};
}
