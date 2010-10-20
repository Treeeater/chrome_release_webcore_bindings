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
#include "V8SVGLinearGradientElement.h"

#if ENABLE(SVG)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGAnimatedLength.h"
#include "V8SVGGradientElement.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8SVGLinearGradientElement::info = { V8SVGLinearGradientElement::GetTemplate, V8SVGLinearGradientElement::derefObject, 0 };

namespace SVGLinearGradientElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> x1AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGLinearGradientElement.x1._get");
    SVGLinearGradientElement* imp = V8SVGLinearGradientElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedLength> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->x1Animated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> y1AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGLinearGradientElement.y1._get");
    SVGLinearGradientElement* imp = V8SVGLinearGradientElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedLength> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->y1Animated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> x2AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGLinearGradientElement.x2._get");
    SVGLinearGradientElement* imp = V8SVGLinearGradientElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedLength> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->x2Animated(), context);
    return toV8(resultAsPassRefPtr);
}

static v8::Handle<v8::Value> y2AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGLinearGradientElement.y2._get");
    SVGLinearGradientElement* imp = V8SVGLinearGradientElement::toNative(info.Holder());
    SVGElement* context = imp;
    PassRefPtr<SVGAnimatedLength> resultAsPassRefPtr = V8Proxy::withSVGContext(imp->y2Animated(), context);
    return toV8(resultAsPassRefPtr);
}

} // namespace SVGLinearGradientElementInternal

static const BatchedAttribute SVGLinearGradientElementAttrs[] = {
    // Attribute 'x1' (Type: 'readonly attribute' ExtAttr: '')
    {"x1", SVGLinearGradientElementInternal::x1AttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y1' (Type: 'readonly attribute' ExtAttr: '')
    {"y1", SVGLinearGradientElementInternal::y1AttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'x2' (Type: 'readonly attribute' ExtAttr: '')
    {"x2", SVGLinearGradientElementInternal::x2AttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y2' (Type: 'readonly attribute' ExtAttr: '')
    {"y2", SVGLinearGradientElementInternal::y2AttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGLinearGradientElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGLinearGradientElement", V8SVGGradientElement::GetTemplate(), V8SVGLinearGradientElement::internalFieldCount,
        SVGLinearGradientElementAttrs, sizeof(SVGLinearGradientElementAttrs) / sizeof(*SVGLinearGradientElementAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGLinearGradientElement::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGLinearGradientElementRawCache = createRawTemplate();
    return V8SVGLinearGradientElementRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8SVGLinearGradientElement::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGLinearGradientElementCache = ConfigureV8SVGLinearGradientElementTemplate(GetRawTemplate());
    return V8SVGLinearGradientElementCache;
}

SVGLinearGradientElement* V8SVGLinearGradientElement::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<SVGLinearGradientElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8SVGLinearGradientElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGLinearGradientElement::wrap(SVGLinearGradientElement* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<SVGLinearGradientElement > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(SVGLinearGradientElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8SVGLinearGradientElement::wrap(impl);
}

void V8SVGLinearGradientElement::derefObject(void* object)
{
    static_cast<SVGLinearGradientElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)