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
#include "V8DOMPluginArray.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8Collection.h"
#include "V8DOMPlugin.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8DOMPluginArray::info = { V8DOMPluginArray::GetTemplate, V8DOMPluginArray::derefObject, 0 };

namespace DOMPluginArrayInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> lengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.DOMPluginArray.length._get");
    DOMPluginArray* imp = V8DOMPluginArray::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->length());
}

static v8::Handle<v8::Value> itemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.DOMPluginArray.item");
    DOMPluginArray* imp = V8DOMPluginArray::toNative(args.Holder());
    EXCEPTION_BLOCK(unsigned, index, toUInt32(args[0]));
    return toV8(imp->item(index));
}

static v8::Handle<v8::Value> namedItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.DOMPluginArray.namedItem");
    DOMPluginArray* imp = V8DOMPluginArray::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, args[0]);
    return toV8(imp->namedItem(name));
}

static v8::Handle<v8::Value> refreshCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.DOMPluginArray.refresh");
    DOMPluginArray* imp = V8DOMPluginArray::toNative(args.Holder());
    EXCEPTION_BLOCK(bool, reload, args[0]->BooleanValue());
    imp->refresh(reload);
    return v8::Handle<v8::Value>();
}

} // namespace DOMPluginArrayInternal

static const BatchedAttribute DOMPluginArrayAttrs[] = {
    // Attribute 'length' (Type: 'readonly attribute' ExtAttr: '')
    {"length", DOMPluginArrayInternal::lengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback DOMPluginArrayCallbacks[] = {
    {"item", DOMPluginArrayInternal::itemCallback},
    {"namedItem", DOMPluginArrayInternal::namedItemCallback},
    {"refresh", DOMPluginArrayInternal::refreshCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8DOMPluginArrayTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "DOMPluginArray", v8::Persistent<v8::FunctionTemplate>(), V8DOMPluginArray::internalFieldCount,
        DOMPluginArrayAttrs, sizeof(DOMPluginArrayAttrs) / sizeof(*DOMPluginArrayAttrs),
        DOMPluginArrayCallbacks, sizeof(DOMPluginArrayCallbacks) / sizeof(*DOMPluginArrayCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    setCollectionIndexedGetter<DOMPluginArray, DOMPlugin>(desc);
    setCollectionNamedGetter<DOMPluginArray, DOMPlugin>(desc);

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8DOMPluginArray::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8DOMPluginArrayRawCache = createRawTemplate();
    return V8DOMPluginArrayRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8DOMPluginArray::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8DOMPluginArrayCache = ConfigureV8DOMPluginArrayTemplate(GetRawTemplate());
    return V8DOMPluginArrayCache;
}

DOMPluginArray* V8DOMPluginArray::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<DOMPluginArray*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8DOMPluginArray::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8DOMPluginArray::wrap(DOMPluginArray* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<DOMPluginArray > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(DOMPluginArray* impl)
{
    if (!impl)
        return v8::Null();
    return V8DOMPluginArray::wrap(impl);
}

void V8DOMPluginArray::derefObject(void* object)
{
    static_cast<DOMPluginArray*>(object)->deref();
}

} // namespace WebCore