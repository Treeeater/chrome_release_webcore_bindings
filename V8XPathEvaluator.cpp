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
#include "V8XPathEvaluator.h"

#if ENABLE(XPATH)

#include "ExceptionCode.h"
#include "PlatformString.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Node.h"
#include "V8Proxy.h"
#include "V8XPathExpression.h"
#include "V8XPathNSResolver.h"
#include "V8XPathResult.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8XPathEvaluator::info = { V8XPathEvaluator::GetTemplate, V8XPathEvaluator::derefObject, 0 };

namespace XPathEvaluatorInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> createExpressionCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.XPathEvaluator.createExpression");
    XPathEvaluator* imp = V8XPathEvaluator::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, expression, args[0]);
    EXCEPTION_BLOCK(RefPtr<XPathNSResolver>, resolver, V8DOMWrapper::getXPathNSResolver(args[1]));
    RefPtr<XPathExpression> result = imp->createExpression(expression, resolver.get(), ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> createNSResolverCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.XPathEvaluator.createNSResolver");
    XPathEvaluator* imp = V8XPathEvaluator::toNative(args.Holder());
    EXCEPTION_BLOCK(Node*, nodeResolver, V8Node::HasInstance(args[0]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[0])) : 0);
    return toV8(imp->createNSResolver(nodeResolver));
}

static v8::Handle<v8::Value> evaluateCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.XPathEvaluator.evaluate");
    XPathEvaluator* imp = V8XPathEvaluator::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, expression, args[0]);
    EXCEPTION_BLOCK(Node*, contextNode, V8Node::HasInstance(args[1]) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(args[1])) : 0);
    EXCEPTION_BLOCK(RefPtr<XPathNSResolver>, resolver, V8DOMWrapper::getXPathNSResolver(args[2]));
    EXCEPTION_BLOCK(int, type, toUInt32(args[3]));
    EXCEPTION_BLOCK(XPathResult*, inResult, V8XPathResult::HasInstance(args[4]) ? V8XPathResult::toNative(v8::Handle<v8::Object>::Cast(args[4])) : 0);
    RefPtr<XPathResult> result = imp->evaluate(expression, contextNode, resolver.get(), type, inResult, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace XPathEvaluatorInternal

v8::Handle<v8::Value> V8XPathEvaluator::constructorCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.XPathEvaluator.Contructor");
    return V8Proxy::constructDOMObject<XPathEvaluator>(args, &info);
}
static v8::Persistent<v8::FunctionTemplate> ConfigureV8XPathEvaluatorTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "XPathEvaluator", v8::Persistent<v8::FunctionTemplate>(), V8XPathEvaluator::internalFieldCount,
        0, 0,
        0, 0);
        desc->SetCallHandler(V8XPathEvaluator::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'createExpression'
    const int createExpressionArgc = 2;
    v8::Handle<v8::FunctionTemplate> createExpressionArgv[createExpressionArgc] = { v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>() };
    v8::Handle<v8::Signature> createExpressionSignature = v8::Signature::New(desc, createExpressionArgc, createExpressionArgv);
    proto->Set(v8::String::New("createExpression"), v8::FunctionTemplate::New(XPathEvaluatorInternal::createExpressionCallback, v8::Handle<v8::Value>(), createExpressionSignature));

    // Custom Signature 'createNSResolver'
    const int createNSResolverArgc = 1;
    v8::Handle<v8::FunctionTemplate> createNSResolverArgv[createNSResolverArgc] = { V8Node::GetRawTemplate() };
    v8::Handle<v8::Signature> createNSResolverSignature = v8::Signature::New(desc, createNSResolverArgc, createNSResolverArgv);
    proto->Set(v8::String::New("createNSResolver"), v8::FunctionTemplate::New(XPathEvaluatorInternal::createNSResolverCallback, v8::Handle<v8::Value>(), createNSResolverSignature));

    // Custom Signature 'evaluate'
    const int evaluateArgc = 5;
    v8::Handle<v8::FunctionTemplate> evaluateArgv[evaluateArgc] = { v8::Handle<v8::FunctionTemplate>(), V8Node::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), V8XPathResult::GetRawTemplate() };
    v8::Handle<v8::Signature> evaluateSignature = v8::Signature::New(desc, evaluateArgc, evaluateArgv);
    proto->Set(v8::String::New("evaluate"), v8::FunctionTemplate::New(XPathEvaluatorInternal::evaluateCallback, v8::Handle<v8::Value>(), evaluateSignature));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8XPathEvaluator::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8XPathEvaluatorRawCache = createRawTemplate();
    return V8XPathEvaluatorRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8XPathEvaluator::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8XPathEvaluatorCache = ConfigureV8XPathEvaluatorTemplate(GetRawTemplate());
    return V8XPathEvaluatorCache;
}

XPathEvaluator* V8XPathEvaluator::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<XPathEvaluator*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8XPathEvaluator::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8XPathEvaluator::wrap(XPathEvaluator* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<XPathEvaluator > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(XPathEvaluator* impl)
{
    if (!impl)
        return v8::Null();
    return V8XPathEvaluator::wrap(impl);
}

void V8XPathEvaluator::derefObject(void* object)
{
    static_cast<XPathEvaluator*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(XPATH)
