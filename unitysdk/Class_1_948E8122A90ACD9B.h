#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BBBB808191126E3B;
class Class_1_DE5041E302ADB1E0;
namespace RPG::GameCore { class LevelPedestrianV2BakedInfo; }
namespace RPG::GameCore { class LevelPedestrianV2Info; }

#define CLASS_1_948E8122A90ACD9B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDB3BA50)
#define CLASS_1_948E8122A90ACD9B_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xDB3B9F0)
#define CLASS_1_948E8122A90ACD9B_METHOD_1_0467C78944D42A01_OFFSET UNITYSDK_OFFSET(0xDB3BF30)
#define CLASS_1_948E8122A90ACD9B_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xDB3BA00)
#define CLASS_1_948E8122A90ACD9B_METHOD_1_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0xDB3BB00)
#define CLASS_1_948E8122A90ACD9B_METHOD_1_877E9E0C2C5E0BAB_OFFSET UNITYSDK_OFFSET(0xDB3BA10)
#define CLASS_1_948E8122A90ACD9B_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xDB3BFD0)
#define CLASS_1_948E8122A90ACD9B_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xDB3BA20)
#define CLASS_1_948E8122A90ACD9B__CTOR_OFFSET UNITYSDK_OFFSET(0xDB3BA30)

inline static constexpr unsigned int Class_1_948E8122A90ACD9B_TypeDefinitionIndex = 63876;

class Class_1_948E8122A90ACD9B : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_DE5041E302ADB1E0*>* Field_1_2; // 0x10
	::Il2CppArray<::RPG::GameCore::LevelPedestrianV2BakedInfo*>* Field_1_4; // 0x18
	::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>* Field_1_3; // 0x20
	::Class_1_BBBB808191126E3B* Field_1_1; // 0x28
	::System::UInt32 _GroupID_k__BackingField; // 0x30

	::System::Void _ctor(::Class_1_BBBB808191126E3B* a1, ::System::UInt32 a2, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>* a3, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2BakedInfo*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BBBB808191126E3B*, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>*, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2BakedInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_948E8122A90ACD9B__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_948E8122A90ACD9B_GET_GROUPID_OFFSET))(this);
	}

	::Class_1_BBBB808191126E3B* Method_1_24748FC20F375725()
	{
		return ((::Class_1_BBBB808191126E3B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_948E8122A90ACD9B_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_DE5041E302ADB1E0*>* Method_1_877E9E0C2C5E0BAB()
	{
		return ((::Il2CppArray<::Class_1_DE5041E302ADB1E0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_948E8122A90ACD9B_METHOD_1_877E9E0C2C5E0BAB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_948E8122A90ACD9B_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_948E8122A90ACD9B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_948E8122A90ACD9B_METHOD_1_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_948E8122A90ACD9B_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	static ::RPG::GameCore::LevelPedestrianV2BakedInfo* Method_1_0467C78944D42A01(::RPG::GameCore::LevelPedestrianV2Info* a1, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2BakedInfo*>* a2)
	{
		return ((::RPG::GameCore::LevelPedestrianV2BakedInfo*(*)(::RPG::GameCore::LevelPedestrianV2Info*, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2BakedInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_948E8122A90ACD9B_METHOD_1_0467C78944D42A01_OFFSET))(a1, a2);
	}
};
