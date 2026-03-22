#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_359214CFB84D4DF3;
class Class_2_2690241A4D35989E;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0A81CAE591F78449_GET_DOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x1100FB00)
#define CLASS_1_0A81CAE591F78449_GET_INUPDATE_OFFSET UNITYSDK_OFFSET(0x1100FAE0)
#define CLASS_1_0A81CAE591F78449_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1100FD90)
#define CLASS_1_0A81CAE591F78449_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x1100FC60)
#define CLASS_1_0A81CAE591F78449_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1100FEA0)
#define CLASS_1_0A81CAE591F78449_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1100FB20)
#define CLASS_1_0A81CAE591F78449_METHOD_1_E22A81291C008E95_OFFSET UNITYSDK_OFFSET(0x1100FDF0)
#define CLASS_1_0A81CAE591F78449_SET_DOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x1100FB10)
#define CLASS_1_0A81CAE591F78449_SET_INUPDATE_OFFSET UNITYSDK_OFFSET(0x1100FAF0)
#define CLASS_1_0A81CAE591F78449__CTOR_OFFSET UNITYSDK_OFFSET(0x1100FF30)
#define CLASS_1_0A81CAE591F78449__STARTUPDATEDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0x1100FF40)

inline static constexpr unsigned int Class_1_0A81CAE591F78449_TypeDefinitionIndex = 54190;

class Class_1_0A81CAE591F78449 : public ::System::Object
{
public:
	::Class_1_359214CFB84D4DF3* Field_1_0; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::System::String*>*>* Field_1_3; // 0x18
	::System::Boolean _InUpdate_k__BackingField; // 0x20
	::System::Int64 _downloadSize_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449__CTOR_OFFSET))(this);
	}

	::System::Boolean get_InUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449_GET_INUPDATE_OFFSET))(this);
	}

	::System::Void set_InUpdate(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449_SET_INUPDATE_OFFSET))(this, value);
	}

	::System::Int64 get_downloadSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449_GET_DOWNLOADSIZE_OFFSET))(this);
	}

	::System::Void set_downloadSize(::System::Int64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449_SET_DOWNLOADSIZE_OFFSET))(this, value);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_1_E22A81291C008E95(::Class_2_2690241A4D35989E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449_METHOD_1_E22A81291C008E95_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void _StartUpdateData_b__10_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449__STARTUPDATEDATA_B__10_0_OFFSET))(this);
	}
};
