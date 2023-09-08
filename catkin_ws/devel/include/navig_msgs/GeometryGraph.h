// Generated by gencpp from file navig_msgs/GeometryGraph.msg
// DO NOT EDIT!


#ifndef NAVIG_MSGS_MESSAGE_GEOMETRYGRAPH_H
#define NAVIG_MSGS_MESSAGE_GEOMETRYGRAPH_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>
#include <navig_msgs/Edges.h>

namespace navig_msgs
{
template <class ContainerAllocator>
struct GeometryGraph_
{
  typedef GeometryGraph_<ContainerAllocator> Type;

  GeometryGraph_()
    : header()
    , nodes()
    , edges()  {
    }
  GeometryGraph_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , nodes(_alloc)
    , edges(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Point_<ContainerAllocator> >> _nodes_type;
  _nodes_type nodes;

   typedef std::vector< ::navig_msgs::Edges_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::navig_msgs::Edges_<ContainerAllocator> >> _edges_type;
  _edges_type edges;





  typedef boost::shared_ptr< ::navig_msgs::GeometryGraph_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::navig_msgs::GeometryGraph_<ContainerAllocator> const> ConstPtr;

}; // struct GeometryGraph_

typedef ::navig_msgs::GeometryGraph_<std::allocator<void> > GeometryGraph;

typedef boost::shared_ptr< ::navig_msgs::GeometryGraph > GeometryGraphPtr;
typedef boost::shared_ptr< ::navig_msgs::GeometryGraph const> GeometryGraphConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::navig_msgs::GeometryGraph_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::navig_msgs::GeometryGraph_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::navig_msgs::GeometryGraph_<ContainerAllocator1> & lhs, const ::navig_msgs::GeometryGraph_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.nodes == rhs.nodes &&
    lhs.edges == rhs.edges;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::navig_msgs::GeometryGraph_<ContainerAllocator1> & lhs, const ::navig_msgs::GeometryGraph_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace navig_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::navig_msgs::GeometryGraph_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::navig_msgs::GeometryGraph_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::navig_msgs::GeometryGraph_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::navig_msgs::GeometryGraph_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::navig_msgs::GeometryGraph_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::navig_msgs::GeometryGraph_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::navig_msgs::GeometryGraph_<ContainerAllocator> >
{
  static const char* value()
  {
    return "78739617daca94d38915923795eada2d";
  }

  static const char* value(const ::navig_msgs::GeometryGraph_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x78739617daca94d3ULL;
  static const uint64_t static_value2 = 0x8915923795eada2dULL;
};

template<class ContainerAllocator>
struct DataType< ::navig_msgs::GeometryGraph_<ContainerAllocator> >
{
  static const char* value()
  {
    return "navig_msgs/GeometryGraph";
  }

  static const char* value(const ::navig_msgs::GeometryGraph_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::navig_msgs::GeometryGraph_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A reference coordinate frame and timestamp\n"
"std_msgs/Header header\n"
"\n"
"# 3D spacial graph\n"
"geometry_msgs/Point[] nodes\n"
"\n"
"# This vector should be the same length as nodes, above, and represents all the connecting nodes\n"
"Edges[] edges\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: navig_msgs/Edges\n"
"#base-zero index of all the verticies this particular vertice connects to (edges)\n"
"uint32[] node_ids\n"
"\n"
"# optional cost/weight of each edge. if vector is empty assume all weights are equal (1)\n"
"float64[] weights\n"
;
  }

  static const char* value(const ::navig_msgs::GeometryGraph_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::navig_msgs::GeometryGraph_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.nodes);
      stream.next(m.edges);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GeometryGraph_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::navig_msgs::GeometryGraph_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::navig_msgs::GeometryGraph_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "nodes[]" << std::endl;
    for (size_t i = 0; i < v.nodes.size(); ++i)
    {
      s << indent << "  nodes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.nodes[i]);
    }
    s << indent << "edges[]" << std::endl;
    for (size_t i = 0; i < v.edges.size(); ++i)
    {
      s << indent << "  edges[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::navig_msgs::Edges_<ContainerAllocator> >::stream(s, indent + "    ", v.edges[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAVIG_MSGS_MESSAGE_GEOMETRYGRAPH_H