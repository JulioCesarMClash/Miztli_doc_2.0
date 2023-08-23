// Generated by gencpp from file bbros_bridge/Default_BB_ROS_BridgeRequest.msg
// DO NOT EDIT!


#ifndef BBROS_BRIDGE_MESSAGE_DEFAULT_BB_ROS_BRIDGEREQUEST_H
#define BBROS_BRIDGE_MESSAGE_DEFAULT_BB_ROS_BRIDGEREQUEST_H


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
struct Default_BB_ROS_BridgeRequest_
{
  typedef Default_BB_ROS_BridgeRequest_<ContainerAllocator> Type;

  Default_BB_ROS_BridgeRequest_()
    : params()  {
    }
  Default_BB_ROS_BridgeRequest_(const ContainerAllocator& _alloc)
    : params(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _params_type;
  _params_type params;





  typedef boost::shared_ptr< ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct Default_BB_ROS_BridgeRequest_

typedef ::bbros_bridge::Default_BB_ROS_BridgeRequest_<std::allocator<void> > Default_BB_ROS_BridgeRequest;

typedef boost::shared_ptr< ::bbros_bridge::Default_BB_ROS_BridgeRequest > Default_BB_ROS_BridgeRequestPtr;
typedef boost::shared_ptr< ::bbros_bridge::Default_BB_ROS_BridgeRequest const> Default_BB_ROS_BridgeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator1> & lhs, const ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator2> & rhs)
{
  return lhs.params == rhs.params;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator1> & lhs, const ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bbros_bridge

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1d24bfbf0259585a9214528cc5c5211d";
  }

  static const char* value(const ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1d24bfbf0259585aULL;
  static const uint64_t static_value2 = 0x9214528cc5c5211dULL;
};

template<class ContainerAllocator>
struct DataType< ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bbros_bridge/Default_BB_ROS_BridgeRequest";
  }

  static const char* value(const ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string params\n"
;
  }

  static const char* value(const ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.params);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Default_BB_ROS_BridgeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bbros_bridge::Default_BB_ROS_BridgeRequest_<ContainerAllocator>& v)
  {
    s << indent << "params: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.params);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BBROS_BRIDGE_MESSAGE_DEFAULT_BB_ROS_BRIDGEREQUEST_H
