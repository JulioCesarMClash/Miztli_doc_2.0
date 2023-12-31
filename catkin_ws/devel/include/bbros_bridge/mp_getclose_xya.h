// Generated by gencpp from file bbros_bridge/mp_getclose_xya.msg
// DO NOT EDIT!


#ifndef BBROS_BRIDGE_MESSAGE_MP_GETCLOSE_XYA_H
#define BBROS_BRIDGE_MESSAGE_MP_GETCLOSE_XYA_H

#include <ros/service_traits.h>


#include <bbros_bridge/mp_getclose_xyaRequest.h>
#include <bbros_bridge/mp_getclose_xyaResponse.h>


namespace bbros_bridge
{

struct mp_getclose_xya
{

typedef mp_getclose_xyaRequest Request;
typedef mp_getclose_xyaResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct mp_getclose_xya
} // namespace bbros_bridge


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::bbros_bridge::mp_getclose_xya > {
  static const char* value()
  {
    return "f236a8bf2a517b8af728eb19291f51cb";
  }

  static const char* value(const ::bbros_bridge::mp_getclose_xya&) { return value(); }
};

template<>
struct DataType< ::bbros_bridge::mp_getclose_xya > {
  static const char* value()
  {
    return "bbros_bridge/mp_getclose_xya";
  }

  static const char* value(const ::bbros_bridge::mp_getclose_xya&) { return value(); }
};


// service_traits::MD5Sum< ::bbros_bridge::mp_getclose_xyaRequest> should match
// service_traits::MD5Sum< ::bbros_bridge::mp_getclose_xya >
template<>
struct MD5Sum< ::bbros_bridge::mp_getclose_xyaRequest>
{
  static const char* value()
  {
    return MD5Sum< ::bbros_bridge::mp_getclose_xya >::value();
  }
  static const char* value(const ::bbros_bridge::mp_getclose_xyaRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::bbros_bridge::mp_getclose_xyaRequest> should match
// service_traits::DataType< ::bbros_bridge::mp_getclose_xya >
template<>
struct DataType< ::bbros_bridge::mp_getclose_xyaRequest>
{
  static const char* value()
  {
    return DataType< ::bbros_bridge::mp_getclose_xya >::value();
  }
  static const char* value(const ::bbros_bridge::mp_getclose_xyaRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::bbros_bridge::mp_getclose_xyaResponse> should match
// service_traits::MD5Sum< ::bbros_bridge::mp_getclose_xya >
template<>
struct MD5Sum< ::bbros_bridge::mp_getclose_xyaResponse>
{
  static const char* value()
  {
    return MD5Sum< ::bbros_bridge::mp_getclose_xya >::value();
  }
  static const char* value(const ::bbros_bridge::mp_getclose_xyaResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::bbros_bridge::mp_getclose_xyaResponse> should match
// service_traits::DataType< ::bbros_bridge::mp_getclose_xya >
template<>
struct DataType< ::bbros_bridge::mp_getclose_xyaResponse>
{
  static const char* value()
  {
    return DataType< ::bbros_bridge::mp_getclose_xya >::value();
  }
  static const char* value(const ::bbros_bridge::mp_getclose_xyaResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BBROS_BRIDGE_MESSAGE_MP_GETCLOSE_XYA_H
