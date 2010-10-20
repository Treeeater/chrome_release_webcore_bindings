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
#include "V8HTMLBRElement.h"

#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8HTMLBRElement::info = { V8HTMLBRElement::GetTemplate, V8HTMLBRElement::derefObject, 0 };

namespace HTMLBRElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> clearAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBRElement.clear._get");
    return getElementStringAttr(info, HTMLNames::clearAttr);
}

static void clearAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBRElement.clear._set");
    setElementStringAttr(info, HTMLNames::clearAttr, value);
}

} // namespace HTMLBRElementInternal

static const BatchedAttribute HTMLBRElementAttrs[] = {
    // Attribute 'clear' (Type: 'attribute' ExtAttr: 'Reflect')
    {"clear", HTMLBRElementInternal::clearAttrGetter, HTMLBRElementInternal::clearAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLBRElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLBRElement", V8HTMLElement::GetTemplate(), V8HTMLBRElement::internalFieldCount,
        HTMLBRElementAttrs, sizeof(HTMLBRElementAttrs) / sizeof(*HTMLBRElementAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLBRElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLBRElementRawCache = createRawTemplate();
    return V8HTMLBRElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLBRElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLBRElementCache = ConfigureV8HTMLBRElementTemplate(GetRawTemplate());
    return V8HTMLBRElementCache;
}

HTMLBRElement* V8HTMLBRElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLBRElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLBRElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLBRElement::wrap(HTMLBRElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLBRElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(HTMLBRElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLBRElement::wrap(impl);
}

void V8HTMLBRElement::derefObject(void* object)
{
    static_cast<HTMLBRElement*>(object)->deref();
}

} // namespace WebCore