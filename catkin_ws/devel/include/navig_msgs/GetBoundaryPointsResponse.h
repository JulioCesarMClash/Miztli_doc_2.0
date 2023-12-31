// Generated by gencpp from file navig_msgs/GetBoundaryPointsResponse.msg
// DO NOT EDIT!


#ifndef NAVIG_MSGS_MESSAGE_GETBOUNDARYPOINTSRESPONSE_H
#define NAVIG_MSGS_MESSAGE_GETBOUNDARYPOINTSRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace navig_msgs
{
template <class ContainerAllocator>
struct GetBoundaryPointsResponse_
{
  typedef GetBoundaryPointsResponse_<ContainerAllocator> Type;

  GetBoundaryPointsResponse_()
    : points()  {
    }
  GetBoundaryPointsResponse_(const ContainerAllocator& _alloc)
    : points(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Point_<ContainerAllocator> >> _points_type;
  _points_type points;





  typedef boost::shared_ptr< ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetBoundaryPointsResponse_

typedef ::navig_msgs::GetBoundaryPointsResponse_<std::allocator<void> > GetBoundaryPointsResponse;

typedef boost::shared_ptr< ::navig_msgs::GetBoundaryPointsResponse > GetBoundaryPointsResponsePtr;
typedef boost::shared_ptr< ::navig_msgs::GetBoundaryPointsResponse const> GetBoundaryPointsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator1> & lhs, const ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.points == rhs.points;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator1> & lhs, const ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace navig_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3fb3f9dacc279b964c4c8341122c34df";
  }

  static const char* value(const ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3fb3f9dacc279b96ULL;
  static const uint64_t static_value2 = 0x4c4c8341122c34dfULL;
};

template<class ContainerAllocator>
struct DataType< ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "navig_msgs/GetBoundaryPointsResponse";
  }

  static const char* value(const ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point[] points\n"
"\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetBoundaryPointsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::navig_msgs::GetBoundaryPointsResponse_<ContainerAllocator>& v)
  {
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAVIG_MSGS_MESSAGE_GETBOUNDARYPOINTSRESPONSE_H
