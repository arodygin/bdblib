// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: month.proto

#ifndef PROTOBUF_month_2eproto__INCLUDED
#define PROTOBUF_month_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace month {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_month_2eproto();
void protobuf_AssignDesc_month_2eproto();
void protobuf_ShutdownFile_month_2eproto();

class key;
class data;
class season_ix;
class days_ix;
class ordnum_ix;

// ===================================================================

class key : public ::google::protobuf::Message {
 public:
  key();
  virtual ~key();
  
  key(const key& from);
  
  inline key& operator=(const key& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const key& default_instance();
  
  void Swap(key* other);
  
  // implements Message ----------------------------------------------
  
  key* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const key& from);
  void MergeFrom(const key& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string month = 1;
  inline bool has_month() const;
  inline void clear_month();
  static const int kMonthFieldNumber = 1;
  inline const ::std::string& month() const;
  inline void set_month(const ::std::string& value);
  inline void set_month(const char* value);
  inline void set_month(const char* value, size_t size);
  inline ::std::string* mutable_month();
  inline ::std::string* release_month();
  
  // @@protoc_insertion_point(class_scope:month.key)
 private:
  inline void set_has_month();
  inline void clear_has_month();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* month_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_month_2eproto();
  friend void protobuf_AssignDesc_month_2eproto();
  friend void protobuf_ShutdownFile_month_2eproto();
  
  void InitAsDefaultInstance();
  static key* default_instance_;
};
// -------------------------------------------------------------------

class data : public ::google::protobuf::Message {
 public:
  data();
  virtual ~data();
  
  data(const data& from);
  
  inline data& operator=(const data& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const data& default_instance();
  
  void Swap(data* other);
  
  // implements Message ----------------------------------------------
  
  data* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const data& from);
  void MergeFrom(const data& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string season = 1;
  inline bool has_season() const;
  inline void clear_season();
  static const int kSeasonFieldNumber = 1;
  inline const ::std::string& season() const;
  inline void set_season(const ::std::string& value);
  inline void set_season(const char* value);
  inline void set_season(const char* value, size_t size);
  inline ::std::string* mutable_season();
  inline ::std::string* release_season();
  
  // required int32 days = 2;
  inline bool has_days() const;
  inline void clear_days();
  static const int kDaysFieldNumber = 2;
  inline ::google::protobuf::int32 days() const;
  inline void set_days(::google::protobuf::int32 value);
  
  // required int64 ordnum = 3;
  inline bool has_ordnum() const;
  inline void clear_ordnum();
  static const int kOrdnumFieldNumber = 3;
  inline ::google::protobuf::int64 ordnum() const;
  inline void set_ordnum(::google::protobuf::int64 value);
  
  // @@protoc_insertion_point(class_scope:month.data)
 private:
  inline void set_has_season();
  inline void clear_has_season();
  inline void set_has_days();
  inline void clear_has_days();
  inline void set_has_ordnum();
  inline void clear_has_ordnum();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* season_;
  ::google::protobuf::int64 ordnum_;
  ::google::protobuf::int32 days_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_month_2eproto();
  friend void protobuf_AssignDesc_month_2eproto();
  friend void protobuf_ShutdownFile_month_2eproto();
  
  void InitAsDefaultInstance();
  static data* default_instance_;
};
// -------------------------------------------------------------------

class season_ix : public ::google::protobuf::Message {
 public:
  season_ix();
  virtual ~season_ix();
  
  season_ix(const season_ix& from);
  
  inline season_ix& operator=(const season_ix& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const season_ix& default_instance();
  
  void Swap(season_ix* other);
  
  // implements Message ----------------------------------------------
  
  season_ix* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const season_ix& from);
  void MergeFrom(const season_ix& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string season = 1;
  inline bool has_season() const;
  inline void clear_season();
  static const int kSeasonFieldNumber = 1;
  inline const ::std::string& season() const;
  inline void set_season(const ::std::string& value);
  inline void set_season(const char* value);
  inline void set_season(const char* value, size_t size);
  inline ::std::string* mutable_season();
  inline ::std::string* release_season();
  
  // @@protoc_insertion_point(class_scope:month.season_ix)
 private:
  inline void set_has_season();
  inline void clear_has_season();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* season_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_month_2eproto();
  friend void protobuf_AssignDesc_month_2eproto();
  friend void protobuf_ShutdownFile_month_2eproto();
  
  void InitAsDefaultInstance();
  static season_ix* default_instance_;
};
// -------------------------------------------------------------------

class days_ix : public ::google::protobuf::Message {
 public:
  days_ix();
  virtual ~days_ix();
  
