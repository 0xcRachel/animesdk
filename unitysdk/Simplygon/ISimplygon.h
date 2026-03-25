#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Simplygon { class spColorCaster; }
namespace Simplygon { class spMaterial; }
namespace Simplygon { class spMaterialTable; }
namespace Simplygon { class spNormalCaster; }
namespace Simplygon { class spObject; }
namespace Simplygon { class spPipelineSerializer; }
namespace Simplygon { class spReductionProcessor; }
namespace Simplygon { class spRemeshingProcessor; }
namespace Simplygon { class spSceneExporter; }
namespace Simplygon { class spSceneImporter; }
namespace Simplygon { class spShadingTextureNode; }
namespace Simplygon { class spStringArray; }
namespace Simplygon { class spTexture; }
namespace Simplygon { class spTextureTable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SIMPLYGON_ISIMPLYGON_CLEARERRORMESSAGES_OFFSET UNITYSDK_OFFSET(0x18377810)
#define SIMPLYGON_ISIMPLYGON_CLEARWARNINGMESSAGES_OFFSET UNITYSDK_OFFSET(0x183775A0)
#define SIMPLYGON_ISIMPLYGON_CREATECOLORCASTER_OFFSET UNITYSDK_OFFSET(0x183735E0)
#define SIMPLYGON_ISIMPLYGON_CREATEMATERIALTABLE_OFFSET UNITYSDK_OFFSET(0x18373150)
#define SIMPLYGON_ISIMPLYGON_CREATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x183729B0)
#define SIMPLYGON_ISIMPLYGON_CREATENORMALCASTER_OFFSET UNITYSDK_OFFSET(0x18373A80)
#define SIMPLYGON_ISIMPLYGON_CREATEPIPELINESERIALIZER_OFFSET UNITYSDK_OFFSET(0x18375F40)
#define SIMPLYGON_ISIMPLYGON_CREATEREDUCTIONPROCESSOR_OFFSET UNITYSDK_OFFSET(0x18373F20)
#define SIMPLYGON_ISIMPLYGON_CREATEREMESHINGPROCESSOR_OFFSET UNITYSDK_OFFSET(0x183743B0)
#define SIMPLYGON_ISIMPLYGON_CREATESCENEEXPORTER_OFFSET UNITYSDK_OFFSET(0x18374840)
#define SIMPLYGON_ISIMPLYGON_CREATESCENEIMPORTER_OFFSET UNITYSDK_OFFSET(0x18374CE0)
#define SIMPLYGON_ISIMPLYGON_CREATESHADINGTEXTURENODE_OFFSET UNITYSDK_OFFSET(0x18375AB0)
#define SIMPLYGON_ISIMPLYGON_CREATESTRINGARRAY_OFFSET UNITYSDK_OFFSET(0x183763E0)
#define SIMPLYGON_ISIMPLYGON_CREATETEXTURETABLE_OFFSET UNITYSDK_OFFSET(0x18375620)
#define SIMPLYGON_ISIMPLYGON_CREATETEXTURE_OFFSET UNITYSDK_OFFSET(0x18375180)
#define SIMPLYGON_ISIMPLYGON_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18372510)
#define SIMPLYGON_ISIMPLYGON_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183724C0)
#define SIMPLYGON_ISIMPLYGON_ERROROCCURRED_OFFSET UNITYSDK_OFFSET(0x18376DC0)
#define SIMPLYGON_ISIMPLYGON_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18372450)
#define SIMPLYGON_ISIMPLYGON_GETCPTR_OFFSET UNITYSDK_OFFSET(0x18372430)
#define SIMPLYGON_ISIMPLYGON_GETERRORMESSAGES_OFFSET UNITYSDK_OFFSET(0x18377300)
#define SIMPLYGON_ISIMPLYGON_GETWARNINGMESSAGES_OFFSET UNITYSDK_OFFSET(0x18377040)
#define SIMPLYGON_ISIMPLYGON_SENDTELEMETRY_OFFSET UNITYSDK_OFFSET(0x18376880)
#define SIMPLYGON_ISIMPLYGON_WARNINGOCCURRED_OFFSET UNITYSDK_OFFSET(0x18376B40)
#define SIMPLYGON_ISIMPLYGON__CTOR_OFFSET UNITYSDK_OFFSET(0x18372370)

namespace Simplygon
{
	inline static constexpr unsigned int ISimplygon_TypeDefinitionIndex = 29580;

