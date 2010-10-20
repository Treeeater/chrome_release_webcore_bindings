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
#include "V8IDBIndex.h"

#if ENABLE(INDEXED_DATABASE)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8IDBIndex::info = { V8IDBIndex::GetTemplate, V8IDBIndex::derefObject, 0 };

namespace IDBIndexInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBIndex.name._get");
    IDBIndex* imp = V8IDBIndex::toNative(info.Holder());
    return v8String(imp->name());
}

static v8::Handle<v8::Value> keyPathAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBIndex.keyPath._get");
    IDBIndex* imp = V8IDBIndex::toNative(info.Holder());
    return v8String(imp->keyPath());
}

static v8::Handle<v8::Value> uniqueAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBIndex.unique._get");
    IDBIndex* imp = V8IDBIndex::toNative(info.Holder());
    return v8Boolean(imp->unique());
}

} // namespace IDBIndexInternal

static const BatchedAttribute IDBIndexAttrs[] = {
    // Attribute 'name' (Type: 'readonly attribute' ExtAttr: '')
    {"name", IDBIndexInternal::nameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'keyPath' (Type: 'readonly attribute' ExtAttr: '')
    {"keyPath", IDBIndexInternal::keyPathAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'unique' (Type: 'readonly attribute' ExtAttr: '')
    {"unique", IDBIndexInternal::uniqueAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8IDBIndexTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "IDBIndex", v8::Persistent<v8::FunctionTemplate>(), V8IDBIndex::internalFieldCount,
        IDBIndexAttrs, sizeof(IDBIndexAttrs) / sizeof(*IDBIndexAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8IDBIndex::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8IDBIndexRawCache = createRawTemplate();
    return V8IDBIndexRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8IDBIndex::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8IDBIndexCache = ConfigureV8IDBIndexTemplate(GetRawTemplate());
    return V8IDBIndexCache;
}

IDBIndex* V8IDBIndex::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<IDBIndex*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8IDBIndex::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8IDBIndex::wrap(IDBIndex* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<IDBIndex > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(IDBIndex* impl)
{
    if (!impl)
        return v8::Null();
    return V8IDBIndex::wrap(impl);
}

void V8IDBIndex::derefObject(void* object)
{
    static_cast<IDBIndex*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(INDEXED_DATABASE)