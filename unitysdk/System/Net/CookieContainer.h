#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HeaderVariantInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class Cookie; }
namespace System::Net { class CookieCollection; }
namespace System::Net { class PathList; }

#define SYSTEM_NET_COOKIECONTAINER_ADDREMOVEDOMAIN_OFFSET UNITYSDK_OFFSET(0x18331360)
#define SYSTEM_NET_COOKIECONTAINER_ADD_OFFSET UNITYSDK_OFFSET(0x18331470)
#define SYSTEM_NET_COOKIECONTAINER_AGECOOKIES_OFFSET UNITYSDK_OFFSET(0x18331DB0)
#define SYSTEM_NET_COOKIECONTAINER_BUILDCOOKIECOLLECTIONFROMDOMAINMATCHES_OFFSET UNITYSDK_OFFSET(0x18337560)
#define SYSTEM_NET_COOKIECONTAINER_COOKIECUTTER_OFFSET UNITYSDK_OFFSET(0x18336980)
#define SYSTEM_NET_COOKIECONTAINER_EXPIRECOLLECTION_OFFSET UNITYSDK_OFFSET(0x18336180)
#define SYSTEM_NET_COOKIECONTAINER_GETCOOKIEHEADER_1_OFFSET UNITYSDK_OFFSET(0x183386E0)
#define SYSTEM_NET_COOKIECONTAINER_GETCOOKIEHEADER_OFFSET UNITYSDK_OFFSET(0x18338660)
#define SYSTEM_NET_COOKIECONTAINER_INTERNALGETCOOKIES_OFFSET UNITYSDK_OFFSET(0x18337160)
#define SYSTEM_NET_COOKIECONTAINER_ISLOCALDOMAIN_OFFSET UNITYSDK_OFFSET(0x183363C0)
#define SYSTEM_NET_COOKIECONTAINER_MERGEUPDATECOLLECTIONS_OFFSET UNITYSDK_OFFSET(0x18338360)
#define SYSTEM_NET_COOKIECONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17693C00)
#define SYSTEM_NET_COOKIECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x183312A0)

namespace System::Net
{
	inline static constexpr unsigned int CookieContainer_TypeDefinitionIndex = 2793;

	class CookieContainer : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Net::HeaderVariantInfo>** StaticGet_HeaderInfo()
		{
			return (::Il2CppArray<::System::Net::HeaderVariantInfo>**)Il2CppClass::FromTypeDefinitionIndex(CookieContainer_TypeDefinitionIndex)->GetStaticField(0x12260);
		}
		::System::String* m_fqdnMyDomain; // 0x10
		::System::Collections::Hashtable* m_domainTable; // 0x18
		::System::Int32 m_maxCookiesPerDomain; // 0x20
		::System::Int32 m_maxCookieSize; // 0x24
		::System::Int32 m_count; // 0x28
		::System::Int32 m_maxCookies; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER__CCTOR_OFFSET))();
		}

		::System::Void AddRemoveDomain(::System::String* key, ::System::Net::PathList* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::PathList*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_ADDREMOVEDOMAIN_OFFSET))(this, key, value);
		}

		::System::Void Add(::System::Net::Cookie* cookie, ::System::Boolean throwOnError)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cookie*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_ADD_OFFSET))(this, cookie, throwOnError);
		}

		::System::Boolean AgeCookies(::System::String* domain)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_AGECOOKIES_OFFSET))(this, domain);
		}

		::System::Int32 ExpireCollection(::System::Net::CookieCollection* cc)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::CookieCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_EXPIRECOLLECTION_OFFSET))(this, cc);
		}

		::System::Boolean IsLocalDomain(::System::String* host)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_ISLOCALDOMAIN_OFFSET))(this, host);
		}

		::System::Net::CookieCollection* CookieCutter(::System::Uri* uri, ::System::String* headerName, ::System::String* setCookieHeader, ::System::Boolean isThrow)
		{
			return ((::System::Net::CookieCollection*(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_COOKIECUTTER_OFFSET))(this, uri, headerName, setCookieHeader, isThrow);
		}

		::System::Net::CookieCollection* InternalGetCookies(::System::Uri* uri)
		{
			return ((::System::Net::CookieCollection*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_INTERNALGETCOOKIES_OFFSET))(this, uri);
		}

		::System::Void BuildCookieCollectionFromDomainMatches(::System::Uri* uri, ::System::Boolean isSecure, ::System::Int32 port, ::System::Net::CookieCollection* cookies, ::System::Collections::Generic::List_1<::System::String*>* domainAttribute, ::System::Boolean matchOnlyPlainCookie)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Boolean, ::System::Int32, ::System::Net::CookieCollection*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_BUILDCOOKIECOLLECTIONFROMDOMAINMATCHES_OFFSET))(this, uri, isSecure, port, cookies, domainAttribute, matchOnlyPlainCookie);
		}

		::System::Void MergeUpdateCollections(::System::Net::CookieCollection* destination, ::System::Net::CookieCollection* source, ::System::Int32 port, ::System::Boolean isSecure, ::System::Boolean isPlainOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CookieCollection*, ::System::Net::CookieCollection*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_MERGEUPDATECOLLECTIONS_OFFSET))(this, destination, source, port, isSecure, isPlainOnly);
		}

		::System::String* GetCookieHeader(::System::Uri* uri)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_GETCOOKIEHEADER_OFFSET))(this, uri);
		}

		::System::String* GetCookieHeader_1(::System::Uri* uri, ::System::String*& optCookie2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_GETCOOKIEHEADER_1_OFFSET))(this, uri, optCookie2);
		}
	};
}
