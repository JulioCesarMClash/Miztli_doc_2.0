// Generated by gencpp from file bbros_bridge/RecognizedSpeech.msg
// DO NOT EDIT!


#ifndef BBROS_BRIDGE_MESSAGE_RECOGNIZEDSPEECH_H
#define BBROS_BRIDGE_MESSAGE_RECOGNIZEDSPEECH_H


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
struct RecognizedSpeech_
{
  typedef RecognizedSpeech_<ContainerAllocator> Type;

  RecognizedSpeech_()
    : hypothesis()
    , confidences()  {
    }
  RecognizedSpeech_(const ContainerAllocator& _alloc)
    : hypothesis(_alloc)
    , confidences(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _hypothesis_type;
  _hypothesis_type hypothesis;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _confidences_type;
  _confidences_type confidences;





  typedef boost::shared_ptr< ::bbros_bridge::RecognizedSpeech_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bbros_bridge::RecognizedSpeech_<ContainerAllocator> const> ConstPtr;

}; // struct RecognizedSpeech_

typedef ::bbros_bridge::RecognizedSpeech_<std::allocator<void> > RecognizedSpeech;

typedef boost::shared_ptr< ::bbros_bridge::RecognizedSpeech > RecognizedSpeechPtr;
typedef boost::shared_ptr< ::bbros_bridge::RecognizedSpeech const> RecognizedSpeechConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bbros_bridge::RecognizedSpeech_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bbros_bridge::RecognizedSpeech_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bbros_bridge::RecognizedSpeech_<ContainerAllocator1> & lhs, const ::bbros_bridge::RecognizedSpeech_<ContainerAllocator2> & rhs)
{
  return lhs.hypothesis == rhs.hypothesis &&
    lhs.confidences == rhs.confidences;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bbros_bridge::RecognizedSpeech_<ContainerAllocator1> & lhs, const ::bbros_bridge::RecognizedSpeech_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bbros_bridge

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::bbros_bridge::RecognizedSpeech_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bbros_bridge::RecognizedSpeech_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bbros_bridge::RecognizedSpeech_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bbros_bridge::RecognizedSpeech_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bbros_bridge::RecognizedSpeech_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bbros_bridge::RecognizedSpeech_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bbros_bridge::RecognizedSpeech_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b2cc166e4fd867bfc13e04afeee883be";
  }

  static const char* value(const ::bbros_bridge::RecognizedSpeech_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb2cc166e4fd867bfULL;
  static const uint64_t static_value2 = 0xc13e04afeee883beULL;
};

template<class ContainerAllocator>
struct DataType< ::bbros_bridge::RecognizedSpeech_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bbros_bridge/RecognizedSpeech";
  }

  static const char* value(const ::bbros_bridge::RecognizedSpeech_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bbros_bridge::RecognizedSpeech_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] hypothesis\n"
"float32[] confidences\n"
;
  }

  static const char* value(const ::bbros_bridge::RecognizedSpeech_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bbros_bridge::RecognizedSpeech_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.hypothesis);
      stream.next(m.confidences);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RecognizedSpeech_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bbros_bridge::RecognizedSpeech_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bbros_bridge::RecognizedSpeech_<ContainerAllocator>& v)
  {
    s << indent << "hypothesis[]" << std::endl;
    for (size_t i = 0; i < v.hypothesis.size(); ++i)
    {
      s << indent << "  hypothesis[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.hypothesis[i]);
    }
    s << indent << "confidences[]" << std::endl;
    for (size_t i = 0; i < v.confidences.size(); ++i)
    {
      s << indent << "  confidences[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.confidences[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // BBROS_BRIDGE_MESSAGE_RECOGNIZEDSPEECH_H
