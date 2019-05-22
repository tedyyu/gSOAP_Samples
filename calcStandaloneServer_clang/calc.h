/* calc.h
   Generated by wsdl2h 2.8.83 from calc.wsdl and typemap.dat
   2019-05-21 09:34:35 GMT

   DO NOT INCLUDE THIS FILE DIRECTLY INTO YOUR PROJECT BUILDS
   USE THE soapcpp2-GENERATED SOURCE CODE FILES FOR YOUR PROJECT BUILDS

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

/**

@page page_notes Notes

@note HINTS:
 - Run soapcpp2 on calc.h to generate the SOAP/XML processing logic:
   Use soapcpp2 -I to specify paths for #import
   Use soapcpp2 -j to generate improved proxy and server classes.
   Use soapcpp2 -r to generate a report.
 - Edit 'typemap.dat' to control namespace bindings and type mappings:
   It is strongly recommended to customize the names of the namespace prefixes
   generated by wsdl2h. To do so, modify the prefix bindings in the Namespaces
   section below and add the modified lines to 'typemap.dat' to rerun wsdl2h.
 - Run Doxygen (www.doxygen.org) on this file to generate documentation.
 - Use wsdl2h -c to generate pure C code.
 - Use wsdl2h -R to include the REST operations defined by the WSDLs.
 - Use wsdl2h -O3 or -O4 to optimize by removing unused schema components.
 - Use wsdl2h -d to enable DOM support for xsd:any and xsd:anyType.
 - Use wsdl2h -F to simulate struct-type derivation in C (also works in C++).
 - Use wsdl2h -f to generate flat C++ class hierarchy, removes type derivation.
 - Use wsdl2h -g to generate top-level root elements with readers and writers.
 - Use wsdl2h -U to map XML names to C++ Unicode identifiers instead of _xNNNN.
 - Use wsdl2h -u to disable the generation of unions.
 - Use wsdl2h -L to remove this @note and all other @note comments.
 - Use wsdl2h -nname to use name as the base namespace prefix instead of 'ns'.
 - Use wsdl2h -Nname for service prefix and produce multiple service bindings
 - Struct/class members serialized as XML attributes are annotated with a '@'.
 - Struct/class members that have a special role are annotated with a '$'.

@warning
   DO NOT INCLUDE THIS ANNOTATED FILE DIRECTLY IN YOUR PROJECT SOURCE CODE.
   USE THE FILES GENERATED BY soapcpp2 FOR YOUR PROJECT'S SOURCE CODE:
   THE GENERATED soapStub.h FILE CONTAINS THIS CONTENT WITHOUT ANNOTATIONS.

@copyright LICENSE:
@verbatim
--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2000-2019, Robert van Engelen, Genivia Inc. All Rights Reserved.
The wsdl2h tool and its generated software are released under the GPL.
This software is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
GPL license.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA

Author contact information:
engelen@genivia.com / engelen@acm.org

This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial-use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
@endverbatim

*/


//gsoapopt c,w

/******************************************************************************\
 *                                                                            *
 * Definitions                                                                *
 *   http://websrv.cs.fsu.edu/~engelen/calc.wsdl                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/


/* NOTE:

It is strongly recommended to customize the names of the namespace prefixes
generated by wsdl2h. To do so, modify the prefix bindings below and add the
modified lines to 'typemap.dat' then rerun wsdl2h (use wsdl2h -t typemap.dat):

ns2 = "http://websrv.cs.fsu.edu/~engelen/calc.wsdl"
ns = "urn:calc"

*/

#define SOAP_NAMESPACE_OF_ns	"urn:calc"
//gsoap ns    schema namespace:	urn:calc
//gsoap ns    schema form:	unqualified

/******************************************************************************\
 *                                                                            *
 * Built-in Schema Types and Top-Level Elements and Attributes                *
 *                                                                            *
\******************************************************************************/



/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *   urn:calc                                                                 *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *   urn:calc                                                                 *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *   urn:calc                                                                 *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *   urn:calc                                                                 *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Services                                                                   *
 *                                                                            *
\******************************************************************************/


//gsoap ns   service name:	calc 
//gsoap ns   service type:	calcPortType 
//gsoap ns   service port:	http://websrv.cs.fsu.edu/~engelen/calcserver.cgi 
//gsoap ns   service namespace:	urn:calc 
//gsoap ns   service transport:	http://schemas.xmlsoap.org/soap/http 

