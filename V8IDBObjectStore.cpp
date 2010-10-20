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
#include "V8IDBObjectStore.h"

#if ENABLE(INDEXED_DATABASE)

#include "ExceptionCode.h"
#include "IDBBindingUtilities.h"
#include "IDBKey.h"
#include "RuntimeEnabledFeatures.h"
#include "SerializedScriptValue.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMStringList.h"
#include "V8DOMWrapper.h"
#include "V8IDBIndex.h"
#include "V8IDBKeyRange.h"
#include "V8IDBRequest.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8IDBObjectStore::info = { V8IDBObjectStore::GetTemplate, V8IDBObjectStore::derefObject, 0 };

namespace IDBObjectStoreInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBObjectStore.name._get");
    IDBObjectStore* imp = V8IDBObjectStore::toNative(info.Holder());
    return v8String(imp->name());
}

static v8::Handle<v8::Value> keyPathAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBObjectStore.keyPath._get");
    IDBObjectStore* imp = V8IDBObjectStore::toNative(info.Holder());
    return v8StringOrNull(imp->keyPath());
}

static v8::Handle<v8::Value> indexNamesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBObjectStore.indexNames._get");
    IDBObjectStore* imp = V8IDBObjectStore::toNative(info.Holder());
    RefPtr<DOMStringList> result = imp->indexNames();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setHiddenReference(info.Holder(), wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> getCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBObjectStore.get");
    IDBObjectStore* imp = V8IDBObjectStore::toNative(args.Holder());
    EXCEPTION_BLOCK(RefPtr<IDBKey>, key, createIDBKeyFromValue(args[0]));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    return toV8(imp->get(scriptContext, key));
}

static v8::Handle<v8::Value> addCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBObjectStore.add");
    IDBObjectStore* imp = V8IDBObjectStore::toNative(args.Holder());
    bool valueDidThrow = false;
    RefPtr<SerializedScriptValue> value = SerializedScriptValue::create(args[0], valueDidThrow);
    if (valueDidThrow)
        return v8::Undefined();
    if (args.Length() <= 1) {
        ScriptExecutionContext* scriptContext = getScriptExecutionContext();
        if (!scriptContext)
            return v8::Undefined();
        return toV8(imp->add(scriptContext, value));
    }
    EXCEPTION_BLOCK(RefPtr<IDBKey>, key, createIDBKeyFromValue(args[1]));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    return toV8(imp->add(scriptContext, value, key));
}

static v8::Handle<v8::Value> putCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBObjectStore.put");
    IDBObjectStore* imp = V8IDBObjectStore::toNative(args.Holder());
    bool valueDidThrow = false;
    RefPtr<SerializedScriptValue> value = SerializedScriptValue::create(args[0], valueDidThrow);
    if (valueDidThrow)
        return v8::Undefined();
    if (args.Length() <= 1) {
        ScriptExecutionContext* scriptContext = getScriptExecutionContext();
        if (!scriptContext)
            return v8::Undefined();
        return toV8(imp->put(scriptContext, value));
    }
    EXCEPTION_BLOCK(RefPtr<IDBKey>, key, createIDBKeyFromValue(args[1]));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    return toV8(imp->put(scriptContext, value, key));
}

static v8::Handle<v8::Value> removeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBObjectStore.remove");
    IDBObjectStore* imp = V8IDBObjectStore::toNative(args.Holder());
    EXCEPTION_BLOCK(RefPtr<IDBKey>, key, createIDBKeyFromValue(args[0]));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    return toV8(imp->remove(scriptContext, key));
}

static v8::Handle<v8::Value> createIndexCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBObjectStore.createIndex");
    IDBObjectStore* imp = V8IDBObjectStore::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, args[0]);
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<WithNullCheck>, keyPath, args[1]);
    if (args.Length() <= 2) {
        ScriptExecutionContext* scriptContext = getScriptExecutionContext();
        if (!scriptContext)
            return v8::Undefined();
        return toV8(imp->createIndex(scriptContext, name, keyPath));
    }
    EXCEPTION_BLOCK(bool, unique, args[2]->BooleanValue());
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    return toV8(imp->createIndex(scriptContext, name, keyPath, unique));
}

