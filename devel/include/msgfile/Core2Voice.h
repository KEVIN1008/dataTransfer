// Generated by gencpp from file msgfile/Core2Voice.msg
// DO NOT EDIT!


#ifndef MSGFILE_MESSAGE_CORE2VOICE_H
#define MSGFILE_MESSAGE_CORE2VOICE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace msgfile
{
template <class ContainerAllocator>
struct Core2Voice_
{
  typedef Core2Voice_<ContainerAllocator> Type;

  Core2Voice_()
    : header()
    , cmd()
    , name()
    , gender()
    , age(0)  {
    }
  Core2Voice_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , cmd(_alloc)
    , name(_alloc)
    , gender(_alloc)
    , age(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _cmd_type;
  _cmd_type cmd;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _gender_type;
  _gender_type gender;

   typedef uint16_t _age_type;
  _age_type age;





  typedef boost::shared_ptr< ::msgfile::Core2Voice_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msgfile::Core2Voice_<ContainerAllocator> const> ConstPtr;

}; // struct Core2Voice_

typedef ::msgfile::Core2Voice_<std::allocator<void> > Core2Voice;

typedef boost::shared_ptr< ::msgfile::Core2Voice > Core2VoicePtr;
typedef boost::shared_ptr< ::msgfile::Core2Voice const> Core2VoiceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msgfile::Core2Voice_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msgfile::Core2Voice_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace msgfile

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'msgfile': ['/home/kevin/catkin_ws/src/msgfile/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::msgfile::Core2Voice_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msgfile::Core2Voice_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msgfile::Core2Voice_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msgfile::Core2Voice_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msgfile::Core2Voice_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msgfile::Core2Voice_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msgfile::Core2Voice_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c1551c43ce95816519cdce6766a6a75b";
  }

  static const char* value(const ::msgfile::Core2Voice_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc1551c43ce958165ULL;
  static const uint64_t static_value2 = 0x19cdce6766a6a75bULL;
};

template<class ContainerAllocator>
struct DataType< ::msgfile::Core2Voice_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msgfile/Core2Voice";
  }

  static const char* value(const ::msgfile::Core2Voice_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msgfile::Core2Voice_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header \n\
string cmd\n\
string name\n\
string gender\n\
uint16 age\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::msgfile::Core2Voice_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msgfile::Core2Voice_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.cmd);
      stream.next(m.name);
      stream.next(m.gender);
      stream.next(m.age);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Core2Voice_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msgfile::Core2Voice_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msgfile::Core2Voice_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "cmd: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.cmd);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "gender: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.gender);
    s << indent << "age: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.age);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSGFILE_MESSAGE_CORE2VOICE_H