/** @mainpage calc Definitions

@section calc_bindings Service Bindings

  - @ref calc

@section calc_more More Information

  - @ref page_notes "Notes"

  - @ref page_XMLDataBinding "XML Data Binding"

  - @ref SOAP_ENV__Header "SOAP Header Content" (when applicable)

  - @ref SOAP_ENV__Detail "SOAP Fault Detail Content" (when applicable)


*/

/**

@page calc Binding "calc"

@section calc_service Service Documentation "calc"
gSOAP 2.7.9k generated service definition

@section calc_operations Operations of Binding "calc"

  - @ref ns__add

  - @ref ns__sub

  - @ref ns__mul

  - @ref ns__div

  - @ref ns__pow

@section calc_ports Default endpoints of Binding "calc"

  - http://websrv.cs.fsu.edu/~engelen/calcserver.cgi

@note Use wsdl2h option -Nname to change the service binding prefix name


*/

/******************************************************************************\
 *                                                                            *
 * Service Binding                                                            *
 *   calc                                                                     *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   ns__add                                                                  *
 *                                                                            *
\******************************************************************************/


/** Operation "ns__add" of service binding "calc".
Service definition of function ns__add

  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

  - Default endpoints:
    - http://websrv.cs.fsu.edu/~engelen/calcserver.cgi

  - Addressing input action: ""

  - Addressing output action: "Response"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns__add(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    double                              a,
    double                              b,
    // output parameters:
    double                             *result
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns__add(
    struct soap *soap,
    // input parameters:
    double                              a,
    double                              b,
    // output parameters:
    double                             *result
  );
@endcode

*/

