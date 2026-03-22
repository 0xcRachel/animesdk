#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Simplygon { class spMaterialTable; }
namespace Simplygon { class spTextureTable; }

#define SIMPLYGON_SPSCENE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B717E0)
#define SIMPLYGON_SPSCENE_GETCPTR_OFFSET UNITYSDK_OFFSET(0x17B6F010)
#define SIMPLYGON_SPSCENE_GETMATERIALTABLE_OFFSET UNITYSDK_OFFSET(0x17B71960)
#define SIMPLYGON_SPSCENE_GETTEXTURETABLE_OFFSET UNITYSDK_OFFSET(0x17B71BA0)
#define SIMPLYGON_SPSCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x17B716E0)

namespace Simplygon
{
	inline static constexpr unsigned int spScene_TypeDefinitionIndex = 28694;

	class spScene : public ::Simplygon::spObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x28

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSCENE__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		static ::System::Runtime::InteropServices::HandleRef getCPtr(::Simplygon::spScene* obj)
		{
			return ((::System::Runtime::InteropServices::HandleRef(*)(::Simplygon::spScene*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSCENE_GETCPTR_OFFSET))(obj);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSCENE_DISPOSE_OFFSET))(this, disposing);
		}

		::Simplygon::spMaterialTable* GetMaterialTable()
		{
			return ((::Simplygon::spMaterialTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSCENE_GETMATERIALTABLE_OFFSET))(this);
		}

		::Simplygon::spTextureTable* GetTextureTable()
		{
			return ((::Simplygon::spTextureTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSCENE_GETTEXTURETABLE_OFFSET))(this);
		}
	};
}
