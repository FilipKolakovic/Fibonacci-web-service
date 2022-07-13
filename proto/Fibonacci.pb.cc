// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Fibonacci.proto

#include "Fibonacci.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace fibonacci {
PROTOBUF_CONSTEXPR FibonacciRequest::FibonacciRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.payload_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct FibonacciRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FibonacciRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FibonacciRequestDefaultTypeInternal() {}
  union {
    FibonacciRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FibonacciRequestDefaultTypeInternal _FibonacciRequest_default_instance_;
PROTOBUF_CONSTEXPR FibonacciReply::FibonacciReply(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.fib_)*/int64_t{0}
  , /*decltype(_impl_.timestamp_)*/int64_t{0}
  , /*decltype(_impl_.duration_)*/int64_t{0}
  , /*decltype(_impl_.testp_)*/int64_t{0}
  , /*decltype(_impl_.count_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct FibonacciReplyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FibonacciReplyDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FibonacciReplyDefaultTypeInternal() {}
  union {
    FibonacciReply _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FibonacciReplyDefaultTypeInternal _FibonacciReply_default_instance_;
}  // namespace fibonacci
static ::_pb::Metadata file_level_metadata_Fibonacci_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Fibonacci_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Fibonacci_2eproto = nullptr;

const uint32_t TableStruct_Fibonacci_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::fibonacci::FibonacciRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::fibonacci::FibonacciRequest, _impl_.payload_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::fibonacci::FibonacciReply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::fibonacci::FibonacciReply, _impl_.fib_),
  PROTOBUF_FIELD_OFFSET(::fibonacci::FibonacciReply, _impl_.timestamp_),
  PROTOBUF_FIELD_OFFSET(::fibonacci::FibonacciReply, _impl_.duration_),
  PROTOBUF_FIELD_OFFSET(::fibonacci::FibonacciReply, _impl_.count_),
  PROTOBUF_FIELD_OFFSET(::fibonacci::FibonacciReply, _impl_.testp_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::fibonacci::FibonacciRequest)},
  { 7, -1, -1, sizeof(::fibonacci::FibonacciReply)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::fibonacci::_FibonacciRequest_default_instance_._instance,
  &::fibonacci::_FibonacciReply_default_instance_._instance,
};

const char descriptor_table_protodef_Fibonacci_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017Fibonacci.proto\022\tfibonacci\"#\n\020Fibonacc"
  "iRequest\022\017\n\007payload\030\001 \001(\005\"`\n\016FibonacciRe"
  "ply\022\013\n\003fib\030\001 \001(\003\022\021\n\ttimestamp\030\002 \001(\003\022\020\n\010d"
  "uration\030\003 \001(\003\022\r\n\005count\030\004 \001(\005\022\r\n\005testP\030\005 "
  "\001(\0032[\n\tFibonacci\022N\n\022calculateFibonacci\022\033"
  ".fibonacci.FibonacciRequest\032\031.fibonacci."
  "FibonacciReply\"\000b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_Fibonacci_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Fibonacci_2eproto = {
    false, false, 264, descriptor_table_protodef_Fibonacci_2eproto,
    "Fibonacci.proto",
    &descriptor_table_Fibonacci_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_Fibonacci_2eproto::offsets,
    file_level_metadata_Fibonacci_2eproto, file_level_enum_descriptors_Fibonacci_2eproto,
    file_level_service_descriptors_Fibonacci_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Fibonacci_2eproto_getter() {
  return &descriptor_table_Fibonacci_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Fibonacci_2eproto(&descriptor_table_Fibonacci_2eproto);
namespace fibonacci {

// ===================================================================

class FibonacciRequest::_Internal {
 public:
};

FibonacciRequest::FibonacciRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:fibonacci.FibonacciRequest)
}
FibonacciRequest::FibonacciRequest(const FibonacciRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  FibonacciRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.payload_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.payload_ = from._impl_.payload_;
  // @@protoc_insertion_point(copy_constructor:fibonacci.FibonacciRequest)
}

inline void FibonacciRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.payload_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

FibonacciRequest::~FibonacciRequest() {
  // @@protoc_insertion_point(destructor:fibonacci.FibonacciRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FibonacciRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void FibonacciRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void FibonacciRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:fibonacci.FibonacciRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.payload_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FibonacciRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 payload = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.payload_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* FibonacciRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:fibonacci.FibonacciRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 payload = 1;
  if (this->_internal_payload() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_payload(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:fibonacci.FibonacciRequest)
  return target;
}

size_t FibonacciRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:fibonacci.FibonacciRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 payload = 1;
  if (this->_internal_payload() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_payload());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FibonacciRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    FibonacciRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*FibonacciRequest::GetClassData() const { return &_class_data_; }


void FibonacciRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<FibonacciRequest*>(&to_msg);
  auto& from = static_cast<const FibonacciRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:fibonacci.FibonacciRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_payload() != 0) {
    _this->_internal_set_payload(from._internal_payload());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void FibonacciRequest::CopyFrom(const FibonacciRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fibonacci.FibonacciRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FibonacciRequest::IsInitialized() const {
  return true;
}

void FibonacciRequest::InternalSwap(FibonacciRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.payload_, other->_impl_.payload_);
}

::PROTOBUF_NAMESPACE_ID::Metadata FibonacciRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Fibonacci_2eproto_getter, &descriptor_table_Fibonacci_2eproto_once,
      file_level_metadata_Fibonacci_2eproto[0]);
}

// ===================================================================

class FibonacciReply::_Internal {
 public:
};

FibonacciReply::FibonacciReply(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:fibonacci.FibonacciReply)
}
FibonacciReply::FibonacciReply(const FibonacciReply& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  FibonacciReply* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.fib_){}
    , decltype(_impl_.timestamp_){}
    , decltype(_impl_.duration_){}
    , decltype(_impl_.testp_){}
    , decltype(_impl_.count_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.fib_, &from._impl_.fib_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.count_) -
    reinterpret_cast<char*>(&_impl_.fib_)) + sizeof(_impl_.count_));
  // @@protoc_insertion_point(copy_constructor:fibonacci.FibonacciReply)
}

inline void FibonacciReply::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.fib_){int64_t{0}}
    , decltype(_impl_.timestamp_){int64_t{0}}
    , decltype(_impl_.duration_){int64_t{0}}
    , decltype(_impl_.testp_){int64_t{0}}
    , decltype(_impl_.count_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

FibonacciReply::~FibonacciReply() {
  // @@protoc_insertion_point(destructor:fibonacci.FibonacciReply)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FibonacciReply::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void FibonacciReply::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void FibonacciReply::Clear() {
// @@protoc_insertion_point(message_clear_start:fibonacci.FibonacciReply)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.fib_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.count_) -
      reinterpret_cast<char*>(&_impl_.fib_)) + sizeof(_impl_.count_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FibonacciReply::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 fib = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.fib_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 timestamp = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 duration = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.duration_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 count = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.count_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 testP = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.testp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* FibonacciReply::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:fibonacci.FibonacciReply)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 fib = 1;
  if (this->_internal_fib() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_fib(), target);
  }

  // int64 timestamp = 2;
  if (this->_internal_timestamp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(2, this->_internal_timestamp(), target);
  }

  // int64 duration = 3;
  if (this->_internal_duration() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(3, this->_internal_duration(), target);
  }

  // int32 count = 4;
  if (this->_internal_count() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(4, this->_internal_count(), target);
  }

  // int64 testP = 5;
  if (this->_internal_testp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(5, this->_internal_testp(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:fibonacci.FibonacciReply)
  return target;
}

size_t FibonacciReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:fibonacci.FibonacciReply)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int64 fib = 1;
  if (this->_internal_fib() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_fib());
  }

  // int64 timestamp = 2;
  if (this->_internal_timestamp() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_timestamp());
  }

  // int64 duration = 3;
  if (this->_internal_duration() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_duration());
  }

  // int64 testP = 5;
  if (this->_internal_testp() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_testp());
  }

  // int32 count = 4;
  if (this->_internal_count() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_count());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FibonacciReply::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    FibonacciReply::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*FibonacciReply::GetClassData() const { return &_class_data_; }


void FibonacciReply::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<FibonacciReply*>(&to_msg);
  auto& from = static_cast<const FibonacciReply&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:fibonacci.FibonacciReply)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_fib() != 0) {
    _this->_internal_set_fib(from._internal_fib());
  }
  if (from._internal_timestamp() != 0) {
    _this->_internal_set_timestamp(from._internal_timestamp());
  }
  if (from._internal_duration() != 0) {
    _this->_internal_set_duration(from._internal_duration());
  }
  if (from._internal_testp() != 0) {
    _this->_internal_set_testp(from._internal_testp());
  }
  if (from._internal_count() != 0) {
    _this->_internal_set_count(from._internal_count());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void FibonacciReply::CopyFrom(const FibonacciReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fibonacci.FibonacciReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FibonacciReply::IsInitialized() const {
  return true;
}

void FibonacciReply::InternalSwap(FibonacciReply* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(FibonacciReply, _impl_.count_)
      + sizeof(FibonacciReply::_impl_.count_)
      - PROTOBUF_FIELD_OFFSET(FibonacciReply, _impl_.fib_)>(
          reinterpret_cast<char*>(&_impl_.fib_),
          reinterpret_cast<char*>(&other->_impl_.fib_));
}

::PROTOBUF_NAMESPACE_ID::Metadata FibonacciReply::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Fibonacci_2eproto_getter, &descriptor_table_Fibonacci_2eproto_once,
      file_level_metadata_Fibonacci_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace fibonacci
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::fibonacci::FibonacciRequest*
Arena::CreateMaybeMessage< ::fibonacci::FibonacciRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::fibonacci::FibonacciRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::fibonacci::FibonacciReply*
Arena::CreateMaybeMessage< ::fibonacci::FibonacciReply >(Arena* arena) {
  return Arena::CreateMessageInternal< ::fibonacci::FibonacciReply >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
