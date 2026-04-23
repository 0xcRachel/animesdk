#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RenderTestPageContext; }
namespace System { class String; }

#define RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKEMULTISCREENSHOT_D__58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x131CEBD0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKEMULTISCREENSHOT_D__58_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x131CEF30)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKEMULTISCREENSHOT_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x131CEF90)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKEMULTISCREENSHOT_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x131CEF40)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKEMULTISCREENSHOT_D__58_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x131CEBB0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKEMULTISCREENSHOT_D__58__CTOR_OFFSET UNITYSDK_OFFSET(0x131CE340)

namespace RPG::Client
{
	inline static constexpr unsigned int RenderTestPageContext___TakeMultiScreenShot_d__58_TypeDefinitionIndex = 67127;

	class RenderTestPageContext___TakeMultiScreenShot_d__58 : public ::System::Object
	{
	public:
		::System::String* _FolderName_5__2; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* _DateTimeStr_5__3; // 0x20
		::RPG::Client::RenderTestPageContext* __4__this; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Int32 _Counter_5__4; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKEMULTISCREENSHOT_D__58__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKEMULTISCREENSHOT_D__58_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKEMULTISCREENSHOT_D__58_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKEMULTISCREENSHOT_D__58_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKEMULTISCREENSHOT_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKEMULTISCREENSHOT_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
