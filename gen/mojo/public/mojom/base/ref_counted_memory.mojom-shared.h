// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_REF_COUNTED_MEMORY_MOJOM_SHARED_H_
#define MOJO_PUBLIC_MOJOM_BASE_REF_COUNTED_MEMORY_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "mojo/public/mojom/base/ref_counted_memory.mojom-shared-internal.h"
#include "mojo/public/mojom/base/big_buffer.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace mojo_base {
namespace mojom {
class RefCountedMemoryDataView;



}  // namespace mojom
}  // namespace mojo_base

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojo_base::mojom::RefCountedMemoryDataView> {
  using Data = ::mojo_base::mojom::internal::RefCountedMemory_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace mojo_base {
namespace mojom {
class RefCountedMemoryDataView {
 public:
  RefCountedMemoryDataView() {}

  RefCountedMemoryDataView(
      internal::RefCountedMemory_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      ::mojo_base::mojom::BigBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = !data_->data.is_null() ? &data_->data : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::BigBufferDataView>(
        pointer, output, context_);
  }
 private:
  internal::RefCountedMemory_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace mojo_base

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo_base::mojom::RefCountedMemoryDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo_base::mojom::RefCountedMemoryDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo_base::mojom::internal::RefCountedMemory_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
    typename decltype((*output)->data)::BufferWriter data_writer;
    data_writer.AllocateInline(buffer, &(*output)->data);
    mojo::internal::Serialize<::mojo_base::mojom::BigBufferDataView>(
        in_data, buffer, &data_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in RefCountedMemory struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojo_base::mojom::internal::RefCountedMemory_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo_base::mojom::RefCountedMemoryDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojo_base {
namespace mojom {

inline void RefCountedMemoryDataView::GetDataDataView(
    ::mojo_base::mojom::BigBufferDataView* output) {
  auto pointer = &data_->data;
  *output = ::mojo_base::mojom::BigBufferDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace mojo_base

#endif  // MOJO_PUBLIC_MOJOM_BASE_REF_COUNTED_MEMORY_MOJOM_SHARED_H_