static v8::Handle<v8::Value> indexCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBObjectStore.index");
    IDBObjectStore* imp = V8IDBObjectStore::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, args[0]);
    return toV8(imp->index(name));
}

static v8::Handle<v8::Value> removeIndexCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBObjectStore.removeIndex");
    IDBObjectStore* imp = V8IDBObjectStore::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, args[0]);
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    return toV8(imp->removeIndex(scriptContext, name));
}

static v8::Handle<v8::Value> openCursorCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBObjectStore.openCursor");
    IDBObjectStore* imp = V8IDBObjectStore::toNative(args.Holder());
    if (args.Length() <= 0) {
        ScriptExecutionContext* scriptContext = getScriptExecutionContext();
        if (!scriptContext)
            return v8::Undefined();
        return toV8(imp->openCursor(scriptContext));
    }
    EXCEPTION_BLOCK(IDBKeyRange*, range, V8IDBKeyRange::HasInstance(args[0]) ? V8IDBKeyRange::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    if (args.Length() <= 1) {
        ScriptExecutionContext* scriptContext = getScriptExecutionContext();
        if (!scriptContext)
            return v8::Undefined();
        return toV8(imp->openCursor(scriptContext, range));
    }
    EXCEPTION_BLOCK(int, direction, toUInt32(args[1]));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    return toV8(imp->openCursor(scriptContext, range, direction));
}

} // namespace IDBObjectStoreInternal

static const BatchedAttribute IDBObjectStoreAttrs[] = {
    // Attribute 'name' (Type: 'readonly attribute' ExtAttr: '')
    {"name", IDBObjectStoreInternal::nameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'keyPath' (Type: 'readonly attribute' ExtAttr: 'ConvertNullStringTo')
    {"keyPath", IDBObjectStoreInternal::keyPathAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'indexNames' (Type: 'readonly attribute' ExtAttr: '')
    {"indexNames", IDBObjectStoreInternal::indexNamesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback IDBObjectStoreCallbacks[] = {
    {"get", IDBObjectStoreInternal::getCallback},
    {"add", IDBObjectStoreInternal::addCallback},
    {"put", IDBObjectStoreInternal::putCallback},
    {"remove", IDBObjectStoreInternal::removeCallback},
    {"createIndex", IDBObjectStoreInternal::createIndexCallback},
    {"index", IDBObjectStoreInternal::indexCallback},
    {"removeIndex", IDBObjectStoreInternal::removeIndexCallback},
    {"openCursor", IDBObjectStoreInternal::openCursorCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8IDBObjectStoreTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "IDBObjectStore", v8::Persistent<v8::FunctionTemplate>(), V8IDBObjectStore::internalFieldCount,
        IDBObjectStoreAttrs, sizeof(IDBObjectStoreAttrs) / sizeof(*IDBObjectStoreAttrs),
        IDBObjectStoreCallbacks, sizeof(IDBObjectStoreCallbacks) / sizeof(*IDBObjectStoreCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8IDBObjectStore::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8IDBObjectStoreRawCache = createRawTemplate();
    return V8IDBObjectStoreRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8IDBObjectStore::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8IDBObjectStoreCache = ConfigureV8IDBObjectStoreTemplate(GetRawTemplate());
    return V8IDBObjectStoreCache;
}

IDBObjectStore* V8IDBObjectStore::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<IDBObjectStore*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8IDBObjectStore::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8IDBObjectStore::wrap(IDBObjectStore* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<IDBObjectStore > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(IDBObjectStore* impl)
{
    if (!impl)
        return v8::Null();
    return V8IDBObjectStore::wrap(impl);
}

void V8IDBObjectStore::derefObject(void* object)
{
    static_cast<IDBObjectStore*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(INDEXED_DATABASE)