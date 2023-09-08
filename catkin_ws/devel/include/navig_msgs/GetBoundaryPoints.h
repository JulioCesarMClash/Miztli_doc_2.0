// Generated by gencpp from file navig_msgs/GetBoundaryPoints.msg
// DO NOT EDIT!


#ifndef NAVIG_MSGS_MESSAGE_GETBOUNDARYPOINTS_H
#define NAVIG_MSGS_MESSAGE_GETBOUNDARYPOINTS_H

#include <ros/service_traits.h>


#include <navig_msgs/GetBoundaryPointsRequest.h>
#include <navig_msgs/GetBoundaryPointsResponse.h>


namespace navig_msgs
{

struct GetBoundaryPoints
{

typedef GetBoundaryPointsRequest Request;
typedef GetBoundaryPointsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetBoundaryPoints
} // namespace navig_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::navig_msgs::GetBoundaryPoints > {
  static const char* value()
  {
    return "02a9aa7e9edaf214676773e60b196734";
  }

  static const char* value(const ::navig_msgs::GetBoundaryPoints&) { return value(); }
};

template<>
struct DataType< ::navig_msgs::GetBoundaryPoints > {
  static const char* value()
  {
    return "navig_msgs/GetBoundaryPoints";
  }

  static const char* value(const ::navig_msgs::GetBoundaryPoints&) { return value(); }
};


// service_traits::MD5Sum< ::navig_msgs::GetBoundaryPointsRequest> should match
// service_traits::MD5Sum< ::navig_msgs::GetBoundaryPoints >
template<>
struct MD5Sum< ::navig_msgs::GetBoundaryPointsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::navig_msgs::GetBoundaryPoints >::value();
  }
  static const char* value(const ::navig_msgs::GetBoundaryPointsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::navig_msgs::GetBoundaryPointsRequest> should match
// service_traits::DataType< ::navig_msgs::GetBoundaryPoints >
template<>
struct DataType< ::navig_msgs::GetBoundaryPointsRequest>
{
  static const char* value()
  {
    return DataType< ::navig_msgs::GetBoundaryPoints >::value();
  }
  static const char* value(const ::navig_msgs::GetBoundaryPointsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::navig_msgs::GetBoundaryPointsResponse> should match
// service_traits::MD5Sum< ::navig_msgs::GetBoundaryPoints >
template<>
struct MD5Sum< ::navig_msgs::GetBoundaryPointsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::navig_msgs::GetBoundaryPoints >::value();
  }
  static const char* value(const ::navig_msgs::GetBoundaryPointsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::navig_msgs::GetBoundaryPointsResponse> should match
// service_traits::DataType< ::navig_msgs::GetBoundaryPoints >
template<>
struct DataType< ::navig_msgs::GetBoundaryPointsResponse>
{
  static const char* value()
  {
    return DataType< ::navig_msgs::GetBoundaryPoints >::value();
  }
  static const char* value(const ::navig_msgs::GetBoundaryPointsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NAVIG_MSGS_MESSAGE_GETBOUNDARYPOINTS_H