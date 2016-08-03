/* onvifanalyticsRuleEngineBindingProxy.cpp
   Generated by gSOAP 2.8.22 from rcx.h

Copyright(C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "onvifanalyticsRuleEngineBindingProxy.h"

RuleEngineBindingProxy::RuleEngineBindingProxy()
{	this->soap = soap_new();
	this->soap_own = true;
	RuleEngineBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

RuleEngineBindingProxy::RuleEngineBindingProxy(struct soap *_soap)
{	this->soap = _soap;
	this->soap_own = false;
	RuleEngineBindingProxy_init(_soap->imode, _soap->omode);
}

RuleEngineBindingProxy::RuleEngineBindingProxy(const char *url)
{	this->soap = soap_new();
	this->soap_own = true;
	RuleEngineBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = url;
}

RuleEngineBindingProxy::RuleEngineBindingProxy(soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	RuleEngineBindingProxy_init(iomode, iomode);
}

RuleEngineBindingProxy::RuleEngineBindingProxy(const char *url, soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	RuleEngineBindingProxy_init(iomode, iomode);
	soap_endpoint = url;
}

RuleEngineBindingProxy::RuleEngineBindingProxy(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->soap_own = true;
	RuleEngineBindingProxy_init(imode, omode);
}

RuleEngineBindingProxy::~RuleEngineBindingProxy()
{	if (this->soap_own)
		soap_free(this->soap);
}

void RuleEngineBindingProxy::RuleEngineBindingProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
	{"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL},
	{"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
	{"xmime", "http://tempuri.org/xmime.xsd", NULL, NULL},
	{"xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL},
	{"tt", "http://www.onvif.org/ver10/schema", NULL, NULL},
	{"wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL},
	{"wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL},
	{"wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL},
	{"analyticsws", "http://www.onvif.org/ver20/analytics/wsdl", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	soap_set_namespaces(this->soap, namespaces);
}

void RuleEngineBindingProxy::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void RuleEngineBindingProxy::reset()
{	destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	RuleEngineBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void RuleEngineBindingProxy::soap_noheader()
{	this->soap->header = NULL;
}

void RuleEngineBindingProxy::soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance)
{	::soap_header(this->soap);
	this->soap->header->wsa5__MessageID = wsa5__MessageID;
	this->soap->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->soap->header->wsa5__From = wsa5__From;
	this->soap->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->soap->header->wsa5__FaultTo = wsa5__FaultTo;
	this->soap->header->wsa5__To = wsa5__To;
	this->soap->header->wsa5__Action = wsa5__Action;
	this->soap->header->chan__ChannelInstance = chan__ChannelInstance;
}

const SOAP_ENV__Header *RuleEngineBindingProxy::soap_header()
{	return this->soap->header;
}

const SOAP_ENV__Fault *RuleEngineBindingProxy::soap_fault()
{	return this->soap->fault;
}

const char *RuleEngineBindingProxy::soap_fault_string()
{	return *soap_faultstring(this->soap);
}

const char *RuleEngineBindingProxy::soap_fault_detail()
{	return *soap_faultdetail(this->soap);
}

int RuleEngineBindingProxy::soap_close_socket()
{	return soap_closesock(this->soap);
}

int RuleEngineBindingProxy::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

void RuleEngineBindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void RuleEngineBindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *RuleEngineBindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

int RuleEngineBindingProxy::GetSupportedRules(const char *endpoint, const char *soap_action, _analyticsws__GetSupportedRules *analyticsws__GetSupportedRules, _analyticsws__GetSupportedRulesResponse &analyticsws__GetSupportedRulesResponse)
{	struct soap *soap = this->soap;
	struct __analyticsws__GetSupportedRules soap_tmp___analyticsws__GetSupportedRules;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver20/analytics/wsdl/GetSupportedRules";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___analyticsws__GetSupportedRules.analyticsws__GetSupportedRules = analyticsws__GetSupportedRules;
	soap_serializeheader(soap);
	soap_serialize___analyticsws__GetSupportedRules(soap, &soap_tmp___analyticsws__GetSupportedRules);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___analyticsws__GetSupportedRules(soap, &soap_tmp___analyticsws__GetSupportedRules, "-analyticsws:GetSupportedRules", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___analyticsws__GetSupportedRules(soap, &soap_tmp___analyticsws__GetSupportedRules, "-analyticsws:GetSupportedRules", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&analyticsws__GetSupportedRulesResponse)
		return soap_closesock(soap);
	analyticsws__GetSupportedRulesResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	analyticsws__GetSupportedRulesResponse.soap_get(soap, "analyticsws:GetSupportedRulesResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int RuleEngineBindingProxy::CreateRules(const char *endpoint, const char *soap_action, _analyticsws__CreateRules *analyticsws__CreateRules, _analyticsws__CreateRulesResponse &analyticsws__CreateRulesResponse)
{	struct soap *soap = this->soap;
	struct __analyticsws__CreateRules soap_tmp___analyticsws__CreateRules;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver20/analytics/wsdl/CreateRules";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___analyticsws__CreateRules.analyticsws__CreateRules = analyticsws__CreateRules;
	soap_serializeheader(soap);
	soap_serialize___analyticsws__CreateRules(soap, &soap_tmp___analyticsws__CreateRules);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___analyticsws__CreateRules(soap, &soap_tmp___analyticsws__CreateRules, "-analyticsws:CreateRules", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___analyticsws__CreateRules(soap, &soap_tmp___analyticsws__CreateRules, "-analyticsws:CreateRules", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&analyticsws__CreateRulesResponse)
		return soap_closesock(soap);
	analyticsws__CreateRulesResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	analyticsws__CreateRulesResponse.soap_get(soap, "analyticsws:CreateRulesResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int RuleEngineBindingProxy::DeleteRules(const char *endpoint, const char *soap_action, _analyticsws__DeleteRules *analyticsws__DeleteRules, _analyticsws__DeleteRulesResponse &analyticsws__DeleteRulesResponse)
{	struct soap *soap = this->soap;
	struct __analyticsws__DeleteRules soap_tmp___analyticsws__DeleteRules;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver20/analytics/wsdl/DeleteRules";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___analyticsws__DeleteRules.analyticsws__DeleteRules = analyticsws__DeleteRules;
	soap_serializeheader(soap);
	soap_serialize___analyticsws__DeleteRules(soap, &soap_tmp___analyticsws__DeleteRules);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___analyticsws__DeleteRules(soap, &soap_tmp___analyticsws__DeleteRules, "-analyticsws:DeleteRules", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___analyticsws__DeleteRules(soap, &soap_tmp___analyticsws__DeleteRules, "-analyticsws:DeleteRules", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&analyticsws__DeleteRulesResponse)
		return soap_closesock(soap);
	analyticsws__DeleteRulesResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	analyticsws__DeleteRulesResponse.soap_get(soap, "analyticsws:DeleteRulesResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int RuleEngineBindingProxy::GetRules(const char *endpoint, const char *soap_action, _analyticsws__GetRules *analyticsws__GetRules, _analyticsws__GetRulesResponse &analyticsws__GetRulesResponse)
{	struct soap *soap = this->soap;
	struct __analyticsws__GetRules soap_tmp___analyticsws__GetRules;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver20/analytics/wsdl/GetRules";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___analyticsws__GetRules.analyticsws__GetRules = analyticsws__GetRules;
	soap_serializeheader(soap);
	soap_serialize___analyticsws__GetRules(soap, &soap_tmp___analyticsws__GetRules);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___analyticsws__GetRules(soap, &soap_tmp___analyticsws__GetRules, "-analyticsws:GetRules", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___analyticsws__GetRules(soap, &soap_tmp___analyticsws__GetRules, "-analyticsws:GetRules", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&analyticsws__GetRulesResponse)
		return soap_closesock(soap);
	analyticsws__GetRulesResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	analyticsws__GetRulesResponse.soap_get(soap, "analyticsws:GetRulesResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int RuleEngineBindingProxy::ModifyRules(const char *endpoint, const char *soap_action, _analyticsws__ModifyRules *analyticsws__ModifyRules, _analyticsws__ModifyRulesResponse &analyticsws__ModifyRulesResponse)
{	struct soap *soap = this->soap;
	struct __analyticsws__ModifyRules soap_tmp___analyticsws__ModifyRules;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver20/analytics/wsdl/ModifyRules";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___analyticsws__ModifyRules.analyticsws__ModifyRules = analyticsws__ModifyRules;
	soap_serializeheader(soap);
	soap_serialize___analyticsws__ModifyRules(soap, &soap_tmp___analyticsws__ModifyRules);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___analyticsws__ModifyRules(soap, &soap_tmp___analyticsws__ModifyRules, "-analyticsws:ModifyRules", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___analyticsws__ModifyRules(soap, &soap_tmp___analyticsws__ModifyRules, "-analyticsws:ModifyRules", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&analyticsws__ModifyRulesResponse)
		return soap_closesock(soap);
	analyticsws__ModifyRulesResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	analyticsws__ModifyRulesResponse.soap_get(soap, "analyticsws:ModifyRulesResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int RuleEngineBindingProxy::GetServiceCapabilities(const char *endpoint, const char *soap_action, _analyticsws__GetServiceCapabilities *analyticsws__GetServiceCapabilities, _analyticsws__GetServiceCapabilitiesResponse &analyticsws__GetServiceCapabilitiesResponse)
{	struct soap *soap = this->soap;
	struct __analyticsws__GetServiceCapabilities soap_tmp___analyticsws__GetServiceCapabilities;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver20/analytics/wsdl/GetServiceCapabilities";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___analyticsws__GetServiceCapabilities.analyticsws__GetServiceCapabilities = analyticsws__GetServiceCapabilities;
	soap_serializeheader(soap);
	soap_serialize___analyticsws__GetServiceCapabilities(soap, &soap_tmp___analyticsws__GetServiceCapabilities);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___analyticsws__GetServiceCapabilities(soap, &soap_tmp___analyticsws__GetServiceCapabilities, "-analyticsws:GetServiceCapabilities", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___analyticsws__GetServiceCapabilities(soap, &soap_tmp___analyticsws__GetServiceCapabilities, "-analyticsws:GetServiceCapabilities", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&analyticsws__GetServiceCapabilitiesResponse)
		return soap_closesock(soap);
	analyticsws__GetServiceCapabilitiesResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	analyticsws__GetServiceCapabilitiesResponse.soap_get(soap, "analyticsws:GetServiceCapabilitiesResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int RuleEngineBindingProxy::GetSupportedAnalyticsModules(const char *endpoint, const char *soap_action, _analyticsws__GetSupportedAnalyticsModules *analyticsws__GetSupportedAnalyticsModules, _analyticsws__GetSupportedAnalyticsModulesResponse &analyticsws__GetSupportedAnalyticsModulesResponse)
{	struct soap *soap = this->soap;
	struct __analyticsws__GetSupportedAnalyticsModules soap_tmp___analyticsws__GetSupportedAnalyticsModules;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver20/analytics/wsdl/GetSupportedAnalyticsModules";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___analyticsws__GetSupportedAnalyticsModules.analyticsws__GetSupportedAnalyticsModules = analyticsws__GetSupportedAnalyticsModules;
	soap_serializeheader(soap);
	soap_serialize___analyticsws__GetSupportedAnalyticsModules(soap, &soap_tmp___analyticsws__GetSupportedAnalyticsModules);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___analyticsws__GetSupportedAnalyticsModules(soap, &soap_tmp___analyticsws__GetSupportedAnalyticsModules, "-analyticsws:GetSupportedAnalyticsModules", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___analyticsws__GetSupportedAnalyticsModules(soap, &soap_tmp___analyticsws__GetSupportedAnalyticsModules, "-analyticsws:GetSupportedAnalyticsModules", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&analyticsws__GetSupportedAnalyticsModulesResponse)
		return soap_closesock(soap);
	analyticsws__GetSupportedAnalyticsModulesResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	analyticsws__GetSupportedAnalyticsModulesResponse.soap_get(soap, "analyticsws:GetSupportedAnalyticsModulesResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int RuleEngineBindingProxy::CreateAnalyticsModules(const char *endpoint, const char *soap_action, _analyticsws__CreateAnalyticsModules *analyticsws__CreateAnalyticsModules, _analyticsws__CreateAnalyticsModulesResponse &analyticsws__CreateAnalyticsModulesResponse)
{	struct soap *soap = this->soap;
	struct __analyticsws__CreateAnalyticsModules soap_tmp___analyticsws__CreateAnalyticsModules;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver20/analytics/wsdl/CreateAnalyticsModules";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___analyticsws__CreateAnalyticsModules.analyticsws__CreateAnalyticsModules = analyticsws__CreateAnalyticsModules;
	soap_serializeheader(soap);
	soap_serialize___analyticsws__CreateAnalyticsModules(soap, &soap_tmp___analyticsws__CreateAnalyticsModules);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___analyticsws__CreateAnalyticsModules(soap, &soap_tmp___analyticsws__CreateAnalyticsModules, "-analyticsws:CreateAnalyticsModules", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___analyticsws__CreateAnalyticsModules(soap, &soap_tmp___analyticsws__CreateAnalyticsModules, "-analyticsws:CreateAnalyticsModules", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&analyticsws__CreateAnalyticsModulesResponse)
		return soap_closesock(soap);
	analyticsws__CreateAnalyticsModulesResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	analyticsws__CreateAnalyticsModulesResponse.soap_get(soap, "analyticsws:CreateAnalyticsModulesResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int RuleEngineBindingProxy::DeleteAnalyticsModules(const char *endpoint, const char *soap_action, _analyticsws__DeleteAnalyticsModules *analyticsws__DeleteAnalyticsModules, _analyticsws__DeleteAnalyticsModulesResponse &analyticsws__DeleteAnalyticsModulesResponse)
{	struct soap *soap = this->soap;
	struct __analyticsws__DeleteAnalyticsModules soap_tmp___analyticsws__DeleteAnalyticsModules;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver20/analytics/wsdl/DeleteAnalyticsModules";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___analyticsws__DeleteAnalyticsModules.analyticsws__DeleteAnalyticsModules = analyticsws__DeleteAnalyticsModules;
	soap_serializeheader(soap);
	soap_serialize___analyticsws__DeleteAnalyticsModules(soap, &soap_tmp___analyticsws__DeleteAnalyticsModules);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___analyticsws__DeleteAnalyticsModules(soap, &soap_tmp___analyticsws__DeleteAnalyticsModules, "-analyticsws:DeleteAnalyticsModules", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___analyticsws__DeleteAnalyticsModules(soap, &soap_tmp___analyticsws__DeleteAnalyticsModules, "-analyticsws:DeleteAnalyticsModules", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&analyticsws__DeleteAnalyticsModulesResponse)
		return soap_closesock(soap);
	analyticsws__DeleteAnalyticsModulesResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	analyticsws__DeleteAnalyticsModulesResponse.soap_get(soap, "analyticsws:DeleteAnalyticsModulesResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int RuleEngineBindingProxy::GetAnalyticsModules(const char *endpoint, const char *soap_action, _analyticsws__GetAnalyticsModules *analyticsws__GetAnalyticsModules, _analyticsws__GetAnalyticsModulesResponse &analyticsws__GetAnalyticsModulesResponse)
{	struct soap *soap = this->soap;
	struct __analyticsws__GetAnalyticsModules soap_tmp___analyticsws__GetAnalyticsModules;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver20/analytics/wsdl/GetAnalyticsModules";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___analyticsws__GetAnalyticsModules.analyticsws__GetAnalyticsModules = analyticsws__GetAnalyticsModules;
	soap_serializeheader(soap);
	soap_serialize___analyticsws__GetAnalyticsModules(soap, &soap_tmp___analyticsws__GetAnalyticsModules);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___analyticsws__GetAnalyticsModules(soap, &soap_tmp___analyticsws__GetAnalyticsModules, "-analyticsws:GetAnalyticsModules", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___analyticsws__GetAnalyticsModules(soap, &soap_tmp___analyticsws__GetAnalyticsModules, "-analyticsws:GetAnalyticsModules", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&analyticsws__GetAnalyticsModulesResponse)
		return soap_closesock(soap);
	analyticsws__GetAnalyticsModulesResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	analyticsws__GetAnalyticsModulesResponse.soap_get(soap, "analyticsws:GetAnalyticsModulesResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int RuleEngineBindingProxy::ModifyAnalyticsModules(const char *endpoint, const char *soap_action, _analyticsws__ModifyAnalyticsModules *analyticsws__ModifyAnalyticsModules, _analyticsws__ModifyAnalyticsModulesResponse &analyticsws__ModifyAnalyticsModulesResponse)
{	struct soap *soap = this->soap;
	struct __analyticsws__ModifyAnalyticsModules soap_tmp___analyticsws__ModifyAnalyticsModules;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver20/analytics/wsdl/ModifyAnalyticsModules";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___analyticsws__ModifyAnalyticsModules.analyticsws__ModifyAnalyticsModules = analyticsws__ModifyAnalyticsModules;
	soap_serializeheader(soap);
	soap_serialize___analyticsws__ModifyAnalyticsModules(soap, &soap_tmp___analyticsws__ModifyAnalyticsModules);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___analyticsws__ModifyAnalyticsModules(soap, &soap_tmp___analyticsws__ModifyAnalyticsModules, "-analyticsws:ModifyAnalyticsModules", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___analyticsws__ModifyAnalyticsModules(soap, &soap_tmp___analyticsws__ModifyAnalyticsModules, "-analyticsws:ModifyAnalyticsModules", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&analyticsws__ModifyAnalyticsModulesResponse)
		return soap_closesock(soap);
	analyticsws__ModifyAnalyticsModulesResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	analyticsws__ModifyAnalyticsModulesResponse.soap_get(soap, "analyticsws:ModifyAnalyticsModulesResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */