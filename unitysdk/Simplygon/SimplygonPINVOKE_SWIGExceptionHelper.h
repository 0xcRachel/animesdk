#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Simplygon { class SimplygonPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate; }
namespace Simplygon { class SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate; }
namespace System { class String; }

#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGAPPLICATIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17B643B0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17B64F80)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17B65070)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17B651A0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGARITHMETICEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17B646C0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGDIVIDEBYZEROEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17B647A0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGINDEXOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17B64880)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGINVALIDCASTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17B64960)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGINVALIDOPERATIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17B64A40)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGIOEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17B64B20)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGNULLREFERENCEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17B64C00)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGOUTOFMEMORYEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17B64CE0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGOVERFLOWEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17B64DC0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGSYSTEMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17B64EA0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SWIGREGISTEREXCEPTIONCALLBACKSARGUMENT_SIMPLYGON_OFFSET UNITYSDK_OFFSET(0x17B64300)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SWIGREGISTEREXCEPTIONCALLBACKS_SIMPLYGON_OFFSET UNITYSDK_OFFSET(0x17B64180)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B652D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x17B5FD00)

namespace Simplygon
{
	inline static constexpr unsigned int SimplygonPINVOKE_SWIGExceptionHelper_TypeDefinitionIndex = 28707;

	class SimplygonPINVOKE_SWIGExceptionHelper : public ::System::Object
	{
	public:
		static ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate** StaticGet_nullReferenceDelegate()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_SWIGExceptionHelper_TypeDefinitionIndex)->GetStaticField(0x3C4B0);
		}
		static ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate** StaticGet_ioDelegate()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_SWIGExceptionHelper_TypeDefinitionIndex)->GetStaticField(0x3C4B8);
		}
		static ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate** StaticGet_argumentNullDelegate()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_SWIGExceptionHelper_TypeDefinitionIndex)->GetStaticField(0x3C4C0);
		}
		static ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate** StaticGet_systemDelegate()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_SWIGExceptionHelper_TypeDefinitionIndex)->GetStaticField(0x3C4C8);
		}
		static ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate** StaticGet_outOfMemoryDelegate()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_SWIGExceptionHelper_TypeDefinitionIndex)->GetStaticField(0x3C4D0);
		}
		static ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate** StaticGet_indexOutOfRangeDelegate()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_SWIGExceptionHelper_TypeDefinitionIndex)->GetStaticField(0x3C4D8);
		}
		static ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate** StaticGet_divideByZeroDelegate()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_SWIGExceptionHelper_TypeDefinitionIndex)->GetStaticField(0x3C4E0);
		}
		static ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate** StaticGet_arithmeticDelegate()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_SWIGExceptionHelper_TypeDefinitionIndex)->GetStaticField(0x3C4E8);
		}
		static ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate** StaticGet_invalidOperationDelegate()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_SWIGExceptionHelper_TypeDefinitionIndex)->GetStaticField(0x3C4F0);
		}
		static ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate** StaticGet_argumentDelegate()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_SWIGExceptionHelper_TypeDefinitionIndex)->GetStaticField(0x3C4F8);
		}
		static ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate** StaticGet_applicationDelegate()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_SWIGExceptionHelper_TypeDefinitionIndex)->GetStaticField(0x3C500);
		}
		static ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate** StaticGet_argumentOutOfRangeDelegate()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_SWIGExceptionHelper_TypeDefinitionIndex)->GetStaticField(0x3C508);
		}
		static ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate** StaticGet_invalidCastDelegate()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_SWIGExceptionHelper_TypeDefinitionIndex)->GetStaticField(0x3C510);
		}
		static ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate** StaticGet_overflowDelegate()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_SWIGExceptionHelper_TypeDefinitionIndex)->GetStaticField(0x3C518);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void SWIGRegisterExceptionCallbacks_Simplygon(::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate* applicationDelegate, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate* arithmeticDelegate, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate* divideByZeroDelegate, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate* indexOutOfRangeDelegate, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate* invalidCastDelegate, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate* invalidOperationDelegate, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate* ioDelegate, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate* nullReferenceDelegate, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate* outOfMemoryDelegate, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate* overflowDelegate, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate* systemExceptionDelegate)
		{
			return ((::System::Void(*)(::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate*, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate*, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate*, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate*, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate*, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate*, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate*, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate*, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate*, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate*, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionDelegate*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SWIGREGISTEREXCEPTIONCALLBACKS_SIMPLYGON_OFFSET))(applicationDelegate, arithmeticDelegate, divideByZeroDelegate, indexOutOfRangeDelegate, invalidCastDelegate, invalidOperationDelegate, ioDelegate, nullReferenceDelegate, outOfMemoryDelegate, overflowDelegate, systemExceptionDelegate);
		}

		static ::System::Void SWIGRegisterExceptionCallbacksArgument_Simplygon(::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate* argumentDelegate, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate* argumentNullDelegate, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate* argumentOutOfRangeDelegate)
		{
			return ((::System::Void(*)(::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate*, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate*, ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SWIGREGISTEREXCEPTIONCALLBACKSARGUMENT_SIMPLYGON_OFFSET))(argumentDelegate, argumentNullDelegate, argumentOutOfRangeDelegate);
		}

		static ::System::Void SetPendingApplicationException(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGAPPLICATIONEXCEPTION_OFFSET))(message);
		}

		static ::System::Void SetPendingArithmeticException(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGARITHMETICEXCEPTION_OFFSET))(message);
		}

		static ::System::Void SetPendingDivideByZeroException(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGDIVIDEBYZEROEXCEPTION_OFFSET))(message);
		}

		static ::System::Void SetPendingIndexOutOfRangeException(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGINDEXOUTOFRANGEEXCEPTION_OFFSET))(message);
		}

		static ::System::Void SetPendingInvalidCastException(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGINVALIDCASTEXCEPTION_OFFSET))(message);
		}

		static ::System::Void SetPendingInvalidOperationException(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGINVALIDOPERATIONEXCEPTION_OFFSET))(message);
		}

		static ::System::Void SetPendingIOException(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGIOEXCEPTION_OFFSET))(message);
		}

		static ::System::Void SetPendingNullReferenceException(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGNULLREFERENCEEXCEPTION_OFFSET))(message);
		}

		static ::System::Void SetPendingOutOfMemoryException(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGOUTOFMEMORYEXCEPTION_OFFSET))(message);
		}

		static ::System::Void SetPendingOverflowException(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGOVERFLOWEXCEPTION_OFFSET))(message);
		}

		static ::System::Void SetPendingSystemException(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGSYSTEMEXCEPTION_OFFSET))(message);
		}

		static ::System::Void SetPendingArgumentException(::System::String* message, ::System::String* paramName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGARGUMENTEXCEPTION_OFFSET))(message, paramName);
		}

		static ::System::Void SetPendingArgumentNullException(::System::String* message, ::System::String* paramName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGARGUMENTNULLEXCEPTION_OFFSET))(message, paramName);
		}

		static ::System::Void SetPendingArgumentOutOfRangeException(::System::String* message, ::System::String* paramName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_SETPENDINGARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(message, paramName);
		}
	};
}
