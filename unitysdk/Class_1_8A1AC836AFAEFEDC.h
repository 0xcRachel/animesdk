#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GroupCbType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ShaderGroupAlloc.h"

#define CLASS_1_8A1AC836AFAEFEDC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10ABE080)
#define CLASS_1_8A1AC836AFAEFEDC_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x10ABE010)
#define CLASS_1_8A1AC836AFAEFEDC_METHOD_1_2CBB394234544514_OFFSET UNITYSDK_OFFSET(0x10ABE1B0)
#define CLASS_1_8A1AC836AFAEFEDC_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10ABE0D0)
#define CLASS_1_8A1AC836AFAEFEDC_METHOD_1_8425AE8B450CC8A4_OFFSET UNITYSDK_OFFSET(0x10ABE290)
#define CLASS_1_8A1AC836AFAEFEDC_METHOD_1_99AE60B687EAE694_OFFSET UNITYSDK_OFFSET(0x10ABE120)
#define CLASS_1_8A1AC836AFAEFEDC_METHOD_1_BDBD1A33D19D6ABA_OFFSET UNITYSDK_OFFSET(0x10ABE400)
#define CLASS_1_8A1AC836AFAEFEDC_METHOD_1_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0x10ABE520)
#define CLASS_1_8A1AC836AFAEFEDC__CTOR_OFFSET UNITYSDK_OFFSET(0x10ABDEF0)

inline static constexpr unsigned int Class_1_8A1AC836AFAEFEDC_TypeDefinitionIndex = 55533;

class Class_1_8A1AC836AFAEFEDC : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* Field_1_2; // 0x10
	::Il2CppArray<::System::Int32>* Field_1_1; // 0x18
	::Il2CppArray<::UnityEngine::ShaderGroupAlloc>* Field_1_0; // 0x20
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A1AC836AFAEFEDC__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A1AC836AFAEFEDC_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A1AC836AFAEFEDC_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_99AE60B687EAE694(::RPG::Client::GroupCbType a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GroupCbType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8A1AC836AFAEFEDC_METHOD_1_99AE60B687EAE694_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8A1AC836AFAEFEDC_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CBB394234544514(::RPG::Client::GroupCbType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GroupCbType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8A1AC836AFAEFEDC_METHOD_1_2CBB394234544514_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::Byte>* Method_1_8425AE8B450CC8A4()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A1AC836AFAEFEDC_METHOD_1_8425AE8B450CC8A4_OFFSET))(this);
	}

	::System::Void Method_1_BDBD1A33D19D6ABA(::RPG::Client::GroupCbType a1, ::System::Int32 a2, ::System::IntPtr a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GroupCbType, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_8A1AC836AFAEFEDC_METHOD_1_BDBD1A33D19D6ABA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8A1AC836AFAEFEDC_METHOD_1_ED34DCC6F6541B09_OFFSET))(this, a1);
	}
};
