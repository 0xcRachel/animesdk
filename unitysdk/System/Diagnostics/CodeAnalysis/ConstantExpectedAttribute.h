#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_CONSTANTEXPECTEDATTRIBUTE_GET_MAX_OFFSET UNITYSDK_OFFSET(0x156AB960)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_CONSTANTEXPECTEDATTRIBUTE_GET_MIN_OFFSET UNITYSDK_OFFSET(0x156AB940)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_CONSTANTEXPECTEDATTRIBUTE_SET_MAX_OFFSET UNITYSDK_OFFSET(0x156AB970)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_CONSTANTEXPECTEDATTRIBUTE_SET_MIN_OFFSET UNITYSDK_OFFSET(0x156AB950)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_CONSTANTEXPECTEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156ABB10)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int ConstantExpectedAttribute_TypeDefinitionIndex = 9877;

	class ConstantExpectedAttribute : public ::System::Attribute
	{
	public:
		::System::Object* _Min_k__BackingField; // 0x10
		::System::Object* _Max_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_CONSTANTEXPECTEDATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Object* get_Min()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_CONSTANTEXPECTEDATTRIBUTE_GET_MIN_OFFSET))(this);
		}

		::System::Void set_Min(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_CONSTANTEXPECTEDATTRIBUTE_SET_MIN_OFFSET))(this, value);
		}

		::System::Object* get_Max()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_CONSTANTEXPECTEDATTRIBUTE_GET_MAX_OFFSET))(this);
		}

		::System::Void set_Max(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_CONSTANTEXPECTEDATTRIBUTE_SET_MAX_OFFSET))(this, value);
		}
	};
}
