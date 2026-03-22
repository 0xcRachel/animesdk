#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StoryLineData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_DAD2109A2D34346D_METHOD_1_5354A13DDABA2EFA_OFFSET UNITYSDK_OFFSET(0x8AC3E90)
#define CLASS_1_DAD2109A2D34346D_METHOD_1_DB5D297A176C2473_OFFSET UNITYSDK_OFFSET(0x8AC3E30)
#define CLASS_1_DAD2109A2D34346D__CTOR_OFFSET UNITYSDK_OFFSET(0x8AC3D00)

inline static constexpr unsigned int Class_1_DAD2109A2D34346D_TypeDefinitionIndex = 59614;

class Class_1_DAD2109A2D34346D : public ::System::Object
{
public:
	::RPG::Client::StoryLineData* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DAD2109A2D34346D__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DB5D297A176C2473(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DAD2109A2D34346D_METHOD_1_DB5D297A176C2473_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5354A13DDABA2EFA(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DAD2109A2D34346D_METHOD_1_5354A13DDABA2EFA_OFFSET))(this, a1);
	}
};
