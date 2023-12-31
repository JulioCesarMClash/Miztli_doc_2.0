// Generated by gencpp from file bbros_bridge/mp_move_dist_angleResponse.msg
// DO NOT EDIT!


#ifndef BBROS_BRIDGE_MESSAGE_MP_MOVE_DIST_ANGLERESPONSE_H
#define BBROS_BRIDGE_MESSAGE_MP_MOVE_DIST_ANGLERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Float32.h>
#include <std_msgs/Float32.h>

namespace bbros_bridge
{
template <class ContainerAllocator>
struct mp_move_dist_angleResponse_
{
  typedef mp_move_dist_angleResponse_<ContainerAllocator> Type;

  mp_move_dist_angleResponse_()
    : traveledBearing()
    , traveledDistance()  {
    }
  mp_move_dist_angleResponse_(const ContainerAllocator& _alloc)
    : traveledBearing(_alloc)
    , traveledDistance(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Float32_<ContainerAllocator>  _traveledBearing_type;
  _traveledBearing_type traveledBearing;

   typedef  ::std_msgs::Float32_<ContainerAllocator>  _traveledDistance_type;
  _traveledDistance_type traveledDistance;





  typedef boost::shared_ptr< ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator> const> ConstPtr;

}; // struct mp_move_dist_angleResponse_

typedef ::bbros_bridge::mp_move_dist_angleResponse_<std::allocator<void> > mp_move_dist_angleResponse;

typedef boost::shared_ptr< ::bbros_bridge::mp_move_dist_angleResponse > mp_move_dist_angleResponsePtr;
typedef boost::shared_ptr< ::bbros_bridge::mp_move_dist_angleResponse const> mp_move_dist_angleResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator1> & lhs, const ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator2> & rhs)
{
  return lhs.traveledBearing == rhs.traveledBearing &&
    lhs.traveledDistance == rhs.traveledDistance;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator1> & lhs, const ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bbros_bridge

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "48d862723389a90b005451cb408b5a44";
  }

  static const char* value(const ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x48d862723389a90bULL;
  static const uint64_t static_value2 = 0x005451cb408b5a44ULL;
};

template<class ContainerAllocator>
struct DataType< ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bbros_bridge/mp_move_dist_angleResponse";
  }

  static const char* value(const ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Float32 traveledBearing\n"
"std_msgs/Float32 traveledDistance\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Float32\n"
"float32 data\n"
;
  }

  static const char* value(const ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.traveledBearing);
      stream.next(m.traveledDistance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mp_move_dist_angleResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bbros_bridge::mp_move_dist_angleResponse_<ContainerAllocator>& v)
  {
    s << indent << "traveledBearing: ";
    s << std::endl;
    Printer< ::std_msgs::Float32_<ContainerAllocator> >::stream(s, indent + "  ", v.traveledBearing);
    s << indent << "traveledDistance: ";
    s << std::endl;
    Printer< ::std_msgs::Float32_<ContainerAllocator> >::stream(s, indent + "  ", v.traveledDistance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BBROS_BRIDGE_MESSAGE_MP_MOVE_DIST_ANGLERESPONSE_H
