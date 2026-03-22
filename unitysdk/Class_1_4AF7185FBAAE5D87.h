#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }

#define CLASS_1_4AF7185FBAAE5D87_DISPOSE_OFFSET UNITYSDK_OFFSET(0x872B0E0)
#define CLASS_1_4AF7185FBAAE5D87_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x872B090)
#define CLASS_1_4AF7185FBAAE5D87_METHOD_1_115AB266A722E835_OFFSET UNITYSDK_OFFSET(0x872B1F0)
#define CLASS_1_4AF7185FBAAE5D87_METHOD_1_193D1A05AAD91533_OFFSET UNITYSDK_OFFSET(0x872B170)
#define CLASS_1_4AF7185FBAAE5D87_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x872B280)
#define CLASS_1_4AF7185FBAAE5D87_METHOD_1_A36150C5DCC8409E_2_OFFSET UNITYSDK_OFFSET(0x872B2C0)
#define CLASS_1_4AF7185FBAAE5D87_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x872B240)
#define CLASS_1_4AF7185FBAAE5D87_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x872B130)
#define CLASS_1_4AF7185FBAAE5D87__CTOR_OFFSET UNITYSDK_OFFSET(0x872B300)

inline static constexpr unsigned int Class_1_4AF7185FBAAE5D87_TypeDefinitionIndex = 62057;

class Class_1_4AF7185FBAAE5D87 : public ::System::Object
{
public:
	::Class_1_4AF7185FBAAE5D87* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF7185FBAAE5D87__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4AF7185FBAAE5D87_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF7185FBAAE5D87_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF7185FBAAE5D87_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_193D1A05AAD91533(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_4AF7185FBAAE5D87_METHOD_1_193D1A05AAD91533_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_115AB266A722E835()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF7185FBAAE5D87_METHOD_1_115AB266A722E835_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF7185FBAAE5D87_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF7185FBAAE5D87_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF7185FBAAE5D87_METHOD_1_A36150C5DCC8409E_2_OFFSET))(this);
	}
};
