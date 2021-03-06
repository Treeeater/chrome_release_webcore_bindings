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
#include "V8NamedNodeMap.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8Collection.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Node.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8NamedNodeMap::info = { V8NamedNodeMap::GetTemplate, V8NamedNodeMap::derefObject, 0 };

namespace NamedNodeMapInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> lengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.NamedNodeMap.length._get");
    NamedNodeMap* imp = V8NamedNodeMap::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->length());
}

static v8::Handle<v8::Value> getNamedItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.NamedNodeMap.getNamedItem");
    NamedNodeMap* imp = V8NamedNodeMap::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, args[0]);
    return toV8(imp->getNamedItem(name));
}

static v8::Handle<v8::Value> setNamedItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.NamedNodeMap.setNamedItem");
    NamedNodeMap* imp = V8NamedNodeMap::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Node*, node, V8Node::HasInstance(args[0]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    RefPtr<Node> result = imp->setNamedItem(node, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> removeNamedItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.NamedNodeMap.removeNamedItem");
    NamedNodeMap* imp = V8NamedNodeMap::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, args[0]);
    RefPtr<Node> result = imp->removeNamedItem(name, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> itemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.NamedNodeMap.item");
    NamedNodeMap* imp = V8NamedNodeMap::toNative(args.Holder());
    EXCEPTION_BLOCK(unsigned, index, toUInt32(args[0]));
    return toV8(imp->item(index));
}

static v8::Handle<v8::Value> getNamedItemNSCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.NamedNodeMap.getNamedItemNS");
    NamedNodeMap* imp = V8NamedNodeMap::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<WithNullCheck>, namespaceURI, args[0]);
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, localName, args[1]);
    return toV8(imp->getNamedItemNS(namespaceURI, localName));
}

static v8::Handle<v8::Value> setNamedItemNSCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.NamedNodeMap.setNamedItemNS");
    NamedNodeMap* imp = V8NamedNodeMap::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Node*, node, V8Node::HasInstance(args[0]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    RefPtr<Node> result = imp->setNamedItemNS(node, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> removeNamedItemNSCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.NamedNodeMap.removeNamedItemNS");
    NamedNodeMap* imp = V8NamedNodeMap::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<WithNullCheck>, namespaceURI, args[0]);
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, localName, args[1]);
    RefPtr<Node> result = imp->removeNamedItemNS(namespaceURI, localName, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace NamedNodeMapInternal

static const BatchedAttribute NamedNodeMapAttrs[] = {
    // Attribute 'length' (Type: 'readonly attribute' ExtAttr: '')
    {"length", NamedNodeMapInternal::lengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static const BatchedCallback NamedNodeMapCallbacks[] = {
    {"getNamedItem", NamedNodeMapInternal::getNamedItemCallback},
    {"removeNamedItem", NamedNodeMapInternal::removeNamedItemCallback},
    {"item", NamedNodeMapInternal::itemCallback},
    {"getNamedItemNS", NamedNodeMapInternal::getNamedItemNSCallback},
    {"removeNamedItemNS", NamedNodeMapInternal::removeNamedItemNSCallback},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8NamedNodeMapTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "NamedNodeMap", v8::Persistent<v8::FunctionTemplate>(), V8NamedNodeMap::internalFieldCount,
        NamedNodeMapAttrs, sizeof(NamedNodeMapAttrs) / sizeof(*NamedNodeMapAttrs),
        NamedNodeMapCallbacks, sizeof(NamedNodeMapCallbacks) / sizeof(*NamedNodeMapCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    setCollectionIndexedGetter<NamedNodeMap, Node>(desc);
    desc->InstanceTemplate()->SetNamedPropertyHandler(V8NamedNodeMap::namedPropertyGetter, 0, 0, 0, 0);

    // Custom Signature 'setNamedItem'
    const int setNamedItemArgc = 1;
    v8::Handle<v8::FunctionTemplate> setNamedItemArgv[setNamedItemArgc] = { V8Node::GetRawTemplate() };
    v8::Handle<v8::Signature> setNamedItemSignature = v8::Signature::New(desc, setNamedItemArgc, setNamedItemArgv);
    proto->Set(v8::String::New("setNamedItem"), v8::FunctionTemplate::New(NamedNodeMapInternal::setNamedItemCallback, v8::Handle<v8::Value>(), setNamedItemSignature));

    // Custom Signature 'setNamedItemNS'
    const int setNamedItemNSArgc = 1;
    v8::Handle<v8::FunctionTemplate> setNamedItemNSArgv[setNamedItemNSArgc] = { V8Node::GetRawTemplate() };
    v8::Handle<v8::Signature> setNamedItemNSSignature = v8::Signature::New(desc, setNamedItemNSArgc, setNamedItemNSArgv);
    proto->Set(v8::String::New("setNamedItemNS"), v8::FunctionTemplate::New(NamedNodeMapInternal::setNamedItemNSCallback, v8::Handle<v8::Value>(), setNamedItemNSSignature));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8NamedNodeMap::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8NamedNodeMapRawCache = createRawTemplate();
    return V8NamedNodeMapRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8NamedNodeMap::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8NamedNodeMapCache = ConfigureV8NamedNodeMapTemplate(GetRawTemplate());
    return V8NamedNodeMapCache;
}

NamedNodeMap* V8NamedNodeMap::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<NamedNodeMap*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8NamedNodeMap::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8NamedNodeMap::wrap(NamedNodeMap* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<NamedNodeMap > impl)
{
    return toV8(impl.get());
}

void V8NamedNodeMap::derefObject(void* object)
{
    static_cast<NamedNodeMap*>(object)->deref();
}

} // namespace WebCore
