// Generated by gencpp from file bbros_bridge/mp_move_dist.msg
// DO NOT EDIT!


#ifndef BBROS_BRIDGE_MESSAGE_MP_MOVE_DIST_H
#define BBROS_BRIDGE_MESSAGE_MP_MOVE_DIST_H

#include <ros/service_traits.h>


#include <bbros_bridge/mp_move_distRequest.h>
#include <bbros_bridge/mp_move_distResponse.h>


namespace bbros_bridge
{

struct mp_move_dist
{

typedef mp_move_distRequest Request;
typedef mp_move_distResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct mp_move_dist
} // namespace bbros_bridge


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::bbros_bridge::mp_move_dist > {
  static const char* value()
  {
    return "6869a1d070e885a82e01cea5e86d2372";
  }

  static const char* value(const ::bbros_bridge::mp_move_dist&) { return value(); }
};

template<>
struct DataType< ::bbros_bridge::mp_move_dist > {
  static const char* value()
  {
    return "bbros_bridge/mp_move_dist";
  }

  static const char* value(const ::bbros_bridge::mp_move_dist&) { return value(); }
};


// service_traits::MD5Sum< ::bbros_bridge::mp_move_distRequest> should match
// service_traits::MD5Sum< ::bbros_bridge::mp_move_dist >
template<>
struct MD5Sum< ::bbros_bridge::mp_move_distRequest>
{
  static const char* value()
  {
    return MD5Sum< ::bbros_bridge::mp_move_dist >::value();
  }
  static const char* value(const ::bbros_bridge::mp_move_distRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::bbros_bridge::mp_move_distRequest> should match
// service_traits::DataType< ::bbros_bridge::mp_move_dist >
template<>
struct DataType< ::bbros_bridge::mp_move_distRequest>
{
  static const char* value()
  {
    return DataType< ::bbros_bridge::mp_move_dist >::value();
  }
  static const char* value(const ::bbros_bridge::mp_move_distRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::bbros_bridge::mp_move_distResponse> should match
// service_traits::MD5Sum< ::bbros_bridge::mp_move_dist >
template<>
struct MD5Sum< ::bbros_bridge::mp_move_distResponse>
{
  static const char* value()
  {
    return MD5Sum< ::bbros_bridge::mp_move_dist >::value();
  }
  static const char* value(const ::bbros_bridge::mp_move_distResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::bbros_bridge::mp_move_distResponse> should match
// service_traits::DataType< ::bbros_bridge::mp_move_dist >
template<>
struct DataType< ::bbros_bridge::mp_move_distResponse>
{
  static const char* value()
  {
    return DataType< ::bbros_bridge::mp_move_dist >::value();
  }
  static const char* value(const ::bbros_bridge::mp_move_distResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BBROS_BRIDGE_MESSAGE_MP_MOVE_DIST_H
