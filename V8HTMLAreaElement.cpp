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
#include "V8HTMLAreaElement.h"

#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8HTMLAreaElement::info = { V8HTMLAreaElement::GetTemplate, V8HTMLAreaElement::derefObject, 0 };

namespace HTMLAreaElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> accessKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.accessKey._get");
    return getElementStringAttr(info, HTMLNames::accesskeyAttr);
}

static void accessKeyAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.accessKey._set");
    setElementStringAttr(info, HTMLNames::accesskeyAttr, value);
}

static v8::Handle<v8::Value> altAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.alt._get");
    return getElementStringAttr(info, HTMLNames::altAttr);
}

static void altAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.alt._set");
    setElementStringAttr(info, HTMLNames::altAttr, value);
}

static v8::Handle<v8::Value> coordsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.coords._get");
    return getElementStringAttr(info, HTMLNames::coordsAttr);
}

static void coordsAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.coords._set");
    setElementStringAttr(info, HTMLNames::coordsAttr, value);
}

static v8::Handle<v8::Value> hrefAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.href._get");
    HTMLAreaElement* imp = V8HTMLAreaElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->getURLAttribute(WebCore::HTMLNames::hrefAttr));
}

static void hrefAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.href._set");
    setElementStringAttr(info, HTMLNames::hrefAttr, value);
}

static v8::Handle<v8::Value> noHrefAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.noHref._get");
    HTMLAreaElement* imp = V8HTMLAreaElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8Boolean(imp->hasAttribute(WebCore::HTMLNames::nohrefAttr));
}

static void noHrefAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.noHref._set");
    HTMLAreaElement* imp = V8HTMLAreaElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setBooleanAttribute(WebCore::HTMLNames::nohrefAttr, v);
    return;
}

static v8::Handle<v8::Value> shapeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.shape._get");
    return getElementStringAttr(info, HTMLNames::shapeAttr);
}

static void shapeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.shape._set");
    setElementStringAttr(info, HTMLNames::shapeAttr, value);
}

static v8::Handle<v8::Value> targetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.target._get");
    return getElementStringAttr(info, HTMLNames::targetAttr);
}

static void targetAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.target._set");
    setElementStringAttr(info, HTMLNames::targetAttr, value);
}

static v8::Handle<v8::Value> hashAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.hash._get");
    HTMLAreaElement* imp = V8HTMLAreaElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->hash());
}

static v8::Handle<v8::Value> hostAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.host._get");
    HTMLAreaElement* imp = V8HTMLAreaElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->host());
}

static v8::Handle<v8::Value> hostnameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.hostname._get");
    HTMLAreaElement* imp = V8HTMLAreaElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->hostname());
}

static v8::Handle<v8::Value> pathnameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.pathname._get");
    HTMLAreaElement* imp = V8HTMLAreaElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->pathname());
}

static v8::Handle<v8::Value> portAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.port._get");
    HTMLAreaElement* imp = V8HTMLAreaElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->port());
}

static v8::Handle<v8::Value> protocolAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.protocol._get");
    HTMLAreaElement* imp = V8HTMLAreaElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->protocol());
}

static v8::Handle<v8::Value> searchAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAreaElement.search._get");
    HTMLAreaElement* imp = V8HTMLAreaElement::toNative(info.Holder());
	if (!R_check(imp)) return v8::Handle<v8::Value>(v8::Undefined());
    return v8String(imp->search());
}

} // namespace HTMLAreaElementInternal

static const BatchedAttribute HTMLAreaElementAttrs[] = {
    // Attribute 'accessKey' (Type: 'attribute' ExtAttr: 'Reflect')
    {"accessKey", HTMLAreaElementInternal::accessKeyAttrGetter, HTMLAreaElementInternal::accessKeyAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'alt' (Type: 'attribute' ExtAttr: 'Reflect')
    {"alt", HTMLAreaElementInternal::altAttrGetter, HTMLAreaElementInternal::altAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'coords' (Type: 'attribute' ExtAttr: 'Reflect')
    {"coords", HTMLAreaElementInternal::coordsAttrGetter, HTMLAreaElementInternal::coordsAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'href' (Type: 'attribute' ExtAttr: 'URL Reflect')
    {"href", HTMLAreaElementInternal::hrefAttrGetter, HTMLAreaElementInternal::hrefAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'noHref' (Type: 'attribute' ExtAttr: 'Reflect')
    {"noHref", HTMLAreaElementInternal::noHrefAttrGetter, HTMLAreaElementInternal::noHrefAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'shape' (Type: 'attribute' ExtAttr: 'Reflect')
    {"shape", HTMLAreaElementInternal::shapeAttrGetter, HTMLAreaElementInternal::shapeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'target' (Type: 'attribute' ExtAttr: 'Reflect')
    {"target", HTMLAreaElementInternal::targetAttrGetter, HTMLAreaElementInternal::targetAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'hash' (Type: 'readonly attribute' ExtAttr: '')
    {"hash", HTMLAreaElementInternal::hashAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'host' (Type: 'readonly attribute' ExtAttr: '')
    {"host", HTMLAreaElementInternal::hostAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'hostname' (Type: 'readonly attribute' ExtAttr: '')
    {"hostname", HTMLAreaElementInternal::hostnameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'pathname' (Type: 'readonly attribute' ExtAttr: '')
    {"pathname", HTMLAreaElementInternal::pathnameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'port' (Type: 'readonly attribute' ExtAttr: '')
    {"port", HTMLAreaElementInternal::portAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'protocol' (Type: 'readonly attribute' ExtAttr: '')
    {"protocol", HTMLAreaElementInternal::protocolAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'search' (Type: 'readonly attribute' ExtAttr: '')
    {"search", HTMLAreaElementInternal::searchAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLAreaElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLAreaElement", V8HTMLElement::GetTemplate(), V8HTMLAreaElement::internalFieldCount,
        HTMLAreaElementAttrs, sizeof(HTMLAreaElementAttrs) / sizeof(*HTMLAreaElementAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLAreaElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLAreaElementRawCache = createRawTemplate();
    return V8HTMLAreaElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLAreaElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLAreaElementCache = ConfigureV8HTMLAreaElementTemplate(GetRawTemplate());
    return V8HTMLAreaElementCache;
}

HTMLAreaElement* V8HTMLAreaElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLAreaElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLAreaElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLAreaElement::wrap(HTMLAreaElement* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    if (impl->document()) {
        proxy = V8Proxy::retrieve(impl->document()->frame());
        if (proxy && static_cast<Node*>(impl->document()) == static_cast<Node*>(impl))
            proxy->windowShell()->initContextIfNeeded();
    }

        wrapper = V8DOMWrapper::getWrapper(impl);
        if (!wrapper.IsEmpty())
            return wrapper;

    v8::Handle<v8::Context> context;
    if (proxy)
        context = proxy->context();

    // Enter the node's context and create the wrapper in that context.
    if (!context.IsEmpty())
        context->Enter();
    wrapper = V8DOMWrapper::instantiateV8Object(proxy, &info, impl);
    // Exit the node's context if it was entered.
    if (!context.IsEmpty())
        context->Exit();
    if (wrapper.IsEmpty())
        return wrapper;

    impl->ref();
    getDOMNodeMap().set(impl, v8::Persistent<v8::Object>::New(wrapper));
    return wrapper;
}

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLAreaElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(HTMLAreaElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLAreaElement::wrap(impl);
}

void V8HTMLAreaElement::derefObject(void* object)
{
    static_cast<HTMLAreaElement*>(object)->deref();
}

} // namespace WebCore
