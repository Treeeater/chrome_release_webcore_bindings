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
#include "V8DOMFormData.h"

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8DOMFormData::info = { V8DOMFormData::GetTemplate, V8DOMFormData::derefObject, 0 };

namespace DOMFormDataInternal {

template <typename T> void V8_USE(T) { }

} // namespace DOMFormDataInternal

static const BatchedCallback DOMFormDataCallbacks[] = {
    {"append", V8DOMFormData::appendCallback},
};
v8::Handle<v8::Value> V8DOMFormData::constructorCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.DOMFormData.Contructor");
    return V8Proxy::constructDOMObject<DOMFormData>(args, &info);
}
static v8::Persistent<v8::FunctionTemplate> ConfigureV8DOMFormDataTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "FormData", v8::Persistent<v8::FunctionTemplate>(), V8DOMFormData::internalFieldCount,
        0, 0,
        DOMFormDataCallbacks, sizeof(DOMFormDataCallbacks) / sizeof(*DOMFormDataCallbacks));
        desc->SetCallHandler(V8DOMFormData::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8DOMFormData::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8DOMFormDataRawCache = createRawTemplate();
    return V8DOMFormDataRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8DOMFormData::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8DOMFormDataCache = ConfigureV8DOMFormDataTemplate(GetRawTemplate());
    return V8DOMFormDataCache;
}

DOMFormData* V8DOMFormData::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<DOMFormData*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8DOMFormData::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8DOMFormData::wrap(DOMFormData* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<DOMFormData > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(DOMFormData* impl)
{
    if (!impl)
        return v8::Null();
    return V8DOMFormData::wrap(impl);
}

void V8DOMFormData::derefObject(void* object)
{
    static_cast<DOMFormData*>(object)->deref();
}

} // namespace WebCore