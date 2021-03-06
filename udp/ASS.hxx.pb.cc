// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ASS.hxx

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ASS.hxx.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* PBRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PBRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* PBResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PBResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ASS_2ehxx() {
  protobuf_AddDesc_ASS_2ehxx();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ASS.hxx");
  GOOGLE_CHECK(file != NULL);
  PBRequest_descriptor_ = file->message_type(0);
  static const int PBRequest_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBRequest, header_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBRequest, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBRequest, message_),
  };
  PBRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PBRequest_descriptor_,
      PBRequest::default_instance_,
      PBRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PBRequest));
  PBResponse_descriptor_ = file->message_type(1);
  static const int PBResponse_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBResponse, header_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBResponse, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBResponse, result_),
  };
  PBResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PBResponse_descriptor_,
      PBResponse::default_instance_,
      PBResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PBResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ASS_2ehxx);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PBRequest_descriptor_, &PBRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PBResponse_descriptor_, &PBResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ASS_2ehxx() {
  delete PBRequest::default_instance_;
  delete PBRequest_reflection_;
  delete PBResponse::default_instance_;
  delete PBResponse_reflection_;
}

void protobuf_AddDesc_ASS_2ehxx() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\007ASS.hxx\"8\n\tPBRequest\022\016\n\006header\030\001 \002(\r\022\n"
    "\n\002id\030\002 \002(\r\022\017\n\007message\030\003 \002(\014\"8\n\nPBRespons"
    "e\022\016\n\006header\030\001 \002(\r\022\n\n\002id\030\002 \002(\r\022\016\n\006result\030"
    "\003 \002(\010", 125);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ASS.hxx", &protobuf_RegisterTypes);
  PBRequest::default_instance_ = new PBRequest();
  PBResponse::default_instance_ = new PBResponse();
  PBRequest::default_instance_->InitAsDefaultInstance();
  PBResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ASS_2ehxx);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ASS_2ehxx {
  StaticDescriptorInitializer_ASS_2ehxx() {
    protobuf_AddDesc_ASS_2ehxx();
  }
} static_descriptor_initializer_ASS_2ehxx_;

// ===================================================================

#ifndef _MSC_VER
const int PBRequest::kHeaderFieldNumber;
const int PBRequest::kIdFieldNumber;
const int PBRequest::kMessageFieldNumber;
#endif  // !_MSC_VER

PBRequest::PBRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PBRequest::InitAsDefaultInstance() {
}

PBRequest::PBRequest(const PBRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PBRequest::SharedCtor() {
  _cached_size_ = 0;
  header_ = 0u;
  id_ = 0u;
  message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PBRequest::~PBRequest() {
  SharedDtor();
}

void PBRequest::SharedDtor() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (this != default_instance_) {
  }
}

void PBRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PBRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PBRequest_descriptor_;
}

const PBRequest& PBRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ASS_2ehxx();
  return *default_instance_;
}

PBRequest* PBRequest::default_instance_ = NULL;

PBRequest* PBRequest::New() const {
  return new PBRequest;
}

void PBRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    header_ = 0u;
    id_ = 0u;
    if (has_message()) {
      if (message_ != &::google::protobuf::internal::kEmptyString) {
        message_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PBRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 header = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &header_)));
          set_has_header();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_id;
        break;
      }

      // required uint32 id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_message;
        break;
      }

      // required bytes message = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_message:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_message()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void PBRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 header = 1;
  if (has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->header(), output);
  }

  // required uint32 id = 2;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->id(), output);
  }

  // required bytes message = 3;
  if (has_message()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      3, this->message(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PBRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 header = 1;
  if (has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->header(), target);
  }

  // required uint32 id = 2;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->id(), target);
  }

  // required bytes message = 3;
  if (has_message()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->message(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PBRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 header = 1;
    if (has_header()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->header());
    }

    // required uint32 id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // required bytes message = 3;
    if (has_message()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->message());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PBRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PBRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PBRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PBRequest::MergeFrom(const PBRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_header()) {
      set_header(from.header());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_message()) {
      set_message(from.message());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PBRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PBRequest::CopyFrom(const PBRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PBRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void PBRequest::Swap(PBRequest* other) {
  if (other != this) {
    std::swap(header_, other->header_);
    std::swap(id_, other->id_);
    std::swap(message_, other->message_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PBRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PBRequest_descriptor_;
  metadata.reflection = PBRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int PBResponse::kHeaderFieldNumber;
const int PBResponse::kIdFieldNumber;
const int PBResponse::kResultFieldNumber;
#endif  // !_MSC_VER

PBResponse::PBResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PBResponse::InitAsDefaultInstance() {
}

PBResponse::PBResponse(const PBResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PBResponse::SharedCtor() {
  _cached_size_ = 0;
  header_ = 0u;
  id_ = 0u;
  result_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PBResponse::~PBResponse() {
  SharedDtor();
}

void PBResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PBResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PBResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PBResponse_descriptor_;
}

const PBResponse& PBResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ASS_2ehxx();
  return *default_instance_;
}

PBResponse* PBResponse::default_instance_ = NULL;

PBResponse* PBResponse::New() const {
  return new PBResponse;
}

void PBResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    header_ = 0u;
    id_ = 0u;
    result_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PBResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 header = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &header_)));
          set_has_header();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_id;
        break;
      }

      // required uint32 id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_result;
        break;
      }

      // required bool result = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_result:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &result_)));
          set_has_result();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void PBResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 header = 1;
  if (has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->header(), output);
  }

  // required uint32 id = 2;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->id(), output);
  }

  // required bool result = 3;
  if (has_result()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->result(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PBResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 header = 1;
  if (has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->header(), target);
  }

  // required uint32 id = 2;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->id(), target);
  }

  // required bool result = 3;
  if (has_result()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->result(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PBResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 header = 1;
    if (has_header()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->header());
    }

    // required uint32 id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // required bool result = 3;
    if (has_result()) {
      total_size += 1 + 1;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PBResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PBResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PBResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PBResponse::MergeFrom(const PBResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_header()) {
      set_header(from.header());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_result()) {
      set_result(from.result());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PBResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PBResponse::CopyFrom(const PBResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PBResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void PBResponse::Swap(PBResponse* other) {
  if (other != this) {
    std::swap(header_, other->header_);
    std::swap(id_, other->id_);
    std::swap(result_, other->result_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PBResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PBResponse_descriptor_;
  metadata.reflection = PBResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
