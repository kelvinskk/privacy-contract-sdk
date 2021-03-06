// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FooLite.proto

#include "FooLite.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace multiproto {
class FooDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Foo>
      _instance;
} _Foo_default_instance_;
}  // namespace multiproto
namespace protobuf_FooLite_2eproto {
void InitDefaultsFooImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::multiproto::_Foo_default_instance_;
    new (ptr) ::multiproto::Foo();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::multiproto::Foo::InitAsDefaultInstance();
}

void InitDefaultsFoo() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsFooImpl);
}

}  // namespace protobuf_FooLite_2eproto
namespace multiproto {

// ===================================================================

void Foo::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Foo::kI32FieldNumber;
const int Foo::kFFieldNumber;
const int Foo::kSFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Foo::Foo()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_FooLite_2eproto::InitDefaultsFoo();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:multiproto.Foo)
}
Foo::Foo(const Foo& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  s_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.s().size() > 0) {
    s_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.s_);
  }
  ::memcpy(&i32_, &from.i32_,
    static_cast<size_t>(reinterpret_cast<char*>(&f_) -
    reinterpret_cast<char*>(&i32_)) + sizeof(f_));
  // @@protoc_insertion_point(copy_constructor:multiproto.Foo)
}

void Foo::SharedCtor() {
  s_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&i32_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&f_) -
      reinterpret_cast<char*>(&i32_)) + sizeof(f_));
  _cached_size_ = 0;
}

Foo::~Foo() {
  // @@protoc_insertion_point(destructor:multiproto.Foo)
  SharedDtor();
}

void Foo::SharedDtor() {
  s_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Foo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Foo& Foo::default_instance() {
  ::protobuf_FooLite_2eproto::InitDefaultsFoo();
  return *internal_default_instance();
}

Foo* Foo::New(::google::protobuf::Arena* arena) const {
  Foo* n = new Foo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Foo::Clear() {
// @@protoc_insertion_point(message_clear_start:multiproto.Foo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  s_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&i32_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&f_) -
      reinterpret_cast<char*>(&i32_)) + sizeof(f_));
  _internal_metadata_.Clear();
}

bool Foo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:multiproto.Foo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 i32 = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &i32_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float f = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &f_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string s = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_s()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->s().data(), static_cast<int>(this->s().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "multiproto.Foo.s"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:multiproto.Foo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:multiproto.Foo)
  return false;
#undef DO_
}

void Foo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:multiproto.Foo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 i32 = 1;
  if (this->i32() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->i32(), output);
  }

  // float f = 2;
  if (this->f() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->f(), output);
  }

  // string s = 3;
  if (this->s().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->s().data(), static_cast<int>(this->s().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "multiproto.Foo.s");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->s(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:multiproto.Foo)
}

size_t Foo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:multiproto.Foo)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // string s = 3;
  if (this->s().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->s());
  }

  // int32 i32 = 1;
  if (this->i32() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->i32());
  }

  // float f = 2;
  if (this->f() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Foo::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Foo*>(&from));
}

void Foo::MergeFrom(const Foo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:multiproto.Foo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.s().size() > 0) {

    s_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.s_);
  }
  if (from.i32() != 0) {
    set_i32(from.i32());
  }
  if (from.f() != 0) {
    set_f(from.f());
  }
}

void Foo::CopyFrom(const Foo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:multiproto.Foo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Foo::IsInitialized() const {
  return true;
}

void Foo::Swap(Foo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Foo::InternalSwap(Foo* other) {
  using std::swap;
  s_.Swap(&other->s_);
  swap(i32_, other->i32_);
  swap(f_, other->f_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string Foo::GetTypeName() const {
  return "multiproto.Foo";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace multiproto

// @@protoc_insertion_point(global_scope)
