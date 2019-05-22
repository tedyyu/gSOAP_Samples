/* soapServer.cpp
   Generated by gSOAP 2.8.83 for C:\Users\YYu\Documents\LR\release-2020\WebService\gsoap\gsoap_2.8.83\gsoap-2.8\gsoap\mod_gsoap\gsoap_win\isapi\vs2010\samples\dime\dime.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"

SOAP_SOURCE_STAMP("@(#) soapServer.cpp ver 2.8.83 2019-05-22 06:45:07 GMT")
extern "C" SOAP_FMAC5 int SOAP_FMAC6 soap_serve(struct soap *soap)
{
#ifndef WITH_FASTCGI
	soap->keep_alive = soap->max_keep_alive + 1;
#endif
	do
	{
#ifndef WITH_FASTCGI
		if (soap->keep_alive > 0 && soap->max_keep_alive > 0)
			soap->keep_alive--;
#endif
		if (soap_begin_serve(soap))
		{	if (soap->error >= SOAP_STOP)
				continue;
			return soap->error;
		}
		if ((soap_serve_request(soap) || (soap->fserveloop && soap->fserveloop(soap))) && soap->error && soap->error < SOAP_STOP)
		{
#ifdef WITH_FASTCGI
			soap_send_fault(soap);
#else
			return soap_send_fault(soap);
#endif
		}
#ifdef WITH_FASTCGI
		soap_destroy(soap);
		soap_end(soap);
	} while (1);
#else
	} while (soap->keep_alive);
#endif
	return SOAP_OK;
}

#ifndef WITH_NOSERVEREQUEST
extern "C" SOAP_FMAC5 int SOAP_FMAC6 soap_serve_request(struct soap *soap)
{
	soap_peek_element(soap);
	if (!soap_match_tag(soap, soap->tag, "ns:getImage"))
		return soap_serve_ns__getImage(soap);
	if (!soap_match_tag(soap, soap->tag, "ns:putImage"))
		return soap_serve_ns__putImage(soap);
	return soap->error = SOAP_NO_METHOD;
}
#endif

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__getImage(struct soap *soap)
{	struct ns__getImage soap_tmp_ns__getImage;
	struct ns__getImageResponse soap_tmp_ns__getImageResponse;
	soap_default_ns__getImageResponse(soap, &soap_tmp_ns__getImageResponse);
	soap_default_ns__getImage(soap, &soap_tmp_ns__getImage);
	if (!soap_get_ns__getImage(soap, &soap_tmp_ns__getImage, "ns:getImage", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = ns__getImage(soap, soap_tmp_ns__getImage.name, soap_tmp_ns__getImageResponse.image);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize_ns__getImageResponse(soap, &soap_tmp_ns__getImageResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__getImageResponse(soap, &soap_tmp_ns__getImageResponse, "ns:getImageResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__getImageResponse(soap, &soap_tmp_ns__getImageResponse, "ns:getImageResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__putImage(struct soap *soap)
{	struct ns__putImage soap_tmp_ns__putImage;
	struct ns__putImageResponse soap_tmp_ns__putImageResponse;
	soap_default_ns__putImageResponse(soap, &soap_tmp_ns__putImageResponse);
	soap_default_ns__putImage(soap, &soap_tmp_ns__putImage);
	if (!soap_get_ns__putImage(soap, &soap_tmp_ns__putImage, "ns:putImage", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = ns__putImage(soap, soap_tmp_ns__putImage.name, soap_tmp_ns__putImage.image, soap_tmp_ns__putImageResponse.status);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize_ns__putImageResponse(soap, &soap_tmp_ns__putImageResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__putImageResponse(soap, &soap_tmp_ns__putImageResponse, "ns:putImageResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__putImageResponse(soap, &soap_tmp_ns__putImageResponse, "ns:putImageResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapServer.cpp */
