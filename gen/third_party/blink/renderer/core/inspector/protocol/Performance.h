// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef blink_protocol_Performance_h
#define blink_protocol_Performance_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace Performance {

// ------------- Forward and enum declarations.
class Metric;
class MetricsNotification;

// ------------- Type and builder declarations.

class CORE_EXPORT Metric : public Serializable{
    PROTOCOL_DISALLOW_COPY(Metric);
public:
    static std::unique_ptr<Metric> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~Metric() override { }

    String getName() { return m_name; }
    void setName(const String& value) { m_name = value; }

    double getValue() { return m_value; }
    void setValue(double value) { m_value = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<Metric> clone() const;

    template<int STATE>
    class MetricBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            NameSet = 1 << 1,
            ValueSet = 1 << 2,
            AllFieldsSet = (NameSet | ValueSet | 0)};


        MetricBuilder<STATE | NameSet>& setName(const String& value)
        {
            static_assert(!(STATE & NameSet), "property name should not be set yet");
            m_result->setName(value);
            return castState<NameSet>();
        }

        MetricBuilder<STATE | ValueSet>& setValue(double value)
        {
            static_assert(!(STATE & ValueSet), "property value should not be set yet");
            m_result->setValue(value);
            return castState<ValueSet>();
        }

        std::unique_ptr<Metric> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Metric;
        MetricBuilder() : m_result(new Metric()) { }

        template<int STEP> MetricBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<MetricBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Performance::Metric> m_result;
    };

    static MetricBuilder<0> create()
    {
        return MetricBuilder<0>();
    }

private:
    Metric()
    {
          m_value = 0;
    }

    String m_name;
    double m_value;
};


class CORE_EXPORT MetricsNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(MetricsNotification);
public:
    static std::unique_ptr<MetricsNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~MetricsNotification() override { }

    protocol::Array<protocol::Performance::Metric>* getMetrics() { return m_metrics.get(); }
    void setMetrics(std::unique_ptr<protocol::Array<protocol::Performance::Metric>> value) { m_metrics = std::move(value); }

    String getTitle() { return m_title; }
    void setTitle(const String& value) { m_title = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<MetricsNotification> clone() const;

    template<int STATE>
    class MetricsNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            MetricsSet = 1 << 1,
            TitleSet = 1 << 2,
            AllFieldsSet = (MetricsSet | TitleSet | 0)};


        MetricsNotificationBuilder<STATE | MetricsSet>& setMetrics(std::unique_ptr<protocol::Array<protocol::Performance::Metric>> value)
        {
            static_assert(!(STATE & MetricsSet), "property metrics should not be set yet");
            m_result->setMetrics(std::move(value));
            return castState<MetricsSet>();
        }

        MetricsNotificationBuilder<STATE | TitleSet>& setTitle(const String& value)
        {
            static_assert(!(STATE & TitleSet), "property title should not be set yet");
            m_result->setTitle(value);
            return castState<TitleSet>();
        }

        std::unique_ptr<MetricsNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class MetricsNotification;
        MetricsNotificationBuilder() : m_result(new MetricsNotification()) { }

        template<int STEP> MetricsNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<MetricsNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Performance::MetricsNotification> m_result;
    };

    static MetricsNotificationBuilder<0> create()
    {
        return MetricsNotificationBuilder<0>();
    }

private:
    MetricsNotification()
    {
    }

    std::unique_ptr<protocol::Array<protocol::Performance::Metric>> m_metrics;
    String m_title;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse disable() = 0;
    virtual DispatchResponse enable() = 0;
    virtual DispatchResponse getMetrics(std::unique_ptr<protocol::Array<protocol::Performance::Metric>>* out_metrics) = 0;

};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void metrics(std::unique_ptr<protocol::Array<protocol::Performance::Metric>> metrics, const String& title);

    void flush();
    void sendRawNotification(const String&);
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class CORE_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class CORE_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace Performance
} // namespace blink
} // namespace protocol

#endif // !defined(blink_protocol_Performance_h)
