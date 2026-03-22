#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B9BBF1B9A8CC806;
class Class_1_695986DCCF48052E;
class Class_1_74F732AB6D78C9D0;
class Class_1_9191E587A43FE591;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_D53047E23549A5EA_METHOD_1_3F8B9AA8D24D3534_OFFSET UNITYSDK_OFFSET(0x15E08460)
#define CLASS_1_D53047E23549A5EA_METHOD_1_53617315F1BC935F_OFFSET UNITYSDK_OFFSET(0x15E07970)
#define CLASS_1_D53047E23549A5EA__CTOR_OFFSET UNITYSDK_OFFSET(0x15E08CB0)

inline static constexpr unsigned int Class_1_D53047E23549A5EA_TypeDefinitionIndex = 31217;

class Class_1_D53047E23549A5EA : public ::System::Object
{
public:
	// static const ::System::UInt16 Field_1_0 = 0x1; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D53047E23549A5EA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_53617315F1BC935F(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_74F732AB6D78C9D0*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::Class_1_74F732AB6D78C9D0*>*))((::PBYTE)hIl2Cpp + CLASS_1_D53047E23549A5EA_METHOD_1_53617315F1BC935F_OFFSET))(a1, a2);
	}

	static ::Class_1_9191E587A43FE591* Method_1_3F8B9AA8D24D3534(::Class_1_695986DCCF48052E* a1, ::Class_1_1B9BBF1B9A8CC806* a2)
	{
		return ((::Class_1_9191E587A43FE591*(*)(::Class_1_695986DCCF48052E*, ::Class_1_1B9BBF1B9A8CC806*))((::PBYTE)hIl2Cpp + CLASS_1_D53047E23549A5EA_METHOD_1_3F8B9AA8D24D3534_OFFSET))(a1, a2);
	}
};