//gsoap ns   service method-protocol:	add SOAP
//gsoap ns   service method-style:	add rpc
//gsoap ns   service method-encoding:	add http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns   service method-action:	add ""
//gsoap ns   service method-output-action:	add Response
int ns__add(
    double                              :a,	///< Input parameter, :unqualified name as per RPC encoding
    double                              :b,	///< Input parameter, :unqualified name as per RPC encoding
    double                             *:result	///< Output parameter, :unqualified name as per RPC encoding
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   ns__sub                                                                  *
 *                                                                            *
\******************************************************************************/


/** Operation "ns__sub" of service binding "calc".
Service definition of function ns__sub

  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

  - Default endpoints:
    - http://websrv.cs.fsu.edu/~engelen/calcserver.cgi

  - Addressing input action: ""

  - Addressing output action: "Response"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns__sub(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    double                              a,
    double                              b,
    // output parameters:
    double                             *result
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns__sub(
    struct soap *soap,
    // input parameters:
    double                              a,
    double                              b,
    // output parameters:
    double                             *result
  );
@endcode

*/

//gsoap ns   service method-protocol:	sub SOAP
//gsoap ns   service method-style:	sub rpc
//gsoap ns   service method-encoding:	sub http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns   service method-action:	sub ""
//gsoap ns   service method-output-action:	sub Response
int ns__sub(
    double                              :a,	///< Input parameter, :unqualified name as per RPC encoding
    double                              :b,	///< Input parameter, :unqualified name as per RPC encoding
    double                             *:result	///< Output parameter, :unqualified name as per RPC encoding
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   ns__mul                                                                  *
 *                                                                            *
\******************************************************************************/


/** Operation "ns__mul" of service binding "calc".
Service definition of function ns__mul

  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

  - Default endpoints:
    - http://websrv.cs.fsu.edu/~engelen/calcserver.cgi

  - Addressing input action: ""

  - Addressing output action: "Response"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns__mul(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    double                              a,
    double                              b,
    // output parameters:
    double                             *result
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns__mul(
    struct soap *soap,
    // input parameters:
    double                              a,
    double                              b,
    // output parameters:
    double                             *result
  );
@endcode

*/

//gsoap ns   service method-protocol:	mul SOAP
//gsoap ns   service method-style:	mul rpc
//gsoap ns   service method-encoding:	mul http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns   service method-action:	mul ""
//gsoap ns   service method-output-action:	mul Response
int ns__mul(
    double                              :a,	///< Input parameter, :unqualified name as per RPC encoding
    double                              :b,	///< Input parameter, :unqualified name as per RPC encoding
    double                             *:result	///< Output parameter, :unqualified name as per RPC encoding
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   ns__div                                                                  *
 *                                                                            *
\******************************************************************************/


/** Operation "ns__div" of service binding "calc".
Service definition of function ns__div

  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

  - Default endpoints:
    - http://websrv.cs.fsu.edu/~engelen/calcserver.cgi

  - Addressing input action: ""

  - Addressing output action: "Response"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns__div(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    double                              a,
    double                              b,
    // output parameters:
    double                             *result
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns__div(
    struct soap *soap,
    // input parameters:
    double                              a,
    double                              b,
    // output parameters:
    double                             *result
  );
@endcode

*/

//gsoap ns   service method-protocol:	div SOAP
//gsoap ns   service method-style:	div rpc
//gsoap ns   service method-encoding:	div http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns   service method-action:	div ""
//gsoap ns   service method-output-action:	div Response
int ns__div(
    double                              :a,	///< Input parameter, :unqualified name as per RPC encoding
    double                              :b,	///< Input parameter, :unqualified name as per RPC encoding
    double                             *:result	///< Output parameter, :unqualified name as per RPC encoding
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   ns__pow                                                                  *
 *                                                                            *
\******************************************************************************/


/** Operation "ns__pow" of service binding "calc".
Service definition of function ns__pow

  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

  - Default endpoints:
    - http://websrv.cs.fsu.edu/~engelen/calcserver.cgi

  - Addressing input action: ""

  - Addressing output action: "Response"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns__pow(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    double                              a,
    double                              b,
    // output parameters:
    double                             *result
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns__pow(
    struct soap *soap,
    // input parameters:
    double                              a,
    double                              b,
    // output parameters:
    double                             *result
  );
@endcode

*/

//gsoap ns   service method-protocol:	pow SOAP
//gsoap ns   service method-style:	pow rpc
//gsoap ns   service method-encoding:	pow http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns   service method-action:	pow ""
//gsoap ns   service method-output-action:	pow Response
int ns__pow(
    double                              :a,	///< Input parameter, :unqualified name as per RPC encoding
    double                              :b,	///< Input parameter, :unqualified name as per RPC encoding
    double                             *:result	///< Output parameter, :unqualified name as per RPC encoding
);

/**

@page calc Binding "calc"

@section calc_policy_enablers Policy Enablers of Binding "calc"

None specified.

*/

/******************************************************************************\
 *                                                                            *
 * XML Data Binding                                                           *
 *                                                                            *
\******************************************************************************/


/**

@page page_XMLDataBinding XML Data Binding

SOAP/XML services use data bindings that are contractually bound by WSDL and
are auto-generated by wsdl2h and soapcpp2 (see Service Bindings). Plain data
bindings are adopted from XML schemas as part of the WSDL types section or when
running wsdl2h on a set of schemas to produce non-SOAP-based XML data bindings.

@note The following readers and writers are C/C++ data type (de)serializers
auto-generated by wsdl2h and soapcpp2. Run soapcpp2 on this file to generate the
(de)serialization code, which is stored in soapC.c[pp]. Include "soapH.h" in
your code to import these data type and function declarations. Only use the
soapcpp2-generated files in your project build. Do not include the wsdl2h-
generated .h file in your code.

@note Data can be read and deserialized from:
  - an int file descriptor, using soap->recvfd = fd
  - a socket, using soap->socket = (int)...
  - a C++ stream (istream, stringstream), using soap->is = (istream*)...
  - a C string, using soap->is = (const char*)...
  - any input, using the soap->frecv() callback

@note Data can be serialized and written to:
  - an int file descriptor, using soap->sendfd = (int)...
  - a socket, using soap->socket = (int)...
  - a C++ stream (ostream, stringstream), using soap->os = (ostream*)...
  - a C string, using soap->os = (const char**)...
  - any output, using the soap->fsend() callback

@note The following options are available for (de)serialization control:
  - soap->encodingStyle = NULL; to remove SOAP 1.1/1.2 encodingStyle
  - soap_set_mode(soap, SOAP_XML_TREE); XML without id-ref (no cycles!)
  - soap_set_mode(soap, SOAP_XML_GRAPH); XML with id-ref (including cycles)
  - soap_set_namespaces(soap, struct Namespace *nsmap); to set xmlns bindings


@section ns Top-level root elements of schema "urn:calc"

*/

/* End of calc.h */