  days_ix(const days_ix& from);
  
  inline days_ix& operator=(const days_ix& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const days_ix& default_instance();
  
  void Swap(days_ix* other);
  
  // implements Message ----------------------------------------------
  
  days_ix* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const days_ix& from);
  void MergeFrom(const days_ix& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int32 days = 1;
  inline bool has_days() const;
  inline void clear_days();
  static const int kDaysFieldNumber = 1;
  inline ::google::protobuf::int32 days() const;
  inline void set_days(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:month.days_ix)
 private:
  inline void set_has_days();
  inline void clear_has_days();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 days_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_month_2eproto();
  friend void protobuf_AssignDesc_month_2eproto();
  friend void protobuf_ShutdownFile_month_2eproto();
  
  void InitAsDefaultInstance();
  static days_ix* default_instance_;
};
// -------------------------------------------------------------------

class ordnum_ix : public ::google::protobuf::Message {
 public:
  ordnum_ix();
  virtual ~ordnum_ix();
  
  ordnum_ix(const ordnum_ix& from);
  
  inline ordnum_ix& operator=(const ordnum_ix& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ordnum_ix& default_instance();
  
  void Swap(ordnum_ix* other);
  
  // implements Message ----------------------------------------------
  
  ordnum_ix* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ordnum_ix& from);
  void MergeFrom(const ordnum_ix& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int64 ordnum = 1;
  inline bool has_ordnum() const;
  inline void clear_ordnum();
  static const int kOrdnumFieldNumber = 1;
  inline ::google::protobuf::int64 ordnum() const;
  inline void set_ordnum(::google::protobuf::int64 value);
  
  // @@protoc_insertion_point(class_scope:month.ordnum_ix)
 private:
  inline void set_has_ordnum();
  inline void clear_has_ordnum();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int64 ordnum_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_month_2eproto();
  friend void protobuf_AssignDesc_month_2eproto();
  friend void protobuf_ShutdownFile_month_2eproto();
  
  void InitAsDefaultInstance();
  static ordnum_ix* default_instance_;
};
// ===================================================================


// ===================================================================

// key

// required string month = 1;
inline bool key::has_month() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void key::set_has_month() {
  _has_bits_[0] |= 0x00000001u;
}
inline void key::clear_has_month() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void key::clear_month() {
  if (month_ != &::google::protobuf::internal::kEmptyString) {
    month_->clear();
  }
  clear_has_month();
}
inline const ::std::string& key::month() const {
  return *month_;
}
inline void key::set_month(const ::std::string& value) {
  set_has_month();
  if (month_ == &::google::protobuf::internal::kEmptyString) {
    month_ = new ::std::string;
  }
  month_->assign(value);
}
inline void key::set_month(const char* value) {
  set_has_month();
  if (month_ == &::google::protobuf::internal::kEmptyString) {
    month_ = new ::std::string;
  }
  month_->assign(value);
}
inline void key::set_month(const char* value, size_t size) {
  set_has_month();
  if (month_ == &::google::protobuf::internal::kEmptyString) {
    month_ = new ::std::string;
  }
  month_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* key::mutable_month() {
  set_has_month();
  if (month_ == &::google::protobuf::internal::kEmptyString) {
    month_ = new ::std::string;
  }
  return month_;
}
inline ::std::string* key::release_month() {
  clear_has_month();
  if (month_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = month_;
    month_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// data

// required string season = 1;
inline bool data::has_season() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void data::set_has_season() {
  _has_bits_[0] |= 0x00000001u;
}
inline void data::clear_has_season() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void data::clear_season() {
  if (season_ != &::google::protobuf::internal::kEmptyString) {
    season_->clear();
  }
  clear_has_season();
}
inline const ::std::string& data::season() const {
  return *season_;
}
inline void data::set_season(const ::std::string& value) {
  set_has_season();
  if (season_ == &::google::protobuf::internal::kEmptyString) {
    season_ = new ::std::string;
  }
  season_->assign(value);
}
inline void data::set_season(const char* value) {
  set_has_season();
  if (season_ == &::google::protobuf::internal::kEmptyString) {
    season_ = new ::std::string;
  }
  season_->assign(value);
}
inline void data::set_season(const char* value, size_t size) {
  set_has_season();
  if (season_ == &::google::protobuf::internal::kEmptyString) {
    season_ = new ::std::string;
  }
  season_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* data::mutable_season() {
  set_has_season();
  if (season_ == &::google::protobuf::internal::kEmptyString) {
    season_ = new ::std::string;
  }
  return season_;
}
inline ::std::string* data::release_season() {
  clear_has_season();
  if (season_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = season_;
    season_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required int32 days = 2;
inline bool data::has_days() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void data::set_has_days() {
  _has_bits_[0] |= 0x00000002u;
}
inline void data::clear_has_days() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void data::clear_days() {
  days_ = 0;
  clear_has_days();
}
inline ::google::protobuf::int32 data::days() const {
  return days_;
}
inline void data::set_days(::google::protobuf::int32 value) {
  set_has_days();
  days_ = value;
}

// required int64 ordnum = 3;
inline bool data::has_ordnum() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void data::set_has_ordnum() {
  _has_bits_[0] |= 0x00000004u;
}
inline void data::clear_has_ordnum() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void data::clear_ordnum() {
  ordnum_ = GOOGLE_LONGLONG(0);
  clear_has_ordnum();
}
inline ::google::protobuf::int64 data::ordnum() const {
  return ordnum_;
}
inline void data::set_ordnum(::google::protobuf::int64 value) {
  set_has_ordnum();
  ordnum_ = value;
}

// -------------------------------------------------------------------

// season_ix

// required string season = 1;
inline bool season_ix::has_season() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void season_ix::set_has_season() {
  _has_bits_[0] |= 0x00000001u;
}
inline void season_ix::clear_has_season() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void season_ix::clear_season() {
  if (season_ != &::google::protobuf::internal::kEmptyString) {
    season_->clear();
  }
  clear_has_season();
}
inline const ::std::string& season_ix::season() const {
  return *season_;
}
inline void season_ix::set_season(const ::std::string& value) {
  set_has_season();
  if (season_ == &::google::protobuf::internal::kEmptyString) {
    season_ = new ::std::string;
  }
  season_->assign(value);
}
inline void season_ix::set_season(const char* value) {
  set_has_season();
  if (season_ == &::google::protobuf::internal::kEmptyString) {
    season_ = new ::std::string;
  }
  season_->assign(value);
}
inline void season_ix::set_season(const char* value, size_t size) {
  set_has_season();
  if (season_ == &::google::protobuf::internal::kEmptyString) {
    season_ = new ::std::string;
  }
  season_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* season_ix::mutable_season() {
  set_has_season();
  if (season_ == &::google::protobuf::internal::kEmptyString) {
    season_ = new ::std::string;
  }
  return season_;
}
inline ::std::string* season_ix::release_season() {
  clear_has_season();
  if (season_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = season_;
    season_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// days_ix

// required int32 days = 1;
inline bool days_ix::has_days() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void days_ix::set_has_days() {
  _has_bits_[0] |= 0x00000001u;
}
inline void days_ix::clear_has_days() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void days_ix::clear_days() {
  days_ = 0;
  clear_has_days();
}
inline ::google::protobuf::int32 days_ix::days() const {
  return days_;
}
inline void days_ix::set_days(::google::protobuf::int32 value) {
  set_has_days();
  days_ = value;
}

// -------------------------------------------------------------------

// ordnum_ix

// required int64 ordnum = 1;
inline bool ordnum_ix::has_ordnum() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ordnum_ix::set_has_ordnum() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ordnum_ix::clear_has_ordnum() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ordnum_ix::clear_ordnum() {
  ordnum_ = GOOGLE_LONGLONG(0);
  clear_has_ordnum();
}
inline ::google::protobuf::int64 ordnum_ix::ordnum() const {
  return ordnum_;
}
inline void ordnum_ix::set_ordnum(::google::protobuf::int64 value) {
  set_has_ordnum();
  ordnum_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace month

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_month_2eproto__INCLUDED
