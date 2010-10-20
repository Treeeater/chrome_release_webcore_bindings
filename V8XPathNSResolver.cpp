/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
    Boston, MA 02111-1307, USA.
*/

#include "config.h"
#include "V8XPathNSResolver.h"

#if ENABLE(XPATH)

#include "ExceptionCode.h"
#include "PlatformString.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8XPathNSResolver::info = { V8XPathNSResolver::GetTemplate, V8XPathNSResolver::derefObject, 0 };

namespace XPathNSResolverInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> lookupNamespaceURICallback(const v8::Arguments& args)
{
    INC_STATS("DOM.XPathNSResolver.lookupNamespaceURI");
    XPathNSResolver* imp = V8XPathNSResolver::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, prefix, args[0]);
    return v8StringOrNull(imp->lookupNamespaceURI(prefix));
}

} // namespace XPathNSResolverInternal

static const BatchedCallback XPathNSResolverCallbacks[] = {
    {"lookupNamespaceURI", XPathNSResolverInternal::lookupNamespaceURICallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8XPathNSResolverTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "XPathNSResolver", v8::Persistent<v8::FunctionTemplate>(), V8XPathNSResolver::internalFieldCount,
        0, 0,
        XPathNSResolverCallbacks, sizeof(XPathNSResolverCallbacks) / sizeof(*XPathNSResolverCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8XPathNSResolver::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8XPathNSResolverRawCache = createRawTemplate();
    return V8XPathNSResolverRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8XPathNSResolver::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8XPathNSResolverCache = ConfigureV8XPathNSResolverTemplate(GetRawTemplate());
    return V8XPathNSResolverCache;
}

XPathNSResolver* V8XPathNSResolver::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<XPathNSResolver*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8XPathNSResolver::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8XPathNSResolver::wrap(XPathNSResolver* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
        wrapper = getDOMObjectMap().get(impl);
        if (!wrapper.IsEmpty())
            return wrapper;
    wrapper = V8DOMWrapper::instantiateV8Object(proxy, &info, impl);
    if (wrapper.IsEmpty())
        return wrapper;

    impl->ref();
    getDOMObjectMap().set(impl, v8::Persistent<v8::Object>::New(wrapper));
    return wrapper;
}

v8::Handle<v8::Value> toV8(PassRefPtr<XPathNSResolver > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(XPathNSResolver* impl)
{
    if (!impl)
        return v8::Null();
    return V8XPathNSResolver::wrap(impl);
}

void V8XPathNSResolver::derefObject(void* object)
{
    static_cast<XPathNSResolver*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(XPATH)
