// Generated by gencpp from file bbros_bridge/Default_BB_ROS_BridgeResponse.msg
// DO NOT EDIT!


#ifndef BBROS_BRIDGE_MESSAGE_DEFAULT_BB_ROS_BRIDGERESPONSE_H
#define BBROS_BRIDGE_MESSAGE_DEFAULT_BB_ROS_BRIDGERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace bbros_bridge
{
template <class ContainerAllocator>
struct Default_BB_ROS_BridgeResponse_
{
  typedef Default_BB_ROS_BridgeResponse_<ContainerAllocator> Type;

  Default_BB_ROS_BridgeResponse_()
    : response()  {
    }
  Default_BB_ROS_BridgeResponse_(const ContainerAllocator& _alloc)
    : response(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _response_type;
  _response_type response;





  typedef boost::shared_ptr< ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct Default_BB_ROS_BridgeResponse_

typedef ::bbros_bridge::Default_BB_ROS_BridgeResponse_<std::allocator<void> > Default_BB_ROS_BridgeResponse;

typedef boost::shared_ptr< ::bbros_bridge::Default_BB_ROS_BridgeResponse > Default_BB_ROS_BridgeResponsePtr;
typedef boost::shared_ptr< ::bbros_bridge::Default_BB_ROS_BridgeResponse const> Default_BB_ROS_BridgeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator1> & lhs, const ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator2> & rhs)
{
  return lhs.response == rhs.response;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator1> & lhs, const ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bbros_bridge

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6de314e2dc76fbff2b6244a6ad70b68d";
  }

  static const char* value(const ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6de314e2dc76fbffULL;
  static const uint64_t static_value2 = 0x2b6244a6ad70b68dULL;
};

template<class ContainerAllocator>
struct DataType< ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bbros_bridge/Default_BB_ROS_BridgeResponse";
  }

  static const char* value(const ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string response\n"
"\n"
;
  }

  static const char* value(const ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.response);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Default_BB_ROS_BridgeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bbros_bridge::Default_BB_ROS_BridgeResponse_<ContainerAllocator>& v)
  {
    s << indent << "response: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.response);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BBROS_BRIDGE_MESSAGE_DEFAULT_BB_ROS_BRIDGERESPONSE_H
