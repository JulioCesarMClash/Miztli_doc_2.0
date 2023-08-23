// Generated by gencpp from file bbros_bridge/hd_lookatResponse.msg
// DO NOT EDIT!


#ifndef BBROS_BRIDGE_MESSAGE_HD_LOOKATRESPONSE_H
#define BBROS_BRIDGE_MESSAGE_HD_LOOKATRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Float32.h>
#include <std_msgs/Float32.h>
#include <std_msgs/String.h>

namespace bbros_bridge
{
template <class ContainerAllocator>
struct hd_lookatResponse_
{
  typedef hd_lookatResponse_<ContainerAllocator> Type;

  hd_lookatResponse_()
    : currentPan()
    , currentTilt()
    , errors()  {
    }
  hd_lookatResponse_(const ContainerAllocator& _alloc)
    : currentPan(_alloc)
    , currentTilt(_alloc)
    , errors(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Float32_<ContainerAllocator>  _currentPan_type;
  _currentPan_type currentPan;

   typedef  ::std_msgs::Float32_<ContainerAllocator>  _currentTilt_type;
  _currentTilt_type currentTilt;

   typedef  ::std_msgs::String_<ContainerAllocator>  _errors_type;
  _errors_type errors;





  typedef boost::shared_ptr< ::bbros_bridge::hd_lookatResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bbros_bridge::hd_lookatResponse_<ContainerAllocator> const> ConstPtr;

}; // struct hd_lookatResponse_

typedef ::bbros_bridge::hd_lookatResponse_<std::allocator<void> > hd_lookatResponse;

typedef boost::shared_ptr< ::bbros_bridge::hd_lookatResponse > hd_lookatResponsePtr;
typedef boost::shared_ptr< ::bbros_bridge::hd_lookatResponse const> hd_lookatResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bbros_bridge::hd_lookatResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bbros_bridge::hd_lookatResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bbros_bridge::hd_lookatResponse_<ContainerAllocator1> & lhs, const ::bbros_bridge::hd_lookatResponse_<ContainerAllocator2> & rhs)
{
  return lhs.currentPan == rhs.currentPan &&
    lhs.currentTilt == rhs.currentTilt &&
    lhs.errors == rhs.errors;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bbros_bridge::hd_lookatResponse_<ContainerAllocator1> & lhs, const ::bbros_bridge::hd_lookatResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bbros_bridge

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::bbros_bridge::hd_lookatResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bbros_bridge::hd_lookatResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bbros_bridge::hd_lookatResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bbros_bridge::hd_lookatResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bbros_bridge::hd_lookatResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bbros_bridge::hd_lookatResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bbros_bridge::hd_lookatResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8a4d1a02761c4dadc5f5b2b059a7e3dc";
  }

  static const char* value(const ::bbros_bridge::hd_lookatResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8a4d1a02761c4dadULL;
  static const uint64_t static_value2 = 0xc5f5b2b059a7e3dcULL;
};

template<class ContainerAllocator>
struct DataType< ::bbros_bridge::hd_lookatResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bbros_bridge/hd_lookatResponse";
  }

  static const char* value(const ::bbros_bridge::hd_lookatResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bbros_bridge::hd_lookatResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Float32 currentPan\n"
"std_msgs/Float32 currentTilt\n"
"std_msgs/String errors\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Float32\n"
"float32 data\n"
"================================================================================\n"
"MSG: std_msgs/String\n"
"string data\n"
;
  }

  static const char* value(const ::bbros_bridge::hd_lookatResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bbros_bridge::hd_lookatResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.currentPan);
      stream.next(m.currentTilt);
      stream.next(m.errors);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct hd_lookatResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bbros_bridge::hd_lookatResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bbros_bridge::hd_lookatResponse_<ContainerAllocator>& v)
  {
    s << indent << "currentPan: ";
    s << std::endl;
    Printer< ::std_msgs::Float32_<ContainerAllocator> >::stream(s, indent + "  ", v.currentPan);
    s << indent << "currentTilt: ";
    s << std::endl;
    Printer< ::std_msgs::Float32_<ContainerAllocator> >::stream(s, indent + "  ", v.currentTilt);
    s << indent << "errors: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.errors);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BBROS_BRIDGE_MESSAGE_HD_LOOKATRESPONSE_H
