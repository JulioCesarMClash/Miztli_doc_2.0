// Generated by gencpp from file bbros_bridge/mp_getclose_xyaRequest.msg
// DO NOT EDIT!


#ifndef BBROS_BRIDGE_MESSAGE_MP_GETCLOSE_XYAREQUEST_H
#define BBROS_BRIDGE_MESSAGE_MP_GETCLOSE_XYAREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Float32.h>
#include <std_msgs/Float32.h>
#include <std_msgs/Float32.h>

namespace bbros_bridge
{
template <class ContainerAllocator>
struct mp_getclose_xyaRequest_
{
  typedef mp_getclose_xyaRequest_<ContainerAllocator> Type;

  mp_getclose_xyaRequest_()
    : goalX()
    , goalY()
    , goalAngle()  {
    }
  mp_getclose_xyaRequest_(const ContainerAllocator& _alloc)
    : goalX(_alloc)
    , goalY(_alloc)
    , goalAngle(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Float32_<ContainerAllocator>  _goalX_type;
  _goalX_type goalX;

   typedef  ::std_msgs::Float32_<ContainerAllocator>  _goalY_type;
  _goalY_type goalY;

   typedef  ::std_msgs::Float32_<ContainerAllocator>  _goalAngle_type;
  _goalAngle_type goalAngle;





  typedef boost::shared_ptr< ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator> const> ConstPtr;

}; // struct mp_getclose_xyaRequest_

typedef ::bbros_bridge::mp_getclose_xyaRequest_<std::allocator<void> > mp_getclose_xyaRequest;

typedef boost::shared_ptr< ::bbros_bridge::mp_getclose_xyaRequest > mp_getclose_xyaRequestPtr;
typedef boost::shared_ptr< ::bbros_bridge::mp_getclose_xyaRequest const> mp_getclose_xyaRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator1> & lhs, const ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator2> & rhs)
{
  return lhs.goalX == rhs.goalX &&
    lhs.goalY == rhs.goalY &&
    lhs.goalAngle == rhs.goalAngle;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator1> & lhs, const ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bbros_bridge

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "178acf5a67ca3d651e2b78e01e55f45b";
  }

  static const char* value(const ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x178acf5a67ca3d65ULL;
  static const uint64_t static_value2 = 0x1e2b78e01e55f45bULL;
};

template<class ContainerAllocator>
struct DataType< ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bbros_bridge/mp_getclose_xyaRequest";
  }

  static const char* value(const ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Float32 goalX\n"
"std_msgs/Float32 goalY\n"
"std_msgs/Float32 goalAngle\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Float32\n"
"float32 data\n"
;
  }

  static const char* value(const ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.goalX);
      stream.next(m.goalY);
      stream.next(m.goalAngle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mp_getclose_xyaRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bbros_bridge::mp_getclose_xyaRequest_<ContainerAllocator>& v)
  {
    s << indent << "goalX: ";
    s << std::endl;
    Printer< ::std_msgs::Float32_<ContainerAllocator> >::stream(s, indent + "  ", v.goalX);
    s << indent << "goalY: ";
    s << std::endl;
    Printer< ::std_msgs::Float32_<ContainerAllocator> >::stream(s, indent + "  ", v.goalY);
    s << indent << "goalAngle: ";
    s << std::endl;
    Printer< ::std_msgs::Float32_<ContainerAllocator> >::stream(s, indent + "  ", v.goalAngle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BBROS_BRIDGE_MESSAGE_MP_GETCLOSE_XYAREQUEST_H
