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
#include "V8SVGStopElement.h"

#if ENABLE(SVG)

#include "CSSMutableStyleDeclaration.h"
#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8CSSStyleDeclaration.h"
#include "V8CSSValue.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGAnimatedNumber.h"
#include "V8SVGAnimatedString.h"
#include "V8SVGElement.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8SVGStopElement::info = { V8SVGStopElement::GetTemplate, V8SVGStopElement::derefObject, 0 };

namespace SVGStopElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> offsetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGStopElement.offset._get");
    SVGStopElement* imp = V8SVGStopElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedNumber> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->offsetAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> classNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGStopElement.className._get");
    SVGStopElement* imp = V8SVGStopElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedString> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->classNameAnimated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> styleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGStopElement.style._get");
    SVGStopElement* imp = V8SVGStopElement::toNative(info.Holder());
    return toV8(imp->style());
}

static v8::Handle<v8::Value> getPresentationAttributeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGStopElement.getPresentationAttribute");
    SVGStopElement* imp = V8SVGStopElement::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, args[0]);
    return toV8(imp->getPresentationAttribute(name));
}

} // namespace SVGStopElementInternal

static const BatchedAttribute SVGStopElementAttrs[] = {
    // Attribute 'offset' (Type: 'readonly attribute' ExtAttr: '')
    {"offset", SVGStopElementInternal::offsetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'className' (Type: 'readonly attribute' ExtAttr: '')
    {"className", SVGStopElementInternal::classNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'style' (Type: 'readonly attribute' ExtAttr: '')
    {"style", SVGStopElementInternal::styleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback SVGStopElementCallbacks[] = {
    {"getPresentationAttribute", SVGStopElementInternal::getPresentationAttributeCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGStopElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGStopElement", V8SVGElement::GetTemplate(), V8SVGStopElement::internalFieldCount,
        SVGStopElementAttrs, sizeof(SVGStopElementAttrs) / sizeof(*SVGStopElementAttrs),
        SVGStopElementCallbacks, sizeof(SVGStopElementCallbacks) / sizeof(*SVGStopElementCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGStopElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGStopElementRawCache = createRawTemplate();
    return V8SVGStopElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8SVGStopElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGStopElementCache = ConfigureV8SVGStopElementTemplate(GetRawTemplate());
    return V8SVGStopElementCache;
}

SVGStopElement* V8SVGStopElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<SVGStopElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8SVGStopElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGStopElement::wrap(SVGStopElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<SVGStopElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(SVGStopElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8SVGStopElement::wrap(impl);
}

void V8SVGStopElement::derefObject(void* object)
{
    static_cast<SVGStopElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
