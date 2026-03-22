#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_FontAsset; }

#define CLASS_1_B71228D574505653_METHOD_1_10C98BA3779B0C3B_OFFSET UNITYSDK_OFFSET(0x10C3AE20)
#define CLASS_1_B71228D574505653_METHOD_1_285F8983307A750E_OFFSET UNITYSDK_OFFSET(0x10C3B0F0)
#define CLASS_1_B71228D574505653_METHOD_1_71F0872EB31B61BD_OFFSET UNITYSDK_OFFSET(0x10C3B240)
#define CLASS_1_B71228D574505653_METHOD_1_96F1E072069A6DE5_OFFSET UNITYSDK_OFFSET(0x10C3AD90)
#define CLASS_1_B71228D574505653__CTOR_OFFSET UNITYSDK_OFFSET(0x10C3B2C0)

inline static constexpr unsigned int Class_1_B71228D574505653_TypeDefinitionIndex = 58152;

class Class_1_B71228D574505653 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71228D574505653__CTOR_OFFSET))(this);
	}

	static ::TMPro::TMP_FontAsset* Method_1_96F1E072069A6DE5(::System::String* a1)
	{
		return ((::TMPro::TMP_FontAsset*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B71228D574505653_METHOD_1_96F1E072069A6DE5_OFFSET))(a1);
	}

	static ::TMPro::TMP_FontAsset* Method_1_10C98BA3779B0C3B(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::TMPro::TMP_FontAsset*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_B71228D574505653_METHOD_1_10C98BA3779B0C3B_OFFSET))(a1, a2);
	}

	static ::TMPro::TMP_FontAsset* Method_1_285F8983307A750E()
	{
		return ((::TMPro::TMP_FontAsset*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B71228D574505653_METHOD_1_285F8983307A750E_OFFSET))();
	}

	static ::System::String* Method_1_71F0872EB31B61BD()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B71228D574505653_METHOD_1_71F0872EB31B61BD_OFFSET))();
	}
};
