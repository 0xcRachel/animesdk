#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_122;
class Class_1_45666FF47F0D254B;
class Class_1_F236C4DB0600E05D;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class MainMissionRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_289A0264D6E0EB74_METHOD_1_84AB2B26A94ED9E1_OFFSET UNITYSDK_OFFSET(0x109F0930)
#define CLASS_1_289A0264D6E0EB74_METHOD_1_8718C52625BF3B53_OFFSET UNITYSDK_OFFSET(0x109F0790)
#define CLASS_1_289A0264D6E0EB74_METHOD_1_B54D42F5F0BEB432_OFFSET UNITYSDK_OFFSET(0x109F0EF0)
#define CLASS_1_289A0264D6E0EB74_METHOD_1_BA6AD63770851E65_OFFSET UNITYSDK_OFFSET(0x109F0D20)
#define CLASS_1_289A0264D6E0EB74_METHOD_1_C568BB536B4EDF0B_OFFSET UNITYSDK_OFFSET(0x109F04F0)
#define CLASS_1_289A0264D6E0EB74_METHOD_1_C935DB3954C14B14_OFFSET UNITYSDK_OFFSET(0x109F05F0)
#define CLASS_1_289A0264D6E0EB74_METHOD_1_DBB0355A6725B06C_OFFSET UNITYSDK_OFFSET(0x109F0860)
#define CLASS_1_289A0264D6E0EB74_METHOD_1_E7E18EAD15F70E25_OFFSET UNITYSDK_OFFSET(0x109F0CA0)

inline static constexpr unsigned int Class_1_289A0264D6E0EB74_TypeDefinitionIndex = 49242;

class Class_1_289A0264D6E0EB74 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_C568BB536B4EDF0B(::System::UInt32 a1, ::System::Int32& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::Int32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_289A0264D6E0EB74_METHOD_1_C568BB536B4EDF0B_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_8718C52625BF3B53(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_289A0264D6E0EB74_METHOD_1_8718C52625BF3B53_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_C935DB3954C14B14(::RPG::GameCore::MainMissionRow* a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::MainMissionRow*))((::PBYTE)hIl2Cpp + CLASS_1_289A0264D6E0EB74_METHOD_1_C935DB3954C14B14_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_DBB0355A6725B06C(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_289A0264D6E0EB74_METHOD_1_DBB0355A6725B06C_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_84AB2B26A94ED9E1(::Class_1_F236C4DB0600E05D* a1, ::Class_1_43BD383C98B4C0C5_122* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::Class_1_F236C4DB0600E05D*, ::Class_1_43BD383C98B4C0C5_122*))((::PBYTE)hIl2Cpp + CLASS_1_289A0264D6E0EB74_METHOD_1_84AB2B26A94ED9E1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E7E18EAD15F70E25(::Class_1_F236C4DB0600E05D* a1, ::RPG::Client::MapDef* a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::Class_1_F236C4DB0600E05D*, ::RPG::Client::MapDef*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_289A0264D6E0EB74_METHOD_1_E7E18EAD15F70E25_OFFSET))(a1, a2, a3);
	}

	static ::System::UInt32 Method_1_BA6AD63770851E65(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::Class_1_45666FF47F0D254B* a2)
	{
		return ((::System::UInt32(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_45666FF47F0D254B*))((::PBYTE)hIl2Cpp + CLASS_1_289A0264D6E0EB74_METHOD_1_BA6AD63770851E65_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_B54D42F5F0BEB432(::Class_1_F236C4DB0600E05D* a1, ::Class_1_43BD383C98B4C0C5_122* a2, ::Class_1_45666FF47F0D254B* a3)
	{
		return ((::System::UInt32(*)(::Class_1_F236C4DB0600E05D*, ::Class_1_43BD383C98B4C0C5_122*, ::Class_1_45666FF47F0D254B*))((::PBYTE)hIl2Cpp + CLASS_1_289A0264D6E0EB74_METHOD_1_B54D42F5F0BEB432_OFFSET))(a1, a2, a3);
	}
};
