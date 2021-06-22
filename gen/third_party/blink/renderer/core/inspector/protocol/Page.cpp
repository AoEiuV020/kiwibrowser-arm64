// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/inspector/protocol/Page.h"

#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"

namespace blink {
namespace protocol {
namespace Page {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Page";
const char Metainfo::commandPrefix[] = "Page.";
const char Metainfo::version[] = "1.3";

namespace ResourceTypeEnum {
const char Document[] = "Document";
const char Stylesheet[] = "Stylesheet";
const char Image[] = "Image";
const char Media[] = "Media";
const char Font[] = "Font";
const char Script[] = "Script";
const char TextTrack[] = "TextTrack";
const char XHR[] = "XHR";
const char Fetch[] = "Fetch";
const char EventSource[] = "EventSource";
const char WebSocket[] = "WebSocket";
const char Manifest[] = "Manifest";
const char SignedExchange[] = "SignedExchange";
const char Other[] = "Other";
} // namespace ResourceTypeEnum

std::unique_ptr<Frame> Frame::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Frame> result(new Frame());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* idValue = object->get("id");
    errors->setName("id");
    result->m_id = ValueConversions<String>::fromValue(idValue, errors);
    protocol::Value* parentIdValue = object->get("parentId");
    if (parentIdValue) {
        errors->setName("parentId");
        result->m_parentId = ValueConversions<String>::fromValue(parentIdValue, errors);
    }
    protocol::Value* loaderIdValue = object->get("loaderId");
    errors->setName("loaderId");
    result->m_loaderId = ValueConversions<String>::fromValue(loaderIdValue, errors);
    protocol::Value* nameValue = object->get("name");
    if (nameValue) {
        errors->setName("name");
        result->m_name = ValueConversions<String>::fromValue(nameValue, errors);
    }
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<String>::fromValue(urlValue, errors);
    protocol::Value* securityOriginValue = object->get("securityOrigin");
    errors->setName("securityOrigin");
    result->m_securityOrigin = ValueConversions<String>::fromValue(securityOriginValue, errors);
    protocol::Value* mimeTypeValue = object->get("mimeType");
    errors->setName("mimeType");
    result->m_mimeType = ValueConversions<String>::fromValue(mimeTypeValue, errors);
    protocol::Value* unreachableUrlValue = object->get("unreachableUrl");
    if (unreachableUrlValue) {
        errors->setName("unreachableUrl");
        result->m_unreachableUrl = ValueConversions<String>::fromValue(unreachableUrlValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Frame::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("id", ValueConversions<String>::toValue(m_id));
    if (m_parentId.isJust())
        result->setValue("parentId", ValueConversions<String>::toValue(m_parentId.fromJust()));
    result->setValue("loaderId", ValueConversions<String>::toValue(m_loaderId));
    if (m_name.isJust())
        result->setValue("name", ValueConversions<String>::toValue(m_name.fromJust()));
    result->setValue("url", ValueConversions<String>::toValue(m_url));
    result->setValue("securityOrigin", ValueConversions<String>::toValue(m_securityOrigin));
    result->setValue("mimeType", ValueConversions<String>::toValue(m_mimeType));
    if (m_unreachableUrl.isJust())
        result->setValue("unreachableUrl", ValueConversions<String>::toValue(m_unreachableUrl.fromJust()));
    return result;
}

std::unique_ptr<Frame> Frame::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<FrameResource> FrameResource::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<FrameResource> result(new FrameResource());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<String>::fromValue(urlValue, errors);
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<String>::fromValue(typeValue, errors);
    protocol::Value* mimeTypeValue = object->get("mimeType");
    errors->setName("mimeType");
    result->m_mimeType = ValueConversions<String>::fromValue(mimeTypeValue, errors);
    protocol::Value* lastModifiedValue = object->get("lastModified");
    if (lastModifiedValue) {
        errors->setName("lastModified");
        result->m_lastModified = ValueConversions<double>::fromValue(lastModifiedValue, errors);
    }
    protocol::Value* contentSizeValue = object->get("contentSize");
    if (contentSizeValue) {
        errors->setName("contentSize");
        result->m_contentSize = ValueConversions<double>::fromValue(contentSizeValue, errors);
    }
    protocol::Value* failedValue = object->get("failed");
    if (failedValue) {
        errors->setName("failed");
        result->m_failed = ValueConversions<bool>::fromValue(failedValue, errors);
    }
    protocol::Value* canceledValue = object->get("canceled");
    if (canceledValue) {
        errors->setName("canceled");
        result->m_canceled = ValueConversions<bool>::fromValue(canceledValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> FrameResource::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("url", ValueConversions<String>::toValue(m_url));
    result->setValue("type", ValueConversions<String>::toValue(m_type));
    result->setValue("mimeType", ValueConversions<String>::toValue(m_mimeType));
    if (m_lastModified.isJust())
        result->setValue("lastModified", ValueConversions<double>::toValue(m_lastModified.fromJust()));
    if (m_contentSize.isJust())
        result->setValue("contentSize", ValueConversions<double>::toValue(m_contentSize.fromJust()));
    if (m_failed.isJust())
        result->setValue("failed", ValueConversions<bool>::toValue(m_failed.fromJust()));
    if (m_canceled.isJust())
        result->setValue("canceled", ValueConversions<bool>::toValue(m_canceled.fromJust()));
    return result;
}

std::unique_ptr<FrameResource> FrameResource::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<FrameResourceTree> FrameResourceTree::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<FrameResourceTree> result(new FrameResourceTree());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* frameValue = object->get("frame");
    errors->setName("frame");
    result->m_frame = ValueConversions<protocol::Page::Frame>::fromValue(frameValue, errors);
    protocol::Value* childFramesValue = object->get("childFrames");
    if (childFramesValue) {
        errors->setName("childFrames");
        result->m_childFrames = ValueConversions<protocol::Array<protocol::Page::FrameResourceTree>>::fromValue(childFramesValue, errors);
    }
    protocol::Value* resourcesValue = object->get("resources");
    errors->setName("resources");
    result->m_resources = ValueConversions<protocol::Array<protocol::Page::FrameResource>>::fromValue(resourcesValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> FrameResourceTree::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("frame", ValueConversions<protocol::Page::Frame>::toValue(m_frame.get()));
    if (m_childFrames.isJust())
        result->setValue("childFrames", ValueConversions<protocol::Array<protocol::Page::FrameResourceTree>>::toValue(m_childFrames.fromJust()));
    result->setValue("resources", ValueConversions<protocol::Array<protocol::Page::FrameResource>>::toValue(m_resources.get()));
    return result;
}

std::unique_ptr<FrameResourceTree> FrameResourceTree::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<FrameTree> FrameTree::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<FrameTree> result(new FrameTree());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* frameValue = object->get("frame");
    errors->setName("frame");
    result->m_frame = ValueConversions<protocol::Page::Frame>::fromValue(frameValue, errors);
    protocol::Value* childFramesValue = object->get("childFrames");
    if (childFramesValue) {
        errors->setName("childFrames");
        result->m_childFrames = ValueConversions<protocol::Array<protocol::Page::FrameTree>>::fromValue(childFramesValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> FrameTree::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("frame", ValueConversions<protocol::Page::Frame>::toValue(m_frame.get()));
    if (m_childFrames.isJust())
        result->setValue("childFrames", ValueConversions<protocol::Array<protocol::Page::FrameTree>>::toValue(m_childFrames.fromJust()));
    return result;
}

std::unique_ptr<FrameTree> FrameTree::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<LayoutViewport> LayoutViewport::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<LayoutViewport> result(new LayoutViewport());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* pageXValue = object->get("pageX");
    errors->setName("pageX");
    result->m_pageX = ValueConversions<int>::fromValue(pageXValue, errors);
    protocol::Value* pageYValue = object->get("pageY");
    errors->setName("pageY");
    result->m_pageY = ValueConversions<int>::fromValue(pageYValue, errors);
    protocol::Value* clientWidthValue = object->get("clientWidth");
    errors->setName("clientWidth");
    result->m_clientWidth = ValueConversions<int>::fromValue(clientWidthValue, errors);
    protocol::Value* clientHeightValue = object->get("clientHeight");
    errors->setName("clientHeight");
    result->m_clientHeight = ValueConversions<int>::fromValue(clientHeightValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> LayoutViewport::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("pageX", ValueConversions<int>::toValue(m_pageX));
    result->setValue("pageY", ValueConversions<int>::toValue(m_pageY));
    result->setValue("clientWidth", ValueConversions<int>::toValue(m_clientWidth));
    result->setValue("clientHeight", ValueConversions<int>::toValue(m_clientHeight));
    return result;
}

std::unique_ptr<LayoutViewport> LayoutViewport::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<VisualViewport> VisualViewport::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<VisualViewport> result(new VisualViewport());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* offsetXValue = object->get("offsetX");
    errors->setName("offsetX");
    result->m_offsetX = ValueConversions<double>::fromValue(offsetXValue, errors);
    protocol::Value* offsetYValue = object->get("offsetY");
    errors->setName("offsetY");
    result->m_offsetY = ValueConversions<double>::fromValue(offsetYValue, errors);
    protocol::Value* pageXValue = object->get("pageX");
    errors->setName("pageX");
    result->m_pageX = ValueConversions<double>::fromValue(pageXValue, errors);
    protocol::Value* pageYValue = object->get("pageY");
    errors->setName("pageY");
    result->m_pageY = ValueConversions<double>::fromValue(pageYValue, errors);
    protocol::Value* clientWidthValue = object->get("clientWidth");
    errors->setName("clientWidth");
    result->m_clientWidth = ValueConversions<double>::fromValue(clientWidthValue, errors);
    protocol::Value* clientHeightValue = object->get("clientHeight");
    errors->setName("clientHeight");
    result->m_clientHeight = ValueConversions<double>::fromValue(clientHeightValue, errors);
    protocol::Value* scaleValue = object->get("scale");
    errors->setName("scale");
    result->m_scale = ValueConversions<double>::fromValue(scaleValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> VisualViewport::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("offsetX", ValueConversions<double>::toValue(m_offsetX));
    result->setValue("offsetY", ValueConversions<double>::toValue(m_offsetY));
    result->setValue("pageX", ValueConversions<double>::toValue(m_pageX));
    result->setValue("pageY", ValueConversions<double>::toValue(m_pageY));
    result->setValue("clientWidth", ValueConversions<double>::toValue(m_clientWidth));
    result->setValue("clientHeight", ValueConversions<double>::toValue(m_clientHeight));
    result->setValue("scale", ValueConversions<double>::toValue(m_scale));
    return result;
}

std::unique_ptr<VisualViewport> VisualViewport::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<Viewport> Viewport::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Viewport> result(new Viewport());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* xValue = object->get("x");
    errors->setName("x");
    result->m_x = ValueConversions<double>::fromValue(xValue, errors);
    protocol::Value* yValue = object->get("y");
    errors->setName("y");
    result->m_y = ValueConversions<double>::fromValue(yValue, errors);
    protocol::Value* widthValue = object->get("width");
    errors->setName("width");
    result->m_width = ValueConversions<double>::fromValue(widthValue, errors);
    protocol::Value* heightValue = object->get("height");
    errors->setName("height");
    result->m_height = ValueConversions<double>::fromValue(heightValue, errors);
    protocol::Value* scaleValue = object->get("scale");
    errors->setName("scale");
    result->m_scale = ValueConversions<double>::fromValue(scaleValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Viewport::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("x", ValueConversions<double>::toValue(m_x));
    result->setValue("y", ValueConversions<double>::toValue(m_y));
    result->setValue("width", ValueConversions<double>::toValue(m_width));
    result->setValue("height", ValueConversions<double>::toValue(m_height));
    result->setValue("scale", ValueConversions<double>::toValue(m_scale));
    return result;
}

std::unique_ptr<Viewport> Viewport::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<DomContentEventFiredNotification> DomContentEventFiredNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<DomContentEventFiredNotification> result(new DomContentEventFiredNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* timestampValue = object->get("timestamp");
    errors->setName("timestamp");
    result->m_timestamp = ValueConversions<double>::fromValue(timestampValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> DomContentEventFiredNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("timestamp", ValueConversions<double>::toValue(m_timestamp));
    return result;
}

std::unique_ptr<DomContentEventFiredNotification> DomContentEventFiredNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<FrameAttachedNotification> FrameAttachedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<FrameAttachedNotification> result(new FrameAttachedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* frameIdValue = object->get("frameId");
    errors->setName("frameId");
    result->m_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    protocol::Value* parentFrameIdValue = object->get("parentFrameId");
    errors->setName("parentFrameId");
    result->m_parentFrameId = ValueConversions<String>::fromValue(parentFrameIdValue, errors);
    protocol::Value* stackValue = object->get("stack");
    if (stackValue) {
        errors->setName("stack");
        result->m_stack = ValueConversions<v8_inspector::protocol::Runtime::API::StackTrace>::fromValue(stackValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> FrameAttachedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("frameId", ValueConversions<String>::toValue(m_frameId));
    result->setValue("parentFrameId", ValueConversions<String>::toValue(m_parentFrameId));
    if (m_stack.isJust())
        result->setValue("stack", ValueConversions<v8_inspector::protocol::Runtime::API::StackTrace>::toValue(m_stack.fromJust()));
    return result;
}

std::unique_ptr<FrameAttachedNotification> FrameAttachedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<FrameClearedScheduledNavigationNotification> FrameClearedScheduledNavigationNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<FrameClearedScheduledNavigationNotification> result(new FrameClearedScheduledNavigationNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* frameIdValue = object->get("frameId");
    errors->setName("frameId");
    result->m_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> FrameClearedScheduledNavigationNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("frameId", ValueConversions<String>::toValue(m_frameId));
    return result;
}

std::unique_ptr<FrameClearedScheduledNavigationNotification> FrameClearedScheduledNavigationNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<FrameDetachedNotification> FrameDetachedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<FrameDetachedNotification> result(new FrameDetachedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* frameIdValue = object->get("frameId");
    errors->setName("frameId");
    result->m_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> FrameDetachedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("frameId", ValueConversions<String>::toValue(m_frameId));
    return result;
}

std::unique_ptr<FrameDetachedNotification> FrameDetachedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<FrameNavigatedNotification> FrameNavigatedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<FrameNavigatedNotification> result(new FrameNavigatedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* frameValue = object->get("frame");
    errors->setName("frame");
    result->m_frame = ValueConversions<protocol::Page::Frame>::fromValue(frameValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> FrameNavigatedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("frame", ValueConversions<protocol::Page::Frame>::toValue(m_frame.get()));
    return result;
}

std::unique_ptr<FrameNavigatedNotification> FrameNavigatedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

const char* FrameScheduledNavigationNotification::ReasonEnum::FormSubmissionGet = "formSubmissionGet";
const char* FrameScheduledNavigationNotification::ReasonEnum::FormSubmissionPost = "formSubmissionPost";
const char* FrameScheduledNavigationNotification::ReasonEnum::HttpHeaderRefresh = "httpHeaderRefresh";
const char* FrameScheduledNavigationNotification::ReasonEnum::ScriptInitiated = "scriptInitiated";
const char* FrameScheduledNavigationNotification::ReasonEnum::MetaTagRefresh = "metaTagRefresh";
const char* FrameScheduledNavigationNotification::ReasonEnum::PageBlockInterstitial = "pageBlockInterstitial";
const char* FrameScheduledNavigationNotification::ReasonEnum::Reload = "reload";

std::unique_ptr<FrameScheduledNavigationNotification> FrameScheduledNavigationNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<FrameScheduledNavigationNotification> result(new FrameScheduledNavigationNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* frameIdValue = object->get("frameId");
    errors->setName("frameId");
    result->m_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    protocol::Value* delayValue = object->get("delay");
    errors->setName("delay");
    result->m_delay = ValueConversions<double>::fromValue(delayValue, errors);
    protocol::Value* reasonValue = object->get("reason");
    errors->setName("reason");
    result->m_reason = ValueConversions<String>::fromValue(reasonValue, errors);
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<String>::fromValue(urlValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> FrameScheduledNavigationNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("frameId", ValueConversions<String>::toValue(m_frameId));
    result->setValue("delay", ValueConversions<double>::toValue(m_delay));
    result->setValue("reason", ValueConversions<String>::toValue(m_reason));
    result->setValue("url", ValueConversions<String>::toValue(m_url));
    return result;
}

std::unique_ptr<FrameScheduledNavigationNotification> FrameScheduledNavigationNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<FrameStartedLoadingNotification> FrameStartedLoadingNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<FrameStartedLoadingNotification> result(new FrameStartedLoadingNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* frameIdValue = object->get("frameId");
    errors->setName("frameId");
    result->m_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> FrameStartedLoadingNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("frameId", ValueConversions<String>::toValue(m_frameId));
    return result;
}

std::unique_ptr<FrameStartedLoadingNotification> FrameStartedLoadingNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<FrameStoppedLoadingNotification> FrameStoppedLoadingNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<FrameStoppedLoadingNotification> result(new FrameStoppedLoadingNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* frameIdValue = object->get("frameId");
    errors->setName("frameId");
    result->m_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> FrameStoppedLoadingNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("frameId", ValueConversions<String>::toValue(m_frameId));
    return result;
}

std::unique_ptr<FrameStoppedLoadingNotification> FrameStoppedLoadingNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<LifecycleEventNotification> LifecycleEventNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<LifecycleEventNotification> result(new LifecycleEventNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* frameIdValue = object->get("frameId");
    errors->setName("frameId");
    result->m_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    protocol::Value* loaderIdValue = object->get("loaderId");
    errors->setName("loaderId");
    result->m_loaderId = ValueConversions<String>::fromValue(loaderIdValue, errors);
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<String>::fromValue(nameValue, errors);
    protocol::Value* timestampValue = object->get("timestamp");
    errors->setName("timestamp");
    result->m_timestamp = ValueConversions<double>::fromValue(timestampValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> LifecycleEventNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("frameId", ValueConversions<String>::toValue(m_frameId));
    result->setValue("loaderId", ValueConversions<String>::toValue(m_loaderId));
    result->setValue("name", ValueConversions<String>::toValue(m_name));
    result->setValue("timestamp", ValueConversions<double>::toValue(m_timestamp));
    return result;
}

std::unique_ptr<LifecycleEventNotification> LifecycleEventNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<LoadEventFiredNotification> LoadEventFiredNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<LoadEventFiredNotification> result(new LoadEventFiredNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* timestampValue = object->get("timestamp");
    errors->setName("timestamp");
    result->m_timestamp = ValueConversions<double>::fromValue(timestampValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> LoadEventFiredNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("timestamp", ValueConversions<double>::toValue(m_timestamp));
    return result;
}

std::unique_ptr<LoadEventFiredNotification> LoadEventFiredNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<NavigatedWithinDocumentNotification> NavigatedWithinDocumentNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<NavigatedWithinDocumentNotification> result(new NavigatedWithinDocumentNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* frameIdValue = object->get("frameId");
    errors->setName("frameId");
    result->m_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<String>::fromValue(urlValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> NavigatedWithinDocumentNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("frameId", ValueConversions<String>::toValue(m_frameId));
    result->setValue("url", ValueConversions<String>::toValue(m_url));
    return result;
}

std::unique_ptr<NavigatedWithinDocumentNotification> NavigatedWithinDocumentNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<WindowOpenNotification> WindowOpenNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<WindowOpenNotification> result(new WindowOpenNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<String>::fromValue(urlValue, errors);
    protocol::Value* windowNameValue = object->get("windowName");
    errors->setName("windowName");
    result->m_windowName = ValueConversions<String>::fromValue(windowNameValue, errors);
    protocol::Value* windowFeaturesValue = object->get("windowFeatures");
    errors->setName("windowFeatures");
    result->m_windowFeatures = ValueConversions<protocol::Array<String>>::fromValue(windowFeaturesValue, errors);
    protocol::Value* userGestureValue = object->get("userGesture");
    errors->setName("userGesture");
    result->m_userGesture = ValueConversions<bool>::fromValue(userGestureValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> WindowOpenNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("url", ValueConversions<String>::toValue(m_url));
    result->setValue("windowName", ValueConversions<String>::toValue(m_windowName));
    result->setValue("windowFeatures", ValueConversions<protocol::Array<String>>::toValue(m_windowFeatures.get()));
    result->setValue("userGesture", ValueConversions<bool>::toValue(m_userGesture));
    return result;
}

std::unique_ptr<WindowOpenNotification> WindowOpenNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

// ------------- Enum values from params.


namespace CaptureScreenshot {
namespace FormatEnum {
const char* Jpeg = "jpeg";
const char* Png = "png";
} // namespace FormatEnum
} // namespace CaptureScreenshot

namespace SetDownloadBehavior {
namespace BehaviorEnum {
const char* Deny = "deny";
const char* Allow = "allow";
const char* Default = "default";
} // namespace BehaviorEnum
} // namespace SetDownloadBehavior

namespace SetTouchEmulationEnabled {
namespace ConfigurationEnum {
const char* Mobile = "mobile";
const char* Desktop = "desktop";
} // namespace ConfigurationEnum
} // namespace SetTouchEmulationEnabled

namespace StartScreencast {
namespace FormatEnum {
const char* Jpeg = "jpeg";
const char* Png = "png";
} // namespace FormatEnum
} // namespace StartScreencast

namespace SetWebLifecycleState {
namespace StateEnum {
const char* Frozen = "frozen";
const char* Active = "active";
} // namespace StateEnum
} // namespace SetWebLifecycleState

namespace FrameScheduledNavigation {
namespace ReasonEnum {
const char* FormSubmissionGet = "formSubmissionGet";
const char* FormSubmissionPost = "formSubmissionPost";
const char* HttpHeaderRefresh = "httpHeaderRefresh";
const char* ScriptInitiated = "scriptInitiated";
const char* MetaTagRefresh = "metaTagRefresh";
const char* PageBlockInterstitial = "pageBlockInterstitial";
const char* Reload = "reload";
} // namespace ReasonEnum
} // namespace FrameScheduledNavigation

// ------------- Frontend notifications.

void Frontend::domContentEventFired(double timestamp)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<DomContentEventFiredNotification> messageData = DomContentEventFiredNotification::create()
        .setTimestamp(timestamp)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.domContentEventFired", std::move(messageData)));
}

void Frontend::frameAttached(const String& frameId, const String& parentFrameId, Maybe<v8_inspector::protocol::Runtime::API::StackTrace> stack)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<FrameAttachedNotification> messageData = FrameAttachedNotification::create()
        .setFrameId(frameId)
        .setParentFrameId(parentFrameId)
        .build();
    if (stack.isJust())
        messageData->setStack(std::move(stack).takeJust());
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.frameAttached", std::move(messageData)));
}

void Frontend::frameClearedScheduledNavigation(const String& frameId)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<FrameClearedScheduledNavigationNotification> messageData = FrameClearedScheduledNavigationNotification::create()
        .setFrameId(frameId)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.frameClearedScheduledNavigation", std::move(messageData)));
}

void Frontend::frameDetached(const String& frameId)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<FrameDetachedNotification> messageData = FrameDetachedNotification::create()
        .setFrameId(frameId)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.frameDetached", std::move(messageData)));
}

void Frontend::frameNavigated(std::unique_ptr<protocol::Page::Frame> frame)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<FrameNavigatedNotification> messageData = FrameNavigatedNotification::create()
        .setFrame(std::move(frame))
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.frameNavigated", std::move(messageData)));
}

void Frontend::frameResized()
{
    if (!m_frontendChannel)
        return;
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.frameResized"));
}

void Frontend::frameScheduledNavigation(const String& frameId, double delay, const String& reason, const String& url)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<FrameScheduledNavigationNotification> messageData = FrameScheduledNavigationNotification::create()
        .setFrameId(frameId)
        .setDelay(delay)
        .setReason(reason)
        .setUrl(url)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.frameScheduledNavigation", std::move(messageData)));
}

void Frontend::frameStartedLoading(const String& frameId)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<FrameStartedLoadingNotification> messageData = FrameStartedLoadingNotification::create()
        .setFrameId(frameId)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.frameStartedLoading", std::move(messageData)));
}

void Frontend::frameStoppedLoading(const String& frameId)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<FrameStoppedLoadingNotification> messageData = FrameStoppedLoadingNotification::create()
        .setFrameId(frameId)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.frameStoppedLoading", std::move(messageData)));
}

void Frontend::lifecycleEvent(const String& frameId, const String& loaderId, const String& name, double timestamp)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<LifecycleEventNotification> messageData = LifecycleEventNotification::create()
        .setFrameId(frameId)
        .setLoaderId(loaderId)
        .setName(name)
        .setTimestamp(timestamp)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.lifecycleEvent", std::move(messageData)));
}

void Frontend::loadEventFired(double timestamp)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<LoadEventFiredNotification> messageData = LoadEventFiredNotification::create()
        .setTimestamp(timestamp)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.loadEventFired", std::move(messageData)));
}

void Frontend::navigatedWithinDocument(const String& frameId, const String& url)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<NavigatedWithinDocumentNotification> messageData = NavigatedWithinDocumentNotification::create()
        .setFrameId(frameId)
        .setUrl(url)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.navigatedWithinDocument", std::move(messageData)));
}

void Frontend::windowOpen(const String& url, const String& windowName, std::unique_ptr<protocol::Array<String>> windowFeatures, bool userGesture)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<WindowOpenNotification> messageData = WindowOpenNotification::create()
        .setUrl(url)
        .setWindowName(windowName)
        .setWindowFeatures(std::move(windowFeatures))
        .setUserGesture(userGesture)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.windowOpen", std::move(messageData)));
}

void Frontend::flush()
{
    m_frontendChannel->flushProtocolNotifications();
}

void Frontend::sendRawNotification(const String& notification)
{
    m_frontendChannel->sendProtocolNotification(InternalRawNotification::create(notification));
}

// --------------------- Dispatcher.

class DispatcherImpl : public protocol::DispatcherBase {
public:
    DispatcherImpl(FrontendChannel* frontendChannel, Backend* backend, bool fallThroughForNotFound)
        : DispatcherBase(frontendChannel)
        , m_backend(backend)
        , m_fallThroughForNotFound(fallThroughForNotFound) {
        m_dispatchMap["Page.addScriptToEvaluateOnLoad"] = &DispatcherImpl::addScriptToEvaluateOnLoad;
        m_dispatchMap["Page.addScriptToEvaluateOnNewDocument"] = &DispatcherImpl::addScriptToEvaluateOnNewDocument;
      m_redirects["Page.clearDeviceMetricsOverride"] = "Emulation.clearDeviceMetricsOverride";
      m_redirects["Page.clearDeviceOrientationOverride"] = "DeviceOrientation.clearDeviceOrientationOverride";
      m_redirects["Page.clearGeolocationOverride"] = "Emulation.clearGeolocationOverride";
        m_dispatchMap["Page.createIsolatedWorld"] = &DispatcherImpl::createIsolatedWorld;
      m_redirects["Page.deleteCookie"] = "Network.deleteCookie";
        m_dispatchMap["Page.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["Page.enable"] = &DispatcherImpl::enable;
      m_redirects["Page.getCookies"] = "Network.getCookies";
        m_dispatchMap["Page.getFrameTree"] = &DispatcherImpl::getFrameTree;
        m_dispatchMap["Page.getLayoutMetrics"] = &DispatcherImpl::getLayoutMetrics;
        m_dispatchMap["Page.getResourceContent"] = &DispatcherImpl::getResourceContent;
        m_dispatchMap["Page.getResourceTree"] = &DispatcherImpl::getResourceTree;
        m_dispatchMap["Page.reload"] = &DispatcherImpl::reload;
        m_dispatchMap["Page.removeScriptToEvaluateOnLoad"] = &DispatcherImpl::removeScriptToEvaluateOnLoad;
        m_dispatchMap["Page.removeScriptToEvaluateOnNewDocument"] = &DispatcherImpl::removeScriptToEvaluateOnNewDocument;
        m_dispatchMap["Page.searchInResource"] = &DispatcherImpl::searchInResource;
        m_dispatchMap["Page.setAdBlockingEnabled"] = &DispatcherImpl::setAdBlockingEnabled;
        m_dispatchMap["Page.setBypassCSP"] = &DispatcherImpl::setBypassCSP;
      m_redirects["Page.setDeviceMetricsOverride"] = "Emulation.setDeviceMetricsOverride";
      m_redirects["Page.setDeviceOrientationOverride"] = "DeviceOrientation.setDeviceOrientationOverride";
        m_dispatchMap["Page.setDocumentContent"] = &DispatcherImpl::setDocumentContent;
      m_redirects["Page.setGeolocationOverride"] = "Emulation.setGeolocationOverride";
        m_dispatchMap["Page.setLifecycleEventsEnabled"] = &DispatcherImpl::setLifecycleEventsEnabled;
      m_redirects["Page.setTouchEmulationEnabled"] = "Emulation.setTouchEmulationEnabled";
        m_dispatchMap["Page.startScreencast"] = &DispatcherImpl::startScreencast;
        m_dispatchMap["Page.stopLoading"] = &DispatcherImpl::stopLoading;
        m_dispatchMap["Page.stopScreencast"] = &DispatcherImpl::stopScreencast;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status addScriptToEvaluateOnLoad(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status addScriptToEvaluateOnNewDocument(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status createIsolatedWorld(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getFrameTree(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getLayoutMetrics(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getResourceContent(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getResourceTree(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status reload(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status removeScriptToEvaluateOnLoad(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status removeScriptToEvaluateOnNewDocument(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status searchInResource(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setAdBlockingEnabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setBypassCSP(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setDocumentContent(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setLifecycleEventsEnabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status startScreencast(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status stopLoading(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status stopScreencast(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

    Backend* m_backend;
    bool m_fallThroughForNotFound;
};

DispatchResponse::Status DispatcherImpl::dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject)
{
    protocol::HashMap<String, CallHandler>::iterator it = m_dispatchMap.find(method);
    if (it == m_dispatchMap.end()) {
        if (m_fallThroughForNotFound)
            return DispatchResponse::kFallThrough;
        reportProtocolError(callId, DispatchResponse::kMethodNotFound, "'" + method + "' wasn't found", nullptr);
        return DispatchResponse::kError;
    }

    protocol::ErrorSupport errors;
    return (this->*(it->second))(callId, std::move(messageObject), &errors);
}


DispatchResponse::Status DispatcherImpl::addScriptToEvaluateOnLoad(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* scriptSourceValue = object ? object->get("scriptSource") : nullptr;
    errors->setName("scriptSource");
    String in_scriptSource = ValueConversions<String>::fromValue(scriptSourceValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }
    // Declare output parameters.
    String out_identifier;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->addScriptToEvaluateOnLoad(in_scriptSource, &out_identifier);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("identifier", ValueConversions<String>::toValue(out_identifier));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

DispatchResponse::Status DispatcherImpl::addScriptToEvaluateOnNewDocument(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* sourceValue = object ? object->get("source") : nullptr;
    errors->setName("source");
    String in_source = ValueConversions<String>::fromValue(sourceValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }
    // Declare output parameters.
    String out_identifier;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->addScriptToEvaluateOnNewDocument(in_source, &out_identifier);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("identifier", ValueConversions<String>::toValue(out_identifier));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

DispatchResponse::Status DispatcherImpl::createIsolatedWorld(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* frameIdValue = object ? object->get("frameId") : nullptr;
    errors->setName("frameId");
    String in_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    protocol::Value* worldNameValue = object ? object->get("worldName") : nullptr;
    Maybe<String> in_worldName;
    if (worldNameValue) {
        errors->setName("worldName");
        in_worldName = ValueConversions<String>::fromValue(worldNameValue, errors);
    }
    protocol::Value* grantUniveralAccessValue = object ? object->get("grantUniveralAccess") : nullptr;
    Maybe<bool> in_grantUniveralAccess;
    if (grantUniveralAccessValue) {
        errors->setName("grantUniveralAccess");
        in_grantUniveralAccess = ValueConversions<bool>::fromValue(grantUniveralAccessValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }
    // Declare output parameters.
    int out_executionContextId;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->createIsolatedWorld(in_frameId, std::move(in_worldName), std::move(in_grantUniveralAccess), &out_executionContextId);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("executionContextId", ValueConversions<int>::toValue(out_executionContextId));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

DispatchResponse::Status DispatcherImpl::disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->disable();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->enable();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::getFrameTree(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    std::unique_ptr<protocol::Page::FrameTree> out_frameTree;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getFrameTree(&out_frameTree);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("frameTree", ValueConversions<protocol::Page::FrameTree>::toValue(out_frameTree.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

DispatchResponse::Status DispatcherImpl::getLayoutMetrics(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    std::unique_ptr<protocol::Page::LayoutViewport> out_layoutViewport;
    std::unique_ptr<protocol::Page::VisualViewport> out_visualViewport;
    std::unique_ptr<protocol::DOM::Rect> out_contentSize;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getLayoutMetrics(&out_layoutViewport, &out_visualViewport, &out_contentSize);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("layoutViewport", ValueConversions<protocol::Page::LayoutViewport>::toValue(out_layoutViewport.get()));
        result->setValue("visualViewport", ValueConversions<protocol::Page::VisualViewport>::toValue(out_visualViewport.get()));
        result->setValue("contentSize", ValueConversions<protocol::DOM::Rect>::toValue(out_contentSize.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

class GetResourceContentCallbackImpl : public Backend::GetResourceContentCallback, public DispatcherBase::Callback {
public:
    GetResourceContentCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess(const String& content, bool base64Encoded) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("content", ValueConversions<String>::toValue(content));
        resultObject->setValue("base64Encoded", ValueConversions<bool>::toValue(base64Encoded));
        sendIfActive(std::move(resultObject), DispatchResponse::OK());
    }

    void fallThrough() override
    {
        fallThroughIfActive();
    }

    void sendFailure(const DispatchResponse& response) override
    {
        DCHECK(response.status() == DispatchResponse::kError);
        sendIfActive(nullptr, response);
    }
};

DispatchResponse::Status DispatcherImpl::getResourceContent(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* frameIdValue = object ? object->get("frameId") : nullptr;
    errors->setName("frameId");
    String in_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    protocol::Value* urlValue = object ? object->get("url") : nullptr;
    errors->setName("url");
    String in_url = ValueConversions<String>::fromValue(urlValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<GetResourceContentCallbackImpl> callback(new GetResourceContentCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->getResourceContent(in_frameId, in_url, std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

DispatchResponse::Status DispatcherImpl::getResourceTree(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    std::unique_ptr<protocol::Page::FrameResourceTree> out_frameTree;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getResourceTree(&out_frameTree);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("frameTree", ValueConversions<protocol::Page::FrameResourceTree>::toValue(out_frameTree.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

DispatchResponse::Status DispatcherImpl::reload(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* ignoreCacheValue = object ? object->get("ignoreCache") : nullptr;
    Maybe<bool> in_ignoreCache;
    if (ignoreCacheValue) {
        errors->setName("ignoreCache");
        in_ignoreCache = ValueConversions<bool>::fromValue(ignoreCacheValue, errors);
    }
    protocol::Value* scriptToEvaluateOnLoadValue = object ? object->get("scriptToEvaluateOnLoad") : nullptr;
    Maybe<String> in_scriptToEvaluateOnLoad;
    if (scriptToEvaluateOnLoadValue) {
        errors->setName("scriptToEvaluateOnLoad");
        in_scriptToEvaluateOnLoad = ValueConversions<String>::fromValue(scriptToEvaluateOnLoadValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->reload(std::move(in_ignoreCache), std::move(in_scriptToEvaluateOnLoad));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::removeScriptToEvaluateOnLoad(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* identifierValue = object ? object->get("identifier") : nullptr;
    errors->setName("identifier");
    String in_identifier = ValueConversions<String>::fromValue(identifierValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->removeScriptToEvaluateOnLoad(in_identifier);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::removeScriptToEvaluateOnNewDocument(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* identifierValue = object ? object->get("identifier") : nullptr;
    errors->setName("identifier");
    String in_identifier = ValueConversions<String>::fromValue(identifierValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->removeScriptToEvaluateOnNewDocument(in_identifier);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

class SearchInResourceCallbackImpl : public Backend::SearchInResourceCallback, public DispatcherBase::Callback {
public:
    SearchInResourceCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess(std::unique_ptr<protocol::Array<v8_inspector::protocol::Debugger::API::SearchMatch>> result) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("result", ValueConversions<protocol::Array<v8_inspector::protocol::Debugger::API::SearchMatch>>::toValue(result.get()));
        sendIfActive(std::move(resultObject), DispatchResponse::OK());
    }

    void fallThrough() override
    {
        fallThroughIfActive();
    }

    void sendFailure(const DispatchResponse& response) override
    {
        DCHECK(response.status() == DispatchResponse::kError);
        sendIfActive(nullptr, response);
    }
};

DispatchResponse::Status DispatcherImpl::searchInResource(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* frameIdValue = object ? object->get("frameId") : nullptr;
    errors->setName("frameId");
    String in_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    protocol::Value* urlValue = object ? object->get("url") : nullptr;
    errors->setName("url");
    String in_url = ValueConversions<String>::fromValue(urlValue, errors);
    protocol::Value* queryValue = object ? object->get("query") : nullptr;
    errors->setName("query");
    String in_query = ValueConversions<String>::fromValue(queryValue, errors);
    protocol::Value* caseSensitiveValue = object ? object->get("caseSensitive") : nullptr;
    Maybe<bool> in_caseSensitive;
    if (caseSensitiveValue) {
        errors->setName("caseSensitive");
        in_caseSensitive = ValueConversions<bool>::fromValue(caseSensitiveValue, errors);
    }
    protocol::Value* isRegexValue = object ? object->get("isRegex") : nullptr;
    Maybe<bool> in_isRegex;
    if (isRegexValue) {
        errors->setName("isRegex");
        in_isRegex = ValueConversions<bool>::fromValue(isRegexValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<SearchInResourceCallbackImpl> callback(new SearchInResourceCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->searchInResource(in_frameId, in_url, in_query, std::move(in_caseSensitive), std::move(in_isRegex), std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

DispatchResponse::Status DispatcherImpl::setAdBlockingEnabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* enabledValue = object ? object->get("enabled") : nullptr;
    errors->setName("enabled");
    bool in_enabled = ValueConversions<bool>::fromValue(enabledValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setAdBlockingEnabled(in_enabled);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setBypassCSP(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* enabledValue = object ? object->get("enabled") : nullptr;
    errors->setName("enabled");
    bool in_enabled = ValueConversions<bool>::fromValue(enabledValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setBypassCSP(in_enabled);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setDocumentContent(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* frameIdValue = object ? object->get("frameId") : nullptr;
    errors->setName("frameId");
    String in_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    protocol::Value* htmlValue = object ? object->get("html") : nullptr;
    errors->setName("html");
    String in_html = ValueConversions<String>::fromValue(htmlValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setDocumentContent(in_frameId, in_html);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setLifecycleEventsEnabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* enabledValue = object ? object->get("enabled") : nullptr;
    errors->setName("enabled");
    bool in_enabled = ValueConversions<bool>::fromValue(enabledValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setLifecycleEventsEnabled(in_enabled);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::startScreencast(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* formatValue = object ? object->get("format") : nullptr;
    Maybe<String> in_format;
    if (formatValue) {
        errors->setName("format");
        in_format = ValueConversions<String>::fromValue(formatValue, errors);
    }
    protocol::Value* qualityValue = object ? object->get("quality") : nullptr;
    Maybe<int> in_quality;
    if (qualityValue) {
        errors->setName("quality");
        in_quality = ValueConversions<int>::fromValue(qualityValue, errors);
    }
    protocol::Value* maxWidthValue = object ? object->get("maxWidth") : nullptr;
    Maybe<int> in_maxWidth;
    if (maxWidthValue) {
        errors->setName("maxWidth");
        in_maxWidth = ValueConversions<int>::fromValue(maxWidthValue, errors);
    }
    protocol::Value* maxHeightValue = object ? object->get("maxHeight") : nullptr;
    Maybe<int> in_maxHeight;
    if (maxHeightValue) {
        errors->setName("maxHeight");
        in_maxHeight = ValueConversions<int>::fromValue(maxHeightValue, errors);
    }
    protocol::Value* everyNthFrameValue = object ? object->get("everyNthFrame") : nullptr;
    Maybe<int> in_everyNthFrame;
    if (everyNthFrameValue) {
        errors->setName("everyNthFrame");
        in_everyNthFrame = ValueConversions<int>::fromValue(everyNthFrameValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->startScreencast(std::move(in_format), std::move(in_quality), std::move(in_maxWidth), std::move(in_maxHeight), std::move(in_everyNthFrame));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::stopLoading(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->stopLoading();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::stopScreencast(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->stopScreencast();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

// static
void Dispatcher::wire(UberDispatcher* uber, Backend* backend)
{
    std::unique_ptr<DispatcherImpl> dispatcher(new DispatcherImpl(uber->channel(), backend, uber->fallThroughForNotFound()));
    uber->setupRedirects(dispatcher->redirects());
    uber->registerBackend("Page", std::move(dispatcher));
}

} // Page
} // namespace blink
} // namespace protocol