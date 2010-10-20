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
#include "V8SVGLocatable.h"

#if ENABLE(SVG)

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGElement.h"
#include "V8SVGMatrix.h"
#include "V8SVGPODTypeWrapper.h"
#include "V8SVGRect.h"

namespace WebCore {

WrapperTypeInfo V8SVGLocatable::info = { V8SVGLocatable::GetTemplate, V8SVGLocatable::derefObject, 0 };

namespace SVGLocatableInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> nearestViewportElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGLocatable.nearestViewportElement._get");
    SVGLocatable* imp = V8SVGLocatable::toNative(info.Holder());
    return toV8(imp->nearestViewportElement());
}

static v8::Handle<v8::Value> farthestViewportElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGLocatable.farthestViewportElement._get");
    SVGLocatable* imp = V8SVGLocatable::toNative(info.Holder());
    return toV8(imp->farthestViewportElement());
}

static v8::Handle<v8::Value> getBBoxCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGLocatable.getBBox");
    SVGLocatable* imp = V8SVGLocatable::toNative(args.Holder());
    FloatRect result = imp->getBBox();
    RefPtr<V8SVGPODTypeWrapper<FloatRect> > wrapper = V8SVGStaticPODTypeWrapper<FloatRect>::create(result);
    SVGElement* context = V8Proxy::svgContext(imp);
    V8Proxy::setSVGContext(wrapper.get(), context);
    return toV8(wrapper.release());
}

static v8::Handle<v8::Value> getCTMCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGLocatable.getCTM");
    SVGLocatable* imp = V8SVGLocatable::toNative(args.Holder());
    AffineTransform result = imp->getCTM();
    RefPtr<V8SVGPODTypeWrapper<AffineTransform> > wrapper = V8SVGStaticPODTypeWrapper<AffineTransform>::create(result);
    SVGElement* context = V8Proxy::svgContext(imp);
    V8Proxy::setSVGContext(wrapper.get(), context);
    return toV8(wrapper.release());
}

static v8::Handle<v8::Value> getScreenCTMCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGLocatable.getScreenCTM");
    SVGLocatable* imp = V8SVGLocatable::toNative(args.Holder());
    AffineTransform result = imp->getScreenCTM();
    RefPtr<V8SVGPODTypeWrapper<AffineTransform> > wrapper = V8SVGStaticPODTypeWrapper<AffineTransform>::create(result);
    SVGElement* context = V8Proxy::svgContext(imp);
    V8Proxy::setSVGContext(wrapper.get(), context);
    return toV8(wrapper.release());
}

static v8::Handle<v8::Value> getTransformToElementCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGLocatable.getTransformToElement");
    SVGLocatable* imp = V8SVGLocatable::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(SVGElement*, element, V8SVGElement::HasInstance(args[0]) ? V8SVGElement::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    AffineTransform result = imp->getTransformToElement(element, ec);
    if (UNLIKELY(ec))
        goto fail;
    RefPtr<V8SVGPODTypeWrapper<AffineTransform> > wrapper = V8SVGStaticPODTypeWrapper<AffineTransform>::create(result);
    SVGElement* context = V8Proxy::svgContext(imp);
    V8Proxy::setSVGContext(wrapper.get(), context);
    return toV8(wrapper.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace SVGLocatableInternal

static const BatchedAttribute SVGLocatableAttrs[] = {
    // Attribute 'nearestViewportElement' (Type: 'readonly attribute' ExtAttr: '')
    {"nearestViewportElement", SVGLocatableInternal::nearestViewportElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'farthestViewportElement' (Type: 'readonly attribute' ExtAttr: '')
    {"farthestViewportElement", SVGLocatableInternal::farthestViewportElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback SVGLocatableCallbacks[] = {
    {"getBBox", SVGLocatableInternal::getBBoxCallback},
    {"getCTM", SVGLocatableInternal::getCTMCallback},
    {"getScreenCTM", SVGLocatableInternal::getScreenCTMCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGLocatableTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGLocatable", v8::Persistent<v8::FunctionTemplate>(), V8SVGLocatable::internalFieldCount,
        SVGLocatableAttrs, sizeof(SVGLocatableAttrs) / sizeof(*SVGLocatableAttrs),
        SVGLocatableCallbacks, sizeof(SVGLocatableCallbacks) / sizeof(*SVGLocatableCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'getTransformToElement'
    const int getTransformToElementArgc = 1;
    v8::Handle<v8::FunctionTemplate> getTransformToElementArgv[getTransformToElementArgc] = { V8SVGElement::GetRawTemplate() };
    v8::Handle<v8::Signature> getTransformToElementSignature = v8::Signature::New(desc, getTransformToElementArgc, getTransformToElementArgv);
    proto->Set(v8::String::New("getTransformToElement"), v8::FunctionTemplate::New(SVGLocatableInternal::getTransformToElementCallback, v8::Handle<v8::Value>(), getTransformToElementSignature));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGLocatable::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGLocatableRawCache = createRawTemplate();
    return V8SVGLocatableRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8SVGLocatable::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8SVGLocatableCache = ConfigureV8SVGLocatableTemplate(GetRawTemplate());
    return V8SVGLocatableCache;
}

SVGLocatable* V8SVGLocatable::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<SVGLocatable*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8SVGLocatable::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGLocatable::wrap(SVGLocatable* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
        wrapper = getDOMSVGObjectWithContextMap().get(impl);
        if (!wrapper.IsEmpty())
            return wrapper;
    wrapper = V8DOMWrapper::instantiateV8Object(proxy, &info, impl);
    if (wrapper.IsEmpty())
        return wrapper;

    impl->ref();
    getDOMSVGObjectWithContextMap().set(impl, v8::Persistent<v8::Object>::New(wrapper));
    return wrapper;
}

v8::Handle<v8::Value> toV8(PassRefPtr<SVGLocatable > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(SVGLocatable* impl)
{
    if (!impl)
        return v8::Null();
    return V8SVGLocatable::wrap(impl);
}

void V8SVGLocatable::derefObject(void* object)
{
    static_cast<SVGLocatable*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
