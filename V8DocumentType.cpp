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
#include "V8DocumentType.h"

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8NamedNodeMap.h"
#include "V8Node.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8DocumentType::info = { V8DocumentType::GetTemplate, V8DocumentType::derefObject, 0 };

namespace DocumentTypeInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.DocumentType.name._get");
    DocumentType* imp = V8DocumentType::toNative(info.Holder());
    return v8String(imp->name());
}

static v8::Handle<v8::Value> entitiesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.DocumentType.entities._get");
    DocumentType* imp = V8DocumentType::toNative(info.Holder());
    return toV8(imp->entities());
}

static v8::Handle<v8::Value> notationsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.DocumentType.notations._get");
    DocumentType* imp = V8DocumentType::toNative(info.Holder());
    return toV8(imp->notations());
}

static v8::Handle<v8::Value> publicIdAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.DocumentType.publicId._get");
    DocumentType* imp = V8DocumentType::toNative(info.Holder());
    return v8StringOrNull(imp->publicId());
}

static v8::Handle<v8::Value> systemIdAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.DocumentType.systemId._get");
    DocumentType* imp = V8DocumentType::toNative(info.Holder());
    return v8StringOrNull(imp->systemId());
}

static v8::Handle<v8::Value> internalSubsetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.DocumentType.internalSubset._get");
    DocumentType* imp = V8DocumentType::toNative(info.Holder());
    return v8StringOrNull(imp->internalSubset());
}

} // namespace DocumentTypeInternal

static const BatchedAttribute DocumentTypeAttrs[] = {
    // Attribute 'name' (Type: 'readonly attribute' ExtAttr: '')
    {"name", DocumentTypeInternal::nameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'entities' (Type: 'readonly attribute' ExtAttr: '')
    {"entities", DocumentTypeInternal::entitiesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'notations' (Type: 'readonly attribute' ExtAttr: '')
    {"notations", DocumentTypeInternal::notationsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'publicId' (Type: 'readonly attribute' ExtAttr: 'ConvertNullStringTo')
    {"publicId", DocumentTypeInternal::publicIdAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'systemId' (Type: 'readonly attribute' ExtAttr: 'ConvertNullStringTo')
    {"systemId", DocumentTypeInternal::systemIdAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'internalSubset' (Type: 'readonly attribute' ExtAttr: 'ConvertNullStringTo')
    {"internalSubset", DocumentTypeInternal::internalSubsetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8DocumentTypeTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "DocumentType", V8Node::GetTemplate(), V8DocumentType::internalFieldCount,
        DocumentTypeAttrs, sizeof(DocumentTypeAttrs) / sizeof(*DocumentTypeAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8DocumentType::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8DocumentTypeRawCache = createRawTemplate();
    return V8DocumentTypeRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8DocumentType::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8DocumentTypeCache = ConfigureV8DocumentTypeTemplate(GetRawTemplate());
    return V8DocumentTypeCache;
}

DocumentType* V8DocumentType::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<DocumentType*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8DocumentType::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8DocumentType::wrap(DocumentType* impl, bool forceNewObject)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    if (impl->document()) {
        proxy = V8Proxy::retrieve(impl->document()->frame());
        if (proxy && static_cast<Node*>(impl->document()) == static_cast<Node*>(impl))
            proxy->windowShell()->initContextIfNeeded();
    }

    if (!forceNewObject) {
        wrapper = V8DOMWrapper::getWrapper(impl);
        if (!wrapper.IsEmpty())
            return wrapper;
    }

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

v8::Handle<v8::Value> toV8(PassRefPtr<DocumentType > impl, bool forceNewObject)
{
    return toV8(impl.get(), forceNewObject);
}

v8::Handle<v8::Value> toV8(DocumentType* impl, bool forceNewObject)
{
    if (!impl)
        return v8::Null();
    return V8DocumentType::wrap(impl, forceNewObject);
}

void V8DocumentType::derefObject(void* object)
{
    static_cast<DocumentType*>(object)->deref();
}

} // namespace WebCore
