// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "season.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace season {

namespace {

const ::google::protobuf::Descriptor* key_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  key_reflection_ = NULL;
const ::google::protobuf::Descriptor* data_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  data_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_season_2eproto() {
  protobuf_AddDesc_season_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "season.proto");
  GOOGLE_CHECK(file != NULL);
  key_descriptor_ = file->message_type(0);
  static const int key_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(key, season_),
  };
  key_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      key_descriptor_,
      key::default_instance_,
      key_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(key, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(key, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(key));
  data_descriptor_ = file->message_type(1);
  static const int data_offsets_[1] = {
  };
  data_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      data_descriptor_,
      data::default_instance_,
      data_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(data, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(data, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(data));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_season_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    key_descriptor_, &key::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    data_descriptor_, &data::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_season_2eproto() {
  delete key::default_instance_;
  delete key_reflection_;
  delete data::default_instance_;
  delete data_reflection_;
}

void protobuf_AddDesc_season_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014season.proto\022\006season\"\025\n\003key\022\016\n\006season\030"
    "\001 \002(\t\"\006\n\004data", 53);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "season.proto", &protobuf_RegisterTypes);
  key::default_instance_ = new key();
  data::default_instance_ = new data();
  key::default_instance_->InitAsDefaultInstance();
  data::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_season_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_season_2eproto {
  StaticDescriptorInitializer_season_2eproto() {
    protobuf_AddDesc_season_2eproto();
  }
} static_descriptor_initializer_season_2eproto_;


// ===================================================================

const ::std::string key::_default_season_;
#ifndef _MSC_VER
const int key::kSeasonFieldNumber;
#endif  // !_MSC_VER

key::key()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void key::InitAsDefaultInstance() {
}

key::key(const key& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void key::SharedCtor() {
  _cached_size_ = 0;
  season_ = const_cast< ::std::string*>(&_default_season_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

key::~key() {
  SharedDtor();
}

void key::SharedDtor() {
  if (season_ != &_default_season_) {
    delete season_;
  }
  if (this != default_instance_) {
  }
}

void key::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* key::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return key_descriptor_;
}

const key& key::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_season_2eproto();  return *default_instance_;
}

key* key::default_instance_ = NULL;

key* key::New() const {
  return new key;
}

void key::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (season_ != &_default_season_) {
        season_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool key::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string season = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_season()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->season().data(), this->season().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
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

void key::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string season = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->season().data(), this->season().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->season(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* key::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string season = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->season().data(), this->season().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->season(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int key::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string season = 1;
    if (has_season()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->season());
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

void key::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const key* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const key*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void key::MergeFrom(const key& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_season(from.season());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void key::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void key::CopyFrom(const key& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool key::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void key::Swap(key* other) {
  if (other != this) {
    std::swap(season_, other->season_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata key::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = key_descriptor_;
  metadata.reflection = key_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

data::data()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void data::InitAsDefaultInstance() {
}

data::data(const data& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void data::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

data::~data() {
  SharedDtor();
}

void data::SharedDtor() {
  if (this != default_instance_) {
  }
}

void data::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* data::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return data_descriptor_;
}

const data& data::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_season_2eproto();  return *default_instance_;
}

data* data::default_instance_ = NULL;

data* data::New() const {
  return new data;
}

void data::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool data::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
  return true;
#undef DO_
}

void data::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* data::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int data::ByteSize() const {
  int total_size = 0;
  
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

void data::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const data* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const data*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void data::MergeFrom(const data& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void data::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void data::CopyFrom(const data& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool data::IsInitialized() const {
  
  return true;
}

void data::Swap(data* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata data::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = data_descriptor_;
  metadata.reflection = data_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace season

// @@protoc_insertion_point(global_scope)