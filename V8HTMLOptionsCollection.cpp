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
#include "V8HTMLOptionsCollection.h"

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8Collection.h"
#include "V8DOMWrapper.h"
#include "V8HTMLCollection.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8HTMLOptionsCollection::info = { V8HTMLOptionsCollection::GetTemplate, V8HTMLOptionsCollection::derefObject, 0 };

namespace HTMLOptionsCollectionInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> selectedIndexAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLOptionsCollection.selectedIndex._get");
    HTMLOptionsCollection* imp = V8HTMLOptionsCollection::toNative(info.Holder());
    return v8::Integer::New(imp->selectedIndex());
}

static void selectedIndexAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLOptionsCollection.selectedIndex._set");
    HTMLOptionsCollection* imp = V8HTMLOptionsCollection::toNative(info.Holder());
    int v = toInt32(value);
    imp->setSelectedIndex(v);
    return;
}

} // namespace HTMLOptionsCollectionInternal

static const BatchedAttribute HTMLOptionsCollectionAttrs[] = {
    // Attribute 'selectedIndex' (Type: 'attribute' ExtAttr: '')
    {"selectedIndex", HTMLOptionsCollectionInternal::selectedIndexAttrGetter, HTMLOptionsCollectionInternal::selectedIndexAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'length' (Type: 'attribute' ExtAttr: 'Custom')
    {"length", V8HTMLOptionsCollection::lengthAccessorGetter, V8HTMLOptionsCollection::lengthAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback HTMLOptionsCollectionCallbacks[] = {
    {"add", V8HTMLOptionsCollection::addCallback},
    {"remove", V8HTMLOptionsCollection::removeCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLOptionsCollectionTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLOptionsCollection", V8HTMLCollection::GetTemplate(), V8HTMLOptionsCollection::internalFieldCount,
        HTMLOptionsCollectionAttrs, sizeof(HTMLOptionsCollectionAttrs) / sizeof(*HTMLOptionsCollectionAttrs),
        HTMLOptionsCollectionCallbacks, sizeof(HTMLOptionsCollectionCallbacks) / sizeof(*HTMLOptionsCollectionCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    desc->InstanceTemplate()->SetIndexedPropertyHandler(V8HTMLOptionsCollection::indexedPropertyGetter, V8HTMLOptionsCollection::indexedPropertySetter, 0, 0);
    desc->InstanceTemplate()->SetNamedPropertyHandler(V8HTMLCollection::namedPropertyGetter, 0, 0, 0, 0);
    desc->InstanceTemplate()->SetCallAsFunctionHandler(V8HTMLCollection::callAsFunctionCallback);

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLOptionsCollection::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLOptionsCollectionRawCache = createRawTemplate();
    return V8HTMLOptionsCollectionRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLOptionsCollection::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8HTMLOptionsCollectionCache = ConfigureV8HTMLOptionsCollectionTemplate(GetRawTemplate());
    return V8HTMLOptionsCollectionCache;
}

HTMLOptionsCollection* V8HTMLOptionsCollection::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<HTMLOptionsCollection*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8HTMLOptionsCollection::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLOptionsCollection::wrap(HTMLOptionsCollection* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<HTMLOptionsCollection > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(HTMLOptionsCollection* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLOptionsCollection::wrap(impl);
}

void V8HTMLOptionsCollection::derefObject(void* object)
{
    static_cast<HTMLOptionsCollection*>(object)->deref();
}

} // namespace WebCore
