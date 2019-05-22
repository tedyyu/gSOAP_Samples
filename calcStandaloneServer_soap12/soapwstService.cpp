/* soapwstService.cpp
   Generated by gSOAP 2.8.83 for C:\hands-on\git\gSOAP_Samples\calcStandaloneServer_soap12\calc.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapwstService.h"

wstService::wstService()
{	this->soap = soap_new();
	this->soap_own = true;
	wstService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

wstService::wstService(const wstService& rhs)
{	this->soap = rhs.soap;
	this->soap_own = false;
}

wstService::wstService(struct soap *_soap)
{	this->soap = _soap;
	this->soap_own = false;
	wstService_init(_soap->imode, _soap->omode);
}

wstService::wstService(soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	wstService_init(iomode, iomode);
}

wstService::wstService(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->soap_own = true;
	wstService_init(imode, omode);
}

wstService::~wstService()
{	if (this->soap_own)
	{	this->destroy();
		soap_free(this->soap);
	}
}

void wstService::wstService_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	static const struct Namespace namespaces[] = {
        { "SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL },
        { "SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL },
        { "xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL },
        { "xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL },
        { "ns2", "http://schemas.microsoft.com/2003/10/Serialization/", NULL, NULL },
        { "tns", "http://tempuri.org/", NULL, NULL },
        { "c14n", "http://www.w3.org/2001/10/xml-exc-c14n#", NULL, NULL },
        { "ds", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL },
        { "saml1", "urn:oasis:names:tc:SAML:1.0:assertion", NULL, NULL },
        { "saml2", "urn:oasis:names:tc:SAML:2.0:assertion", NULL, NULL },
        { "xenc", "http://www.w3.org/2001/04/xmlenc#", NULL, NULL },
        { "wsc", "http://docs.oasis-open.org/ws-sx/ws-secureconversation/200512", "http://schemas.xmlsoap.org/ws/2005/02/sc", NULL },
        { "wsse", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd", "http://docs.oasis-open.org/wss/oasis-wss-wssecurity-secext-1.1.xsd", NULL },
        { "chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL },
        { "wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL },
        { "wsp", "http://schemas.xmlsoap.org/ws/2004/09/policy", NULL, NULL },
        { "wsu", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd", NULL, NULL },
        { "wst", "http://docs.oasis-open.org/ws-sx/ws-trust/200512", "http://schemas.xmlsoap.org/ws/2005/02/trust", NULL },
        { NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this->soap, namespaces);
}

void wstService::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void wstService::reset()
{	this->destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	wstService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

#ifndef WITH_PURE_VIRTUAL
wstService *wstService::copy()
{	wstService *dup = SOAP_NEW_UNMANAGED(wstService);
	if (dup)
	{	soap_done(dup->soap);
		soap_copy_context(dup->soap, this->soap);
	}
	return dup;
}
#endif

wstService& wstService::operator=(const wstService& rhs)
{	if (this->soap != rhs.soap)
	{	if (this->soap_own)
			soap_free(this->soap);
		this->soap = rhs.soap;
		this->soap_own = false;
	}
	return *this;
}

int wstService::soap_close_socket()
{	return soap_closesock(this->soap);
}

int wstService::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

int wstService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this->soap, string, detailXML);
}

int wstService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

int wstService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this->soap, string, detailXML);
}

int wstService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

void wstService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void wstService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *wstService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

void wstService::soap_noheader()
{	this->soap->header = NULL;
}

void wstService::soap_header(struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, int __sizeIssuedTokens, struct wst__RequestSecurityTokenResponseCollectionType *wst__IssuedTokens, char *wst__RequestType)
{
	::soap_header(this->soap);
	this->soap->header->wsse__Security = wsse__Security;
	this->soap->header->wsa5__MessageID = wsa5__MessageID;
	this->soap->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->soap->header->wsa5__From = wsa5__From;
	this->soap->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->soap->header->wsa5__FaultTo = wsa5__FaultTo;
	this->soap->header->wsa5__To = wsa5__To;
	this->soap->header->wsa5__Action = wsa5__Action;
	this->soap->header->chan__ChannelInstance = chan__ChannelInstance;
	this->soap->header->__sizeIssuedTokens = __sizeIssuedTokens;
	this->soap->header->wst__IssuedTokens = wst__IssuedTokens;
	this->soap->header->wst__RequestType = wst__RequestType;
}

::SOAP_ENV__Header *wstService::soap_header()
{	return this->soap->header;
}

#ifndef WITH_NOIO
int wstService::run(int port, int backlog)
{	if (!soap_valid_socket(this->soap->master) && !soap_valid_socket(this->bind(NULL, port, backlog)))
		return this->soap->error;
	for (;;)
	{	if (!soap_valid_socket(this->accept()))
		{	if (this->soap->errnum == 0) // timeout?
				this->soap->error = SOAP_OK;
			break;
		}
		if (this->serve())
			break;
		this->destroy();
	}
	return this->soap->error;
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int wstService::ssl_run(int port, int backlog)
{	if (!soap_valid_socket(this->soap->master) && !soap_valid_socket(this->bind(NULL, port, backlog)))
		return this->soap->error;
	for (;;)
	{	if (!soap_valid_socket(this->accept()))
		{	if (this->soap->errnum == 0) // timeout?
				this->soap->error = SOAP_OK;
			break;
		}
		if (this->ssl_accept() || this->serve())
			break;
		this->destroy();
	}
	return this->soap->error;
}
#endif

SOAP_SOCKET wstService::bind(const char *host, int port, int backlog)
{	return soap_bind(this->soap, host, port, backlog);
}

SOAP_SOCKET wstService::accept()
{	return soap_accept(this->soap);
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int wstService::ssl_accept()
{	return soap_ssl_accept(this->soap);
}
#endif
#endif

int wstService::serve()
{
#ifndef WITH_FASTCGI
	this->soap->keep_alive = this->soap->max_keep_alive + 1;
#endif
	do
	{
#ifndef WITH_FASTCGI
		if (this->soap->keep_alive > 0 && this->soap->max_keep_alive > 0)
			this->soap->keep_alive--;
#endif
		if (soap_begin_serve(this->soap))
		{	if (this->soap->error >= SOAP_STOP)
				continue;
			return this->soap->error;
		}
		if ((dispatch() || (this->soap->fserveloop && this->soap->fserveloop(this->soap))) && this->soap->error && this->soap->error < SOAP_STOP)
		{
#ifdef WITH_FASTCGI
			soap_send_fault(this->soap);
#else
			return soap_send_fault(this->soap);
#endif
		}
#ifdef WITH_FASTCGI
		soap_destroy(this->soap);
		soap_end(this->soap);
	} while (1);
#else
	} while (this->soap->keep_alive);
#endif
	return SOAP_OK;
}

static int serve___wst__RequestSecurityToken(struct soap*, wstService*);
static int serve___wst__RequestSecurityTokenResponse(struct soap*, wstService*);
static int serve___wst__RequestSecurityTokenCollection(struct soap*, wstService*);

int wstService::dispatch()
{	return dispatch(this->soap);
}

int wstService::dispatch(struct soap* soap)
{
	wstService_init(soap->imode, soap->omode);
	soap_peek_element(soap);
	if (!soap_match_tag(soap, soap->tag, "wst:RequestSecurityToken"))
		return serve___wst__RequestSecurityToken(soap, this);
	if (!soap_match_tag(soap, soap->tag, "wst:RequestSecurityTokenResponse"))
		return serve___wst__RequestSecurityTokenResponse(soap, this);
	if (!soap_match_tag(soap, soap->tag, "wst:RequestSecurityTokenCollection"))
		return serve___wst__RequestSecurityTokenCollection(soap, this);
	return soap->error = SOAP_NO_METHOD;
}

static int serve___wst__RequestSecurityToken(struct soap *soap, wstService *service)
{	struct __wst__RequestSecurityToken soap_tmp___wst__RequestSecurityToken;
	struct wst__RequestSecurityTokenResponseType wst__RequestSecurityTokenResponse;
	soap_default_wst__RequestSecurityTokenResponseType(soap, &wst__RequestSecurityTokenResponse);
	soap_default___wst__RequestSecurityToken(soap, &soap_tmp___wst__RequestSecurityToken);
	if (!soap_get___wst__RequestSecurityToken(soap, &soap_tmp___wst__RequestSecurityToken, "-wst:RequestSecurityToken", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->RequestSecurityToken(soap_tmp___wst__RequestSecurityToken.wst__RequestSecurityToken, &wst__RequestSecurityTokenResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize_wst__RequestSecurityTokenResponseType(soap, &wst__RequestSecurityTokenResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_wst__RequestSecurityTokenResponseType(soap, &wst__RequestSecurityTokenResponse, "wst:RequestSecurityTokenResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_wst__RequestSecurityTokenResponseType(soap, &wst__RequestSecurityTokenResponse, "wst:RequestSecurityTokenResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___wst__RequestSecurityTokenResponse(struct soap *soap, wstService *service)
{	struct __wst__RequestSecurityTokenResponse soap_tmp___wst__RequestSecurityTokenResponse;
	struct wst__RequestSecurityTokenResponseCollectionType wst__RequestSecurityTokenResponseCollection;
	soap_default_wst__RequestSecurityTokenResponseCollectionType(soap, &wst__RequestSecurityTokenResponseCollection);
	soap_default___wst__RequestSecurityTokenResponse(soap, &soap_tmp___wst__RequestSecurityTokenResponse);
	if (!soap_get___wst__RequestSecurityTokenResponse(soap, &soap_tmp___wst__RequestSecurityTokenResponse, "-wst:RequestSecurityTokenResponse", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->RequestSecurityTokenResponse(soap_tmp___wst__RequestSecurityTokenResponse.wst__RequestSecurityTokenResponse, &wst__RequestSecurityTokenResponseCollection);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize_wst__RequestSecurityTokenResponseCollectionType(soap, &wst__RequestSecurityTokenResponseCollection);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_wst__RequestSecurityTokenResponseCollectionType(soap, &wst__RequestSecurityTokenResponseCollection, "wst:RequestSecurityTokenResponseCollection", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_wst__RequestSecurityTokenResponseCollectionType(soap, &wst__RequestSecurityTokenResponseCollection, "wst:RequestSecurityTokenResponseCollection", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___wst__RequestSecurityTokenCollection(struct soap *soap, wstService *service)
{	struct __wst__RequestSecurityTokenCollection soap_tmp___wst__RequestSecurityTokenCollection;
	struct wst__RequestSecurityTokenResponseCollectionType wst__RequestSecurityTokenResponseCollection;
	soap_default_wst__RequestSecurityTokenResponseCollectionType(soap, &wst__RequestSecurityTokenResponseCollection);
	soap_default___wst__RequestSecurityTokenCollection(soap, &soap_tmp___wst__RequestSecurityTokenCollection);
	if (!soap_get___wst__RequestSecurityTokenCollection(soap, &soap_tmp___wst__RequestSecurityTokenCollection, "-wst:RequestSecurityTokenCollection", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->RequestSecurityTokenCollection(soap_tmp___wst__RequestSecurityTokenCollection.wst__RequestSecurityTokenCollection, &wst__RequestSecurityTokenResponseCollection);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize_wst__RequestSecurityTokenResponseCollectionType(soap, &wst__RequestSecurityTokenResponseCollection);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_wst__RequestSecurityTokenResponseCollectionType(soap, &wst__RequestSecurityTokenResponseCollection, "wst:RequestSecurityTokenResponseCollection", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_wst__RequestSecurityTokenResponseCollectionType(soap, &wst__RequestSecurityTokenResponseCollection, "wst:RequestSecurityTokenResponseCollection", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */
