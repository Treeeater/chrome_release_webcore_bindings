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
#include "V8Coordinates.h"

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8Coordinates::info = { V8Coordinates::GetTemplate, V8Coordinates::derefObject, 0 };

namespace CoordinatesInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> latitudeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Coordinates.latitude._get");
    Coordinates* imp = V8Coordinates::toNative(info.Holder());
    return v8::Number::New(imp->latitude());
}

static v8::Handle<v8::Value> longitudeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Coordinates.longitude._get");
    Coordinates* imp = V8Coordinates::toNative(info.Holder());
    return v8::Number::New(imp->longitude());
}

static v8::Handle<v8::Value> accuracyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Coordinates.accuracy._get");
    Coordinates* imp = V8Coordinates::toNative(info.Holder());
    return v8::Number::New(imp->accuracy());
}

} // namespace CoordinatesInternal

static const BatchedAttribute CoordinatesAttrs[] = {
    // Attribute 'latitude' (Type: 'readonly attribute' ExtAttr: '')
    {"latitude", CoordinatesInternal::latitudeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'longitude' (Type: 'readonly attribute' ExtAttr: '')
    {"longitude", CoordinatesInternal::longitudeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'altitude' (Type: 'readonly attribute' ExtAttr: 'Custom')
    {"altitude", V8Coordinates::altitudeAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'accuracy' (Type: 'readonly attribute' ExtAttr: '')
    {"accuracy", CoordinatesInternal::accuracyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'altitudeAccuracy' (Type: 'readonly attribute' ExtAttr: 'Custom')
    {"altitudeAccuracy", V8Coordinates::altitudeAccuracyAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'heading' (Type: 'readonly attribute' ExtAttr: 'Custom')
    {"heading", V8Coordinates::headingAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'speed' (Type: 'readonly attribute' ExtAttr: 'Custom')
    {"speed", V8Coordinates::speedAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8CoordinatesTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "Coordinates", v8::Persistent<v8::FunctionTemplate>(), V8Coordinates::internalFieldCount,
        CoordinatesAttrs, sizeof(CoordinatesAttrs) / sizeof(*CoordinatesAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8Coordinates::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8CoordinatesRawCache = createRawTemplate();
    return V8CoordinatesRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8Coordinates::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8CoordinatesCache = ConfigureV8CoordinatesTemplate(GetRawTemplate());
    return V8CoordinatesCache;
}

Coordinates* V8Coordinates::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<Coordinates*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8Coordinates::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8Coordinates::wrap(Coordinates* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<Coordinates > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(Coordinates* impl)
{
    if (!impl)
        return v8::Null();
    return V8Coordinates::wrap(impl);
}

void V8Coordinates::derefObject(void* object)
{
    static_cast<Coordinates*>(object)->deref();
}

} // namespace WebCore
