#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarArchiveEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ECD29BD9BF5DE389_METHOD_1_07DF4E318989560B_OFFSET UNITYSDK_OFFSET(0x10247DF0)
#define CLASS_1_ECD29BD9BF5DE389_METHOD_1_656BB9C5A28124FE_OFFSET UNITYSDK_OFFSET(0x10248300)
#define CLASS_1_ECD29BD9BF5DE389_METHOD_1_E5D8558AA4DA1C00_OFFSET UNITYSDK_OFFSET(0x102478F0)
#define CLASS_1_ECD29BD9BF5DE389_METHOD_1_E9748B4B562551F9_OFFSET UNITYSDK_OFFSET(0x10247CF0)
#define CLASS_1_ECD29BD9BF5DE389_METHOD_1_F19797CE7029EBDB_OFFSET UNITYSDK_OFFSET(0x10247A60)

inline static constexpr unsigned int Class_1_ECD29BD9BF5DE389_TypeDefinitionIndex = 49575;

class Class_1_ECD29BD9BF5DE389 : public ::System::Object
{
public:
	static ::System::Void Method_1_E5D8558AA4DA1C00(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ECD29BD9BF5DE389_METHOD_1_E5D8558AA4DA1C00_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F19797CE7029EBDB(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ECD29BD9BF5DE389_METHOD_1_F19797CE7029EBDB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E9748B4B562551F9(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ECD29BD9BF5DE389_METHOD_1_E9748B4B562551F9_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_07DF4E318989560B(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ECD29BD9BF5DE389_METHOD_1_07DF4E318989560B_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::AvatarArchiveEntry*>* Method_1_656BB9C5A28124FE()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarArchiveEntry*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECD29BD9BF5DE389_METHOD_1_656BB9C5A28124FE_OFFSET))();
	}
};