	class ISimplygon : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Simplygon::spObject*>** StaticGet_swigObjectsOwned()
		{
			return (::System::Collections::Generic::List_1<::Simplygon::spObject*>**)Il2CppClass::FromTypeDefinitionIndex(ISimplygon_TypeDefinitionIndex)->GetStaticField(0x2AE70);
		}
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x10

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		static ::System::Runtime::InteropServices::HandleRef getCPtr(::Simplygon::ISimplygon* obj)
		{
			return ((::System::Runtime::InteropServices::HandleRef(*)(::Simplygon::ISimplygon*))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_GETCPTR_OFFSET))(obj);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_DISPOSE_1_OFFSET))(this, disposing);
		}

		::Simplygon::spMaterial* CreateMaterial()
		{
			return ((::Simplygon::spMaterial*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_CREATEMATERIAL_OFFSET))(this);
		}

		::Simplygon::spMaterialTable* CreateMaterialTable()
		{
			return ((::Simplygon::spMaterialTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_CREATEMATERIALTABLE_OFFSET))(this);
		}

		::Simplygon::spColorCaster* CreateColorCaster()
		{
			return ((::Simplygon::spColorCaster*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_CREATECOLORCASTER_OFFSET))(this);
		}

		::Simplygon::spNormalCaster* CreateNormalCaster()
		{
			return ((::Simplygon::spNormalCaster*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_CREATENORMALCASTER_OFFSET))(this);
		}

		::Simplygon::spReductionProcessor* CreateReductionProcessor()
		{
			return ((::Simplygon::spReductionProcessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_CREATEREDUCTIONPROCESSOR_OFFSET))(this);
		}

		::Simplygon::spRemeshingProcessor* CreateRemeshingProcessor()
		{
			return ((::Simplygon::spRemeshingProcessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_CREATEREMESHINGPROCESSOR_OFFSET))(this);
		}

		::Simplygon::spSceneExporter* CreateSceneExporter()
		{
			return ((::Simplygon::spSceneExporter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_CREATESCENEEXPORTER_OFFSET))(this);
		}

		::Simplygon::spSceneImporter* CreateSceneImporter()
		{
			return ((::Simplygon::spSceneImporter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_CREATESCENEIMPORTER_OFFSET))(this);
		}

		::Simplygon::spTexture* CreateTexture()
		{
			return ((::Simplygon::spTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_CREATETEXTURE_OFFSET))(this);
		}

		::Simplygon::spTextureTable* CreateTextureTable()
		{
			return ((::Simplygon::spTextureTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_CREATETEXTURETABLE_OFFSET))(this);
		}

		::Simplygon::spShadingTextureNode* CreateShadingTextureNode()
		{
			return ((::Simplygon::spShadingTextureNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_CREATESHADINGTEXTURENODE_OFFSET))(this);
		}

		::Simplygon::spPipelineSerializer* CreatePipelineSerializer()
		{
			return ((::Simplygon::spPipelineSerializer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_CREATEPIPELINESERIALIZER_OFFSET))(this);
		}

		::Simplygon::spStringArray* CreateStringArray()
		{
			return ((::Simplygon::spStringArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_CREATESTRINGARRAY_OFFSET))(this);
		}

		::System::Void SendTelemetry(::System::String* eventCategory, ::System::String* integrationName, ::System::String* integrationVersion, ::System::String* contentJson)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_SENDTELEMETRY_OFFSET))(this, eventCategory, integrationName, integrationVersion, contentJson);
		}

		::System::Boolean WarningOccurred()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_WARNINGOCCURRED_OFFSET))(this);
		}

		::System::Boolean ErrorOccurred()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_ERROROCCURRED_OFFSET))(this);
		}

		::System::Void GetWarningMessages(::Simplygon::spStringArray* messages)
		{
			return ((::System::Void(*)(::PVOID, ::Simplygon::spStringArray*))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_GETWARNINGMESSAGES_OFFSET))(this, messages);
		}

		::System::Void GetErrorMessages(::Simplygon::spStringArray* messages)
		{
			return ((::System::Void(*)(::PVOID, ::Simplygon::spStringArray*))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_GETERRORMESSAGES_OFFSET))(this, messages);
		}

		::System::Void ClearWarningMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_CLEARWARNINGMESSAGES_OFFSET))(this);
		}

		::System::Void ClearErrorMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_ISIMPLYGON_CLEARERRORMESSAGES_OFFSET))(this);
		}
	};
}
