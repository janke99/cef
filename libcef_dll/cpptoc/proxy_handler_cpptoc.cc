// Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// A portion of this file was generated by the CEF translator tool.  When
// making changes by hand only do so within the body of existing function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/proxy_handler_cpptoc.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK proxy_handler_get_proxy_for_url(
    struct _cef_proxy_handler_t* self, const cef_string_t* url,
    struct _cef_proxy_info_t* proxy_info)
{
  DCHECK(self);
  DCHECK(url);
  DCHECK(proxy_info);
  if (!self || !url || !proxy_info)
    return;

  CefProxyInfo info;

  // Take ownership of the values.
  info.AttachTo(*proxy_info);

  CefProxyHandlerCppToC::Get(self)->GetProxyForUrl(CefString(url), info);

  // Return the values to the structure.
  info.DetachTo(*proxy_info);
}


// CONSTRUCTOR - Do not edit by hand.

CefProxyHandlerCppToC::CefProxyHandlerCppToC(CefProxyHandler* cls)
    : CefCppToC<CefProxyHandlerCppToC, CefProxyHandler, cef_proxy_handler_t>(
        cls)
{
  struct_.struct_.get_proxy_for_url = proxy_handler_get_proxy_for_url;
}

#ifndef NDEBUG
template<> long CefCppToC<CefProxyHandlerCppToC, CefProxyHandler,
    cef_proxy_handler_t>::DebugObjCt = 0;
#endif
