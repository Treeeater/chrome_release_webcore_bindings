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
#include "V8Int32Array.h"

#if ENABLE(3D_CANVAS)

#include "RuntimeEnabledFeatures.h"
#include "V8ArrayBufferView.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8Int32Array::info = { V8Int32Array::GetTemplate, V8Int32Array::derefObject, 0 };

namespace Int32ArrayInternal {

template <typename T> void V8_USE(T) { }

} // namespace Int32ArrayInternal

static const BatchedCallback Int32ArrayCallbacks[] = {
    {"set", V8Int32Array::setCallback},
};
static const BatchedConstant Int32ArrayConsts[] = {
    {"BYTES_PER_ELEMENT", static_cast<signed int>(4)},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8Int32ArrayTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "Int32Array", V8ArrayBufferView::GetTemplate(), V8Int32Array::internalFieldCount,
        0, 0,
        Int32ArrayCallbacks, sizeof(Int32ArrayCallbacks) / sizeof(*Int32ArrayCallbacks));
        desc->SetCallHandler(V8Int32Array::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    batchConfigureConstants(desc, proto, Int32ArrayConsts, sizeof(Int32ArrayConsts) / sizeof(*Int32ArrayConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8Int32Array::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8Int32ArrayRawCache = createRawTemplate();
    return V8Int32ArrayRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8Int32Array::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8Int32ArrayCache = ConfigureV8Int32ArrayTemplate(GetRawTemplate());
    return V8Int32ArrayCache;
}

Int32Array* V8Int32Array::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<Int32Array*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8Int32Array::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8Int32Array::wrap(Int32Array* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<Int32Array > impl)
{
    return toV8(impl.get());
}

void V8Int32Array::derefObject(void* object)
{
    static_cast<Int32Array*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(3D_CANVAS)
