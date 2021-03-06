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
#include "V8CSSImportRule.h"

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8CSSRule.h"
#include "V8CSSStyleSheet.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8MediaList.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8CSSImportRule::info = { V8CSSImportRule::GetTemplate, V8CSSImportRule::derefObject, 0 };

namespace CSSImportRuleInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> hrefAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.CSSImportRule.href._get");
    CSSImportRule* imp = V8CSSImportRule::toNative(info.Holder());
    return v8StringOrNull(imp->href());
}

static v8::Handle<v8::Value> mediaAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.CSSImportRule.media._get");
    CSSImportRule* imp = V8CSSImportRule::toNative(info.Holder());
    RefPtr<MediaList> result = imp->media();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setHiddenReference(info.Holder(), wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> styleSheetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.CSSImportRule.styleSheet._get");
    CSSImportRule* imp = V8CSSImportRule::toNative(info.Holder());
    RefPtr<CSSStyleSheet> result = imp->styleSheet();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setHiddenReference(info.Holder(), wrapper);
    }
    return wrapper;
}

} // namespace CSSImportRuleInternal

static const BatchedAttribute CSSImportRuleAttrs[] = {
    // Attribute 'href' (Type: 'readonly attribute' ExtAttr: 'ConvertNullStringTo')
    {"href", CSSImportRuleInternal::hrefAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'media' (Type: 'readonly attribute' ExtAttr: '')
    {"media", CSSImportRuleInternal::mediaAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'styleSheet' (Type: 'readonly attribute' ExtAttr: '')
    {"styleSheet", CSSImportRuleInternal::styleSheetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};
static v8::Persistent<v8::FunctionTemplate> ConfigureV8CSSImportRuleTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "CSSImportRule", V8CSSRule::GetTemplate(), V8CSSImportRule::internalFieldCount,
        CSSImportRuleAttrs, sizeof(CSSImportRuleAttrs) / sizeof(*CSSImportRuleAttrs),
        0, 0);
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8CSSImportRule::GetRawTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8CSSImportRuleRawCache = createRawTemplate();
    return V8CSSImportRuleRawCache;
}

v8::Persistent<v8::FunctionTemplate> V8CSSImportRule::GetTemplate()
{
    static v8::Persistent<v8::FunctionTemplate> V8CSSImportRuleCache = ConfigureV8CSSImportRuleTemplate(GetRawTemplate());
    return V8CSSImportRuleCache;
}

CSSImportRule* V8CSSImportRule::toNative(v8::Handle<v8::Object> object)
{
    return reinterpret_cast<CSSImportRule*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
}

bool V8CSSImportRule::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8CSSImportRule::wrap(CSSImportRule* impl)
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

v8::Handle<v8::Value> toV8(PassRefPtr<CSSImportRule > impl)
{
    return toV8(impl.get());
}

v8::Handle<v8::Value> toV8(CSSImportRule* impl)
{
    if (!impl)
        return v8::Null();
    return V8CSSImportRule::wrap(impl);
}

void V8CSSImportRule::derefObject(void* object)
{
    static_cast<CSSImportRule*>(object)->deref();
}

} // namespace WebCore
