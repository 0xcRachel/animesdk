#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class CheckMainMissionFinishedInCurrentVersion; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_F58542D142C9905E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B54F90)
#define CLASS_2_F58542D142C9905E_METHOD_2_4251679132C6DD38_OFFSET UNITYSDK_OFFSET(0x10B55AF0)
#define CLASS_2_F58542D142C9905E_METHOD_2_AA94FA8CF47EE2A0_1_OFFSET UNITYSDK_OFFSET(0x10B557F0)
#define CLASS_2_F58542D142C9905E_METHOD_2_AA94FA8CF47EE2A0_OFFSET UNITYSDK_OFFSET(0x10B554F0)
#define CLASS_2_F58542D142C9905E_METHOD_2_E9D9F09754C14D8E_OFFSET UNITYSDK_OFFSET(0x10B552C0)
#define CLASS_2_F58542D142C9905E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B55130)
#define CLASS_2_F58542D142C9905E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10B55030)
#define CLASS_2_F58542D142C9905E_TICK_OFFSET UNITYSDK_OFFSET(0x10B550D0)
#define CLASS_2_F58542D142C9905E__CTOR_OFFSET UNITYSDK_OFFSET(0x10B54D80)

inline static constexpr unsigned int Class_2_F58542D142C9905E_TypeDefinitionIndex = 41589;

class Class_2_F58542D142C9905E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x18
	::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::Class_3_BCCE950C2E8DF1F0* Field_2_4; // 0x30
	::System::UInt32 Field_2_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion*))((::PBYTE)hIl2Cpp + CLASS_2_F58542D142C9905E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F58542D142C9905E_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F58542D142C9905E_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F58542D142C9905E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F58542D142C9905E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_E9D9F09754C14D8E(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F58542D142C9905E_METHOD_2_E9D9F09754C14D8E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_AA94FA8CF47EE2A0(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_F58542D142C9905E_METHOD_2_AA94FA8CF47EE2A0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_AA94FA8CF47EE2A0_1(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_F58542D142C9905E_METHOD_2_AA94FA8CF47EE2A0_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4251679132C6DD38(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_F58542D142C9905E_METHOD_2_4251679132C6DD38_OFFSET))(this, a1, a2, a3);
	}
};
