// Generated by gencpp from file bbros_bridge/mp_getclose_xyaResponse.msg
// DO NOT EDIT!


#ifndef BBROS_BRIDGE_MESSAGE_MP_GETCLOSE_XYARESPONSE_H
#define BBROS_BRIDGE_MESSAGE_MP_GETCLOSE_XYARESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/String.h>

namespace bbros_bridge
{
template <class ContainerAllocator>
struct mp_getclose_xyaResponse_
{
  typedef mp_getclose_xyaResponse_<ContainerAllocator> Type;

  mp_getclose_xyaResponse_()
    : error()  {
    }
  mp_getclose_xyaResponse_(const ContainerAllocator& _alloc)
    : error(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::String_<ContainerAllocator>  _error_type;
  _error_type error;





  typedef boost::shared_ptr< ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator> const> ConstPtr;

}; // struct mp_getclose_xyaResponse_

typedef ::bbros_bridge::mp_getclose_xyaResponse_<std::allocator<void> > mp_getclose_xyaResponse;

typedef boost::shared_ptr< ::bbros_bridge::mp_getclose_xyaResponse > mp_getclose_xyaResponsePtr;
typedef boost::shared_ptr< ::bbros_bridge::mp_getclose_xyaResponse const> mp_getclose_xyaResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator1> & lhs, const ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator2> & rhs)
{
  return lhs.error == rhs.error;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator1> & lhs, const ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bbros_bridge

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "52f61832eab3a7c7b495ac0b338dd373";
  }

  static const char* value(const ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x52f61832eab3a7c7ULL;
  static const uint64_t static_value2 = 0xb495ac0b338dd373ULL;
};

template<class ContainerAllocator>
struct DataType< ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bbros_bridge/mp_getclose_xyaResponse";
  }

  static const char* value(const ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/String error\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/String\n"
"string data\n"
;
  }

  static const char* value(const ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mp_getclose_xyaResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bbros_bridge::mp_getclose_xyaResponse_<ContainerAllocator>& v)
  {
    s << indent << "error: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BBROS_BRIDGE_MESSAGE_MP_GETCLOSE_XYARESPONSE_H
